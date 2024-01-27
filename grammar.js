const PRECEDENCE = {
  RECURSIVE: 13,
  PAR: 12,
  SEQ: 11,
  SPLIT: 10,
  MERGE: 10,
  BINARY_OP: 3,
  FUNCTION_CALL: 3,
  ACCESS: 2,
  EXPRESSION: 1,
};

const sepBy = (sep, rule) => seq(rule, repeat(seq(sep, rule)));

const binaryComposition = (operator, precedence, assoc, field_rule) => $ =>
  prec[assoc](precedence, seq(field('left', field_rule($)), operator, field('right', field_rule($))));

module.exports = grammar({
  name: 'faust',
  rules: {
    source_file: $ => repeat(choice($.comment, $._statement)),

    _statement: $ =>
      choice(
        seq(optional(repeat1($.variant)), choice($.global_metadata, $.definition_metadata, $.file_import, $.definition), ';'),
        $.documentation
      ),

    variant: _ => choice('singleprecision', 'doubleprecision', 'quadprecision', 'fixedpointprecision'),

    definition: $ =>
      choice(
        seq(field('name', $.identifier), '(', $.params, ')', '=', field('value', $._expression)),
        seq(field('name', $.identifier), '=', field('value', $._expression))
      ),

    _expression: $ => prec(PRECEDENCE.EXPRESSION, choice($._binary_composition, $._infix)),
    _infix: $ =>
      prec(PRECEDENCE.EXPRESSION, choice($.binary_op, seq($._infix, $.one_sample_delay_operator), $.access, $.function_call, $._primitive)),
    binary_op: $ => prec.left(PRECEDENCE.BINARY_OP, seq($._infix, $.operator, $._infix)),
    // | infixexp LPAR arglist RPAR       { $$ = buildBoxAppl($1,$3); }
    function_call: $ => prec(PRECEDENCE.FUNCTION_CALL, seq($._infix, '(', $.args, ')')),
    access: $ => prec(PRECEDENCE.ACCESS, seq($._infix, '.', $.identifier)),
    // [$._infix, $.operator, $._expression, '.', $.identifier],
    // function_call: ($) =>
    // prec(
    //   PRECEDENCE.FUNCTION_CALL,
    //   seq(optional(seq(alias($.identifier, $.module_name), '.')), alias($.identifier, $.function_name), '(', sepBy(',', $._argument), ')')
    // ),

    _primitive: $ =>
      choice(
        $._number,
        $.wire,
        $.cut,
        'mem',
        'prefix',
        'int',
        'float',
        $.operator,
        seq(optional('-'), $.identifier),
        seq('(', $._expression, ')'),
        seq('\\', '(', $.params, ')', '.', '(', $._expression, ')'),
        $.iteration
      ),

    args: $ => sepBy(',', $._argument),
    params: $ => sepBy(',', alias($.identifier, $.parameter)),

    // All arguments are direct children of `args`, so we make this rule hidden.
    _argument: $ => choice($.sequential_arg, $.split_arg, $.merge_arg, $.recursive_arg, $._infix),
    // Binary compositions are restricted to non-parallel compositions to avoid ambiguity with commas.
    // Note: Can we allow parallel compositions in arguments when surrounded by parentheses?
    // This could be contributed to Faust.
    recursive_arg: binaryComposition('~', PRECEDENCE.RECURSIVE, 'left', $ => $._argument),
    sequential_arg: binaryComposition(':', PRECEDENCE.SEQ, 'right', $ => $._argument),
    split_arg: binaryComposition('<:', PRECEDENCE.SPLIT, 'right', $ => $._argument),
    merge_arg: binaryComposition(':>', PRECEDENCE.MERGE, 'right', $ => $._argument),

    // todo test
    iteration: $ =>
      seq(
        choice('par', 'seq', 'sum', 'prod'),
        '(',
        alias($.identifier, $.current_iteration),
        ',',
        alias($._argument, $.numiter),
        ',',
        $._expression,
        ')'
      ),

    operator: _ =>
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

    wire: () => '_',
    cut: () => '!',
    one_sample_delay_operator: _ => "'",

    _number: $ => choice($.int, $.real),
    int: _ => {
      const decimal = /[0-9]/;
      const sign = optional(/[+-]/);
      const int_literal = repeat1(decimal);

      return token(seq(sign, int_literal));
    },
    real: _ => {
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

    documentation: $ => seq('<mdoc>', repeat($._doc_content), '</mdoc>'),
    _doc_content: $ => choice($._doc_char, $._special_doc_tag),
    _doc_char: _ => /[^<]+/,
    _special_doc_tag: $ =>
      choice('<notice/>', '<notice />', '<equation>', '</equation>', '<diagram>', '</diagram>', '<metadata>', '</metadata>', '<listing'),

    file_import: $ => seq('import', '(', $.string, ')'),

    global_metadata: $ => seq('declare', alias($.identifier, $.metadata_key), $.string),
    definition_metadata: $ => seq('declare', alias($.identifier, $.function_name), alias($.identifier, $.metadata_key), $.string),

    _binary_composition: $ => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: binaryComposition('~', PRECEDENCE.RECURSIVE, 'left', $ => $._expression),
    sequential: binaryComposition(':', PRECEDENCE.SEQ, 'right', $ => $._expression),
    split: binaryComposition('<:', PRECEDENCE.SPLIT, 'right', $ => $._expression),
    merge: binaryComposition(':>', PRECEDENCE.MERGE, 'right', $ => $._expression),
    parallel: binaryComposition(',', PRECEDENCE.PAR, 'right', $ => $._expression),

    string: _ => /"([^"\\]|\\.)*"/,

    // todo Improve qualified identifiers, using a visible rule for 'qualified_identifier'
    //   See 'qualified_identifier' in https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js,
    //   and the test: https://github.com/tree-sitter/tree-sitter-cpp/blob/master/test/corpus/statements.txt#L409-L425
    identifier: $ => prec.right(seq(optional('::'), seq($._id, repeat(seq('::', $._id))))),
    _id: _ => /_*[a-zA-Z][_a-zA-Z0-9]*/,

    comment: _ => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
