#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 1
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DOT = 5,
  anon_sym_DASH = 6,
  anon_sym_BSLASH = 7,
  anon_sym_COMMA = 8,
  anon_sym_TILDE = 9,
  anon_sym_COLON = 10,
  anon_sym_LT_COLON = 11,
  anon_sym_COLON_GT = 12,
  sym_par = 13,
  sym_seq = 14,
  sym_sum = 15,
  sym_prod = 16,
  anon_sym_with = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  sym_wire = 20,
  sym_cut = 21,
  sym_mem_op = 22,
  sym_int_cast = 23,
  sym_float_cast = 24,
  sym_add_op = 25,
  sym_mult_op = 26,
  sym_div_op = 27,
  sym_mod_op = 28,
  sym_exp_op = 29,
  sym_or_op = 30,
  sym_and_op = 31,
  sym_xor_op = 32,
  sym_lshift_op = 33,
  sym_rshift_op = 34,
  sym_lt_op = 35,
  sym_le_op = 36,
  sym_gt_op = 37,
  sym_ge_op = 38,
  sym_eq_op = 39,
  sym_neq_op = 40,
  sym_delay_op = 41,
  sym_prefix_op = 42,
  anon_sym_SQUOTE = 43,
  sym_int = 44,
  sym_real = 45,
  anon_sym_LTmdoc_GT = 46,
  anon_sym_LT_SLASHmdoc_GT = 47,
  sym__doc_char = 48,
  anon_sym_LTnotice_SLASH_GT = 49,
  anon_sym_LTnotice_SLASH_GT2 = 50,
  anon_sym_LTequation_GT = 51,
  anon_sym_LT_SLASHequation_GT = 52,
  anon_sym_LTdiagram_GT = 53,
  anon_sym_LT_SLASHdiagram_GT = 54,
  anon_sym_LTmetadata_GT = 55,
  anon_sym_LT_SLASHmetadata_GT = 56,
  anon_sym_LTlisting = 57,
  anon_sym_import = 58,
  anon_sym_declare = 59,
  anon_sym_singleprecision = 60,
  anon_sym_doubleprecision = 61,
  anon_sym_quadprecision = 62,
  anon_sym_fixedpointprecision = 63,
  sym_string = 64,
  anon_sym_COLON_COLON = 65,
  sym__id = 66,
  sym_comment = 67,
  sym_program = 68,
  sym__statement = 69,
  sym__definition = 70,
  sym_definition = 71,
  sym_function_definition = 72,
  sym__expression = 73,
  sym__infix_expression = 74,
  sym_infix = 75,
  sym_prefix = 76,
  sym_modifier = 77,
  sym_access = 78,
  sym__primitive = 79,
  sym_parameters = 80,
  sym__args = 81,
  sym__argument = 82,
  sym_recursive_arg = 83,
  sym_sequential_arg = 84,
  sym_split_arg = 85,
  sym_merge_arg = 86,
  sym_iteration = 87,
  sym_with = 88,
  sym_environment = 89,
  sym__op = 90,
  sym__modifier_op = 91,
  sym_sub_op = 92,
  sym_one_sample_delay_op = 93,
  sym__number = 94,
  sym_documentation = 95,
  sym__doc_content = 96,
  sym__special_doc_tag = 97,
  sym_file_import = 98,
  sym_global_metadata = 99,
  sym_function_metadata = 100,
  sym__binary_composition = 101,
  sym_recursive = 102,
  sym_sequential = 103,
  sym_split = 104,
  sym_merge = 105,
  sym_parallel = 106,
  sym_variant = 107,
  sym_identifier = 108,
  aux_sym_program_repeat1 = 109,
  aux_sym__statement_repeat1 = 110,
  aux_sym_parameters_repeat1 = 111,
  aux_sym__args_repeat1 = 112,
  aux_sym_environment_repeat1 = 113,
  aux_sym_documentation_repeat1 = 114,
  aux_sym_identifier_repeat1 = 115,
  alias_sym_parameter = 116,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_with] = "with",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [sym__id] = "_id",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__definition] = "_definition",
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
  [sym_with] = "with",
  [sym_environment] = "environment",
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
  [sym_variant] = "variant",
  [sym_identifier] = "identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__args_repeat1] = "_args_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_with] = anon_sym_with,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_singleprecision] = anon_sym_singleprecision,
  [anon_sym_doubleprecision] = anon_sym_doubleprecision,
  [anon_sym_quadprecision] = anon_sym_quadprecision,
  [anon_sym_fixedpointprecision] = anon_sym_fixedpointprecision,
  [sym_string] = sym_string,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__id] = sym__id,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__definition] = sym__definition,
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
  [sym_with] = sym_with,
  [sym_environment] = sym_environment,
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
  [sym_variant] = sym_variant,
  [sym_identifier] = sym_identifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__args_repeat1] = aux_sym__args_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
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
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym__definition] = {
    .visible = false,
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
  [sym_with] = {
    .visible = true,
    .named = true,
  },
  [sym_environment] = {
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
  [sym_variant] = {
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
  [aux_sym_environment_repeat1] = {
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
  field_local_environment = 8,
  field_name = 9,
  field_num_iters = 10,
  field_operand = 11,
  field_operator = 12,
  field_right = 13,
  field_type = 14,
  field_value = 15,
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
  [field_local_environment] = "local_environment",
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
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 4},
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
    {field_expression, 0},
  [15] =
    {field_operand, 2},
    {field_operator, 0},
  [17] =
    {field_name, 0},
    {field_value, 5},
  [19] =
    {field_expression, 0},
    {field_local_environment, 3},
  [21] =
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
  [24] = 22,
  [25] = 21,
  [26] = 19,
  [27] = 20,
  [28] = 23,
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
  [42] = 34,
  [43] = 31,
  [44] = 44,
  [45] = 45,
  [46] = 30,
  [47] = 35,
  [48] = 33,
  [49] = 32,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
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
  [77] = 40,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 38,
  [83] = 37,
  [84] = 41,
  [85] = 39,
  [86] = 72,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 45,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 78,
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
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 131,
  [143] = 143,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'q') ADVANCE(266);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(234);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'x') ADVANCE(234);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(234);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(234);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(132);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(272);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(174);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'q') ADVANCE(266);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(164);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == 'q') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(273);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'q') ADVANCE(266);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_mem_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'l') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 98},
  [59] = {.lex_state = 98},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 98},
  [69] = {.lex_state = 98},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 98},
  [72] = {.lex_state = 98},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 98},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 98},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_singleprecision] = ACTIONS(1),
    [anon_sym_doubleprecision] = ACTIONS(1),
    [anon_sym_quadprecision] = ACTIONS(1),
    [anon_sym_fixedpointprecision] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__id] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(137),
    [sym__statement] = STATE(58),
    [sym__definition] = STATE(136),
    [sym_definition] = STATE(136),
    [sym_function_definition] = STATE(136),
    [sym_documentation] = STATE(58),
    [sym_file_import] = STATE(136),
    [sym_global_metadata] = STATE(136),
    [sym_function_metadata] = STATE(136),
    [sym_variant] = STATE(60),
    [sym_identifier] = STATE(115),
    [aux_sym_program_repeat1] = STATE(58),
    [aux_sym__statement_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTmdoc_GT] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [anon_sym_singleprecision] = ACTIONS(11),
    [anon_sym_doubleprecision] = ACTIONS(11),
    [anon_sym_quadprecision] = ACTIONS(11),
    [anon_sym_fixedpointprecision] = ACTIONS(11),
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
    STATE(93), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [74] = 10,
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
    STATE(79), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [148] = 10,
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
    STATE(91), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [222] = 10,
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
    STATE(90), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [296] = 10,
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
    STATE(75), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [370] = 10,
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
    STATE(87), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [444] = 10,
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
    STATE(81), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [518] = 10,
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
    STATE(80), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [592] = 10,
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
    STATE(76), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [666] = 10,
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
    STATE(94), 8,
      sym__expression,
      sym_with,
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
    STATE(36), 11,
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
  [740] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    STATE(143), 1,
      sym__args,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(89), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [814] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(102), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [885] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(101), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [956] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(99), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [1027] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(98), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [1098] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(97), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [1169] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(96), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 11,
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
    STATE(44), 11,
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
    ACTIONS(39), 14,
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
  [1240] = 9,
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
    ACTIONS(41), 11,
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
    ACTIONS(43), 14,
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
  [1304] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 11,
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
    STATE(43), 11,
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
    ACTIONS(47), 14,
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
  [1368] = 9,
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
    ACTIONS(49), 11,
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
    STATE(34), 11,
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
    ACTIONS(51), 14,
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
  [1432] = 9,
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
    ACTIONS(53), 11,
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
    STATE(33), 11,
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
    ACTIONS(55), 14,
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
  [1496] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(57), 11,
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
    STATE(49), 11,
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
    ACTIONS(59), 14,
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
  [1560] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(61), 11,
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
    STATE(48), 11,
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
    ACTIONS(63), 14,
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
  [1624] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(65), 11,
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
    STATE(42), 11,
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
    ACTIONS(67), 14,
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
  [1688] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(25), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(69), 11,
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
    STATE(47), 11,
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
    ACTIONS(71), 14,
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
  [1752] = 9,
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
    ACTIONS(73), 11,
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
    ACTIONS(75), 14,
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
  [1816] = 9,
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
    ACTIONS(77), 11,
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
    STATE(32), 11,
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
    ACTIONS(79), 14,
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
  [1880] = 2,
    ACTIONS(81), 17,
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
    ACTIONS(83), 17,
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
  [1919] = 5,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(83), 5,
      anon_sym_COLON,
      anon_sym_with,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(81), 24,
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
  [1962] = 9,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      sym_exp_op,
    ACTIONS(95), 1,
      sym_delay_op,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(85), 15,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      sym_add_op,
      sym_or_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2013] = 8,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      sym_exp_op,
    ACTIONS(95), 1,
      sym_delay_op,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(85), 22,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2062] = 7,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_delay_op,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(85), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2109] = 11,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      sym_exp_op,
    ACTIONS(95), 1,
      sym_delay_op,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym_sub_op,
    ACTIONS(101), 2,
      sym_add_op,
      sym_or_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(85), 12,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2164] = 6,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(85), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2209] = 14,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      sym_exp_op,
    ACTIONS(95), 1,
      sym_delay_op,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_sub_op,
    ACTIONS(101), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(109), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(111), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(91), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(103), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [2270] = 4,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(115), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(113), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2310] = 4,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(121), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(119), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2350] = 4,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    STATE(37), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(125), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(123), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2390] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(127), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2430] = 4,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(125), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(123), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2470] = 11,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(20), 1,
      sym_sub_op,
    ACTIONS(134), 2,
      sym_add_op,
      sym_or_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(136), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(85), 10,
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
  [2523] = 9,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(20), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(136), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(85), 13,
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
  [2572] = 14,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    ACTIONS(144), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym_sub_op,
    ACTIONS(134), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(146), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(148), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(142), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(136), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [2631] = 2,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(127), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2666] = 5,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      sym__id,
    STATE(52), 1,
      sym_identifier,
    ACTIONS(83), 4,
      anon_sym_COLON,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(81), 23,
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
  [2707] = 6,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(85), 22,
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
  [2750] = 7,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(20), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(85), 21,
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
  [2795] = 8,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(20), 1,
      sym_sub_op,
    STATE(55), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(89), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(85), 20,
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
  [2842] = 2,
    ACTIONS(152), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(150), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2876] = 2,
    ACTIONS(156), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(154), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2910] = 2,
    ACTIONS(160), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(158), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2944] = 2,
    ACTIONS(164), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(162), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [2978] = 2,
    ACTIONS(168), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(166), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [3012] = 2,
    ACTIONS(172), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(170), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [3046] = 2,
    ACTIONS(176), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(174), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [3080] = 2,
    ACTIONS(180), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(178), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
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
  [3114] = 12,
    ACTIONS(5), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym_comment,
    STATE(115), 1,
      sym_identifier,
    STATE(60), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(59), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(136), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3162] = 12,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(191), 1,
      anon_sym_import,
    ACTIONS(194), 1,
      anon_sym_declare,
    ACTIONS(200), 1,
      anon_sym_COLON_COLON,
    ACTIONS(203), 1,
      sym__id,
    ACTIONS(206), 1,
      sym_comment,
    STATE(115), 1,
      sym_identifier,
    STATE(60), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(59), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(197), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(136), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3210] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(115), 1,
      sym_identifier,
    STATE(72), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(128), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3244] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_environment_repeat1,
    STATE(115), 1,
      sym_identifier,
    STATE(130), 1,
      sym_environment,
    STATE(67), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(132), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(211), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3278] = 4,
    ACTIONS(213), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(215), 1,
      sym__doc_char,
    STATE(64), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(217), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3301] = 4,
    ACTIONS(219), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(221), 1,
      sym__doc_char,
    STATE(62), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(223), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3324] = 4,
    ACTIONS(225), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(227), 1,
      sym__doc_char,
    STATE(64), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(230), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3347] = 8,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      anon_sym_COLON_COLON,
    ACTIONS(241), 1,
      sym__id,
    STATE(65), 1,
      aux_sym_environment_repeat1,
    STATE(115), 1,
      sym_identifier,
    STATE(67), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(132), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(235), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3378] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_environment_repeat1,
    STATE(115), 1,
      sym_identifier,
    STATE(67), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(132), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(211), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3409] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(115), 1,
      sym_identifier,
    STATE(86), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(117), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(211), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3434] = 2,
    ACTIONS(246), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(248), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3450] = 2,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(252), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3466] = 2,
    ACTIONS(254), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(256), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3482] = 2,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(260), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3498] = 4,
    ACTIONS(267), 1,
      anon_sym_COLON_COLON,
    STATE(72), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(262), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(264), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3517] = 2,
    ACTIONS(271), 1,
      anon_sym_COLON,
    ACTIONS(269), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3530] = 2,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(273), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3543] = 6,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
  [3564] = 4,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(289), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3581] = 3,
    ACTIONS(291), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(127), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3596] = 2,
    ACTIONS(296), 1,
      anon_sym_COLON_COLON,
    ACTIONS(294), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3609] = 6,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(298), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
  [3630] = 2,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(300), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3643] = 4,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(304), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3660] = 3,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(119), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3675] = 3,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(113), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3690] = 3,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(123), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3705] = 3,
    ACTIONS(308), 1,
      anon_sym_COLON_COLON,
    STATE(83), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(123), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3720] = 4,
    ACTIONS(262), 1,
      sym__id,
    ACTIONS(267), 1,
      anon_sym_COLON_COLON,
    STATE(86), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(310), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3737] = 7,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      anon_sym_with,
  [3759] = 2,
    ACTIONS(233), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(317), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3771] = 7,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_LT_COLON,
    ACTIONS(329), 1,
      anon_sym_COLON_GT,
    STATE(108), 1,
      aux_sym__args_repeat1,
  [3793] = 7,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(315), 1,
      anon_sym_with,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [3815] = 7,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(315), 1,
      anon_sym_with,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [3837] = 1,
    ACTIONS(127), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [3847] = 7,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(315), 1,
      anon_sym_with,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [3869] = 7,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_TILDE,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_LT_COLON,
    ACTIONS(287), 1,
      anon_sym_COLON_GT,
    ACTIONS(315), 1,
      anon_sym_with,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [3891] = 2,
    ACTIONS(339), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(341), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3903] = 5,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_LT_COLON,
    ACTIONS(329), 1,
      anon_sym_COLON_GT,
    ACTIONS(343), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3920] = 5,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_LT_COLON,
    ACTIONS(329), 1,
      anon_sym_COLON_GT,
    ACTIONS(345), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3937] = 3,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(347), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3950] = 2,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(349), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3961] = 2,
    ACTIONS(296), 1,
      anon_sym_COLON_COLON,
    ACTIONS(294), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3972] = 5,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_LT_COLON,
    ACTIONS(329), 1,
      anon_sym_COLON_GT,
    ACTIONS(353), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3989] = 5,
    ACTIONS(323), 1,
      anon_sym_TILDE,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_LT_COLON,
    ACTIONS(329), 1,
      anon_sym_COLON_GT,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [4005] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(357), 1,
      sym_string,
    ACTIONS(359), 1,
      sym__id,
    STATE(124), 1,
      sym_identifier,
  [4018] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(359), 1,
      sym__id,
    STATE(109), 1,
      sym_identifier,
    STATE(122), 1,
      sym_parameters,
  [4031] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(359), 1,
      sym__id,
    STATE(109), 1,
      sym_identifier,
    STATE(138), 1,
      sym_parameters,
  [4044] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(359), 1,
      sym__id,
    STATE(140), 1,
      sym_identifier,
  [4054] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(359), 1,
      sym__id,
    STATE(116), 1,
      sym_identifier,
  [4064] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__args_repeat1,
  [4074] = 3,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_parameters_repeat1,
  [4084] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(359), 1,
      sym__id,
    STATE(103), 1,
      sym_identifier,
  [4094] = 3,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_parameters_repeat1,
  [4104] = 3,
    ACTIONS(31), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(50), 1,
      sym_identifier,
  [4114] = 3,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_parameters_repeat1,
  [4124] = 3,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym__args_repeat1,
  [4134] = 2,
    ACTIONS(379), 1,
      anon_sym_EQ,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
  [4141] = 1,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4146] = 1,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [4150] = 1,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
  [4154] = 1,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
  [4158] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [4162] = 1,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [4166] = 1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [4170] = 1,
    ACTIONS(397), 1,
      anon_sym_SEMI,
  [4174] = 1,
    ACTIONS(399), 1,
      sym_string,
  [4178] = 1,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [4182] = 1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [4186] = 1,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [4190] = 1,
    ACTIONS(407), 1,
      anon_sym_SEMI,
  [4194] = 1,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [4198] = 1,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
  [4202] = 1,
    ACTIONS(413), 1,
      sym__id,
  [4206] = 1,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [4210] = 1,
    ACTIONS(417), 1,
      anon_sym_DOT,
  [4214] = 1,
    ACTIONS(419), 1,
      sym_string,
  [4218] = 1,
    ACTIONS(421), 1,
      anon_sym_EQ,
  [4222] = 1,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [4226] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
  [4230] = 1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [4234] = 1,
    ACTIONS(429), 1,
      sym__id,
  [4238] = 1,
    ACTIONS(431), 1,
      anon_sym_COMMA,
  [4242] = 1,
    ACTIONS(433), 1,
      sym__id,
  [4246] = 1,
    ACTIONS(435), 1,
      sym__id,
  [4250] = 1,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 370,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 518,
  [SMALL_STATE(10)] = 592,
  [SMALL_STATE(11)] = 666,
  [SMALL_STATE(12)] = 740,
  [SMALL_STATE(13)] = 814,
  [SMALL_STATE(14)] = 885,
  [SMALL_STATE(15)] = 956,
  [SMALL_STATE(16)] = 1027,
  [SMALL_STATE(17)] = 1098,
  [SMALL_STATE(18)] = 1169,
  [SMALL_STATE(19)] = 1240,
  [SMALL_STATE(20)] = 1304,
  [SMALL_STATE(21)] = 1368,
  [SMALL_STATE(22)] = 1432,
  [SMALL_STATE(23)] = 1496,
  [SMALL_STATE(24)] = 1560,
  [SMALL_STATE(25)] = 1624,
  [SMALL_STATE(26)] = 1688,
  [SMALL_STATE(27)] = 1752,
  [SMALL_STATE(28)] = 1816,
  [SMALL_STATE(29)] = 1880,
  [SMALL_STATE(30)] = 1919,
  [SMALL_STATE(31)] = 1962,
  [SMALL_STATE(32)] = 2013,
  [SMALL_STATE(33)] = 2062,
  [SMALL_STATE(34)] = 2109,
  [SMALL_STATE(35)] = 2164,
  [SMALL_STATE(36)] = 2209,
  [SMALL_STATE(37)] = 2270,
  [SMALL_STATE(38)] = 2310,
  [SMALL_STATE(39)] = 2350,
  [SMALL_STATE(40)] = 2390,
  [SMALL_STATE(41)] = 2430,
  [SMALL_STATE(42)] = 2470,
  [SMALL_STATE(43)] = 2523,
  [SMALL_STATE(44)] = 2572,
  [SMALL_STATE(45)] = 2631,
  [SMALL_STATE(46)] = 2666,
  [SMALL_STATE(47)] = 2707,
  [SMALL_STATE(48)] = 2750,
  [SMALL_STATE(49)] = 2795,
  [SMALL_STATE(50)] = 2842,
  [SMALL_STATE(51)] = 2876,
  [SMALL_STATE(52)] = 2910,
  [SMALL_STATE(53)] = 2944,
  [SMALL_STATE(54)] = 2978,
  [SMALL_STATE(55)] = 3012,
  [SMALL_STATE(56)] = 3046,
  [SMALL_STATE(57)] = 3080,
  [SMALL_STATE(58)] = 3114,
  [SMALL_STATE(59)] = 3162,
  [SMALL_STATE(60)] = 3210,
  [SMALL_STATE(61)] = 3244,
  [SMALL_STATE(62)] = 3278,
  [SMALL_STATE(63)] = 3301,
  [SMALL_STATE(64)] = 3324,
  [SMALL_STATE(65)] = 3347,
  [SMALL_STATE(66)] = 3378,
  [SMALL_STATE(67)] = 3409,
  [SMALL_STATE(68)] = 3434,
  [SMALL_STATE(69)] = 3450,
  [SMALL_STATE(70)] = 3466,
  [SMALL_STATE(71)] = 3482,
  [SMALL_STATE(72)] = 3498,
  [SMALL_STATE(73)] = 3517,
  [SMALL_STATE(74)] = 3530,
  [SMALL_STATE(75)] = 3543,
  [SMALL_STATE(76)] = 3564,
  [SMALL_STATE(77)] = 3581,
  [SMALL_STATE(78)] = 3596,
  [SMALL_STATE(79)] = 3609,
  [SMALL_STATE(80)] = 3630,
  [SMALL_STATE(81)] = 3643,
  [SMALL_STATE(82)] = 3660,
  [SMALL_STATE(83)] = 3675,
  [SMALL_STATE(84)] = 3690,
  [SMALL_STATE(85)] = 3705,
  [SMALL_STATE(86)] = 3720,
  [SMALL_STATE(87)] = 3737,
  [SMALL_STATE(88)] = 3759,
  [SMALL_STATE(89)] = 3771,
  [SMALL_STATE(90)] = 3793,
  [SMALL_STATE(91)] = 3815,
  [SMALL_STATE(92)] = 3837,
  [SMALL_STATE(93)] = 3847,
  [SMALL_STATE(94)] = 3869,
  [SMALL_STATE(95)] = 3891,
  [SMALL_STATE(96)] = 3903,
  [SMALL_STATE(97)] = 3920,
  [SMALL_STATE(98)] = 3937,
  [SMALL_STATE(99)] = 3950,
  [SMALL_STATE(100)] = 3961,
  [SMALL_STATE(101)] = 3972,
  [SMALL_STATE(102)] = 3989,
  [SMALL_STATE(103)] = 4005,
  [SMALL_STATE(104)] = 4018,
  [SMALL_STATE(105)] = 4031,
  [SMALL_STATE(106)] = 4044,
  [SMALL_STATE(107)] = 4054,
  [SMALL_STATE(108)] = 4064,
  [SMALL_STATE(109)] = 4074,
  [SMALL_STATE(110)] = 4084,
  [SMALL_STATE(111)] = 4094,
  [SMALL_STATE(112)] = 4104,
  [SMALL_STATE(113)] = 4114,
  [SMALL_STATE(114)] = 4124,
  [SMALL_STATE(115)] = 4134,
  [SMALL_STATE(116)] = 4141,
  [SMALL_STATE(117)] = 4146,
  [SMALL_STATE(118)] = 4150,
  [SMALL_STATE(119)] = 4154,
  [SMALL_STATE(120)] = 4158,
  [SMALL_STATE(121)] = 4162,
  [SMALL_STATE(122)] = 4166,
  [SMALL_STATE(123)] = 4170,
  [SMALL_STATE(124)] = 4174,
  [SMALL_STATE(125)] = 4178,
  [SMALL_STATE(126)] = 4182,
  [SMALL_STATE(127)] = 4186,
  [SMALL_STATE(128)] = 4190,
  [SMALL_STATE(129)] = 4194,
  [SMALL_STATE(130)] = 4198,
  [SMALL_STATE(131)] = 4202,
  [SMALL_STATE(132)] = 4206,
  [SMALL_STATE(133)] = 4210,
  [SMALL_STATE(134)] = 4214,
  [SMALL_STATE(135)] = 4218,
  [SMALL_STATE(136)] = 4222,
  [SMALL_STATE(137)] = 4226,
  [SMALL_STATE(138)] = 4230,
  [SMALL_STATE(139)] = 4234,
  [SMALL_STATE(140)] = 4238,
  [SMALL_STATE(141)] = 4242,
  [SMALL_STATE(142)] = 4246,
  [SMALL_STATE(143)] = 4250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(142),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 10),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 13),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 13),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(110),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(64),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(64),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(100),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(139),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(82),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(78),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 5, .production_id = 12),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with, 5, .production_id = 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with, 4, .production_id = 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(131),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(100),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(107),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(14),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 8),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
