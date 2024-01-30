const PREC = {
  // Function
  ACCESS: 32,
  MODIFIER: 31,
  FUNCTION_CALL: 30,
  // Infix
  DELAY: 24,
  EXPONENTIATION: 23,
  MULTIPLICATION: 22,
  BITWISE: 22,
  BITWISE_OR: 21,
  ADDITION: 21,
  COMPARISON: 20,
  // Binary compositions
  RECURSIVE: 13,
  PAR: 12,
  SEQ: 11,
  SPLIT: 10,
  MERGE: 10,
  // Expression
  EXPRESSION: 3,
  DEFINITION: 2,
  ENVIRONMENT: 1,
};

const sepBy = (sep, rule) => seq(rule, repeat(seq(sep, rule)));

const define_binary_comp = (op, precedence, assoc, field_rule) => $ =>
  prec[assoc](precedence, seq(field('left', field_rule($)), op, field('right', field_rule($))));
const define_infix = ($, symbol, precedence, assoc = 'left') =>
  prec[assoc](precedence, seq(field('left', $._infix_expression), field('operator', symbol), field('right', $._infix_expression)));

// Can't be a regular rule because it matches the empty string.
const definitionList = $ => repeat(seq(repeat($.variant), $._definition, ';'));

const decimal = /[0-9]/;
const sign = optional(/[+-]/);

module.exports = grammar({
  name: 'faust',
  rules: {
    program: $ => repeat(choice($.comment, $._statement)),

    _statement: $ =>
      choice(
        seq(repeat($.variant), choice($.global_metadata, $.function_metadata, $.file_import, $.function_definition, $._definition), ';'),
        $.documentation
      ),

    _definition: $ => prec(PREC.DEFINITION, choice($.definition, $.function_definition)),
    definition: $ => seq(field('name', $.identifier), '=', field('value', $._expression)),
    function_definition: $ => seq(field('name', $.identifier), '(', $.parameters, ')', '=', field('value', $._expression)),

    _expression: $ => prec(PREC.EXPRESSION, choice($.with_environment, $.letrec_environment, $._binary_composition, $._infix_expression)),
    _infix_expression: $ =>
      prec(
        PREC.EXPRESSION,
        choice($.infix, $.prefix, $.partial, $.prim1, $.prim2, $.function_call, $.modifier, $.access, $.substitution, $._primitive)
      ),

    // **TODO**
    // - Rename `{...}_op` rules to `{...}`._

    infix: $ =>
      choice(
        define_infix($, $.delay_op, PREC.DELAY),
        define_infix($, $.pow_op, PREC.EXPONENTIATION),
        define_infix($, choice($.mult_op, $.div_op, $.mod_op), PREC.MULTIPLICATION),
        define_infix($, choice($.add_op, $.sub_op), PREC.ADDITION),
        define_infix($, choice($.and_op, $.xor_op, $.lshift_op, $.rshift_op), PREC.BITWISE),
        define_infix($, $.or_op, PREC.BITWISE_OR),
        define_infix($, choice($.lt_op, $.le_op, $.gt_op, $.ge_op, $.eq_op, $.neq_op), PREC.COMPARISON)
      ),
    // Binary function call on infix operator
    prefix: $ => prec(PREC.FUNCTION_CALL, seq(field('operator', $._infix_op), '(', field('left', $._argument), ',', field('right', $._argument), ')')),
    // Unary function call on infix operator
    partial: $ => prec(PREC.FUNCTION_CALL, seq(field('operator', $._infix_op), '(', field('operand', $._argument), ')')),
    // Unary function call on non-infix primitive
    prim1: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim1), '(', field('argument', $._argument), ')')),
    // Binary function call on non-infix primitive
    prim2: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim2), '(', $.arguments, ')')),
    // Arbitrary non-primitive function call
    function_call: $ => prec(PREC.FUNCTION_CALL, seq(field('callee', $._infix_expression), '(', $.arguments, ')')),
    modifier: $ => prec(PREC.ACCESS, seq(field('operand', $._infix_expression), field('operator', $._modifier_op))),

    access: $ => prec(PREC.ACCESS, seq(field('environment', $._infix_expression), '.', field('definition', $.identifier))),

    _primitive: $ =>
      choice(
        $._number,
        $.wire,
        $.cut,
        $.mem,
        $._infix_op,
        $._prim1,
        $._prim2,
        seq(optional('-'), $.identifier),
        seq('(', $._expression, ')'),
        seq('\\', '(', $.parameters, ')', '.', '(', $._expression, ')'),
        $.iteration,
        seq('environment', $.environment),
        $.component
      ),

    parameters: $ => sepBy(',', alias($.identifier, $.parameter)),
    arguments: $ => sepBy(',', $._argument),

    _args: $ => sepBy(',', $._argument),
    _argument: $ => choice($.sequential_arg, $.split_arg, $.merge_arg, $.recursive_arg, $._infix_expression),
    // Binary compositions as arguments are restricted to non-parallel compositions to avoid ambiguity with commas.
    // Note: Can we allow parallel compositions in arguments when surrounded by parentheses?
    // This could be contributed to Faust.
    recursive_arg: define_binary_comp('~', PREC.RECURSIVE, 'left', $ => $._argument),
    sequential_arg: define_binary_comp(':', PREC.SEQ, 'right', $ => $._argument),
    split_arg: define_binary_comp('<:', PREC.SPLIT, 'right', $ => $._argument),
    merge_arg: define_binary_comp(':>', PREC.MERGE, 'right', $ => $._argument),

    iteration: $ =>
      seq(
        field('type', choice($.par, $.seq, $.sum, $.prod)),
        '(',
        field('current_iter', $.identifier),
        ',',
        field('num_iters', $._argument),
        ',',
        field('expression', $._expression),
        ')'
      ),
    par: _ => 'par',
    seq: _ => 'seq',
    sum: _ => 'sum',
    prod: _ => 'prod',

    with_environment: $ =>
      prec.left(PREC.ENVIRONMENT, seq(field('expression', $._expression), 'with', field('local_environment', $.environment))),
    environment: $ => seq('{', definitionList($), '}'),

    letrec_environment: $ =>
      prec.left(PREC.ENVIRONMENT, seq(field('expression', $._expression), 'letrec', field('local_environment', $.rec_environment))),
    rec_environment: $ => seq('{', repeat($.recinition), optional(seq('where', definitionList($))), '}'),
    recinition: $ => seq(seq("'", field('name', $.identifier)), '=', field('expression', $._expression), ';'),

    substitution: $ => seq(field('expression', $._infix_expression), $.substitutions),
    substitutions: $ => seq('[', definitionList($), ']'),

    component: $ => seq('component', '(', $.string, ')'),

    // Infix operators are built-in binary primitives that can be used in infix notation.
    // https://faustdoc.grame.fr/manual/syntax/#infix-operators
    _infix_op: $ =>
      choice(
        $.add_op,
        $.sub_op,
        $.mult_op,
        $.div_op,
        $.mod_op,
        $.pow_op,
        $.or_op,
        $.and_op,
        $.xor_op,
        $.lshift_op,
        $.rshift_op,
        $.lt_op,
        $.le_op,
        $.gt_op,
        $.ge_op,
        $.eq_op,
        $.neq_op,
        $.delay_op
      ),

    // Unary primitive
    _prim1: $ =>
      choice(
        $.int_cast,
        $.float_cast,
        $.exp_op,
        $.log_op,
        $.log10_op,
        $.sqrt_op,
        $.abs_op,
        $.floor_op,
        $.ceil_op,
        $.rint_op,
        $.round_op,
        $.acos_op,
        $.asin_op,
        $.atan_op,
        $.cos_op,
        $.sin_op,
        $.tan_op
      ),
    // (Non-infix) binary primitive
    _prim2: $ =>
      choice($.pow_fun_op, $.min_op, $.max_op, $.fmod_op, $.remainder_op, $.atan2_op, $.prefix_op, $.attach_op, $.enable_op, $.control_op),
    _modifier_op: $ => choice($.one_sample_delay_op),

    /** Infix primitives **/
    // Math
    add_op: _ => '+',
    sub_op: _ => '-',
    mult_op: _ => '*',
    div_op: _ => '/',
    mod_op: _ => '%',
    pow_op: _ => '^',
    // Bitwise
    or_op: _ => '|',
    and_op: _ => '&',
    xor_op: _ => 'xor',
    lshift_op: _ => '<<',
    rshift_op: _ => '>>',
    // Comparison
    lt_op: _ => '<',
    le_op: _ => '<=',
    gt_op: _ => '>',
    ge_op: _ => '>=',
    eq_op: _ => '==',
    neq_op: _ => '!=',

    /** Non-infix primitives */

    /* Unary */
    // Math
    exp_op: _ => 'exp',
    log_op: _ => 'log',
    log10_op: _ => 'log10',
    sqrt_op: _ => 'sqrt',
    abs_op: _ => 'abs',
    floor_op: _ => 'floor',
    ceil_op: _ => 'ceil',
    rint_op: _ => 'rint',
    round_op: _ => 'round',
    // Trig
    acos_op: _ => 'acos',
    asin_op: _ => 'asin',
    atan_op: _ => 'atan',
    cos_op: _ => 'cos',
    sin_op: _ => 'sin',
    tan_op: _ => 'tan',
    // Type casting
    int_cast: _ => 'int',
    float_cast: _ => 'float',

    /* Binary */
    // Math
    pow_fun_op: _ => 'pow',
    min_op: _ => 'min',
    max_op: _ => 'max',
    fmod_op: _ => 'fmod',
    remainder_op: _ => 'remainder',
    // Trig
    atan2_op: _ => 'atan2',
    // Special
    delay_op: _ => '@',
    prefix_op: _ => 'prefix',
    attach_op: _ => 'attach',
    enable_op: _ => 'enable',
    control_op: _ => 'control',

    /* Modifiers */
    one_sample_delay_op: _ => prec(PREC.MODIFIER, "'"),

    /* Primitives */
    wire: _ => '_',
    cut: _ => '!',
    mem: _ => 'mem',

    _number: $ => choice($.int, $.real),
    int: _ => token(seq(sign, repeat1(decimal))),
    real: _ => {
      const real_literal = choice(seq(repeat1(decimal), '.', repeat(decimal)), seq(repeat(decimal), '.', repeat1(decimal)));
      return token(
        seq(
          sign,
          choice(
            seq(real_literal, optional('f')), //
            seq(choice(repeat1(decimal), real_literal), 'e', sign, repeat1(decimal), optional('f'))
          )
        )
      );
    },

    documentation: $ => seq('<mdoc>', repeat($._doc_content), '</mdoc>'),
    _doc_content: $ => choice($._doc_char, $._special_doc_tag),
    _doc_char: _ => /[^<]+/,
    _special_doc_tag: $ =>
      choice('<notice/>', '<notice />', '<equation>', '</equation>', '<diagram>', '</diagram>', '<metadata>', '</metadata>', '<listing'),

    file_import: $ => seq('import', '(', $.string, ')'),

    global_metadata: $ => seq('declare', field('key', $.identifier), field('value', $.string)),
    function_metadata: $ => seq('declare', field('function_name', $.identifier), field('key', $.identifier), field('value', $.string)),

    _binary_composition: $ => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: define_binary_comp('~', PREC.RECURSIVE, 'left', $ => $._expression),
    sequential: define_binary_comp(':', PREC.SEQ, 'right', $ => $._expression),
    split: define_binary_comp('<:', PREC.SPLIT, 'right', $ => $._expression),
    merge: define_binary_comp(':>', PREC.MERGE, 'right', $ => $._expression),
    parallel: define_binary_comp(',', PREC.PAR, 'right', $ => $._expression),

    variant: _ => choice('singleprecision', 'doubleprecision', 'quadprecision', 'fixedpointprecision'),

    string: _ => /"([^"\\]|\\.)*"/,

    // todo Improve qualified identifiers, using a visible rule for 'qualified_identifier'
    //   See 'qualified_identifier' in https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js,
    //   and the test: https://github.com/tree-sitter/tree-sitter-cpp/blob/master/test/corpus/statements.txt#L409-L425
    identifier: $ => prec.right(seq(optional('::'), seq($._id, repeat(seq('::', $._id))))),
    _id: _ => /_*[a-zA-Z][_a-zA-Z0-9]*/,

    comment: _ => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
