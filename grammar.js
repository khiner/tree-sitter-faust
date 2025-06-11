const PREC = {
  // Function
  ACCESS: 31,
  FUNCTION_CALL: 30,
  UNARY: 29,
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
  extras: $ => [$.comment, /\s/, /\\\r?\n/],
  rules: {
    program: $ => repeat(choice($.comment, $._statement)),

    _statement: $ => choice($.file_import, $._definition, $._metadata_definition, $.documentation),

    _definition: $ => seq(choice($.definition, $.function_definition), ';'),
    definition: $ => seq(optional($.variants), field('variable', $.identifier), '=', field('value', $._expression)),
    function_definition: $ =>
      seq(optional($.variants), field('name', $.identifier), '(', $.arguments, ')', '=', field('value', $._expression)),

    _metadata_definition: $ => seq(choice($.global_metadata, $.function_metadata), ';'),
    global_metadata: $ => seq('declare', field('key', $.identifier), field('value', $.string)),
    function_metadata: $ => seq('declare', field('function_name', $.identifier), field('key', $.identifier), field('value', $.string)),

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

    // Unary numbers
    unary_number: $ => prec(PREC.UNARY, seq(
      field('operator', choice('-', '+')),
      field('operand', $._number)
    )),

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
    access: $ => prec(PREC.ACCESS, seq(field('environment', $._infix_expression), '.', field('definition', $.identifier))),

    /*** Primitives ***/

    _primitive: $ =>
      choice(
        $._number,
        $.unary_number,
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
        $.identifier,
        seq('(', $._expression, ')'),
        seq('environment', $.environment),
        $.lambda,
        $.iteration,
        $.modulation,
        $.pattern,
        $.ffunction,
        $.fconst,
        $.fvariable,
        $.component,
        $.library,
        $.waveform,
        $.route,
        $.button,
        $.checkbox,
        $.numeric_widget, // vslider, hslider, nentry
        $.bargraph, // vbargraph, hbargraph
        $.group, // vgroup, hgroup, tgroup
        $.soundfile,
        $.inputs,
        $.outputs
      ),

    lambda: $ => seq('\\', '(', $.parameters, ')', '.', '(', field('value', $._expression), ')'),

    modulation: $ => seq('[', $.modulators, '->', field('expression', $._expression), ']'),
    modulators: $ => sepBy(',', $.modulator),
    modulator: $ => choice(field('name', $.string), seq(field('name', $.string), ':', field('value', $._argument))),

    parameters: $ => sepBy(',', $.identifier),
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

    with_environment: $ => prec.left(seq(field('expression', $._expression), 'with', field('local_environment', $.environment))),
    environment: $ => seq('{', repeat($._statement), '}'),

    letrec_environment: $ => prec.left(seq(field('expression', $._expression), 'letrec', field('local_environment', $.rec_environment))),
    rec_environment: $ => seq('{', repeat($.recinition), optional(seq('where', repeat($._definition))), '}'),
    recinition: $ => seq(seq("'", field('name', $.identifier)), '=', field('expression', $._expression), ';'),

    substitution: $ => seq(field('expression', $._infix_expression), $.substitutions),
    substitutions: $ => seq('[', repeat($._definition), ']'),

    /* Foreign functions/variables */
    ffunction: $ => seq('ffunction', '(', $.signature, ',', $._include_file, ',', field('library_file', $.string), ')'),
    fconst: $ => seq('fconstant', '(', $._type, field('name', $.identifier), ',', $._include_file, ')'),
    fvariable: $ => seq('fvariable', '(', $._type, field('name', $.identifier), ',', $._include_file, ')'),

    signature: $ => seq($._type, $.function_names, '(', optional($.parameter_types), ')'),
    parameter_types: $ => sepBy(',', choice($.int_type, $.float_type, $.any_type)),
    _include_file: $ => field('include_file', choice($.fstring, $.string)),
    function_names: $ =>
      seq(
        $._function_name,
        optional(seq('|', $._function_name)),
        optional(seq('|', $._function_name)),
        optional(seq('|', $._function_name))
      ),
    _function_name: $ => alias($.identifier, $.function_name),
    _type: $ => field('type', choice($.int_type, $.float_type)),

    waveform: $ => seq('waveform', '{', $.values, '}'),
    values: $ => sepBy(',', $._number),

    route: $ =>
      seq(
        'route',
        '(',
        field('num_inputs', $._argument),
        ',',
        field('num_outputs', $._argument),
        optional(seq(',', field('expression', $._expression))),
        ')'
      ),

    button: $ => seq('button', '(', field('label', $.string), ')'),
    checkbox: $ => seq('checkbox', '(', field('label', $.string), ')'),
    numeric_widget: $ =>
      seq(
        field('type', choice($.vslider_type, $.hslider_type, $.nentry_type)),
        '(',
        field('label', $.string),
        ',',
        field('init', $._argument),
        ',',
        field('min', $._argument),
        ',',
        field('max', $._argument),
        ',',
        field('step', $._argument),
        ')'
      ),
    bargraph: $ =>
      seq(
        field('type', choice($.vbargraph_type, $.hbargraph_type)),
        '(',
        field('label', $.string),
        ',',
        field('min', $._argument),
        ',',
        field('max', $._argument),
        ')'
      ),
    group: $ =>
      seq(
        field('type', choice($.vgroup_type, $.hgroup_type, $.tgroup_type)),
        '(',
        field('label', $.string),
        ',',
        field('expression', $._expression),
        ')'
      ),
    soundfile: $ => seq('soundfile', '(', field('filename', $.string), ',', field('num_channels', $._argument), ')'),

    // finputs         : INPUTS LPAR expression RPAR { $$ = boxInputs($3); }
    //         ;
    // foutputs        : OUTPUTS LPAR expression RPAR { $$ = boxOutputs($3); }
    //         ;
    inputs: $ => seq('inputs', '(', field('expression', $._expression), ')'),
    outputs: $ => seq('outputs', '(', field('expression', $._expression), ')'),

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
        // Math
        'exp',
        'log',
        'log10',
        'sqrt',
        'abs',
        'floor',
        'ceil',
        'rint',
        'round',
        // Trig
        'cos',
        'sin',
        'tan',
        'acos',
        'asin',
        'atan',
        // Type casting
        'int',
        'float',

        'lowest',
        'highest'
      ),
    // (Non-infix) binary primitive
    _prim2: $ =>
      choice(
        // Math
        'pow',
        'min',
        'max',
        'fmod',
        'remainder',
        // Trig
        'atan2',
        // Special
        'prefix',
        'attach',
        'enable',
        'control'
      ),
    _prim3: $ => choice('rdtable', 'select2', 'assertbounds'),
    _prim4: $ => choice('select3'),
    _prim5: $ => choice('rwtable'),

    /** Modifiers **/
    _modifier: $ => choice($.one_sample_delay),
    one_sample_delay: _ => prec(PREC.UNARY, "'"),

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

    /* Other primitives */
    wire: _ => '_',
    cut: _ => '!',
    mem: _ => 'mem',

    component: $ => seq('component', '(', field('filename', $.string), ')'),
    library: $ => seq('library', '(', field('filename', $.string), ')'),

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
    _doc_content: $ => choice($._doc_char, $.doc_metadata, $.doc_equation, $.doc_diagram, $.doc_listing, $.doc_notice),
    doc_metadata: $ => seq('<metadata>', repeat($._doc_char), '</metadata>'),
    doc_equation: $ => seq('<equation>', repeat($._doc_char), '</equation>'),
    doc_diagram: $ => seq('<diagram>', repeat($._doc_char), '</diagram>'),
    doc_listing: $ => seq('<listing', repeat($.doc_attribute), '/>'),
    doc_notice: _ => seq('<notice', '/>'),
    doc_attribute: $ => seq(alias($._doc_attribute_key, $.key), '=', alias($._doc_attribute_value, $.value)),

    _binary_composition: $ => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: define_binary_comp('~', PREC.RECURSIVE, 'left', $ => $._expression),
    sequential: define_binary_comp(':', PREC.SEQ, 'right', $ => $._expression),
    split: define_binary_comp('<:', PREC.SPLIT, 'right', $ => $._expression),
    merge: define_binary_comp(choice(':>','+>'), PREC.MERGE, 'right', $ => $._expression),
    parallel: define_binary_comp(',', PREC.PAR, 'right', $ => $._expression),

    variants: $ => repeat1($._variant),
    _variant: $ => choice($.single_precision, $.double_precision, $.quad_precision, $.fixed_point_precision),
    single_precision: _ => 'singleprecision',
    double_precision: _ => 'doubleprecision',
    quad_precision: _ => 'quadprecision',
    fixed_point_precision: _ => 'fixedpointprecision',

    int_type: _ => 'int',
    float_type: _ => 'float',
    any_type: _ => 'any',

    vslider_type: _ => 'vslider',
    hslider_type: _ => 'hslider',
    nentry_type: _ => 'nentry',

    vbargraph_type: _ => 'vbargraph',
    hbargraph_type: _ => 'hbargraph',

    vgroup_type: _ => 'vgroup',
    hgroup_type: _ => 'hgroup',
    tgroup_type: _ => 'tgroup',

    string: _ => /"([^"\\]|\\.)*"/,
    fstring: _ => /<[a-zA-Z]*\.?[a-zA-Z]*>/,

    // todo Improve qualified identifiers, using a visible rule for 'qualified_identifier'
    //   See 'qualified_identifier' in https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js,
    //   and the test: https://github.com/tree-sitter/tree-sitter-cpp/blob/master/test/corpus/statements.txt#L409-L425
    identifier: $ => choice($._identifier, 'process', 'effect'),
    _identifier: $ => prec.right(seq(optional('::'), seq($._id, repeat(seq('::', $._id))))),
    negate_id: $ => seq('-', $.identifier),

    _id: _ => /_*[a-zA-Z][_a-zA-Z0-9]*/,

    _doc_char: _ => /[^<]+/,
    _doc_attribute_key: _ => /[^=\s]+/,
    _doc_attribute_value: _ => /"([^"]*)"/,

    comment: _ => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
