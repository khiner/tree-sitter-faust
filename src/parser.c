#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DOT = 5,
  anon_sym_DASH = 6,
  anon_sym_BSLASH = 7,
  anon_sym_environment = 8,
  anon_sym_COMMA = 9,
  anon_sym_TILDE = 10,
  anon_sym_COLON = 11,
  anon_sym_LT_COLON = 12,
  anon_sym_COLON_GT = 13,
  sym_par = 14,
  sym_seq = 15,
  sym_sum = 16,
  sym_prod = 17,
  anon_sym_with = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
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
  anon_sym_singleprecision = 61,
  anon_sym_doubleprecision = 62,
  anon_sym_quadprecision = 63,
  anon_sym_fixedpointprecision = 64,
  sym_string = 65,
  anon_sym_COLON_COLON = 66,
  sym__id = 67,
  sym_comment = 68,
  sym_program = 69,
  sym__statement = 70,
  sym__definition = 71,
  sym_definition = 72,
  sym_function_definition = 73,
  sym__expression = 74,
  sym__infix_expression = 75,
  sym_infix = 76,
  sym_prefix = 77,
  sym_modifier = 78,
  sym_access = 79,
  sym__primitive = 80,
  sym_parameters = 81,
  sym__args = 82,
  sym__argument = 83,
  sym_recursive_arg = 84,
  sym_sequential_arg = 85,
  sym_split_arg = 86,
  sym_merge_arg = 87,
  sym_iteration = 88,
  sym_with_environment = 89,
  sym_environment = 90,
  sym__op = 91,
  sym__modifier_op = 92,
  sym_sub_op = 93,
  sym_one_sample_delay_op = 94,
  sym__number = 95,
  sym_documentation = 96,
  sym__doc_content = 97,
  sym__special_doc_tag = 98,
  sym_file_import = 99,
  sym_global_metadata = 100,
  sym_function_metadata = 101,
  sym__binary_composition = 102,
  sym_recursive = 103,
  sym_sequential = 104,
  sym_split = 105,
  sym_merge = 106,
  sym_parallel = 107,
  sym_variant = 108,
  sym_identifier = 109,
  aux_sym_program_repeat1 = 110,
  aux_sym__statement_repeat1 = 111,
  aux_sym_parameters_repeat1 = 112,
  aux_sym__args_repeat1 = 113,
  aux_sym_environment_repeat1 = 114,
  aux_sym_documentation_repeat1 = 115,
  aux_sym_identifier_repeat1 = 116,
  alias_sym_parameter = 117,
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
  [anon_sym_environment] = "environment",
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
  [sym_with_environment] = "with_environment",
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
  [anon_sym_environment] = anon_sym_environment,
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
  [sym_with_environment] = sym_with_environment,
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
  [anon_sym_environment] = {
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
  [sym_with_environment] = {
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
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 4},
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
    {field_expression, 0},
    {field_local_environment, 2},
  [11] =
    {field_definition, 2},
    {field_environment, 0},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_operand, 2},
    {field_operator, 0},
  [18] =
    {field_name, 0},
    {field_value, 5},
  [20] =
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
  [9] = {
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
  [25] = 20,
  [26] = 23,
  [27] = 21,
  [28] = 19,
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
  [42] = 30,
  [43] = 43,
  [44] = 36,
  [45] = 31,
  [46] = 32,
  [47] = 47,
  [48] = 33,
  [49] = 35,
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
  [75] = 37,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 39,
  [84] = 40,
  [85] = 38,
  [86] = 74,
  [87] = 41,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 43,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 82,
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
  [141] = 141,
  [142] = 142,
  [143] = 137,
  [144] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '^') ADVANCE(134);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 'q') ADVANCE(276);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(211);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '^') ADVANCE(134);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '^') ADVANCE(134);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(211);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '^') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '^') ADVANCE(134);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == '^') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(135);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(283);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(282);
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
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'q') ADVANCE(276);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(164);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(166);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
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
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(120);
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
      if (lookahead == 'r') ADVANCE(137);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(284);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'q') ADVANCE(276);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_mem_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'v') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(283);
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
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
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
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 98},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 98},
  [72] = {.lex_state = 98},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 98},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 98},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 15},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
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
  [131] = {.lex_state = 98},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
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
    [anon_sym_environment] = ACTIONS(1),
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
    [sym_program] = STATE(141),
    [sym__statement] = STATE(60),
    [sym__definition] = STATE(140),
    [sym_definition] = STATE(140),
    [sym_function_definition] = STATE(140),
    [sym_documentation] = STATE(60),
    [sym_file_import] = STATE(140),
    [sym_global_metadata] = STATE(140),
    [sym_function_metadata] = STATE(140),
    [sym_variant] = STATE(62),
    [sym_identifier] = STATE(118),
    [aux_sym_program_repeat1] = STATE(60),
    [aux_sym__statement_repeat1] = STATE(62),
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
  [0] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(90), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [77] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(91), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [154] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(80), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [231] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(79), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [308] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(95), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [385] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(78), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [462] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(88), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [539] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(96), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [616] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(77), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [693] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(76), 8,
      sym__expression,
      sym_with_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(29), 11,
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
    ACTIONS(31), 14,
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
  [770] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    STATE(139), 1,
      sym__args,
    ACTIONS(27), 4,
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
  [847] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
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
  [921] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
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
  [995] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(103), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
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
  [1069] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
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
  [1143] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(100), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
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
  [1217] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
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
  [1291] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
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
  [1358] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
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
  [1425] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
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
  [1492] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
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
  [1559] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(59), 11,
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
    ACTIONS(61), 14,
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
  [1626] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(63), 11,
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
    ACTIONS(65), 14,
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
  [1693] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(67), 11,
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
    ACTIONS(69), 14,
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
  [1760] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(71), 11,
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
    ACTIONS(73), 14,
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
  [1827] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(75), 11,
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
    STATE(45), 11,
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
    ACTIONS(77), 14,
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
  [1894] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(79), 11,
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
    STATE(46), 11,
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
    ACTIONS(81), 14,
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
  [1961] = 2,
    ACTIONS(83), 17,
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
    ACTIONS(85), 18,
      anon_sym_DASH,
      anon_sym_environment,
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
  [2001] = 5,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(85), 5,
      anon_sym_COLON,
      anon_sym_with,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(83), 24,
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
  [2044] = 9,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_exp_op,
    ACTIONS(97), 1,
      sym_delay_op,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 7,
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
      anon_sym_with,
      sym_add_op,
      sym_or_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2095] = 8,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_exp_op,
    ACTIONS(97), 1,
      sym_delay_op,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
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
  [2144] = 7,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      sym_delay_op,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
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
  [2191] = 14,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_exp_op,
    ACTIONS(97), 1,
      sym_delay_op,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(21), 1,
      sym_sub_op,
    ACTIONS(109), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(111), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(113), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(93), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(101), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [2252] = 11,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_exp_op,
    ACTIONS(97), 1,
      sym_delay_op,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym_sub_op,
    ACTIONS(109), 2,
      sym_add_op,
      sym_or_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 7,
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
      anon_sym_with,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2307] = 6,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
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
  [2352] = 4,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(117), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(115), 26,
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
  [2392] = 4,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(123), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(121), 26,
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
  [2432] = 4,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(123), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(121), 26,
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
  [2472] = 4,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(127), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(125), 26,
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
  [2512] = 4,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(131), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(129), 26,
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
  [2552] = 5,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(85), 4,
      anon_sym_COLON,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(83), 23,
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
  [2593] = 2,
    ACTIONS(131), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(129), 27,
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
  [2628] = 6,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 22,
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
  [2671] = 9,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(27), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
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
    ACTIONS(87), 13,
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
  [2720] = 8,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(27), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 20,
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
  [2767] = 14,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    ACTIONS(144), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_sub_op,
    ACTIONS(146), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(148), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(150), 4,
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
  [2826] = 7,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(27), 1,
      sym_sub_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 21,
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
  [2871] = 11,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(138), 1,
      sym_exp_op,
    ACTIONS(140), 1,
      sym_delay_op,
    STATE(27), 1,
      sym_sub_op,
    ACTIONS(146), 2,
      sym_add_op,
      sym_or_op,
    STATE(59), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
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
    ACTIONS(87), 10,
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
  [2924] = 2,
    ACTIONS(154), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(152), 26,
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
  [2958] = 2,
    ACTIONS(158), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(156), 26,
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
  [2992] = 2,
    ACTIONS(162), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(160), 26,
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
  [3026] = 2,
    ACTIONS(166), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(164), 26,
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
  [3060] = 2,
    ACTIONS(170), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(168), 26,
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
  [3094] = 2,
    ACTIONS(174), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(172), 26,
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
  [3128] = 2,
    ACTIONS(178), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(176), 26,
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
  [3162] = 2,
    ACTIONS(182), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(180), 26,
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
  [3196] = 2,
    ACTIONS(186), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(184), 26,
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
  [3230] = 2,
    ACTIONS(190), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(188), 26,
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
  [3264] = 12,
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
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym_comment,
    STATE(118), 1,
      sym_identifier,
    STATE(62), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(61), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(140), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3312] = 12,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(201), 1,
      anon_sym_import,
    ACTIONS(204), 1,
      anon_sym_declare,
    ACTIONS(210), 1,
      anon_sym_COLON_COLON,
    ACTIONS(213), 1,
      sym__id,
    ACTIONS(216), 1,
      sym_comment,
    STATE(118), 1,
      sym_identifier,
    STATE(62), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(61), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(207), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(140), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3360] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(118), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
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
  [3394] = 8,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      anon_sym_COLON_COLON,
    ACTIONS(227), 1,
      sym__id,
    STATE(63), 1,
      aux_sym_environment_repeat1,
    STATE(118), 1,
      sym_identifier,
    STATE(69), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(125), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(221), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3425] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_environment_repeat1,
    STATE(118), 1,
      sym_identifier,
    STATE(69), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(125), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(232), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3456] = 4,
    ACTIONS(234), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(236), 1,
      sym__doc_char,
    STATE(66), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(238), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3479] = 4,
    ACTIONS(240), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(242), 1,
      sym__doc_char,
    STATE(67), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(244), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3502] = 4,
    ACTIONS(246), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(248), 1,
      sym__doc_char,
    STATE(67), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(251), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3525] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_environment_repeat1,
    STATE(118), 1,
      sym_identifier,
    STATE(69), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(125), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(232), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3556] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(118), 1,
      sym_identifier,
    STATE(86), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(133), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(232), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3581] = 2,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(258), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3597] = 2,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(262), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3613] = 2,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(266), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3629] = 2,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(270), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3645] = 4,
    ACTIONS(277), 1,
      anon_sym_COLON_COLON,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(272), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(274), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3664] = 3,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    STATE(83), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(115), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3679] = 4,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(281), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3696] = 2,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(289), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3709] = 4,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(293), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3726] = 6,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(297), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
  [3747] = 6,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(303), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
  [3768] = 2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(305), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
  [3781] = 2,
    ACTIONS(311), 1,
      anon_sym_COLON_COLON,
    ACTIONS(309), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3794] = 3,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    STATE(87), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(121), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3809] = 3,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    STATE(87), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(125), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3824] = 3,
    ACTIONS(279), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(121), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3839] = 4,
    ACTIONS(272), 1,
      sym__id,
    ACTIONS(277), 1,
      anon_sym_COLON_COLON,
    STATE(86), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(313), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3856] = 3,
    ACTIONS(316), 1,
      anon_sym_COLON_COLON,
    STATE(87), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(129), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3871] = 7,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      anon_sym_with,
  [3893] = 7,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LT_COLON,
    ACTIONS(333), 1,
      anon_sym_COLON_GT,
    STATE(109), 1,
      aux_sym__args_repeat1,
  [3915] = 7,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(321), 1,
      anon_sym_with,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
  [3937] = 7,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(321), 1,
      anon_sym_with,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [3959] = 2,
    ACTIONS(219), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(339), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3971] = 1,
    ACTIONS(129), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [3981] = 2,
    ACTIONS(341), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(343), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3993] = 7,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(321), 1,
      anon_sym_with,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
  [4015] = 7,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_LT_COLON,
    ACTIONS(301), 1,
      anon_sym_COLON_GT,
    ACTIONS(321), 1,
      anon_sym_with,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [4037] = 2,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(349), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4048] = 2,
    ACTIONS(311), 1,
      anon_sym_COLON_COLON,
    ACTIONS(309), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4059] = 5,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LT_COLON,
    ACTIONS(333), 1,
      anon_sym_COLON_GT,
    ACTIONS(353), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4076] = 3,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(355), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4089] = 5,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LT_COLON,
    ACTIONS(333), 1,
      anon_sym_COLON_GT,
    ACTIONS(357), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4106] = 5,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LT_COLON,
    ACTIONS(333), 1,
      anon_sym_COLON_GT,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4123] = 5,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_LT_COLON,
    ACTIONS(333), 1,
      anon_sym_COLON_GT,
    ACTIONS(361), 1,
      anon_sym_COMMA,
  [4139] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(114), 1,
      sym_identifier,
    STATE(130), 1,
      sym_parameters,
  [4152] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    ACTIONS(365), 1,
      sym_string,
    STATE(121), 1,
      sym_identifier,
  [4165] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(114), 1,
      sym_identifier,
    STATE(126), 1,
      sym_parameters,
  [4178] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(123), 1,
      sym_identifier,
  [4188] = 3,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_parameters_repeat1,
  [4198] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym__args_repeat1,
  [4208] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(373), 1,
      sym__id,
    STATE(53), 1,
      sym_identifier,
  [4218] = 3,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym__args_repeat1,
  [4228] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(105), 1,
      sym_identifier,
  [4238] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(117), 1,
      sym_identifier,
  [4248] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_parameters_repeat1,
  [4258] = 3,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_parameters_repeat1,
  [4268] = 2,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_environment,
  [4275] = 1,
    ACTIONS(387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4280] = 2,
    ACTIONS(389), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [4287] = 2,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_environment,
  [4294] = 1,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [4298] = 1,
    ACTIONS(395), 1,
      sym_string,
  [4302] = 1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
  [4306] = 1,
    ACTIONS(399), 1,
      anon_sym_COMMA,
  [4310] = 1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [4314] = 1,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [4318] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [4322] = 1,
    ACTIONS(407), 1,
      anon_sym_EQ,
  [4326] = 1,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [4330] = 1,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [4334] = 1,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [4338] = 1,
    ACTIONS(415), 1,
      anon_sym_DOT,
  [4342] = 1,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
  [4346] = 1,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [4350] = 1,
    ACTIONS(421), 1,
      anon_sym_SEMI,
  [4354] = 1,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [4358] = 1,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [4362] = 1,
    ACTIONS(427), 1,
      sym__id,
  [4366] = 1,
    ACTIONS(429), 1,
      sym_string,
  [4370] = 1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [4374] = 1,
    ACTIONS(433), 1,
      anon_sym_SEMI,
  [4378] = 1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [4382] = 1,
    ACTIONS(437), 1,
      sym__id,
  [4386] = 1,
    ACTIONS(439), 1,
      sym__id,
  [4390] = 1,
    ACTIONS(441), 1,
      sym__id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 462,
  [SMALL_STATE(9)] = 539,
  [SMALL_STATE(10)] = 616,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 770,
  [SMALL_STATE(13)] = 847,
  [SMALL_STATE(14)] = 921,
  [SMALL_STATE(15)] = 995,
  [SMALL_STATE(16)] = 1069,
  [SMALL_STATE(17)] = 1143,
  [SMALL_STATE(18)] = 1217,
  [SMALL_STATE(19)] = 1291,
  [SMALL_STATE(20)] = 1358,
  [SMALL_STATE(21)] = 1425,
  [SMALL_STATE(22)] = 1492,
  [SMALL_STATE(23)] = 1559,
  [SMALL_STATE(24)] = 1626,
  [SMALL_STATE(25)] = 1693,
  [SMALL_STATE(26)] = 1760,
  [SMALL_STATE(27)] = 1827,
  [SMALL_STATE(28)] = 1894,
  [SMALL_STATE(29)] = 1961,
  [SMALL_STATE(30)] = 2001,
  [SMALL_STATE(31)] = 2044,
  [SMALL_STATE(32)] = 2095,
  [SMALL_STATE(33)] = 2144,
  [SMALL_STATE(34)] = 2191,
  [SMALL_STATE(35)] = 2252,
  [SMALL_STATE(36)] = 2307,
  [SMALL_STATE(37)] = 2352,
  [SMALL_STATE(38)] = 2392,
  [SMALL_STATE(39)] = 2432,
  [SMALL_STATE(40)] = 2472,
  [SMALL_STATE(41)] = 2512,
  [SMALL_STATE(42)] = 2552,
  [SMALL_STATE(43)] = 2593,
  [SMALL_STATE(44)] = 2628,
  [SMALL_STATE(45)] = 2671,
  [SMALL_STATE(46)] = 2720,
  [SMALL_STATE(47)] = 2767,
  [SMALL_STATE(48)] = 2826,
  [SMALL_STATE(49)] = 2871,
  [SMALL_STATE(50)] = 2924,
  [SMALL_STATE(51)] = 2958,
  [SMALL_STATE(52)] = 2992,
  [SMALL_STATE(53)] = 3026,
  [SMALL_STATE(54)] = 3060,
  [SMALL_STATE(55)] = 3094,
  [SMALL_STATE(56)] = 3128,
  [SMALL_STATE(57)] = 3162,
  [SMALL_STATE(58)] = 3196,
  [SMALL_STATE(59)] = 3230,
  [SMALL_STATE(60)] = 3264,
  [SMALL_STATE(61)] = 3312,
  [SMALL_STATE(62)] = 3360,
  [SMALL_STATE(63)] = 3394,
  [SMALL_STATE(64)] = 3425,
  [SMALL_STATE(65)] = 3456,
  [SMALL_STATE(66)] = 3479,
  [SMALL_STATE(67)] = 3502,
  [SMALL_STATE(68)] = 3525,
  [SMALL_STATE(69)] = 3556,
  [SMALL_STATE(70)] = 3581,
  [SMALL_STATE(71)] = 3597,
  [SMALL_STATE(72)] = 3613,
  [SMALL_STATE(73)] = 3629,
  [SMALL_STATE(74)] = 3645,
  [SMALL_STATE(75)] = 3664,
  [SMALL_STATE(76)] = 3679,
  [SMALL_STATE(77)] = 3696,
  [SMALL_STATE(78)] = 3709,
  [SMALL_STATE(79)] = 3726,
  [SMALL_STATE(80)] = 3747,
  [SMALL_STATE(81)] = 3768,
  [SMALL_STATE(82)] = 3781,
  [SMALL_STATE(83)] = 3794,
  [SMALL_STATE(84)] = 3809,
  [SMALL_STATE(85)] = 3824,
  [SMALL_STATE(86)] = 3839,
  [SMALL_STATE(87)] = 3856,
  [SMALL_STATE(88)] = 3871,
  [SMALL_STATE(89)] = 3893,
  [SMALL_STATE(90)] = 3915,
  [SMALL_STATE(91)] = 3937,
  [SMALL_STATE(92)] = 3959,
  [SMALL_STATE(93)] = 3971,
  [SMALL_STATE(94)] = 3981,
  [SMALL_STATE(95)] = 3993,
  [SMALL_STATE(96)] = 4015,
  [SMALL_STATE(97)] = 4037,
  [SMALL_STATE(98)] = 4048,
  [SMALL_STATE(99)] = 4059,
  [SMALL_STATE(100)] = 4076,
  [SMALL_STATE(101)] = 4089,
  [SMALL_STATE(102)] = 4106,
  [SMALL_STATE(103)] = 4123,
  [SMALL_STATE(104)] = 4139,
  [SMALL_STATE(105)] = 4152,
  [SMALL_STATE(106)] = 4165,
  [SMALL_STATE(107)] = 4178,
  [SMALL_STATE(108)] = 4188,
  [SMALL_STATE(109)] = 4198,
  [SMALL_STATE(110)] = 4208,
  [SMALL_STATE(111)] = 4218,
  [SMALL_STATE(112)] = 4228,
  [SMALL_STATE(113)] = 4238,
  [SMALL_STATE(114)] = 4248,
  [SMALL_STATE(115)] = 4258,
  [SMALL_STATE(116)] = 4268,
  [SMALL_STATE(117)] = 4275,
  [SMALL_STATE(118)] = 4280,
  [SMALL_STATE(119)] = 4287,
  [SMALL_STATE(120)] = 4294,
  [SMALL_STATE(121)] = 4298,
  [SMALL_STATE(122)] = 4302,
  [SMALL_STATE(123)] = 4306,
  [SMALL_STATE(124)] = 4310,
  [SMALL_STATE(125)] = 4314,
  [SMALL_STATE(126)] = 4318,
  [SMALL_STATE(127)] = 4322,
  [SMALL_STATE(128)] = 4326,
  [SMALL_STATE(129)] = 4330,
  [SMALL_STATE(130)] = 4334,
  [SMALL_STATE(131)] = 4338,
  [SMALL_STATE(132)] = 4342,
  [SMALL_STATE(133)] = 4346,
  [SMALL_STATE(134)] = 4350,
  [SMALL_STATE(135)] = 4354,
  [SMALL_STATE(136)] = 4358,
  [SMALL_STATE(137)] = 4362,
  [SMALL_STATE(138)] = 4366,
  [SMALL_STATE(139)] = 4370,
  [SMALL_STATE(140)] = 4374,
  [SMALL_STATE(141)] = 4378,
  [SMALL_STATE(142)] = 4382,
  [SMALL_STATE(143)] = 4386,
  [SMALL_STATE(144)] = 4390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(143),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 10),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 10),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 12),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 12),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(124),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(112),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(98),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(144),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(75),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(67),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(67),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(82),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(98),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(137),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(16),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(113),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [435] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
