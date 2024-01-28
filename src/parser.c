#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 169
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 15

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
  anon_sym_letrec = 21,
  anon_sym_where = 22,
  anon_sym_SQUOTE = 23,
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
  sym_wire = 44,
  sym_cut = 45,
  sym_mem = 46,
  sym_int = 47,
  sym_real = 48,
  anon_sym_LTmdoc_GT = 49,
  anon_sym_LT_SLASHmdoc_GT = 50,
  sym__doc_char = 51,
  anon_sym_LTnotice_SLASH_GT = 52,
  anon_sym_LTnotice_SLASH_GT2 = 53,
  anon_sym_LTequation_GT = 54,
  anon_sym_LT_SLASHequation_GT = 55,
  anon_sym_LTdiagram_GT = 56,
  anon_sym_LT_SLASHdiagram_GT = 57,
  anon_sym_LTmetadata_GT = 58,
  anon_sym_LT_SLASHmetadata_GT = 59,
  anon_sym_LTlisting = 60,
  anon_sym_import = 61,
  anon_sym_declare = 62,
  anon_sym_singleprecision = 63,
  anon_sym_doubleprecision = 64,
  anon_sym_quadprecision = 65,
  anon_sym_fixedpointprecision = 66,
  sym_string = 67,
  anon_sym_COLON_COLON = 68,
  sym__id = 69,
  sym_comment = 70,
  sym_program = 71,
  sym__statement = 72,
  sym__definition = 73,
  sym_definition = 74,
  sym_function_definition = 75,
  sym__expression = 76,
  sym__infix_expression = 77,
  sym_infix = 78,
  sym_function_call = 79,
  sym_prefix = 80,
  sym_modifier = 81,
  sym_access = 82,
  sym__primitive = 83,
  sym_parameters = 84,
  sym_arguments = 85,
  sym__args = 86,
  sym__argument = 87,
  sym_recursive_arg = 88,
  sym_sequential_arg = 89,
  sym_split_arg = 90,
  sym_merge_arg = 91,
  sym_iteration = 92,
  sym_with_environment = 93,
  sym_environment = 94,
  sym_letrec_environment = 95,
  sym_rec_environment = 96,
  sym_recinition = 97,
  sym__unary_op = 98,
  sym__binary_op = 99,
  sym__modifier_op = 100,
  sym_sub_op = 101,
  sym_one_sample_delay_op = 102,
  sym__number = 103,
  sym_documentation = 104,
  sym__doc_content = 105,
  sym__special_doc_tag = 106,
  sym_file_import = 107,
  sym_global_metadata = 108,
  sym_function_metadata = 109,
  sym__binary_composition = 110,
  sym_recursive = 111,
  sym_sequential = 112,
  sym_split = 113,
  sym_merge = 114,
  sym_parallel = 115,
  sym_variant = 116,
  sym_identifier = 117,
  aux_sym_program_repeat1 = 118,
  aux_sym__statement_repeat1 = 119,
  aux_sym_parameters_repeat1 = 120,
  aux_sym_arguments_repeat1 = 121,
  aux_sym_environment_repeat1 = 122,
  aux_sym_rec_environment_repeat1 = 123,
  aux_sym_documentation_repeat1 = 124,
  aux_sym_identifier_repeat1 = 125,
  alias_sym_parameter = 126,
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
  [anon_sym_letrec] = "letrec",
  [anon_sym_where] = "where",
  [anon_sym_SQUOTE] = "'",
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
  [sym_wire] = "wire",
  [sym_cut] = "cut",
  [sym_mem] = "mem",
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
  [sym_function_call] = "function_call",
  [sym_prefix] = "prefix",
  [sym_modifier] = "modifier",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
  [sym_parameters] = "parameters",
  [sym_arguments] = "arguments",
  [sym__args] = "_args",
  [sym__argument] = "_argument",
  [sym_recursive_arg] = "recursive_arg",
  [sym_sequential_arg] = "sequential_arg",
  [sym_split_arg] = "split_arg",
  [sym_merge_arg] = "merge_arg",
  [sym_iteration] = "iteration",
  [sym_with_environment] = "with_environment",
  [sym_environment] = "environment",
  [sym_letrec_environment] = "letrec_environment",
  [sym_rec_environment] = "rec_environment",
  [sym_recinition] = "recinition",
  [sym__unary_op] = "_unary_op",
  [sym__binary_op] = "_binary_op",
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
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_rec_environment_repeat1] = "rec_environment_repeat1",
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
  [anon_sym_letrec] = anon_sym_letrec,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
  [sym_mem] = sym_mem,
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
  [sym_function_call] = sym_function_call,
  [sym_prefix] = sym_prefix,
  [sym_modifier] = sym_modifier,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
  [sym_parameters] = sym_parameters,
  [sym_arguments] = sym_arguments,
  [sym__args] = sym__args,
  [sym__argument] = sym__argument,
  [sym_recursive_arg] = sym_recursive_arg,
  [sym_sequential_arg] = sym_sequential_arg,
  [sym_split_arg] = sym_split_arg,
  [sym_merge_arg] = sym_merge_arg,
  [sym_iteration] = sym_iteration,
  [sym_with_environment] = sym_with_environment,
  [sym_environment] = sym_environment,
  [sym_letrec_environment] = sym_letrec_environment,
  [sym_rec_environment] = sym_rec_environment,
  [sym_recinition] = sym_recinition,
  [sym__unary_op] = sym__unary_op,
  [sym__binary_op] = sym__binary_op,
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
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_rec_environment_repeat1] = aux_sym_rec_environment_repeat1,
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
  [anon_sym_letrec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_wire] = {
    .visible = true,
    .named = true,
  },
  [sym_cut] = {
    .visible = true,
    .named = true,
  },
  [sym_mem] = {
    .visible = true,
    .named = true,
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
  [sym_function_call] = {
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
  [sym_arguments] = {
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
  [sym_letrec_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_rec_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_recinition] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_op] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_op] = {
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rec_environment_repeat1] = {
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
  field_callee = 1,
  field_current_iter = 2,
  field_definition = 3,
  field_environment = 4,
  field_expression = 5,
  field_function_name = 6,
  field_key = 7,
  field_left = 8,
  field_local_environment = 9,
  field_name = 10,
  field_num_iters = 11,
  field_operand = 12,
  field_operator = 13,
  field_right = 14,
  field_type = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_callee] = "callee",
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
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 4},
  [14] = {.index = 25, .length = 2},
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
    {field_callee, 0},
  [17] =
    {field_operand, 2},
    {field_operator, 0},
  [19] =
    {field_name, 0},
    {field_value, 5},
  [21] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [25] =
    {field_expression, 3},
    {field_name, 1},
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
  [24] = 24,
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 21,
  [29] = 27,
  [30] = 22,
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
  [47] = 33,
  [48] = 48,
  [49] = 49,
  [50] = 34,
  [51] = 35,
  [52] = 38,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 36,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 32,
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
  [94] = 40,
  [95] = 95,
  [96] = 41,
  [97] = 42,
  [98] = 39,
  [99] = 99,
  [100] = 82,
  [101] = 101,
  [102] = 43,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 44,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 106,
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
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 164,
  [167] = 156,
  [168] = 168,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(201);
      if (lookahead == '!') ADVANCE(263);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '&') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'q') ADVANCE(188);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(263);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '&') ADVANCE(246);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(240);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(252);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == '_') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '&') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'w') ADVANCE(339);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '&') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '&') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '&') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(239);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == '@') ADVANCE(258);
      if (lookahead == '^') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(198);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(406);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(296);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'q') ADVANCE(399);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(270);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(271);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(274);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(279);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(276);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(280);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(275);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(277);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(281);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 88:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 147:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'q') ADVANCE(221);
      END_STATE();
    case 153:
      if (lookahead == 'q') ADVANCE(190);
      END_STATE();
    case 154:
      if (lookahead == 'q') ADVANCE(191);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 172:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 192:
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 193:
      if (lookahead == 'x') ADVANCE(259);
      END_STATE();
    case 194:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 195:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 198:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 199:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(406);
      if (lookahead == '\r') ADVANCE(407);
      END_STATE();
    case 200:
      if (eof) ADVANCE(201);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(311);
      if (lookahead == 'f') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'q') ADVANCE(399);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(200)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(296);
      if (lookahead == '>') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(249);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '>') ADVANCE(250);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'o') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'v') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(199);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 200},
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
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
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
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 200},
  [65] = {.lex_state = 200},
  [66] = {.lex_state = 200},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 200},
  [79] = {.lex_state = 200},
  [80] = {.lex_state = 200},
  [81] = {.lex_state = 200},
  [82] = {.lex_state = 200},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 200},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 200},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 0},
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
    [anon_sym_letrec] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
    [sym_mem] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(162),
    [sym__statement] = STATE(64),
    [sym__definition] = STATE(161),
    [sym_definition] = STATE(161),
    [sym_function_definition] = STATE(161),
    [sym_documentation] = STATE(64),
    [sym_file_import] = STATE(161),
    [sym_global_metadata] = STATE(161),
    [sym_function_metadata] = STATE(161),
    [sym_variant] = STATE(66),
    [sym_identifier] = STATE(137),
    [aux_sym_program_repeat1] = STATE(64),
    [aux_sym__statement_repeat1] = STATE(66),
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
  [0] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(104), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [86] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(99), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [172] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(101), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [258] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(95), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [344] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(105), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [430] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(103), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [516] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(84), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [602] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(93), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [688] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(92), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [774] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(91), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [860] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(35), 1,
      sym_real,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(33), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(86), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [946] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(157), 1,
      sym__args,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(109), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1031] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(165), 1,
      sym_arguments,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(110), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1116] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(113), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1198] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(115), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1280] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(121), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1362] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(116), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1444] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(117), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1526] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(43), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(114), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(45), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1608] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(47), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(50), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1683] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(53), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(51), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(35), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1758] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(55), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(52), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1833] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(59), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(56), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1908] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(65), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(63), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(38), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1983] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(69), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(67), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(36), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [2058] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(73), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(71), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(33), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [2133] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(77), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(75), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(34), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [2208] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(79), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [2283] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      sym_real,
    STATE(49), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(83), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(29), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(51), 10,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [2358] = 2,
    ACTIONS(87), 17,
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
    ACTIONS(89), 18,
      anon_sym_DASH,
      anon_sym_environment,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
      sym__id,
  [2398] = 5,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(48), 1,
      sym_identifier,
    ACTIONS(89), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
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
  [2442] = 6,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
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
  [2488] = 11,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_exp_op,
    ACTIONS(107), 1,
      sym_delay_op,
    STATE(26), 1,
      sym_sub_op,
    ACTIONS(101), 2,
      sym_add_op,
      sym_or_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(103), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(91), 13,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2544] = 7,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_delay_op,
    STATE(26), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
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
  [2592] = 9,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym_exp_op,
    ACTIONS(107), 1,
      sym_delay_op,
    STATE(26), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(103), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(91), 16,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_add_op,
      sym_or_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2644] = 14,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      sym_exp_op,
    ACTIONS(107), 1,
      sym_delay_op,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym_sub_op,
    ACTIONS(101), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(115), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(117), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(103), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(109), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2706] = 8,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym_exp_op,
    ACTIONS(107), 1,
      sym_delay_op,
    STATE(26), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
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
  [2756] = 4,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(121), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(119), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [2797] = 4,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(128), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(126), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [2838] = 4,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    STATE(43), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(134), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(132), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [2879] = 4,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(134), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(132), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [2920] = 4,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(138), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(136), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [2961] = 2,
    ACTIONS(121), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(119), 28,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
      anon_sym_COLON_COLON,
  [2997] = 14,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(148), 1,
      sym_exp_op,
    ACTIONS(154), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    ACTIONS(144), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(150), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(152), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(140), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(146), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [3056] = 2,
    ACTIONS(158), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(156), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3091] = 6,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 22,
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
  [3134] = 2,
    ACTIONS(162), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(160), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3169] = 3,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(164), 26,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3206] = 11,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(148), 1,
      sym_exp_op,
    ACTIONS(154), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    ACTIONS(144), 2,
      sym_add_op,
      sym_or_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(146), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(91), 10,
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
  [3259] = 7,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 21,
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
  [3304] = 8,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      sym_exp_op,
    ACTIONS(154), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(91), 20,
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
  [3351] = 2,
    ACTIONS(172), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(170), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3386] = 2,
    ACTIONS(176), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(174), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3421] = 2,
    ACTIONS(180), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(178), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3456] = 9,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      sym_exp_op,
    ACTIONS(154), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    STATE(61), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(146), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(91), 13,
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
  [3505] = 2,
    ACTIONS(184), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(182), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3540] = 2,
    ACTIONS(188), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(186), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3575] = 2,
    ACTIONS(192), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(190), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3610] = 2,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(194), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3645] = 2,
    ACTIONS(200), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(198), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3680] = 2,
    ACTIONS(204), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(202), 27,
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
      anon_sym_letrec,
      anon_sym_SQUOTE,
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
  [3715] = 5,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(39), 1,
      sym__id,
    STATE(48), 1,
      sym_identifier,
    ACTIONS(89), 4,
      anon_sym_COLON,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
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
  [3756] = 12,
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
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      sym_comment,
    STATE(137), 1,
      sym_identifier,
    STATE(66), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(65), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(161), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3804] = 12,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(215), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_declare,
    ACTIONS(224), 1,
      anon_sym_COLON_COLON,
    ACTIONS(227), 1,
      sym__id,
    ACTIONS(230), 1,
      sym_comment,
    STATE(137), 1,
      sym_identifier,
    STATE(66), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(65), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(221), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(161), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3852] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(137), 1,
      sym_identifier,
    STATE(82), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(153), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3886] = 4,
    ACTIONS(233), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(235), 1,
      sym__doc_char,
    STATE(70), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(237), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3909] = 8,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    ACTIONS(247), 1,
      sym__id,
    STATE(68), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(241), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3940] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3971] = 4,
    ACTIONS(254), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(256), 1,
      sym__doc_char,
    STATE(70), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(259), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3994] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4025] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4056] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4087] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4118] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_environment_repeat1,
    STATE(137), 1,
      sym_identifier,
    STATE(77), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(158), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4149] = 4,
    ACTIONS(270), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(272), 1,
      sym__doc_char,
    STATE(67), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(274), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4172] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(137), 1,
      sym_identifier,
    STATE(100), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(142), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(252), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4197] = 2,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(278), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4213] = 2,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(282), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4229] = 2,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(286), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4245] = 2,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(290), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4261] = 4,
    ACTIONS(297), 1,
      anon_sym_COLON_COLON,
    STATE(82), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(292), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(294), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4280] = 2,
    ACTIONS(301), 1,
      anon_sym_COLON,
    ACTIONS(299), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4294] = 4,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(303), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4312] = 2,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(311), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4326] = 6,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(315), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4348] = 2,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(323), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4362] = 2,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(327), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4376] = 2,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(331), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4390] = 2,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(335), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4404] = 6,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(339), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4426] = 4,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4444] = 2,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(343), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4458] = 3,
    ACTIONS(347), 1,
      anon_sym_COLON_COLON,
    STATE(97), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(126), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4473] = 8,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_with,
    ACTIONS(353), 1,
      anon_sym_letrec,
  [4498] = 3,
    ACTIONS(347), 1,
      anon_sym_COLON_COLON,
    STATE(102), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(132), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4513] = 3,
    ACTIONS(347), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(132), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4528] = 3,
    ACTIONS(355), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(119), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4543] = 8,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(351), 1,
      anon_sym_with,
    ACTIONS(353), 1,
      anon_sym_letrec,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
  [4568] = 4,
    ACTIONS(292), 1,
      sym__id,
    ACTIONS(297), 1,
      anon_sym_COLON_COLON,
    STATE(100), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(360), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4585] = 8,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(351), 1,
      anon_sym_with,
    ACTIONS(353), 1,
      anon_sym_letrec,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
  [4610] = 3,
    ACTIONS(347), 1,
      anon_sym_COLON_COLON,
    STATE(98), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(136), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4625] = 8,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(351), 1,
      anon_sym_with,
    ACTIONS(353), 1,
      anon_sym_letrec,
    ACTIONS(365), 1,
      anon_sym_SEMI,
  [4650] = 8,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(351), 1,
      anon_sym_with,
    ACTIONS(353), 1,
      anon_sym_letrec,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [4675] = 8,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_TILDE,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      anon_sym_LT_COLON,
    ACTIONS(321), 1,
      anon_sym_COLON_GT,
    ACTIONS(351), 1,
      anon_sym_with,
    ACTIONS(353), 1,
      anon_sym_letrec,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [4700] = 2,
    ACTIONS(373), 1,
      anon_sym_COLON_COLON,
    ACTIONS(371), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4713] = 1,
    ACTIONS(119), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [4723] = 2,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(375), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4735] = 7,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
    ACTIONS(387), 1,
      anon_sym_COLON_GT,
    STATE(129), 1,
      aux_sym_arguments_repeat1,
  [4757] = 7,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
    ACTIONS(387), 1,
      anon_sym_COLON_GT,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_arguments_repeat1,
  [4779] = 2,
    ACTIONS(391), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(393), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4791] = 2,
    ACTIONS(373), 1,
      anon_sym_COLON_COLON,
    ACTIONS(371), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4802] = 5,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
    ACTIONS(387), 1,
      anon_sym_COLON_GT,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4819] = 5,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
    ACTIONS(387), 1,
      anon_sym_COLON_GT,
    ACTIONS(397), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4836] = 3,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(399), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4849] = 2,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(401), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4860] = 5,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
    ACTIONS(387), 1,
      anon_sym_COLON_GT,
    ACTIONS(405), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4877] = 4,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_where,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    STATE(119), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [4891] = 4,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    ACTIONS(413), 1,
      anon_sym_where,
    STATE(120), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [4905] = 3,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(120), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [4917] = 5,
    ACTIONS(381), 1,
      anon_sym_TILDE,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_LT_COLON,
    ACTIONS(387), 1,
      anon_sym_COLON_GT,
    ACTIONS(420), 1,
      anon_sym_COMMA,
  [4933] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    STATE(128), 1,
      sym_identifier,
    STATE(147), 1,
      sym_parameters,
  [4946] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    STATE(128), 1,
      sym_identifier,
    STATE(143), 1,
      sym_parameters,
  [4959] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    ACTIONS(424), 1,
      sym_string,
    STATE(149), 1,
      sym_identifier,
  [4972] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    STATE(138), 1,
      sym_identifier,
  [4982] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    STATE(152), 1,
      sym_identifier,
  [4992] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    STATE(124), 1,
      sym_identifier,
  [5002] = 3,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_parameters_repeat1,
  [5012] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_arguments_repeat1,
  [5022] = 3,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_parameters_repeat1,
  [5032] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_arguments_repeat1,
  [5042] = 3,
    ACTIONS(37), 1,
      anon_sym_COLON_COLON,
    ACTIONS(439), 1,
      sym__id,
    STATE(46), 1,
      sym_identifier,
  [5052] = 3,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_arguments_repeat1,
  [5062] = 1,
    ACTIONS(444), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [5068] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(422), 1,
      sym__id,
    STATE(163), 1,
      sym_identifier,
  [5078] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_parameters_repeat1,
  [5088] = 2,
    ACTIONS(448), 1,
      anon_sym_EQ,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
  [5095] = 1,
    ACTIONS(452), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5100] = 2,
    ACTIONS(454), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_environment,
  [5107] = 2,
    ACTIONS(454), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_environment,
  [5114] = 2,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_rec_environment,
  [5121] = 1,
    ACTIONS(458), 1,
      anon_sym_SEMI,
  [5125] = 1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [5129] = 1,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
  [5133] = 1,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
  [5137] = 1,
    ACTIONS(466), 1,
      anon_sym_EQ,
  [5141] = 1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [5145] = 1,
    ACTIONS(470), 1,
      anon_sym_DOT,
  [5149] = 1,
    ACTIONS(472), 1,
      sym_string,
  [5153] = 1,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [5157] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [5161] = 1,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [5165] = 1,
    ACTIONS(480), 1,
      anon_sym_SEMI,
  [5169] = 1,
    ACTIONS(482), 1,
      anon_sym_SEMI,
  [5173] = 1,
    ACTIONS(484), 1,
      anon_sym_SEMI,
  [5177] = 1,
    ACTIONS(486), 1,
      sym__id,
  [5181] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [5185] = 1,
    ACTIONS(490), 1,
      anon_sym_SEMI,
  [5189] = 1,
    ACTIONS(492), 1,
      sym_string,
  [5193] = 1,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
  [5197] = 1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [5201] = 1,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
  [5205] = 1,
    ACTIONS(500), 1,
      anon_sym_COMMA,
  [5209] = 1,
    ACTIONS(502), 1,
      sym__id,
  [5213] = 1,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [5217] = 1,
    ACTIONS(506), 1,
      sym__id,
  [5221] = 1,
    ACTIONS(508), 1,
      sym__id,
  [5225] = 1,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 516,
  [SMALL_STATE(9)] = 602,
  [SMALL_STATE(10)] = 688,
  [SMALL_STATE(11)] = 774,
  [SMALL_STATE(12)] = 860,
  [SMALL_STATE(13)] = 946,
  [SMALL_STATE(14)] = 1031,
  [SMALL_STATE(15)] = 1116,
  [SMALL_STATE(16)] = 1198,
  [SMALL_STATE(17)] = 1280,
  [SMALL_STATE(18)] = 1362,
  [SMALL_STATE(19)] = 1444,
  [SMALL_STATE(20)] = 1526,
  [SMALL_STATE(21)] = 1608,
  [SMALL_STATE(22)] = 1683,
  [SMALL_STATE(23)] = 1758,
  [SMALL_STATE(24)] = 1833,
  [SMALL_STATE(25)] = 1908,
  [SMALL_STATE(26)] = 1983,
  [SMALL_STATE(27)] = 2058,
  [SMALL_STATE(28)] = 2133,
  [SMALL_STATE(29)] = 2208,
  [SMALL_STATE(30)] = 2283,
  [SMALL_STATE(31)] = 2358,
  [SMALL_STATE(32)] = 2398,
  [SMALL_STATE(33)] = 2442,
  [SMALL_STATE(34)] = 2488,
  [SMALL_STATE(35)] = 2544,
  [SMALL_STATE(36)] = 2592,
  [SMALL_STATE(37)] = 2644,
  [SMALL_STATE(38)] = 2706,
  [SMALL_STATE(39)] = 2756,
  [SMALL_STATE(40)] = 2797,
  [SMALL_STATE(41)] = 2838,
  [SMALL_STATE(42)] = 2879,
  [SMALL_STATE(43)] = 2920,
  [SMALL_STATE(44)] = 2961,
  [SMALL_STATE(45)] = 2997,
  [SMALL_STATE(46)] = 3056,
  [SMALL_STATE(47)] = 3091,
  [SMALL_STATE(48)] = 3134,
  [SMALL_STATE(49)] = 3169,
  [SMALL_STATE(50)] = 3206,
  [SMALL_STATE(51)] = 3259,
  [SMALL_STATE(52)] = 3304,
  [SMALL_STATE(53)] = 3351,
  [SMALL_STATE(54)] = 3386,
  [SMALL_STATE(55)] = 3421,
  [SMALL_STATE(56)] = 3456,
  [SMALL_STATE(57)] = 3505,
  [SMALL_STATE(58)] = 3540,
  [SMALL_STATE(59)] = 3575,
  [SMALL_STATE(60)] = 3610,
  [SMALL_STATE(61)] = 3645,
  [SMALL_STATE(62)] = 3680,
  [SMALL_STATE(63)] = 3715,
  [SMALL_STATE(64)] = 3756,
  [SMALL_STATE(65)] = 3804,
  [SMALL_STATE(66)] = 3852,
  [SMALL_STATE(67)] = 3886,
  [SMALL_STATE(68)] = 3909,
  [SMALL_STATE(69)] = 3940,
  [SMALL_STATE(70)] = 3971,
  [SMALL_STATE(71)] = 3994,
  [SMALL_STATE(72)] = 4025,
  [SMALL_STATE(73)] = 4056,
  [SMALL_STATE(74)] = 4087,
  [SMALL_STATE(75)] = 4118,
  [SMALL_STATE(76)] = 4149,
  [SMALL_STATE(77)] = 4172,
  [SMALL_STATE(78)] = 4197,
  [SMALL_STATE(79)] = 4213,
  [SMALL_STATE(80)] = 4229,
  [SMALL_STATE(81)] = 4245,
  [SMALL_STATE(82)] = 4261,
  [SMALL_STATE(83)] = 4280,
  [SMALL_STATE(84)] = 4294,
  [SMALL_STATE(85)] = 4312,
  [SMALL_STATE(86)] = 4326,
  [SMALL_STATE(87)] = 4348,
  [SMALL_STATE(88)] = 4362,
  [SMALL_STATE(89)] = 4376,
  [SMALL_STATE(90)] = 4390,
  [SMALL_STATE(91)] = 4404,
  [SMALL_STATE(92)] = 4426,
  [SMALL_STATE(93)] = 4444,
  [SMALL_STATE(94)] = 4458,
  [SMALL_STATE(95)] = 4473,
  [SMALL_STATE(96)] = 4498,
  [SMALL_STATE(97)] = 4513,
  [SMALL_STATE(98)] = 4528,
  [SMALL_STATE(99)] = 4543,
  [SMALL_STATE(100)] = 4568,
  [SMALL_STATE(101)] = 4585,
  [SMALL_STATE(102)] = 4610,
  [SMALL_STATE(103)] = 4625,
  [SMALL_STATE(104)] = 4650,
  [SMALL_STATE(105)] = 4675,
  [SMALL_STATE(106)] = 4700,
  [SMALL_STATE(107)] = 4713,
  [SMALL_STATE(108)] = 4723,
  [SMALL_STATE(109)] = 4735,
  [SMALL_STATE(110)] = 4757,
  [SMALL_STATE(111)] = 4779,
  [SMALL_STATE(112)] = 4791,
  [SMALL_STATE(113)] = 4802,
  [SMALL_STATE(114)] = 4819,
  [SMALL_STATE(115)] = 4836,
  [SMALL_STATE(116)] = 4849,
  [SMALL_STATE(117)] = 4860,
  [SMALL_STATE(118)] = 4877,
  [SMALL_STATE(119)] = 4891,
  [SMALL_STATE(120)] = 4905,
  [SMALL_STATE(121)] = 4917,
  [SMALL_STATE(122)] = 4933,
  [SMALL_STATE(123)] = 4946,
  [SMALL_STATE(124)] = 4959,
  [SMALL_STATE(125)] = 4972,
  [SMALL_STATE(126)] = 4982,
  [SMALL_STATE(127)] = 4992,
  [SMALL_STATE(128)] = 5002,
  [SMALL_STATE(129)] = 5012,
  [SMALL_STATE(130)] = 5022,
  [SMALL_STATE(131)] = 5032,
  [SMALL_STATE(132)] = 5042,
  [SMALL_STATE(133)] = 5052,
  [SMALL_STATE(134)] = 5062,
  [SMALL_STATE(135)] = 5068,
  [SMALL_STATE(136)] = 5078,
  [SMALL_STATE(137)] = 5088,
  [SMALL_STATE(138)] = 5095,
  [SMALL_STATE(139)] = 5100,
  [SMALL_STATE(140)] = 5107,
  [SMALL_STATE(141)] = 5114,
  [SMALL_STATE(142)] = 5121,
  [SMALL_STATE(143)] = 5125,
  [SMALL_STATE(144)] = 5129,
  [SMALL_STATE(145)] = 5133,
  [SMALL_STATE(146)] = 5137,
  [SMALL_STATE(147)] = 5141,
  [SMALL_STATE(148)] = 5145,
  [SMALL_STATE(149)] = 5149,
  [SMALL_STATE(150)] = 5153,
  [SMALL_STATE(151)] = 5157,
  [SMALL_STATE(152)] = 5161,
  [SMALL_STATE(153)] = 5165,
  [SMALL_STATE(154)] = 5169,
  [SMALL_STATE(155)] = 5173,
  [SMALL_STATE(156)] = 5177,
  [SMALL_STATE(157)] = 5181,
  [SMALL_STATE(158)] = 5185,
  [SMALL_STATE(159)] = 5189,
  [SMALL_STATE(160)] = 5193,
  [SMALL_STATE(161)] = 5197,
  [SMALL_STATE(162)] = 5201,
  [SMALL_STATE(163)] = 5205,
  [SMALL_STATE(164)] = 5209,
  [SMALL_STATE(165)] = 5213,
  [SMALL_STATE(166)] = 5217,
  [SMALL_STATE(167)] = 5221,
  [SMALL_STATE(168)] = 5225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(167),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 7),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 13),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 13),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 11),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 11),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(168),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(106),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(164),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(112),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(164),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(94),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(70),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(70),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(106),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(156),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(112),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 12),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(126),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(125),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(19),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 14),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 9),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [498] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
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
