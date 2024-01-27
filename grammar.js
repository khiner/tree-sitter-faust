const PREC = {
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

const decimal = /[0-9]/;
const sign = optional(/[+-]/);

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

    _expression: $ => prec(PREC.EXPRESSION, choice($._binary_composition, $._infix)),
    _infix: $ =>
      prec(PREC.EXPRESSION, choice($.binary_op, seq($._infix, $.one_sample_delay_operator), $.access, $.function_call, $._primitive)),
    binary_op: $ => prec.left(PREC.BINARY_OP, seq($._infix, $.operator, $._infix)),
    function_call: $ => prec(PREC.FUNCTION_CALL, seq($._infix, '(', $.args, ')')),
    access: $ => prec(PREC.ACCESS, seq($._infix, '.', $.identifier)),

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
    // Binary compositions as arguments are restricted to non-parallel compositions to avoid ambiguity with commas.
    // Note: Can we allow parallel compositions in arguments when surrounded by parentheses?
    // This could be contributed to Faust.
    recursive_arg: binaryComposition('~', PREC.RECURSIVE, 'left', $ => $._argument),
    sequential_arg: binaryComposition(':', PREC.SEQ, 'right', $ => $._argument),
    split_arg: binaryComposition('<:', PREC.SPLIT, 'right', $ => $._argument),
    merge_arg: binaryComposition(':>', PREC.MERGE, 'right', $ => $._argument),

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

    global_metadata: $ => seq('declare', alias($.identifier, $.metadata_key), $.string),
    definition_metadata: $ => seq('declare', alias($.identifier, $.function_name), alias($.identifier, $.metadata_key), $.string),

    _binary_composition: $ => choice($.recursive, $.sequential, $.split, $.merge, $.parallel),
    recursive: binaryComposition('~', PREC.RECURSIVE, 'left', $ => $._expression),
    sequential: binaryComposition(':', PREC.SEQ, 'right', $ => $._expression),
    split: binaryComposition('<:', PREC.SPLIT, 'right', $ => $._expression),
    merge: binaryComposition(':>', PREC.MERGE, 'right', $ => $._expression),
    parallel: binaryComposition(',', PREC.PAR, 'right', $ => $._expression),

    string: _ => /"([^"\\]|\\.)*"/,

    // todo Improve qualified identifiers, using a visible rule for 'qualified_identifier'
    //   See 'qualified_identifier' in https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js,
    //   and the test: https://github.com/tree-sitter/tree-sitter-cpp/blob/master/test/corpus/statements.txt#L409-L425
    identifier: $ => prec.right(seq(optional('::'), seq($._id, repeat(seq('::', $._id))))),
    _id: _ => /_*[a-zA-Z][_a-zA-Z0-9]*/,

    comment: _ => token(choice(seq('//', /(\\(.|\r?\n)|[^\\\n])*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
});
