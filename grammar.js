const PREC = {
  ACCESS: 30,
  // Operators
  ONE_SAMPLE_DELAY: 25,
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
  // Expressions
  INFIX: 4,
  PREFIX: 4,
  EXPRESSION: 3,
  DEFINITION: 2,
  ENVIRONMENT: 1,
};

const sepBy = (sep, rule) => seq(rule, repeat(seq(sep, rule)));

const binaryComposition = (op, precedence, assoc, field_rule) => $ =>
  prec[assoc](precedence, seq(field('left', field_rule($)), op, field('right', field_rule($))));

const binaryOp = (symbol, precedence, operand_rule, assoc = 'left') =>
  prec[assoc](precedence, seq(field('left', operand_rule), field('operator', symbol), field('right', operand_rule)));

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

    _expression: $ => prec(PREC.EXPRESSION, choice($.with, $._binary_composition, $._infix_expression)),
    _infix_expression: $ => prec(PREC.EXPRESSION, choice($.infix, $.modifier, $.access, $.prefix, $._primitive)),

    infix: $ =>
      choice(
        binaryOp($.delay_op, PREC.DELAY, $._infix_expression),
        binaryOp($.exp_op, PREC.EXPONENTIATION, $._infix_expression),
        binaryOp(choice($.mult_op, $.div_op, $.mod_op), PREC.MULTIPLICATION, $._infix_expression),
        binaryOp(choice($.add_op, $.sub_op), PREC.ADDITION, $._infix_expression),
        binaryOp(choice($.and_op, $.xor_op, $.lshift_op, $.rshift_op), PREC.BITWISE, $._infix_expression),
        binaryOp($.or_op, PREC.BITWISE_OR, $._infix_expression),
        binaryOp(choice($.lt_op, $.le_op, $.gt_op, $.ge_op, $.eq_op, $.neq_op), PREC.COMPARISON, $._infix_expression)
      ),
    prefix: $ => prec(PREC.PREFIX, seq(field('operator', $._infix_expression), '(', field('operand', $._args), ')')),
    modifier: $ => prec(PREC.ACCESS, seq($._infix_expression, $._modifier_op)),

    access: $ => prec(PREC.ACCESS, seq(field('environment', $._infix_expression), '.', field('definition', $.identifier))),

    _primitive: $ =>
      choice(
        $._number,
        $.wire,
        $.cut,
        $.mem_op,
        $.prefix_op,
        $._op,
        seq(optional('-'), $.identifier),
        seq('(', $._expression, ')'),
        seq('\\', '(', $.parameters, ')', '.', '(', $._expression, ')'),
        $.iteration
      ),

    parameters: $ => sepBy(',', alias($.identifier, $.parameter)),

    _args: $ => sepBy(',', $._argument),
    _argument: $ => choice($.sequential_arg, $.split_arg, $.merge_arg, $.recursive_arg, $._infix_expression),
    // Binary compositions as arguments are restricted to non-parallel compositions to avoid ambiguity with commas.
    // Note: Can we allow parallel compositions in arguments when surrounded by parentheses?
    // This could be contributed to Faust.
    recursive_arg: binaryComposition('~', PREC.RECURSIVE, 'left', $ => $._argument),
    sequential_arg: binaryComposition(':', PREC.SEQ, 'right', $ => $._argument),
    split_arg: binaryComposition('<:', PREC.SPLIT, 'right', $ => $._argument),
    merge_arg: binaryComposition(':>', PREC.MERGE, 'right', $ => $._argument),

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

    with: $ =>
      prec.left(
        PREC.ENVIRONMENT,
        seq(field('expression', $._expression), 'with', '{', field('local_environment', optional($.environment)), '}')
      ),
    environment: $ => repeat1(seq(repeat($.variant), $._definition, ';')),

    _op: $ =>
      choice(
        $.add_op,
        $.sub_op,
        $.mult_op,
        $.div_op,
        $.mod_op,
        $.exp_op,
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
        $.delay_op,
        $.int_cast,
        $.float_cast
      ),
    _modifier_op: $ => choice($.one_sample_delay_op),

    wire: _ => '_',
    cut: _ => '!',

    /* Unary */
    mem_op: _ => 'mem',
    int_cast: _ => 'int',
    float_cast: _ => 'float',

    /* Binary */
    // Math
    add_op: _ => '+',
    sub_op: _ => '-',
    mult_op: _ => '*',
    div_op: _ => '/',
    mod_op: _ => '%',
    exp_op: _ => '^',
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
    // Delay
    delay_op: _ => '@',
    // Other
    prefix_op: _ => 'prefix',

    /* Modifiers */
    one_sample_delay_op: _ => prec(PREC.ONE_SAMPLE_DELAY, "'"),

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
    recursive: binaryComposition('~', PREC.RECURSIVE, 'left', $ => $._expression),
    sequential: binaryComposition(':', PREC.SEQ, 'right', $ => $._expression),
    split: binaryComposition('<:', PREC.SPLIT, 'right', $ => $._expression),
    merge: binaryComposition(':>', PREC.MERGE, 'right', $ => $._expression),
    parallel: binaryComposition(',', PREC.PAR, 'right', $ => $._expression),

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
