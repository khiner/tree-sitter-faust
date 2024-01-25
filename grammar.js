const PRECEDENCE = {
  FUNCTION_CALL: 1,
  EXPRESSION: 10,
  STRING: 2,
  BINARY_OP: 6,
  RECURSIVE: 1,
  PAR: 2,
  SEQ: 4,
  SPLIT: 4,
  MERGE: 4,
  CORE: 5,
};

const sepBy1 = (sep, rule) => seq(rule, repeat(seq(sep, rule)));
const sepBy2 = (sep, rule) => seq(rule, repeat1(seq(sep, rule)));
const sepBy = (sep, rule) => optional(sepBy1(sep, rule));

module.exports = grammar({
  name: 'faust',
  conflicts: ($) => [
    [$._binary_composition, $.binary_operation],
    [$.function_call, $.merge, $.split, $.parallel, $.sequential, $.recursive],
  ],
  rules: {
    source_file: ($) => repeat(choice($.comment, $._statement)),

    _statement: ($) =>
      choice(
        seq(optional(repeat1($.variant)), choice($.global_metadata, $.definition_metadata, $.file_import, $.definition), ';'),
        $.documentation
      ),

    variant: (_) => choice('singleprecision', 'doubleprecision', 'quadprecision', 'fixedpointprecision'),

    definition: ($) =>
      choice(
        seq(field('name', $.variable), '(', sepBy(',', alias($.identifier, $.parameter)), ')', '=', field('value', $._expression)),
        seq(field('name', $.variable), '=', field('value', $._expression))
      ),

    function_call: ($) =>
      prec(
        PRECEDENCE.FUNCTION_CALL,
        seq(optional(seq(alias($.identifier, $.module_name), '.')), alias($.identifier, $.function_name), '(', sepBy(',', $.argument), ')')
      ),

    argument: ($) => choice($._object, $.function_call),

    lambda_abstraction: ($) => seq(seq('\\', '(', sepBy(',', alias($.identifier, $.parameter)), ')', '.', '(', $._expression, ')')),

    _expression: ($) =>
      prec(
        PRECEDENCE.EXPRESSION,
        choice($.one_sample_delay, $._object, $._binary_composition, $.binary_operation, $.wire, $.cut, $.iteration, $.function_call)
      ),

    iteration: ($) =>
      seq(
        choice('par', 'seq', 'sum', 'prod'),
        alias($.identifier, $.current_iteration),
        ',',
        alias($._object, $.numiter),
        ',',
        $._expression
      ),
    wire: () => '_',
    cut: () => '!',

    binary_operation: ($) => prec(PRECEDENCE.BINARY_OP, choice($.infix, $.core, $.prefix, $.partial)),

    core: ($) =>
      prec(
        PRECEDENCE.CORE,
        choice(seq($._object, ',', $._object, ':', $.binary_operator), seq('(', $._object, ',', $._object, ')', ':', $.binary_operator))
      ),

    infix: ($) => seq($._object, $.binary_operator, $._object),
    prefix: ($) => seq($.binary_operator, '(', $._object, ',', $._object, ')'),
    partial: ($) => seq($.binary_operator, '(', $._object, ')'),

    one_sample_delay: ($) => seq($._object, repeat1($.one_sample_delay_operator)),
    one_sample_delay_operator: (_) => "'",

    binary_operator: (_) =>
      choice(
        // Math
        '+',
        '-',
        '*',
        '/',
        '%',
        '^',
        // Bitwise
        '|',
        '&',
        'xor',
        '<<',
        '>>',
        // Comparison
        '<',
        '<=',
        '>',
        '>=',
        '==',
        '!=',
        // Delay
        '@'
      ),

    // @TODO This should be in expression
    _object: ($) => choice($._number, $.variable, $.string),

    _number: ($) => choice($.int, $.real),
    int: (_) => {
      const decimal = /[0-9]/;
      const sign = optional(/[+-]/);
      const int_literal = repeat1(decimal);

      return token(seq(sign, int_literal));
    },
    real: (_) => {
      const decimal = /[0-9]/;
      const float_literal = choice(
        seq(repeat1(decimal), 'f'),
        seq(repeat(decimal), '.', repeat(decimal)),
        seq(repeat(decimal), '.', repeat(decimal), 'f'),
        seq(repeat(decimal), optional('.'), repeat(decimal), 'e', optional(/[+-]/), repeat1(decimal)),
        seq(repeat(decimal), optional('.'), repeat(decimal), 'e', optional(/[+-]/), repeat1(decimal), 'f')
      );
      const sign = optional(/[+-]/);

      return token(seq(sign, float_literal));
    },

    documentation: ($) => seq('<mdoc>', repeat($._doc_content), '</mdoc>'),
    _doc_content: ($) => choice($._doc_char, $._special_doc_tag),
    _doc_char: (_) => /[^<]+/,

    _special_doc_tag: ($) =>
      choice('<notice/>', '<notice />', '<equation>', '</equation>', '<diagram>', '</diagram>', '<metadata>', '</metadata>', '<listing'),

    file_import: ($) => seq('import', '(', $.string, ')'),

    global_metadata: ($) => seq('declare', alias($.identifier, $.metadata_key), $.string),
    definition_metadata: ($) => seq('declare', alias($.identifier, $.function_name), alias($.identifier, $.metadata_key), $.string),

    _binary_composition: ($) => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: ($) => prec.left(PRECEDENCE.RECURSIVE, seq(field('left', $._expression), '~', field('right', $._expression))),
    sequential: ($) => prec.right(PRECEDENCE.SEQ, seq(field('left', $._expression), ':', field('right', $._expression))),
    split: ($) => prec.right(PRECEDENCE.SPLIT, seq(field('left', $._expression), '<:', field('right', sepBy2(',', $._expression)))),
    merge: ($) => prec.right(PRECEDENCE.MERGE, seq(field('left', sepBy2(',', $._expression)), ':>', field('right', $._expression))),
    parallel: ($) => prec.right(PRECEDENCE.PAR, choice(sepBy2(',', $._expression), seq('(', sepBy2(',', $._expression), ')'))),

    string: ($) => seq('"', repeat(choice(token.immediate(prec(PRECEDENCE.STRING, /[^"\\\n]+|\\\r?\n/)), $.escape_sequence)), '"'),

    escape_sequence: (_) =>
      token.immediate(seq('\\', choice(/[^xu0-7]/, /[0-7]{1,3}/, /x[0-9a-fA-F]{2}/, /u[0-9a-fA-F]{4}/, /u{[0-9a-fA-F]+}/))),

    variable: ($) => seq(optional(seq(alias($.identifier, $.module_name), '.')), $.identifier),

    identifier: ($) => prec.right(seq(optional('::'), seq($._id, repeat(seq('::', $._id))))),
    _id: (_) => /_*[a-zA-Z][_a-zA-Z0-9]*/,

    comment: (_) => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
