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
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
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
  sym_wire = 24,
  sym_cut = 25,
  sym_mem_op = 26,
  sym_int_cast = 27,
  sym_float_cast = 28,
  sym_add_op = 29,
  sym_mult_op = 30,
  sym_div_op = 31,
  sym_mod_op = 32,
  sym_exp_op = 33,
  sym_or_op = 34,
  sym_and_op = 35,
  sym_xor_op = 36,
  sym_lshift_op = 37,
  sym_rshift_op = 38,
  sym_lt_op = 39,
  sym_le_op = 40,
  sym_gt_op = 41,
  sym_ge_op = 42,
  sym_eq_op = 43,
  sym_neq_op = 44,
  sym_delay_op = 45,
  sym_prefix_op = 46,
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
  sym_prefix = 79,
  sym_modifier = 80,
  sym_access = 81,
  sym__primitive = 82,
  sym_parameters = 83,
  sym__args = 84,
  sym__argument = 85,
  sym_recursive_arg = 86,
  sym_sequential_arg = 87,
  sym_split_arg = 88,
  sym_merge_arg = 89,
  sym_iteration = 90,
  sym_with_environment = 91,
  sym_environment = 92,
  sym_letrec_environment = 93,
  sym_rec_environment = 94,
  sym_recinition = 95,
  sym__op = 96,
  sym__modifier_op = 97,
  sym_sub_op = 98,
  sym_one_sample_delay_op = 99,
  sym__number = 100,
  sym_documentation = 101,
  sym__doc_content = 102,
  sym__special_doc_tag = 103,
  sym_file_import = 104,
  sym_global_metadata = 105,
  sym_function_metadata = 106,
  sym__binary_composition = 107,
  sym_recursive = 108,
  sym_sequential = 109,
  sym_split = 110,
  sym_merge = 111,
  sym_parallel = 112,
  sym_variant = 113,
  sym_identifier = 114,
  aux_sym_program_repeat1 = 115,
  aux_sym__statement_repeat1 = 116,
  aux_sym_parameters_repeat1 = 117,
  aux_sym__args_repeat1 = 118,
  aux_sym_environment_repeat1 = 119,
  aux_sym_rec_environment_repeat1 = 120,
  aux_sym_documentation_repeat1 = 121,
  aux_sym_identifier_repeat1 = 122,
  alias_sym_parameter = 123,
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
  [sym_letrec_environment] = "letrec_environment",
  [sym_rec_environment] = "rec_environment",
  [sym_recinition] = "recinition",
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
  [sym_letrec_environment] = sym_letrec_environment,
  [sym_rec_environment] = sym_rec_environment,
  [sym_recinition] = sym_recinition,
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
  [13] = {.index = 24, .length = 2},
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
  [24] =
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
  [22] = 21,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 27,
  [29] = 25,
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
  [45] = 31,
  [46] = 46,
  [47] = 32,
  [48] = 33,
  [49] = 34,
  [50] = 50,
  [51] = 51,
  [52] = 37,
  [53] = 53,
  [54] = 54,
  [55] = 35,
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
  [91] = 38,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 42,
  [96] = 96,
  [97] = 97,
  [98] = 40,
  [99] = 39,
  [100] = 100,
  [101] = 79,
  [102] = 41,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 43,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 92,
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
  [160] = 158,
  [161] = 150,
  [162] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(201);
      if (lookahead == '!') ADVANCE(237);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(245);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '^') ADVANCE(249);
      if (lookahead == '_') ADVANCE(235);
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
      if (lookahead == '|') ADVANCE(250);
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
      if (lookahead == '!') ADVANCE(237);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(245);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(257);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '^') ADVANCE(249);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 's') ADVANCE(313);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '|') ADVANCE(250);
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
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(244);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == '^') ADVANCE(249);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'w') ADVANCE(339);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '|') ADVANCE(250);
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
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(244);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == '^') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '~') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(244);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == '^') ADVANCE(249);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(367);
      if (lookahead == '|') ADVANCE(250);
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
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == '&') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(246);
      if (lookahead == '+') ADVANCE(244);
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(263);
      if (lookahead == '^') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(132);
      if (lookahead == '|') ADVANCE(250);
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
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(261);
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
      if (lookahead == 'm') ADVANCE(238);
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
      if (lookahead == 'r') ADVANCE(252);
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
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(242);
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
      if (lookahead == 'x') ADVANCE(264);
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
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(262);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_mem_op);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_mem_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(254);
      if (lookahead == '=') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(260);
      if (lookahead == '>') ADVANCE(255);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_prefix_op);
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
      if (lookahead == 'm') ADVANCE(239);
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
      if (lookahead == 'r') ADVANCE(253);
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
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(243);
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
      if (lookahead == 'x') ADVANCE(265);
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
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 5},
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
  [61] = {.lex_state = 200},
  [62] = {.lex_state = 200},
  [63] = {.lex_state = 200},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 200},
  [76] = {.lex_state = 200},
  [77] = {.lex_state = 200},
  [78] = {.lex_state = 200},
  [79] = {.lex_state = 200},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 200},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
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
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 200},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
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
    [sym_program] = STATE(156),
    [sym__statement] = STATE(62),
    [sym__definition] = STATE(155),
    [sym_definition] = STATE(155),
    [sym_function_definition] = STATE(155),
    [sym_documentation] = STATE(62),
    [sym_file_import] = STATE(155),
    [sym_global_metadata] = STATE(155),
    [sym_function_metadata] = STATE(155),
    [sym_variant] = STATE(63),
    [sym_identifier] = STATE(136),
    [aux_sym_program_repeat1] = STATE(62),
    [aux_sym__statement_repeat1] = STATE(63),
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
    STATE(94), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [78] = 11,
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
    STATE(97), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [156] = 11,
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
    STATE(96), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [234] = 11,
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
  [312] = 11,
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
  [390] = 11,
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
    STATE(100), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [468] = 11,
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
    STATE(81), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [546] = 11,
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
    STATE(90), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [624] = 11,
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
    STATE(89), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [702] = 11,
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
    STATE(88), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [780] = 11,
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
    STATE(82), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
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
  [858] = 12,
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
    STATE(162), 1,
      sym__args,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    STATE(105), 5,
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
  [935] = 11,
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
    STATE(108), 5,
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
  [1009] = 11,
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
    STATE(109), 5,
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
  [1083] = 11,
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
    STATE(110), 5,
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
  [1157] = 11,
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
    STATE(115), 5,
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
  [1231] = 11,
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
    STATE(111), 5,
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
  [1305] = 11,
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
    STATE(112), 5,
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
  [1379] = 10,
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
  [1446] = 10,
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
    STATE(37), 11,
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
  [1513] = 10,
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
    STATE(52), 11,
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
  [1580] = 10,
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
    STATE(55), 11,
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
  [1647] = 10,
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
  [1714] = 10,
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
  [1781] = 10,
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
  [1848] = 10,
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
  [1915] = 10,
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
  [1982] = 10,
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
  [2049] = 2,
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
  [2089] = 5,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(60), 1,
      sym_identifier,
    ACTIONS(85), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
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
  [2133] = 6,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_sub_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(87), 25,
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
  [2179] = 11,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    ACTIONS(97), 2,
      sym_add_op,
      sym_or_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(99), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(87), 13,
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
  [2235] = 7,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    STATE(57), 2,
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
  [2283] = 9,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(99), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(87), 16,
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
  [2335] = 14,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_sub_op,
    ACTIONS(97), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(111), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(113), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(99), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(105), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2397] = 8,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(24), 1,
      sym_sub_op,
    STATE(57), 2,
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
  [2447] = 4,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(117), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(115), 27,
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
  [2488] = 4,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(124), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(122), 27,
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
  [2529] = 4,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    STATE(42), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(130), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(128), 27,
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
  [2570] = 4,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(130), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(128), 27,
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
  [2611] = 4,
    ACTIONS(126), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
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
  [2652] = 2,
    ACTIONS(117), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(115), 28,
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
  [2688] = 14,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      sym_exp_op,
    ACTIONS(150), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(140), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(146), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(148), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(136), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(142), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [2747] = 5,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(60), 1,
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
  [2788] = 2,
    ACTIONS(154), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(152), 27,
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
  [2823] = 6,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_sub_op,
    STATE(57), 2,
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
  [2866] = 11,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      sym_exp_op,
    ACTIONS(150), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(140), 2,
      sym_add_op,
      sym_or_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(142), 7,
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
  [2919] = 7,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(57), 2,
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
  [2964] = 2,
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
  [2999] = 2,
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
  [3034] = 8,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      sym_exp_op,
    ACTIONS(150), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(57), 2,
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
  [3081] = 2,
    ACTIONS(166), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(164), 27,
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
  [3116] = 2,
    ACTIONS(170), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(168), 27,
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
  [3151] = 9,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      sym_exp_op,
    ACTIONS(150), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(57), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(142), 7,
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
  [3200] = 2,
    ACTIONS(174), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(172), 27,
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
  [3235] = 2,
    ACTIONS(178), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(176), 27,
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
  [3270] = 2,
    ACTIONS(182), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(180), 27,
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
  [3305] = 2,
    ACTIONS(186), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(184), 27,
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
  [3340] = 2,
    ACTIONS(190), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(188), 27,
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
  [3375] = 12,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(197), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_declare,
    ACTIONS(206), 1,
      anon_sym_COLON_COLON,
    ACTIONS(209), 1,
      sym__id,
    ACTIONS(212), 1,
      sym_comment,
    STATE(136), 1,
      sym_identifier,
    STATE(63), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(61), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(203), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(155), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3423] = 12,
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
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym_comment,
    STATE(136), 1,
      sym_identifier,
    STATE(63), 2,
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
    STATE(155), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3471] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(136), 1,
      sym_identifier,
    STATE(79), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(147), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3505] = 4,
    ACTIONS(219), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(221), 1,
      sym__doc_char,
    STATE(66), 3,
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
  [3528] = 8,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_COLON_COLON,
    ACTIONS(233), 1,
      sym__id,
    STATE(65), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(227), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3559] = 4,
    ACTIONS(236), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(238), 1,
      sym__doc_char,
    STATE(68), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(240), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [3582] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3613] = 4,
    ACTIONS(246), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(248), 1,
      sym__doc_char,
    STATE(68), 3,
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
  [3636] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3667] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3698] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3729] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3760] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_environment_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(74), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(157), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3791] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(136), 1,
      sym_identifier,
    STATE(101), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(137), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(244), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3816] = 2,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(264), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3832] = 2,
    ACTIONS(266), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(268), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3848] = 2,
    ACTIONS(270), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(272), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3864] = 2,
    ACTIONS(274), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(276), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [3880] = 4,
    ACTIONS(283), 1,
      anon_sym_COLON_COLON,
    STATE(79), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(278), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(280), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [3899] = 2,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(285), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [3913] = 4,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(295), 1,
      anon_sym_COLON,
    ACTIONS(289), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [3931] = 6,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(297), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [3953] = 2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(305), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [3967] = 2,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(309), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [3981] = 2,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(313), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [3995] = 2,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(317), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4009] = 2,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(321), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4023] = 6,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(325), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4045] = 4,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(327), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4063] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(329), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4077] = 3,
    ACTIONS(333), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(115), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4092] = 2,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    ACTIONS(336), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4105] = 8,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_with,
    ACTIONS(344), 1,
      anon_sym_letrec,
  [4130] = 8,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(342), 1,
      anon_sym_with,
    ACTIONS(344), 1,
      anon_sym_letrec,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [4155] = 3,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(132), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4170] = 8,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(342), 1,
      anon_sym_with,
    ACTIONS(344), 1,
      anon_sym_letrec,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [4195] = 8,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(342), 1,
      anon_sym_with,
    ACTIONS(344), 1,
      anon_sym_letrec,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
  [4220] = 3,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    STATE(95), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(128), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4235] = 3,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    STATE(102), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(122), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4250] = 8,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(342), 1,
      anon_sym_with,
    ACTIONS(344), 1,
      anon_sym_letrec,
    ACTIONS(354), 1,
      anon_sym_SEMI,
  [4275] = 4,
    ACTIONS(278), 1,
      sym__id,
    ACTIONS(283), 1,
      anon_sym_COLON_COLON,
    STATE(101), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(356), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4292] = 3,
    ACTIONS(348), 1,
      anon_sym_COLON_COLON,
    STATE(91), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(128), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4307] = 8,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_TILDE,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_LT_COLON,
    ACTIONS(303), 1,
      anon_sym_COLON_GT,
    ACTIONS(342), 1,
      anon_sym_with,
    ACTIONS(344), 1,
      anon_sym_letrec,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [4332] = 2,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(361), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4344] = 7,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      anon_sym_LT_COLON,
    ACTIONS(373), 1,
      anon_sym_COLON_GT,
    STATE(124), 1,
      aux_sym__args_repeat1,
  [4366] = 2,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(377), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4378] = 1,
    ACTIONS(115), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [4388] = 5,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      anon_sym_LT_COLON,
    ACTIONS(373), 1,
      anon_sym_COLON_GT,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4405] = 5,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      anon_sym_LT_COLON,
    ACTIONS(373), 1,
      anon_sym_COLON_GT,
    ACTIONS(381), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4422] = 3,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(383), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4435] = 2,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(385), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4446] = 5,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      anon_sym_LT_COLON,
    ACTIONS(373), 1,
      anon_sym_COLON_GT,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4463] = 2,
    ACTIONS(338), 1,
      anon_sym_COLON_COLON,
    ACTIONS(336), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4474] = 4,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(391), 1,
      anon_sym_where,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    STATE(117), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [4488] = 5,
    ACTIONS(367), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      anon_sym_LT_COLON,
    ACTIONS(373), 1,
      anon_sym_COLON_GT,
    ACTIONS(395), 1,
      anon_sym_COMMA,
  [4504] = 4,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      anon_sym_where,
    STATE(114), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [4518] = 3,
    ACTIONS(403), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(117), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [4530] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    STATE(122), 1,
      sym_identifier,
    STATE(154), 1,
      sym_parameters,
  [4543] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    ACTIONS(408), 1,
      sym_string,
    STATE(143), 1,
      sym_identifier,
  [4556] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    STATE(122), 1,
      sym_identifier,
    STATE(142), 1,
      sym_parameters,
  [4569] = 3,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_parameters_repeat1,
  [4579] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_parameters_repeat1,
  [4589] = 1,
    ACTIONS(416), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [4595] = 3,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym__args_repeat1,
  [4605] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    STATE(119), 1,
      sym_identifier,
  [4615] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    STATE(159), 1,
      sym_identifier,
  [4625] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    STATE(141), 1,
      sym_identifier,
  [4635] = 3,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym__args_repeat1,
  [4645] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(423), 1,
      sym__id,
    STATE(46), 1,
      sym_identifier,
  [4655] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(406), 1,
      sym__id,
    STATE(135), 1,
      sym_identifier,
  [4665] = 3,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_parameters_repeat1,
  [4675] = 2,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_environment,
  [4682] = 2,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_environment,
  [4689] = 2,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_rec_environment,
  [4696] = 1,
    ACTIONS(434), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4701] = 2,
    ACTIONS(436), 1,
      anon_sym_EQ,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
  [4708] = 1,
    ACTIONS(440), 1,
      anon_sym_SEMI,
  [4712] = 1,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
  [4716] = 1,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
  [4720] = 1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
  [4724] = 1,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [4728] = 1,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
  [4732] = 1,
    ACTIONS(452), 1,
      sym_string,
  [4736] = 1,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [4740] = 1,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [4744] = 1,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
  [4748] = 1,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [4752] = 1,
    ACTIONS(462), 1,
      anon_sym_SEMI,
  [4756] = 1,
    ACTIONS(464), 1,
      anon_sym_SEMI,
  [4760] = 1,
    ACTIONS(466), 1,
      sym__id,
  [4764] = 1,
    ACTIONS(468), 1,
      anon_sym_EQ,
  [4768] = 1,
    ACTIONS(470), 1,
      anon_sym_DOT,
  [4772] = 1,
    ACTIONS(472), 1,
      sym_string,
  [4776] = 1,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
  [4780] = 1,
    ACTIONS(476), 1,
      anon_sym_SEMI,
  [4784] = 1,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
  [4788] = 1,
    ACTIONS(480), 1,
      anon_sym_SEMI,
  [4792] = 1,
    ACTIONS(482), 1,
      sym__id,
  [4796] = 1,
    ACTIONS(484), 1,
      anon_sym_COMMA,
  [4800] = 1,
    ACTIONS(486), 1,
      sym__id,
  [4804] = 1,
    ACTIONS(488), 1,
      sym__id,
  [4808] = 1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 546,
  [SMALL_STATE(10)] = 624,
  [SMALL_STATE(11)] = 702,
  [SMALL_STATE(12)] = 780,
  [SMALL_STATE(13)] = 858,
  [SMALL_STATE(14)] = 935,
  [SMALL_STATE(15)] = 1009,
  [SMALL_STATE(16)] = 1083,
  [SMALL_STATE(17)] = 1157,
  [SMALL_STATE(18)] = 1231,
  [SMALL_STATE(19)] = 1305,
  [SMALL_STATE(20)] = 1379,
  [SMALL_STATE(21)] = 1446,
  [SMALL_STATE(22)] = 1513,
  [SMALL_STATE(23)] = 1580,
  [SMALL_STATE(24)] = 1647,
  [SMALL_STATE(25)] = 1714,
  [SMALL_STATE(26)] = 1781,
  [SMALL_STATE(27)] = 1848,
  [SMALL_STATE(28)] = 1915,
  [SMALL_STATE(29)] = 1982,
  [SMALL_STATE(30)] = 2049,
  [SMALL_STATE(31)] = 2089,
  [SMALL_STATE(32)] = 2133,
  [SMALL_STATE(33)] = 2179,
  [SMALL_STATE(34)] = 2235,
  [SMALL_STATE(35)] = 2283,
  [SMALL_STATE(36)] = 2335,
  [SMALL_STATE(37)] = 2397,
  [SMALL_STATE(38)] = 2447,
  [SMALL_STATE(39)] = 2488,
  [SMALL_STATE(40)] = 2529,
  [SMALL_STATE(41)] = 2570,
  [SMALL_STATE(42)] = 2611,
  [SMALL_STATE(43)] = 2652,
  [SMALL_STATE(44)] = 2688,
  [SMALL_STATE(45)] = 2747,
  [SMALL_STATE(46)] = 2788,
  [SMALL_STATE(47)] = 2823,
  [SMALL_STATE(48)] = 2866,
  [SMALL_STATE(49)] = 2919,
  [SMALL_STATE(50)] = 2964,
  [SMALL_STATE(51)] = 2999,
  [SMALL_STATE(52)] = 3034,
  [SMALL_STATE(53)] = 3081,
  [SMALL_STATE(54)] = 3116,
  [SMALL_STATE(55)] = 3151,
  [SMALL_STATE(56)] = 3200,
  [SMALL_STATE(57)] = 3235,
  [SMALL_STATE(58)] = 3270,
  [SMALL_STATE(59)] = 3305,
  [SMALL_STATE(60)] = 3340,
  [SMALL_STATE(61)] = 3375,
  [SMALL_STATE(62)] = 3423,
  [SMALL_STATE(63)] = 3471,
  [SMALL_STATE(64)] = 3505,
  [SMALL_STATE(65)] = 3528,
  [SMALL_STATE(66)] = 3559,
  [SMALL_STATE(67)] = 3582,
  [SMALL_STATE(68)] = 3613,
  [SMALL_STATE(69)] = 3636,
  [SMALL_STATE(70)] = 3667,
  [SMALL_STATE(71)] = 3698,
  [SMALL_STATE(72)] = 3729,
  [SMALL_STATE(73)] = 3760,
  [SMALL_STATE(74)] = 3791,
  [SMALL_STATE(75)] = 3816,
  [SMALL_STATE(76)] = 3832,
  [SMALL_STATE(77)] = 3848,
  [SMALL_STATE(78)] = 3864,
  [SMALL_STATE(79)] = 3880,
  [SMALL_STATE(80)] = 3899,
  [SMALL_STATE(81)] = 3913,
  [SMALL_STATE(82)] = 3931,
  [SMALL_STATE(83)] = 3953,
  [SMALL_STATE(84)] = 3967,
  [SMALL_STATE(85)] = 3981,
  [SMALL_STATE(86)] = 3995,
  [SMALL_STATE(87)] = 4009,
  [SMALL_STATE(88)] = 4023,
  [SMALL_STATE(89)] = 4045,
  [SMALL_STATE(90)] = 4063,
  [SMALL_STATE(91)] = 4077,
  [SMALL_STATE(92)] = 4092,
  [SMALL_STATE(93)] = 4105,
  [SMALL_STATE(94)] = 4130,
  [SMALL_STATE(95)] = 4155,
  [SMALL_STATE(96)] = 4170,
  [SMALL_STATE(97)] = 4195,
  [SMALL_STATE(98)] = 4220,
  [SMALL_STATE(99)] = 4235,
  [SMALL_STATE(100)] = 4250,
  [SMALL_STATE(101)] = 4275,
  [SMALL_STATE(102)] = 4292,
  [SMALL_STATE(103)] = 4307,
  [SMALL_STATE(104)] = 4332,
  [SMALL_STATE(105)] = 4344,
  [SMALL_STATE(106)] = 4366,
  [SMALL_STATE(107)] = 4378,
  [SMALL_STATE(108)] = 4388,
  [SMALL_STATE(109)] = 4405,
  [SMALL_STATE(110)] = 4422,
  [SMALL_STATE(111)] = 4435,
  [SMALL_STATE(112)] = 4446,
  [SMALL_STATE(113)] = 4463,
  [SMALL_STATE(114)] = 4474,
  [SMALL_STATE(115)] = 4488,
  [SMALL_STATE(116)] = 4504,
  [SMALL_STATE(117)] = 4518,
  [SMALL_STATE(118)] = 4530,
  [SMALL_STATE(119)] = 4543,
  [SMALL_STATE(120)] = 4556,
  [SMALL_STATE(121)] = 4569,
  [SMALL_STATE(122)] = 4579,
  [SMALL_STATE(123)] = 4589,
  [SMALL_STATE(124)] = 4595,
  [SMALL_STATE(125)] = 4605,
  [SMALL_STATE(126)] = 4615,
  [SMALL_STATE(127)] = 4625,
  [SMALL_STATE(128)] = 4635,
  [SMALL_STATE(129)] = 4645,
  [SMALL_STATE(130)] = 4655,
  [SMALL_STATE(131)] = 4665,
  [SMALL_STATE(132)] = 4675,
  [SMALL_STATE(133)] = 4682,
  [SMALL_STATE(134)] = 4689,
  [SMALL_STATE(135)] = 4696,
  [SMALL_STATE(136)] = 4701,
  [SMALL_STATE(137)] = 4708,
  [SMALL_STATE(138)] = 4712,
  [SMALL_STATE(139)] = 4716,
  [SMALL_STATE(140)] = 4720,
  [SMALL_STATE(141)] = 4724,
  [SMALL_STATE(142)] = 4728,
  [SMALL_STATE(143)] = 4732,
  [SMALL_STATE(144)] = 4736,
  [SMALL_STATE(145)] = 4740,
  [SMALL_STATE(146)] = 4744,
  [SMALL_STATE(147)] = 4748,
  [SMALL_STATE(148)] = 4752,
  [SMALL_STATE(149)] = 4756,
  [SMALL_STATE(150)] = 4760,
  [SMALL_STATE(151)] = 4764,
  [SMALL_STATE(152)] = 4768,
  [SMALL_STATE(153)] = 4772,
  [SMALL_STATE(154)] = 4776,
  [SMALL_STATE(155)] = 4780,
  [SMALL_STATE(156)] = 4784,
  [SMALL_STATE(157)] = 4788,
  [SMALL_STATE(158)] = 4792,
  [SMALL_STATE(159)] = 4796,
  [SMALL_STATE(160)] = 4800,
  [SMALL_STATE(161)] = 4804,
  [SMALL_STATE(162)] = 4808,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(161),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 7),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 12),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 12),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(125),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(99),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(113),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(158),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(99),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(68),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(68),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(92),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(150),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(113),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(127),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 13),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(19),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(130),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 9),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [478] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
