#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 1
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_SEMI = 1,
  anon_sym_singleprecision = 2,
  anon_sym_doubleprecision = 3,
  anon_sym_quadprecision = 4,
  anon_sym_fixedpointprecision = 5,
  anon_sym_EQ = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOT = 9,
  anon_sym_DASH = 10,
  anon_sym_BSLASH = 11,
  anon_sym_COMMA = 12,
  anon_sym_TILDE = 13,
  anon_sym_COLON = 14,
  anon_sym_LT_COLON = 15,
  anon_sym_COLON_GT = 16,
  sym_par = 17,
  sym_seq = 18,
  sym_sum = 19,
  sym_prod = 20,
  sym_wire = 21,
  sym_cut = 22,
  sym_mem_op = 23,
  sym_int_cast = 24,
  sym_float_cast = 25,
  sym_add_op = 26,
  sym_mult_op = 27,
  sym_div_op = 28,
  sym_mod_op = 29,
  sym_exp_op = 30,
  sym_or_op = 31,
  sym_and_op = 32,
  sym_xor_op = 33,
  sym_lshift_op = 34,
  sym_rshift_op = 35,
  sym_lt_op = 36,
  sym_le_op = 37,
  sym_gt_op = 38,
  sym_ge_op = 39,
  sym_eq_op = 40,
  sym_neq_op = 41,
  sym_delay_op = 42,
  sym_prefix_op = 43,
  anon_sym_SQUOTE = 44,
  sym_int = 45,
  sym_real = 46,
  anon_sym_LTmdoc_GT = 47,
  anon_sym_LT_SLASHmdoc_GT = 48,
  sym__doc_char = 49,
  anon_sym_LTnotice_SLASH_GT = 50,
  anon_sym_LTnotice_SLASH_GT2 = 51,
  anon_sym_LTequation_GT = 52,
  anon_sym_LT_SLASHequation_GT = 53,
  anon_sym_LTdiagram_GT = 54,
  anon_sym_LT_SLASHdiagram_GT = 55,
  anon_sym_LTmetadata_GT = 56,
  anon_sym_LT_SLASHmetadata_GT = 57,
  anon_sym_LTlisting = 58,
  anon_sym_import = 59,
  anon_sym_declare = 60,
  sym_string = 61,
  anon_sym_COLON_COLON = 62,
  sym__id = 63,
  sym_comment = 64,
  sym_program = 65,
  sym__statement = 66,
  sym_variant = 67,
  sym_definition = 68,
  sym_function_definition = 69,
  sym__expression = 70,
  sym__infix_expression = 71,
  sym_infix = 72,
  sym_prefix = 73,
  sym_modifier = 74,
  sym_access = 75,
  sym__primitive = 76,
  sym_parameters = 77,
  sym__args = 78,
  sym__argument = 79,
  sym_recursive_arg = 80,
  sym_sequential_arg = 81,
  sym_split_arg = 82,
  sym_merge_arg = 83,
  sym_iteration = 84,
  sym__op = 85,
  sym__modifier_op = 86,
  sym_sub_op = 87,
  sym_one_sample_delay_op = 88,
  sym__number = 89,
  sym_documentation = 90,
  sym__doc_content = 91,
  sym__special_doc_tag = 92,
  sym_file_import = 93,
  sym_global_metadata = 94,
  sym_function_metadata = 95,
  sym__binary_composition = 96,
  sym_recursive = 97,
  sym_sequential = 98,
  sym_split = 99,
  sym_merge = 100,
  sym_parallel = 101,
  sym_identifier = 102,
  aux_sym_program_repeat1 = 103,
  aux_sym__statement_repeat1 = 104,
  aux_sym_parameters_repeat1 = 105,
  aux_sym__args_repeat1 = 106,
  aux_sym_documentation_repeat1 = 107,
  aux_sym_identifier_repeat1 = 108,
  alias_sym_parameter = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_COMMA] = ",",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [sym_par] = "par",
  [sym_seq] = "seq",
  [sym_sum] = "sum",
  [sym_prod] = "prod",
  [sym_wire] = "wire",
  [sym_cut] = "cut",
  [sym_mem_op] = "mem_op",
  [sym_int_cast] = "int_cast",
  [sym_float_cast] = "float_cast",
  [sym_add_op] = "add_op",
  [sym_mult_op] = "mult_op",
  [sym_div_op] = "div_op",
  [sym_mod_op] = "mod_op",
  [sym_exp_op] = "exp_op",
  [sym_or_op] = "or_op",
  [sym_and_op] = "and_op",
  [sym_xor_op] = "xor_op",
  [sym_lshift_op] = "lshift_op",
  [sym_rshift_op] = "rshift_op",
  [sym_lt_op] = "lt_op",
  [sym_le_op] = "le_op",
  [sym_gt_op] = "gt_op",
  [sym_ge_op] = "ge_op",
  [sym_eq_op] = "eq_op",
  [sym_neq_op] = "neq_op",
  [sym_delay_op] = "delay_op",
  [sym_prefix_op] = "prefix_op",
  [anon_sym_SQUOTE] = "'",
  [sym_int] = "int",
  [sym_real] = "real",
  [anon_sym_LTmdoc_GT] = "<mdoc>",
  [anon_sym_LT_SLASHmdoc_GT] = "</mdoc>",
  [sym__doc_char] = "_doc_char",
  [anon_sym_LTnotice_SLASH_GT] = "<notice/>",
  [anon_sym_LTnotice_SLASH_GT2] = "<notice />",
  [anon_sym_LTequation_GT] = "<equation>",
  [anon_sym_LT_SLASHequation_GT] = "</equation>",
  [anon_sym_LTdiagram_GT] = "<diagram>",
  [anon_sym_LT_SLASHdiagram_GT] = "</diagram>",
  [anon_sym_LTmetadata_GT] = "<metadata>",
  [anon_sym_LT_SLASHmetadata_GT] = "</metadata>",
  [anon_sym_LTlisting] = "<listing",
  [anon_sym_import] = "import",
  [anon_sym_declare] = "declare",
  [sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [sym__id] = "_id",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_variant] = "variant",
  [sym_definition] = "definition",
  [sym_function_definition] = "function_definition",
  [sym__expression] = "_expression",
  [sym__infix_expression] = "_infix_expression",
  [sym_infix] = "infix",
  [sym_prefix] = "prefix",
  [sym_modifier] = "modifier",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
  [sym_parameters] = "parameters",
  [sym__args] = "_args",
  [sym__argument] = "_argument",
  [sym_recursive_arg] = "recursive_arg",
  [sym_sequential_arg] = "sequential_arg",
  [sym_split_arg] = "split_arg",
  [sym_merge_arg] = "merge_arg",
  [sym_iteration] = "iteration",
  [sym__op] = "_op",
  [sym__modifier_op] = "_modifier_op",
  [sym_sub_op] = "sub_op",
  [sym_one_sample_delay_op] = "one_sample_delay_op",
  [sym__number] = "_number",
  [sym_documentation] = "documentation",
  [sym__doc_content] = "_doc_content",
  [sym__special_doc_tag] = "_special_doc_tag",
  [sym_file_import] = "file_import",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym__binary_composition] = "_binary_composition",
  [sym_recursive] = "recursive",
  [sym_sequential] = "sequential",
  [sym_split] = "split",
  [sym_merge] = "merge",
  [sym_parallel] = "parallel",
  [sym_identifier] = "identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__args_repeat1] = "_args_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_singleprecision] = anon_sym_singleprecision,
  [anon_sym_doubleprecision] = anon_sym_doubleprecision,
  [anon_sym_quadprecision] = anon_sym_quadprecision,
  [anon_sym_fixedpointprecision] = anon_sym_fixedpointprecision,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [sym_par] = sym_par,
  [sym_seq] = sym_seq,
  [sym_sum] = sym_sum,
  [sym_prod] = sym_prod,
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
  [sym_mem_op] = sym_mem_op,
  [sym_int_cast] = sym_int_cast,
  [sym_float_cast] = sym_float_cast,
  [sym_add_op] = sym_add_op,
  [sym_mult_op] = sym_mult_op,
  [sym_div_op] = sym_div_op,
  [sym_mod_op] = sym_mod_op,
  [sym_exp_op] = sym_exp_op,
  [sym_or_op] = sym_or_op,
  [sym_and_op] = sym_and_op,
  [sym_xor_op] = sym_xor_op,
  [sym_lshift_op] = sym_lshift_op,
  [sym_rshift_op] = sym_rshift_op,
  [sym_lt_op] = sym_lt_op,
  [sym_le_op] = sym_le_op,
  [sym_gt_op] = sym_gt_op,
  [sym_ge_op] = sym_ge_op,
  [sym_eq_op] = sym_eq_op,
  [sym_neq_op] = sym_neq_op,
  [sym_delay_op] = sym_delay_op,
  [sym_prefix_op] = sym_prefix_op,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_int] = sym_int,
  [sym_real] = sym_real,
  [anon_sym_LTmdoc_GT] = anon_sym_LTmdoc_GT,
  [anon_sym_LT_SLASHmdoc_GT] = anon_sym_LT_SLASHmdoc_GT,
  [sym__doc_char] = sym__doc_char,
  [anon_sym_LTnotice_SLASH_GT] = anon_sym_LTnotice_SLASH_GT,
  [anon_sym_LTnotice_SLASH_GT2] = anon_sym_LTnotice_SLASH_GT2,
  [anon_sym_LTequation_GT] = anon_sym_LTequation_GT,
  [anon_sym_LT_SLASHequation_GT] = anon_sym_LT_SLASHequation_GT,
  [anon_sym_LTdiagram_GT] = anon_sym_LTdiagram_GT,
  [anon_sym_LT_SLASHdiagram_GT] = anon_sym_LT_SLASHdiagram_GT,
  [anon_sym_LTmetadata_GT] = anon_sym_LTmetadata_GT,
  [anon_sym_LT_SLASHmetadata_GT] = anon_sym_LT_SLASHmetadata_GT,
  [anon_sym_LTlisting] = anon_sym_LTlisting,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_declare] = anon_sym_declare,
  [sym_string] = sym_string,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__id] = sym__id,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_variant] = sym_variant,
  [sym_definition] = sym_definition,
  [sym_function_definition] = sym_function_definition,
  [sym__expression] = sym__expression,
  [sym__infix_expression] = sym__infix_expression,
  [sym_infix] = sym_infix,
  [sym_prefix] = sym_prefix,
  [sym_modifier] = sym_modifier,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
  [sym_parameters] = sym_parameters,
  [sym__args] = sym__args,
  [sym__argument] = sym__argument,
  [sym_recursive_arg] = sym_recursive_arg,
  [sym_sequential_arg] = sym_sequential_arg,
  [sym_split_arg] = sym_split_arg,
  [sym_merge_arg] = sym_merge_arg,
  [sym_iteration] = sym_iteration,
  [sym__op] = sym__op,
  [sym__modifier_op] = sym__modifier_op,
  [sym_sub_op] = sym_sub_op,
  [sym_one_sample_delay_op] = sym_one_sample_delay_op,
  [sym__number] = sym__number,
  [sym_documentation] = sym_documentation,
  [sym__doc_content] = sym__doc_content,
  [sym__special_doc_tag] = sym__special_doc_tag,
  [sym_file_import] = sym_file_import,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym__binary_composition] = sym__binary_composition,
  [sym_recursive] = sym_recursive,
  [sym_sequential] = sym_sequential,
  [sym_split] = sym_split,
  [sym_merge] = sym_merge,
  [sym_parallel] = sym_parallel,
  [sym_identifier] = sym_identifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__args_repeat1] = aux_sym__args_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [alias_sym_parameter] = alias_sym_parameter,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_singleprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doubleprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quadprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixedpointprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_par] = {
    .visible = true,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_prod] = {
    .visible = true,
    .named = true,
  },
  [sym_wire] = {
    .visible = true,
    .named = true,
  },
  [sym_cut] = {
    .visible = true,
    .named = true,
  },
  [sym_mem_op] = {
    .visible = true,
    .named = true,
  },
  [sym_int_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_float_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_add_op] = {
    .visible = true,
    .named = true,
  },
  [sym_mult_op] = {
    .visible = true,
    .named = true,
  },
  [sym_div_op] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_op] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_op] = {
    .visible = true,
    .named = true,
  },
  [sym_or_op] = {
    .visible = true,
    .named = true,
  },
  [sym_and_op] = {
    .visible = true,
    .named = true,
  },
  [sym_xor_op] = {
    .visible = true,
    .named = true,
  },
  [sym_lshift_op] = {
    .visible = true,
    .named = true,
  },
  [sym_rshift_op] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_op] = {
    .visible = true,
    .named = true,
  },
  [sym_le_op] = {
    .visible = true,
    .named = true,
  },
  [sym_gt_op] = {
    .visible = true,
    .named = true,
  },
  [sym_ge_op] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_op] = {
    .visible = true,
    .named = true,
  },
  [sym_neq_op] = {
    .visible = true,
    .named = true,
  },
  [sym_delay_op] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_op] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTmdoc_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmdoc_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doc_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LTnotice_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTnotice_SLASH_GT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTequation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHequation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTdiagram_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHdiagram_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmetadata_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmetadata_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTlisting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__id] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__infix_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__args] = {
    .visible = false,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_recursive_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_split_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_iteration] = {
    .visible = true,
    .named = true,
  },
  [sym__op] = {
    .visible = false,
    .named = true,
  },
  [sym__modifier_op] = {
    .visible = false,
    .named = true,
  },
  [sym_sub_op] = {
    .visible = true,
    .named = true,
  },
  [sym_one_sample_delay_op] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [sym__doc_content] = {
    .visible = false,
    .named = true,
  },
  [sym__special_doc_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_file_import] = {
    .visible = true,
    .named = true,
  },
  [sym_global_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_function_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_composition] = {
    .visible = false,
    .named = true,
  },
  [sym_recursive] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential] = {
    .visible = true,
    .named = true,
  },
  [sym_split] = {
    .visible = true,
    .named = true,
  },
  [sym_merge] = {
    .visible = true,
    .named = true,
  },
  [sym_parallel] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_documentation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_current_iter = 1,
  field_definition = 2,
  field_environment = 3,
  field_expression = 4,
  field_function_name = 5,
  field_key = 6,
  field_left = 7,
  field_name = 8,
  field_num_iters = 9,
  field_operand = 10,
  field_operator = 11,
  field_right = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_current_iter] = "current_iter",
  [field_definition] = "definition",
  [field_environment] = "environment",
  [field_expression] = "expression",
  [field_function_name] = "function_name",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_num_iters] = "num_iters",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 2},
  [2] =
    {field_name, 0},
    {field_value, 2},
  [4] =
    {field_function_name, 1},
    {field_key, 2},
    {field_value, 3},
  [7] =
    {field_left, 0},
    {field_right, 2},
  [9] =
    {field_definition, 2},
    {field_environment, 0},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_operand, 2},
    {field_operator, 0},
  [16] =
    {field_name, 0},
    {field_value, 5},
  [18] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [8] = {
    [1] = alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_parameter,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 33,
  [59] = 32,
  [60] = 37,
  [61] = 36,
  [62] = 62,
  [63] = 34,
  [64] = 38,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 110,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(94);
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'q') ADVANCE(253);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(107);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(95);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead == '@') ADVANCE(142);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(108);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(259);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(165);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'q') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(260);
      END_STATE();
    case 93:
      if (eof) ADVANCE(94);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'q') ADVANCE(253);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_mem_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(259);
      if (lookahead == '\\') ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 93},
  [48] = {.lex_state = 93},
  [49] = {.lex_state = 93},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 93},
  [54] = {.lex_state = 93},
  [55] = {.lex_state = 93},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 93},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 93},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_singleprecision] = ACTIONS(1),
    [anon_sym_doubleprecision] = ACTIONS(1),
    [anon_sym_quadprecision] = ACTIONS(1),
    [anon_sym_fixedpointprecision] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [sym_par] = ACTIONS(1),
    [sym_seq] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_prod] = ACTIONS(1),
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
    [sym_mem_op] = ACTIONS(1),
    [sym_int_cast] = ACTIONS(1),
    [sym_float_cast] = ACTIONS(1),
    [sym_add_op] = ACTIONS(1),
    [sym_mult_op] = ACTIONS(1),
    [sym_div_op] = ACTIONS(1),
    [sym_mod_op] = ACTIONS(1),
    [sym_exp_op] = ACTIONS(1),
    [sym_or_op] = ACTIONS(1),
    [sym_and_op] = ACTIONS(1),
    [sym_xor_op] = ACTIONS(1),
    [sym_lshift_op] = ACTIONS(1),
    [sym_rshift_op] = ACTIONS(1),
    [sym_lt_op] = ACTIONS(1),
    [sym_le_op] = ACTIONS(1),
    [sym_gt_op] = ACTIONS(1),
    [sym_ge_op] = ACTIONS(1),
    [sym_neq_op] = ACTIONS(1),
    [sym_delay_op] = ACTIONS(1),
    [sym_prefix_op] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__id] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(114),
    [sym__statement] = STATE(47),
    [sym_variant] = STATE(49),
    [sym_definition] = STATE(113),
    [sym_function_definition] = STATE(113),
    [sym_documentation] = STATE(47),
    [sym_file_import] = STATE(113),
    [sym_global_metadata] = STATE(113),
    [sym_function_metadata] = STATE(113),
    [sym_identifier] = STATE(94),
    [aux_sym_program_repeat1] = STATE(47),
    [aux_sym__statement_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_singleprecision] = ACTIONS(5),
    [anon_sym_doubleprecision] = ACTIONS(5),
    [anon_sym_quadprecision] = ACTIONS(5),
    [anon_sym_fixedpointprecision] = ACTIONS(5),
    [anon_sym_LTmdoc_GT] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(13),
    [sym__id] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(65), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [73] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(75), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [146] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(73), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [219] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(79), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [292] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(76), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [365] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(78), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [438] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(69), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [511] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(68), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [584] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(67), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [657] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(66), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(25), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [730] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    STATE(112), 1,
      sym__args,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(70), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [804] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(80), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [875] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(81), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [946] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(77), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1017] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(74), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1088] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(71), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1159] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(72), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(35), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(37), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1230] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(39), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(31), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(41), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1294] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(27), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(45), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1358] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(47), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(29), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(49), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1422] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(51), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(26), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(53), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1486] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(55), 11,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
    STATE(28), 11,
      sym__infix_expression,
      sym_infix,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__op,
      sym_sub_op,
      sym__number,
      sym_identifier,
    ACTIONS(57), 14,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
  [1550] = 2,
    ACTIONS(59), 17,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      sym_real,
      anon_sym_COLON_COLON,
    ACTIONS(61), 17,
      anon_sym_DASH,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
      sym_wire,
      sym_cut,
      sym_mem_op,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_int,
      sym__id,
  [1589] = 14,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      sym_exp_op,
    ACTIONS(83), 1,
      sym_delay_op,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(73), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(79), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(81), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(63), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(75), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [1649] = 7,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      sym_exp_op,
    ACTIONS(83), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 22,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      anon_sym_SQUOTE,
  [1695] = 10,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      sym_exp_op,
    ACTIONS(83), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(73), 2,
      sym_add_op,
      sym_or_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(75), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(87), 12,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      anon_sym_SQUOTE,
  [1747] = 8,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      sym_exp_op,
    ACTIONS(83), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(75), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(87), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_or_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      anon_sym_SQUOTE,
  [1795] = 5,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_sub_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [1837] = 5,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    STATE(43), 1,
      sym_identifier,
    ACTIONS(61), 4,
      anon_sym_COLON,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(59), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [1879] = 6,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      anon_sym_SQUOTE,
  [1923] = 4,
    ACTIONS(95), 1,
      anon_sym_COLON_COLON,
    STATE(36), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(93), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [1962] = 4,
    ACTIONS(101), 1,
      anon_sym_COLON_COLON,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(99), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(97), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2001] = 4,
    ACTIONS(95), 1,
      anon_sym_COLON_COLON,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(106), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(104), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2040] = 14,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      sym_exp_op,
    ACTIONS(83), 1,
      sym_delay_op,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      anon_sym_COLON,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(73), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(79), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(44), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(81), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(108), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(75), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [2099] = 4,
    ACTIONS(95), 1,
      anon_sym_COLON_COLON,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(114), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(112), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2138] = 4,
    ACTIONS(95), 1,
      anon_sym_COLON_COLON,
    STATE(34), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(114), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(112), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2177] = 2,
    ACTIONS(99), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(97), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
      anon_sym_COLON_COLON,
  [2211] = 2,
    ACTIONS(118), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(116), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2244] = 2,
    ACTIONS(122), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(120), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2277] = 2,
    ACTIONS(126), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(124), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2310] = 2,
    ACTIONS(130), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(128), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2343] = 2,
    ACTIONS(134), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(132), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2376] = 2,
    ACTIONS(138), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(136), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2409] = 2,
    ACTIONS(142), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(140), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2442] = 2,
    ACTIONS(146), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(144), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add_op,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_exp_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
      anon_sym_SQUOTE,
  [2475] = 12,
    ACTIONS(7), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym_comment,
    STATE(94), 1,
      sym_identifier,
    STATE(49), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(48), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(113), 5,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [2522] = 12,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(160), 1,
      anon_sym_import,
    ACTIONS(163), 1,
      anon_sym_declare,
    ACTIONS(166), 1,
      anon_sym_COLON_COLON,
    ACTIONS(169), 1,
      sym__id,
    ACTIONS(172), 1,
      sym_comment,
    STATE(94), 1,
      sym_identifier,
    STATE(49), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(48), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(154), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(113), 5,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [2569] = 8,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(94), 1,
      sym_identifier,
    STATE(57), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(109), 5,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [2602] = 4,
    ACTIONS(175), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(177), 1,
      sym__doc_char,
    STATE(51), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(179), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2625] = 4,
    ACTIONS(181), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(183), 1,
      sym__doc_char,
    STATE(51), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(186), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2648] = 4,
    ACTIONS(189), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(191), 1,
      sym__doc_char,
    STATE(50), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(193), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2671] = 2,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(197), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2687] = 2,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(201), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2703] = 2,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2719] = 2,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(209), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2735] = 4,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(57), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(214), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(211), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2754] = 3,
    ACTIONS(218), 1,
      anon_sym_COLON_COLON,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(97), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2769] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(91), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2784] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(63), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(112), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2799] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(112), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2814] = 2,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    ACTIONS(223), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2827] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(58), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(104), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2842] = 1,
    ACTIONS(97), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2852] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(227), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2868] = 2,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(235), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2880] = 4,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(239), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2896] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(243), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2916] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(249), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2936] = 7,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_TILDE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_LT_COLON,
    ACTIONS(261), 1,
      anon_sym_COLON_GT,
    STATE(93), 1,
      aux_sym__args_repeat1,
  [2958] = 2,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(263), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2969] = 5,
    ACTIONS(255), 1,
      anon_sym_TILDE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_LT_COLON,
    ACTIONS(261), 1,
      anon_sym_COLON_GT,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2986] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [3005] = 5,
    ACTIONS(255), 1,
      anon_sym_TILDE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_LT_COLON,
    ACTIONS(261), 1,
      anon_sym_COLON_GT,
    ACTIONS(271), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3022] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [3041] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [3060] = 3,
    ACTIONS(255), 1,
      anon_sym_TILDE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(277), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3073] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [3092] = 6,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LT_COLON,
    ACTIONS(247), 1,
      anon_sym_COLON_GT,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [3111] = 5,
    ACTIONS(255), 1,
      anon_sym_TILDE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_LT_COLON,
    ACTIONS(261), 1,
      anon_sym_COLON_GT,
    ACTIONS(283), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3128] = 5,
    ACTIONS(255), 1,
      anon_sym_TILDE,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_LT_COLON,
    ACTIONS(261), 1,
      anon_sym_COLON_GT,
    ACTIONS(285), 1,
      anon_sym_COMMA,
  [3144] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    STATE(91), 1,
      sym_identifier,
    STATE(96), 1,
      sym_parameters,
  [3157] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    ACTIONS(289), 1,
      sym_string,
    STATE(106), 1,
      sym_identifier,
  [3170] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    STATE(91), 1,
      sym_identifier,
    STATE(102), 1,
      sym_parameters,
  [3183] = 3,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_parameters_repeat1,
  [3193] = 3,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      sym__id,
    STATE(46), 1,
      sym_identifier,
  [3203] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    STATE(83), 1,
      sym_identifier,
  [3213] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    STATE(95), 1,
      sym_identifier,
  [3223] = 3,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym__args_repeat1,
  [3233] = 3,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_parameters_repeat1,
  [3243] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_parameters_repeat1,
  [3253] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    STATE(116), 1,
      sym_identifier,
  [3263] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym__args_repeat1,
  [3273] = 2,
    ACTIONS(309), 1,
      anon_sym_EQ,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [3280] = 1,
    ACTIONS(313), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3285] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [3289] = 1,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [3293] = 1,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
  [3297] = 1,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
  [3301] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [3305] = 1,
    ACTIONS(325), 1,
      anon_sym_SEMI,
  [3309] = 1,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [3313] = 1,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
  [3317] = 1,
    ACTIONS(331), 1,
      anon_sym_DOT,
  [3321] = 1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
  [3325] = 1,
    ACTIONS(335), 1,
      sym_string,
  [3329] = 1,
    ACTIONS(337), 1,
      anon_sym_EQ,
  [3333] = 1,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
  [3337] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [3341] = 1,
    ACTIONS(343), 1,
      sym__id,
  [3345] = 1,
    ACTIONS(345), 1,
      sym_string,
  [3349] = 1,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [3353] = 1,
    ACTIONS(349), 1,
      anon_sym_SEMI,
  [3357] = 1,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
  [3361] = 1,
    ACTIONS(353), 1,
      sym__id,
  [3365] = 1,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [3369] = 1,
    ACTIONS(357), 1,
      sym__id,
  [3373] = 1,
    ACTIONS(359), 1,
      sym__id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 584,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 730,
  [SMALL_STATE(13)] = 804,
  [SMALL_STATE(14)] = 875,
  [SMALL_STATE(15)] = 946,
  [SMALL_STATE(16)] = 1017,
  [SMALL_STATE(17)] = 1088,
  [SMALL_STATE(18)] = 1159,
  [SMALL_STATE(19)] = 1230,
  [SMALL_STATE(20)] = 1294,
  [SMALL_STATE(21)] = 1358,
  [SMALL_STATE(22)] = 1422,
  [SMALL_STATE(23)] = 1486,
  [SMALL_STATE(24)] = 1550,
  [SMALL_STATE(25)] = 1589,
  [SMALL_STATE(26)] = 1649,
  [SMALL_STATE(27)] = 1695,
  [SMALL_STATE(28)] = 1747,
  [SMALL_STATE(29)] = 1795,
  [SMALL_STATE(30)] = 1837,
  [SMALL_STATE(31)] = 1879,
  [SMALL_STATE(32)] = 1923,
  [SMALL_STATE(33)] = 1962,
  [SMALL_STATE(34)] = 2001,
  [SMALL_STATE(35)] = 2040,
  [SMALL_STATE(36)] = 2099,
  [SMALL_STATE(37)] = 2138,
  [SMALL_STATE(38)] = 2177,
  [SMALL_STATE(39)] = 2211,
  [SMALL_STATE(40)] = 2244,
  [SMALL_STATE(41)] = 2277,
  [SMALL_STATE(42)] = 2310,
  [SMALL_STATE(43)] = 2343,
  [SMALL_STATE(44)] = 2376,
  [SMALL_STATE(45)] = 2409,
  [SMALL_STATE(46)] = 2442,
  [SMALL_STATE(47)] = 2475,
  [SMALL_STATE(48)] = 2522,
  [SMALL_STATE(49)] = 2569,
  [SMALL_STATE(50)] = 2602,
  [SMALL_STATE(51)] = 2625,
  [SMALL_STATE(52)] = 2648,
  [SMALL_STATE(53)] = 2671,
  [SMALL_STATE(54)] = 2687,
  [SMALL_STATE(55)] = 2703,
  [SMALL_STATE(56)] = 2719,
  [SMALL_STATE(57)] = 2735,
  [SMALL_STATE(58)] = 2754,
  [SMALL_STATE(59)] = 2769,
  [SMALL_STATE(60)] = 2784,
  [SMALL_STATE(61)] = 2799,
  [SMALL_STATE(62)] = 2814,
  [SMALL_STATE(63)] = 2827,
  [SMALL_STATE(64)] = 2842,
  [SMALL_STATE(65)] = 2852,
  [SMALL_STATE(66)] = 2868,
  [SMALL_STATE(67)] = 2880,
  [SMALL_STATE(68)] = 2896,
  [SMALL_STATE(69)] = 2916,
  [SMALL_STATE(70)] = 2936,
  [SMALL_STATE(71)] = 2958,
  [SMALL_STATE(72)] = 2969,
  [SMALL_STATE(73)] = 2986,
  [SMALL_STATE(74)] = 3005,
  [SMALL_STATE(75)] = 3022,
  [SMALL_STATE(76)] = 3041,
  [SMALL_STATE(77)] = 3060,
  [SMALL_STATE(78)] = 3073,
  [SMALL_STATE(79)] = 3092,
  [SMALL_STATE(80)] = 3111,
  [SMALL_STATE(81)] = 3128,
  [SMALL_STATE(82)] = 3144,
  [SMALL_STATE(83)] = 3157,
  [SMALL_STATE(84)] = 3170,
  [SMALL_STATE(85)] = 3183,
  [SMALL_STATE(86)] = 3193,
  [SMALL_STATE(87)] = 3203,
  [SMALL_STATE(88)] = 3213,
  [SMALL_STATE(89)] = 3223,
  [SMALL_STATE(90)] = 3233,
  [SMALL_STATE(91)] = 3243,
  [SMALL_STATE(92)] = 3253,
  [SMALL_STATE(93)] = 3263,
  [SMALL_STATE(94)] = 3273,
  [SMALL_STATE(95)] = 3280,
  [SMALL_STATE(96)] = 3285,
  [SMALL_STATE(97)] = 3289,
  [SMALL_STATE(98)] = 3293,
  [SMALL_STATE(99)] = 3297,
  [SMALL_STATE(100)] = 3301,
  [SMALL_STATE(101)] = 3305,
  [SMALL_STATE(102)] = 3309,
  [SMALL_STATE(103)] = 3313,
  [SMALL_STATE(104)] = 3317,
  [SMALL_STATE(105)] = 3321,
  [SMALL_STATE(106)] = 3325,
  [SMALL_STATE(107)] = 3329,
  [SMALL_STATE(108)] = 3333,
  [SMALL_STATE(109)] = 3337,
  [SMALL_STATE(110)] = 3341,
  [SMALL_STATE(111)] = 3345,
  [SMALL_STATE(112)] = 3349,
  [SMALL_STATE(113)] = 3353,
  [SMALL_STATE(114)] = 3357,
  [SMALL_STATE(115)] = 3361,
  [SMALL_STATE(116)] = 3365,
  [SMALL_STATE(117)] = 3369,
  [SMALL_STATE(118)] = 3373,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(118),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 9),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 11),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(98),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(115),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(51),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(51),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(62),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(110),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(88),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(13),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_faust(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
