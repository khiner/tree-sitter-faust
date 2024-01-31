const PREC = {
  // Function
  ACCESS: 31,
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
};

const sepBy = (sep, rule) => seq(rule, repeat(seq(sep, rule)));

const define_binary_comp = (op, precedence, assoc, field_rule) => $ =>
  prec[assoc](precedence, seq(field('left', field_rule($)), op, field('right', field_rule($))));
const define_infix = ($, symbol, precedence, assoc = 'left') =>
  prec[assoc](precedence, seq(field('left', $._infix_expression), field('operator', symbol), field('right', $._infix_expression)));

const decimal = /[0-9]/;
const sign = optional(/[+-]/);

module.exports = grammar({
  name: 'faust',
  rules: {
    program: $ => repeat(choice($.comment, $._statement)),

    _statement: $ => choice($.file_import, $._definition, $._metadata_definition, $.documentation),

    _definition: $ => seq(choice($.definition, $.function_definition), ';'),
    definition: $ => seq(optional($.variants), field('name', $.id), '=', field('value', $._expression)),
    function_definition: $ => seq(optional($.variants), field('name', $.id), '(', $.parameters, ')', '=', field('value', $._expression)),

    _metadata_definition: $ => seq(choice($.global_metadata, $.function_metadata), ';'),
    global_metadata: $ => seq('declare', field('key', $.id), field('value', $.string)),
    function_metadata: $ => seq('declare', field('function_name', $.id), field('key', $.id), field('value', $.string)),

    file_import: $ => seq(optional($.variants), 'import', '(', field('filename', $.string), ')', ';'),

    _expression: $ => choice($.with_environment, $.letrec_environment, $._binary_composition, $._infix_expression),
    _infix_expression: $ =>
      choice(
        $.infix,
        $.prefix,
        $.partial,
        $.prim1,
        $.prim2,
        $.prim3,
        $.prim4,
        $.prim5,
        $.function_call,
        $.modifier,
        $.access,
        $.substitution,
        $._primitive
      ),

    infix: $ =>
      choice(
        define_infix($, $.delay, PREC.DELAY),
        define_infix($, $.pow, PREC.EXPONENTIATION),
        define_infix($, choice($.mult, $.div, $.mod), PREC.MULTIPLICATION),
        define_infix($, choice($.add, $.sub), PREC.ADDITION),
        define_infix($, choice($.and, $.xor, $.lshift, $.rshift), PREC.BITWISE),
        define_infix($, $.or, PREC.BITWISE_OR),
        define_infix($, choice($.lt, $.le, $.gt, $.ge, $.eq, $.neq), PREC.COMPARISON)
      ),
    // Unary function call on an infix operator primitive
    partial: $ => prec(PREC.FUNCTION_CALL, seq(field('operator', $._infix), '(', field('operand', $._argument), ')')),
    // Binary function call on an infix operator primitive
    prefix: $ =>
      prec(PREC.FUNCTION_CALL, seq(field('operator', $._infix), '(', field('left', $._argument), ',', field('right', $._argument), ')')),

    /* Unary/binary/ternary/... function call on a non-infix primitive */
    prim1: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim1), '(', field('argument', $._argument), ')')),
    prim2: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim2), '(', $.arguments, ')')),
    prim3: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim3), '(', $.arguments, ')')),
    prim4: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim4), '(', $.arguments, ')')),
    prim5: $ => prec(PREC.FUNCTION_CALL, seq(field('primitive', $._prim5), '(', $.arguments, ')')),
    // Arbitrary non-primitive function call
    function_call: $ => prec(PREC.FUNCTION_CALL, seq(field('callee', $._infix_expression), '(', $.arguments, ')')),
    modifier: $ => prec(PREC.ACCESS, seq(field('operand', $._infix_expression), field('operator', $._modifier))),
    access: $ => prec(PREC.ACCESS, seq(field('environment', $._infix_expression), '.', field('definition', $.id))),

    /*** Primitives ***/

    _primitive: $ =>
      choice(
        $._number,
        $.wire,
        $.cut,
        $.mem,
        $._infix,
        $._prim1,
        $._prim2,
        $._prim3,
        $._prim4,
        $._prim5,
        $.negate_id,
        $.id,
        seq('(', $._expression, ')'),
        $.lambda,
        $.iteration,
        $.modulation,
        $.pattern,
        $.ffunction,
        $.fconst,
        $.fvariable,
        $.component,
        $.library,
        seq('environment', $.environment)
      ),

    lambda: $ => seq('\\', '(', $.parameters, ')', '.', '(', field('value', $._expression), ')'),

    modulation: $ => seq('[', $.modulators, '->', field('expression', $._expression), ']'),
    modulators: $ => sepBy(',', $.modulator),
    modulator: $ => choice(field('name', $.string), seq(field('name', $.string), ':', field('value', $._argument))),

    parameters: $ => sepBy(',', alias($.id, $.parameter)),
    arguments: $ => sepBy(',', $._argument),
    _args: $ => sepBy(',', $._argument),
    // Binary compositions _as arguments_ are restricted to non-parallel compositions,
    // I assume to avoid ambiguity with commas.
    // todo: Contributed to Faust: Allow parallel compositions in arguments when surrounded by parentheses?
    _argument: $ =>
      choice(
        alias($.sequential_arg, $.sequential),
        alias($.split_arg, $.split),
        alias($.merge_arg, $.merge),
        alias($.recursive_arg, $.recursive),
        $._infix_expression
      ),

    pattern: $ => seq('case', '{', $.rules, '}'),
    rules: $ => repeat1($.rule),
    rule: $ => seq('(', $.arguments, ')', '=>', field('expression', $._expression), ';'),

    recursive_arg: define_binary_comp('~', PREC.RECURSIVE, 'left', $ => $._argument),
    sequential_arg: define_binary_comp(':', PREC.SEQ, 'right', $ => $._argument),
    split_arg: define_binary_comp('<:', PREC.SPLIT, 'right', $ => $._argument),
    merge_arg: define_binary_comp(':>', PREC.MERGE, 'right', $ => $._argument),

    iteration: $ =>
      seq(
        field('type', choice($.par, $.seq, $.sum, $.prod)),
        '(',
        field('current_iter', $.id),
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

    with_environment: $ => prec.left(seq(field('expression', $._expression), 'with', field('local_environment', $.environment))),
    environment: $ => seq('{', repeat($._definition), '}'),

    letrec_environment: $ => prec.left(seq(field('expression', $._expression), 'letrec', field('local_environment', $.rec_environment))),
    rec_environment: $ => seq('{', repeat($.recinition), optional(seq('where', repeat($._definition))), '}'),
    recinition: $ => seq(seq("'", field('name', $.id)), '=', field('expression', $._expression), ';'),

    substitution: $ => seq(field('expression', $._infix_expression), $.substitutions),
    substitutions: $ => seq('[', repeat($._definition), ']'),

    /* Foreign functions/variables */
    ffunction: $ => seq('ffunction', '(', $.signature, ',', $._include_file, ',', field('library_file', $.string), ')'),
    fconst: $ => seq('fconstant', '(', $._type, field('name', $.id), ',', $._include_file, ')'),
    fvariable: $ => seq('fvariable', '(', $._type, field('name', $.id), ',', $._include_file, ')'),

    signature: $ => seq($._type, $.function_names, '(', optional($.parameter_types), ')'),
    parameter_types: $ => sepBy(',', choice(alias($.int_cast, $.int), alias($.float_cast, $.float), alias($.any_cast, $.any))),
    _include_file: $ => field('include_file', choice($.fstring, $.string)),
    function_names: $ =>
      seq($._func_name, optional(seq('|', $._func_name)), optional(seq('|', $._func_name)), optional(seq('|', $._func_name))),
    _func_name: $ => alias($.id, $.function_name),
    _type: $ => field('type', choice(alias($.int_cast, $.int), alias($.float_cast, $.float))),

    // Infix operators are built-in binary primitives that can be used in infix notation.
    // https://faustdoc.grame.fr/manual/syntax/#infix-operators
    _infix: $ =>
      choice(
        $.add,
        $.sub,
        $.mult,
        $.div,
        $.mod,
        $.pow,
        $.or,
        $.and,
        $.xor,
        $.lshift,
        $.rshift,
        $.lt,
        $.le,
        $.gt,
        $.ge,
        $.eq,
        $.neq,
        $.delay
      ),

    // Unary primitive
    _prim1: $ =>
      choice(
        $.exp,
        $.log,
        $.log10,
        $.sqrt,
        $.abs,
        $.floor,
        $.ceil,
        $.rint,
        $.round,
        $.acos,
        $.asin,
        $.atan,
        $.cos,
        $.sin,
        $.tan,

        $.int_cast,
        $.float_cast,

        $.lowest,
        $.highest
      ),
    // (Non-infix) binary primitive
    _prim2: $ => choice($.pow_fun, $.min, $.max, $.fmod, $.remainder, $.atan2, $.prefix_prim, $.attach, $.enable, $.control),
    _prim3: $ => choice($.rdtable, $.select2, $.assertbounds),
    _prim4: $ => choice($.select3),
    _prim5: $ => choice($.rwtable),

    /** Modifiers **/
    _modifier: $ => choice($.one_sample_delay),
    one_sample_delay: _ => prec(PREC.FUNCTION_CALL, "'"),

    /** Infix (binary) primitives **/
    // Math
    add: _ => '+',
    sub: _ => '-',
    mult: _ => '*',
    div: _ => '/',
    mod: _ => '%',
    pow: _ => '^',
    // Bitwise
    or: _ => '|',
    and: _ => '&',
    xor: _ => 'xor',
    lshift: _ => '<<',
    rshift: _ => '>>',
    // Comparison
    lt: _ => '<',
    le: _ => '<=',
    gt: _ => '>',
    ge: _ => '>=',
    eq: _ => '==',
    neq: _ => '!=',
    // Special
    delay: _ => '@',

    /** Non-infix primitives **/

    /* Unary */
    // Math
    exp: _ => 'exp',
    log: _ => 'log',
    log10: _ => 'log10',
    sqrt: _ => 'sqrt',
    abs: _ => 'abs',
    floor: _ => 'floor',
    ceil: _ => 'ceil',
    rint: _ => 'rint',
    round: _ => 'round',
    // Trig
    acos: _ => 'acos',
    asin: _ => 'asin',
    atan: _ => 'atan',
    cos: _ => 'cos',
    sin: _ => 'sin',
    tan: _ => 'tan',
    // Type casting
    int_cast: _ => 'int',
    float_cast: _ => 'float',
    any_cast: _ => 'any', // Only used in foreign function types.

    /* Binary */
    // Math
    pow_fun: _ => 'pow',
    min: _ => 'min',
    max: _ => 'max',
    fmod: _ => 'fmod',
    remainder: _ => 'remainder',
    // Trig
    atan2: _ => 'atan2',
    // Special
    prefix_prim: _ => 'prefix',
    attach: _ => 'attach',
    enable: _ => 'enable',
    control: _ => 'control',

    /* Other primitives */
    wire: _ => '_',
    cut: _ => '!',
    mem: _ => 'mem',

    component: $ => seq('component', '(', field('filename', $.string), ')'),
    library: $ => seq('library', '(', field('filename', $.string), ')'),

    rdtable: _ => 'rdtable',
    rwtable: _ => 'rwtable',
    select2: _ => 'select2',
    select3: _ => 'select3',

    // These primitives are not documented or used anywhere, but they are in the Faust Bison grammar.
    // They come from the [Adding Feature guide](https://github.com/grame-cncm/faust/blob/master-dev/adding-feature.md).
    lowest: _ => 'lowest', // prim1
    highest: _ => 'highest', // prim1
    assertbounds: _ => 'assertbounds', // prim3

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

    _binary_composition: $ => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: define_binary_comp('~', PREC.RECURSIVE, 'left', $ => $._expression),
    sequential: define_binary_comp(':', PREC.SEQ, 'right', $ => $._expression),
    split: define_binary_comp('<:', PREC.SPLIT, 'right', $ => $._expression),
    merge: define_binary_comp(':>', PREC.MERGE, 'right', $ => $._expression),
    parallel: define_binary_comp(',', PREC.PAR, 'right', $ => $._expression),

    variants: $ => repeat1($._variant),
    _variant: $ => choice($.single_precision, $.double_precision, $.quad_precision, $.fixed_point_precision),
    single_precision: _ => 'singleprecision',
    double_precision: _ => 'doubleprecision',
    quad_precision: _ => 'quadprecision',
    fixed_point_precision: _ => 'fixedpointprecision',

    string: _ => /"([^"\\]|\\.)*"/,
    fstring: _ => /<[a-zA-Z]*\.?[a-zA-Z]*>/,

    // todo Improve qualified identifiers, using a visible rule for 'qualified_identifier'
    //   See 'qualified_identifier' in https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js,
    //   and the test: https://github.com/tree-sitter/tree-sitter-cpp/blob/master/test/corpus/statements.txt#L409-L425
    id: $ => prec.right(seq(optional('::'), seq($._id, repeat(seq('::', $._id))))),
    negate_id: $ => seq('-', $.id),
    _id: _ => /_*[a-zA-Z][_a-zA-Z0-9]*/,

    comment: _ => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
