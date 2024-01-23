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
    [$.binary_composition, $.binary_operation],
    [$.function_call, $.merge, $.split, $.parallel, $.sequential, $.recursive],
  ],
  rules: {
    source_file: ($) => repeat(choice($.comment, $._statement)),

    _statement: ($) =>
      choice(
        seq(choice($.metadata_declaration, $.file_import, $.definition), ';')
        // $.documentation
      ),

    definition: ($) =>
      choice(
        $.simple_definition,
        $.function_definition
        // $.pattern_match_definition
      ),

    simple_definition: ($) => seq(field('name', $.variable), '=', field('value', $.expression)),

    function_definition: ($) =>
      choice(
        // "Normal" function definition
        seq(field('name', $.variable), '(', sepBy(',', alias($.identifier, $.parameter)), ')', '=', field('value', $.expression)),
        // Lambda abstraction
        seq(field('name', $.variable), '=', field('value', $.lambda_abstraction))
      ),

    function_call: ($) =>
      prec(
        PRECEDENCE.FUNCTION_CALL,
        seq(optional(seq(alias($.identifier, $.module_name), '.')), alias($.identifier, $.function_name), '(', sepBy(',', $.argument), ')')
      ),

    argument: ($) => choice($.object, $.function_call),

    lambda_abstraction: ($) => seq(seq('\\', '(', sepBy(',', alias($.identifier, $.parameter)), ')', '.', '(', $.expression, ')')),

    // TODO
    // https://faustdoc.grame.fr/manual/syntax/#standard-metadata
    // pattern_match_definition: $ => seq(),

    expression: ($) =>
      prec(
        PRECEDENCE.EXPRESSION,
        choice($.one_sample_delay, $.object, $.binary_composition, $.binary_operation, $.identity_function, $.iteration, $.function_call)
      ),

    iteration: ($) =>
      seq(
        choice('par', 'seq', 'sum', 'prod'),
        alias($.identifier, $.current_iteration),
        ',',
        alias($.object, $.numiter),
        ',',
        $.expression
      ),
    identity_function: ($) => '_',

    binary_operation: ($) => prec(PRECEDENCE.BINARY_OP, choice($.infix, $.core, $.prefix, $.partial)),

    core: ($) =>
      prec(
        PRECEDENCE.CORE,
        choice(seq($.object, ',', $.object, ':', $.binary_operator), seq('(', $.object, ',', $.object, ')', ':', $.binary_operator))
      ),

    infix: ($) => seq($.object, $.binary_operator, $.object),
    prefix: ($) => seq($.binary_operator, '(', $.object, ',', $.object, ')'),
    partial: ($) => seq($.binary_operator, '(', $.object, ')'),

    one_sample_delay: ($) => seq($.object, repeat1($.one_sample_delay_operator)),
    one_sample_delay_operator: ($) => "'",

    binary_operator: ($) =>
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
    object: ($) => choice($.number, $.variable, $.string),
    number: ($) => choice($.int, $.real),
    int: ($) => {
      const decimal = /[0-9]/;
      const sign = optional(/[+-]/);
      const int_literal = repeat1(decimal);

      return token(seq(sign, int_literal));
    },
    real: ($) => {
      const decimal = /[0-9]/;
      const float_literal = choice(
        seq(repeat1(decimal), 'f'),
        seq(repeat1(decimal), '.', repeat(decimal)),
        seq(repeat1(decimal), '.', repeat(decimal), 'f'),
        seq(repeat1(decimal), '.', repeat(decimal), 'e', optional(/[+-]/), repeat1(decimal)),
        seq(repeat1(decimal), '.', repeat(decimal), 'e', optional(/[+-]/), repeat1(decimal), 'f'),
        seq(repeat1(decimal), 'e', optional(/[+-]/), repeat1(decimal)),
        seq(repeat1(decimal), 'e', optional(/[+-]/), repeat1(decimal), 'f'),
        seq('.', repeat1(decimal)),
        seq('.', repeat1(decimal), 'f'),
        seq('.', repeat1(decimal), 'e', optional(/[+-]/), repeat1(decimal)),
        seq('.', repeat1(decimal), 'e', optional(/[+-]/), repeat1(decimal), 'f')
      );
      const sign = optional(/[+-]/);

      return token(seq(sign, float_literal));
    },

    // TODO
    // https://faustdoc.grame.fr/manual/mathdoc/
    // documentation: $ => seq(),

    file_import: ($) => seq('import(', $.string, ')'),

    metadata_declaration: ($) =>
      choice(
        $.global_metadata,
        $.function_metadata
        // $.standard_metadata
      ),

    // TODO
    // https://faustdoc.grame.fr/manual/syntax/#standard-metadata
    // standard_metadata: $=> seq(),

    global_metadata: ($) => seq('declare', alias($.identifier, $.metadata_key), $.string),
    function_metadata: ($) => seq('declare', alias($.identifier, $.function_name), alias($.identifier, $.metadata_key), $.string),

    // TODO: Not used
    // May precede imports or definitions
    variant: ($) => choice('singleprecision', 'doubleprecision', 'quadprecision', 'fixedpointprecision'),

    binary_composition: ($) => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: ($) => prec.left(PRECEDENCE.RECURSIVE, seq(field('left', $.expression), '~', field('right', $.expression))),
    sequential: ($) => prec.right(PRECEDENCE.SEQ, seq(field('left', $.expression), ':', field('right', $.expression))),
    split: ($) => prec.right(PRECEDENCE.SPLIT, seq(field('left', $.expression), '<:', field('right', sepBy2(',', $.expression)))),
    merge: ($) => prec.right(PRECEDENCE.MERGE, seq(field('left', sepBy2(',', $.expression)), ':>', field('right', $.expression))),
    parallel: ($) => prec.right(PRECEDENCE.PAR, choice(sepBy2(',', $.expression), seq('(', sepBy2(',', $.expression), ')'))),

    string: ($) => seq('"', repeat(choice(token.immediate(prec(PRECEDENCE.STRING, /[^"\\\n]+|\\\r?\n/)), $.escape_sequence)), '"'),

    escape_sequence: ($) =>
      token.immediate(seq('\\', choice(/[^xu0-7]/, /[0-7]{1,3}/, /x[0-9a-fA-F]{2}/, /u[0-9a-fA-F]{4}/, /u{[0-9a-fA-F]+}/))),

    variable: ($) => seq(optional(seq(alias($.identifier, $.module_name), '.')), $.identifier),
    identifier: ($) => /(r#)?[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

    comment: ($) => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
