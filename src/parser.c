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
#define STATE_COUNT 173
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 1
#define TOKEN_COUNT 72
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
  anon_sym_component = 24,
  sym_int_cast = 25,
  sym_float_cast = 26,
  sym_add_op = 27,
  sym_mult_op = 28,
  sym_div_op = 29,
  sym_mod_op = 30,
  sym_exp_op = 31,
  sym_or_op = 32,
  sym_and_op = 33,
  sym_xor_op = 34,
  sym_lshift_op = 35,
  sym_rshift_op = 36,
  sym_lt_op = 37,
  sym_le_op = 38,
  sym_gt_op = 39,
  sym_ge_op = 40,
  sym_eq_op = 41,
  sym_neq_op = 42,
  sym_delay_op = 43,
  sym_prefix_op = 44,
  sym_wire = 45,
  sym_cut = 46,
  sym_mem = 47,
  sym_int = 48,
  sym_real = 49,
  anon_sym_LTmdoc_GT = 50,
  anon_sym_LT_SLASHmdoc_GT = 51,
  sym__doc_char = 52,
  anon_sym_LTnotice_SLASH_GT = 53,
  anon_sym_LTnotice_SLASH_GT2 = 54,
  anon_sym_LTequation_GT = 55,
  anon_sym_LT_SLASHequation_GT = 56,
  anon_sym_LTdiagram_GT = 57,
  anon_sym_LT_SLASHdiagram_GT = 58,
  anon_sym_LTmetadata_GT = 59,
  anon_sym_LT_SLASHmetadata_GT = 60,
  anon_sym_LTlisting = 61,
  anon_sym_import = 62,
  anon_sym_declare = 63,
  anon_sym_singleprecision = 64,
  anon_sym_doubleprecision = 65,
  anon_sym_quadprecision = 66,
  anon_sym_fixedpointprecision = 67,
  sym_string = 68,
  anon_sym_COLON_COLON = 69,
  sym__id = 70,
  sym_comment = 71,
  sym_program = 72,
  sym__statement = 73,
  sym__definition = 74,
  sym_definition = 75,
  sym_function_definition = 76,
  sym__expression = 77,
  sym__infix_expression = 78,
  sym_infix = 79,
  sym_function_call = 80,
  sym_prefix = 81,
  sym_modifier = 82,
  sym_access = 83,
  sym__primitive = 84,
  sym_parameters = 85,
  sym_arguments = 86,
  sym__args = 87,
  sym__argument = 88,
  sym_recursive_arg = 89,
  sym_sequential_arg = 90,
  sym_split_arg = 91,
  sym_merge_arg = 92,
  sym_iteration = 93,
  sym_with_environment = 94,
  sym_environment = 95,
  sym_letrec_environment = 96,
  sym_rec_environment = 97,
  sym_recinition = 98,
  sym_component = 99,
  sym__unary_op = 100,
  sym__binary_op = 101,
  sym__modifier_op = 102,
  sym_sub_op = 103,
  sym_one_sample_delay_op = 104,
  sym__number = 105,
  sym_documentation = 106,
  sym__doc_content = 107,
  sym__special_doc_tag = 108,
  sym_file_import = 109,
  sym_global_metadata = 110,
  sym_function_metadata = 111,
  sym__binary_composition = 112,
  sym_recursive = 113,
  sym_sequential = 114,
  sym_split = 115,
  sym_merge = 116,
  sym_parallel = 117,
  sym_variant = 118,
  sym_identifier = 119,
  aux_sym_program_repeat1 = 120,
  aux_sym__statement_repeat1 = 121,
  aux_sym_parameters_repeat1 = 122,
  aux_sym_arguments_repeat1 = 123,
  aux_sym_environment_repeat1 = 124,
  aux_sym_rec_environment_repeat1 = 125,
  aux_sym_documentation_repeat1 = 126,
  aux_sym_identifier_repeat1 = 127,
  alias_sym_parameter = 128,
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
  [anon_sym_component] = "component",
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
  [sym_component] = "component",
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
  [anon_sym_component] = anon_sym_component,
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
  [sym_component] = sym_component,
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
  [anon_sym_component] = {
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
  [sym_component] = {
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
  [24] = 22,
  [25] = 23,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 28,
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
  [46] = 32,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 33,
  [51] = 34,
  [52] = 52,
  [53] = 35,
  [54] = 54,
  [55] = 36,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 38,
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
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 42,
  [97] = 83,
  [98] = 41,
  [99] = 43,
  [100] = 100,
  [101] = 101,
  [102] = 40,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 39,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 44,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 107,
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
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 168,
  [171] = 160,
  [172] = 172,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      if (lookahead == '!') ADVANCE(273);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(250);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 'q') ADVANCE(196);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(273);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(256);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(250);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(249);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == 'w') ADVANCE(350);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(249);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(249);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(381);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead == '+') ADVANCE(249);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(268);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(424);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(423);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(306);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(376);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(280);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(281);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(288);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(284);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(289);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(285);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(287);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 'q') ADVANCE(229);
      END_STATE();
    case 160:
      if (lookahead == 'q') ADVANCE(198);
      END_STATE();
    case 161:
      if (lookahead == 'q') ADVANCE(199);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 200:
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 201:
      if (lookahead == 'x') ADVANCE(269);
      END_STATE();
    case 202:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 203:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(425);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '<') ADVANCE(259);
      if (lookahead == '=') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(259);
      if (lookahead == '=') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '>') ADVANCE(260);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'v') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(424);
      if (lookahead == '\\') ADVANCE(207);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 208},
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
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 208},
  [66] = {.lex_state = 208},
  [67] = {.lex_state = 208},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 208},
  [80] = {.lex_state = 208},
  [81] = {.lex_state = 208},
  [82] = {.lex_state = 208},
  [83] = {.lex_state = 208},
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
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 208},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 208},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 0},
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
    [anon_sym_component] = ACTIONS(1),
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
    [sym_program] = STATE(166),
    [sym__statement] = STATE(65),
    [sym__definition] = STATE(165),
    [sym_definition] = STATE(165),
    [sym_function_definition] = STATE(165),
    [sym_documentation] = STATE(65),
    [sym_file_import] = STATE(165),
    [sym_global_metadata] = STATE(165),
    [sym_function_metadata] = STATE(165),
    [sym_variant] = STATE(67),
    [sym_identifier] = STATE(138),
    [aux_sym_program_repeat1] = STATE(65),
    [aux_sym__statement_repeat1] = STATE(67),
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
  [0] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [90] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(85), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [180] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [270] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [360] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [450] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [540] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [630] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [720] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [810] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
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
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [900] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(37), 1,
      sym_real,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(35), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(87), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(37), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [990] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(150), 1,
      sym__args,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(108), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1079] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(167), 1,
      sym_arguments,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
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
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1168] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
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
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1254] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
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
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1340] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
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
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1426] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
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
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1512] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    STATE(119), 5,
      sym__argument,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1598] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(45), 4,
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
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(47), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1684] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(49), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(53), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1763] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(53), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(55), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1842] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(57), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(60), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [1921] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(63), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(61), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(36), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2000] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(67), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(65), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(38), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2079] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(71), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(69), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(35), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2158] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(75), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(73), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(34), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2237] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(77), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(50), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2316] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(83), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(81), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(51), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2395] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_environment,
    ACTIONS(29), 1,
      anon_sym_component,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    ACTIONS(87), 1,
      sym_real,
    STATE(45), 3,
      sym__unary_op,
      sym__binary_op,
      sym_sub_op,
    ACTIONS(27), 4,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
    ACTIONS(85), 4,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
    ACTIONS(31), 7,
      sym_int_cast,
      sym_float_cast,
      sym_add_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
    STATE(33), 11,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_component,
      sym__number,
      sym_identifier,
    ACTIONS(33), 13,
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
  [2474] = 2,
    ACTIONS(89), 17,
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
    ACTIONS(91), 19,
      anon_sym_DASH,
      anon_sym_environment,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
      anon_sym_component,
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
  [2515] = 5,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(91), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(89), 24,
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
  [2559] = 6,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 25,
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
  [2605] = 11,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      sym_exp_op,
    ACTIONS(109), 1,
      sym_delay_op,
    STATE(25), 1,
      sym_sub_op,
    ACTIONS(103), 2,
      sym_add_op,
      sym_or_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(105), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 13,
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
  [2661] = 7,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym_delay_op,
    STATE(25), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 24,
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
  [2709] = 8,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_exp_op,
    ACTIONS(109), 1,
      sym_delay_op,
    STATE(25), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 23,
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
  [2759] = 14,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      sym_exp_op,
    ACTIONS(109), 1,
      sym_delay_op,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_sub_op,
    ACTIONS(103), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(117), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(119), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(105), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(111), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2821] = 9,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_exp_op,
    ACTIONS(109), 1,
      sym_delay_op,
    STATE(25), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(105), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 16,
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
  [2873] = 4,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(123), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(121), 27,
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
  [2914] = 4,
    ACTIONS(132), 1,
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
  [2955] = 4,
    ACTIONS(132), 1,
      anon_sym_COLON_COLON,
    STATE(43), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(136), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(134), 27,
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
  [2996] = 4,
    ACTIONS(132), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(136), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(134), 27,
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
  [3037] = 4,
    ACTIONS(132), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(140), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(138), 27,
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
  [3078] = 2,
    ACTIONS(123), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(121), 28,
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
  [3114] = 3,
    ACTIONS(144), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(142), 26,
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
  [3151] = 5,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(49), 1,
      sym_identifier,
    ACTIONS(91), 4,
      anon_sym_COLON,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(89), 23,
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
  [3192] = 14,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      sym_exp_op,
    ACTIONS(162), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(152), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(158), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(160), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(148), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(154), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [3251] = 2,
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
  [3286] = 2,
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
  [3321] = 6,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 22,
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
  [3364] = 11,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(156), 1,
      sym_exp_op,
    ACTIONS(162), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    ACTIONS(152), 2,
      sym_add_op,
      sym_or_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(154), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 10,
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
  [3417] = 2,
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
  [3452] = 7,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 21,
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
  [3497] = 2,
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
  [3532] = 8,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      sym_exp_op,
    ACTIONS(162), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 20,
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
  [3579] = 2,
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
  [3614] = 2,
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
  [3649] = 2,
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
  [3684] = 2,
    ACTIONS(194), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(192), 27,
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
  [3719] = 9,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      sym_exp_op,
    ACTIONS(162), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(63), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(154), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 13,
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
  [3768] = 2,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(196), 27,
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
  [3803] = 2,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(200), 27,
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
  [3838] = 2,
    ACTIONS(206), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(204), 27,
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
  [3873] = 2,
    ACTIONS(210), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(208), 27,
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
  [3908] = 12,
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
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym_comment,
    STATE(138), 1,
      sym_identifier,
    STATE(67), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(66), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(165), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [3956] = 12,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(221), 1,
      anon_sym_import,
    ACTIONS(224), 1,
      anon_sym_declare,
    ACTIONS(230), 1,
      anon_sym_COLON_COLON,
    ACTIONS(233), 1,
      sym__id,
    ACTIONS(236), 1,
      sym_comment,
    STATE(138), 1,
      sym_identifier,
    STATE(67), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(66), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(227), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(165), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [4004] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(138), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(157), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [4038] = 4,
    ACTIONS(239), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(241), 1,
      sym__doc_char,
    STATE(70), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(243), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4061] = 8,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      anon_sym_COLON_COLON,
    ACTIONS(253), 1,
      sym__id,
    STATE(69), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(247), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4092] = 4,
    ACTIONS(256), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(258), 1,
      sym__doc_char,
    STATE(70), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(261), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4115] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4146] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4177] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4208] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4239] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4270] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_environment_repeat1,
    STATE(138), 1,
      sym_identifier,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(156), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4301] = 4,
    ACTIONS(276), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(278), 1,
      sym__doc_char,
    STATE(68), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(280), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4324] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(138), 1,
      sym_identifier,
    STATE(97), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(143), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4349] = 2,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(284), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4365] = 2,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(288), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4381] = 2,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(292), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4397] = 2,
    ACTIONS(294), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(296), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4413] = 4,
    ACTIONS(303), 1,
      anon_sym_COLON_COLON,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(298), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(300), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4432] = 2,
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
  [4446] = 4,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(315), 1,
      anon_sym_COLON,
    ACTIONS(309), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4464] = 6,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(317), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4486] = 6,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(325), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4508] = 2,
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
  [4522] = 2,
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
  [4536] = 2,
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
  [4550] = 2,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(339), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4564] = 4,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(343), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4582] = 2,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(345), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4596] = 2,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(349), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4610] = 8,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_with,
    ACTIONS(357), 1,
      anon_sym_letrec,
  [4635] = 3,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    STATE(106), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(134), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4650] = 4,
    ACTIONS(298), 1,
      sym__id,
    ACTIONS(303), 1,
      anon_sym_COLON_COLON,
    STATE(97), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(361), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4667] = 3,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    STATE(99), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(134), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4682] = 3,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    STATE(106), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(138), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4697] = 8,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(355), 1,
      anon_sym_with,
    ACTIONS(357), 1,
      anon_sym_letrec,
    ACTIONS(364), 1,
      anon_sym_SEMI,
  [4722] = 8,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(355), 1,
      anon_sym_with,
    ACTIONS(357), 1,
      anon_sym_letrec,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [4747] = 3,
    ACTIONS(359), 1,
      anon_sym_COLON_COLON,
    STATE(96), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(128), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4762] = 8,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(355), 1,
      anon_sym_with,
    ACTIONS(357), 1,
      anon_sym_letrec,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [4787] = 8,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(355), 1,
      anon_sym_with,
    ACTIONS(357), 1,
      anon_sym_letrec,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
  [4812] = 8,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_TILDE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_LT_COLON,
    ACTIONS(323), 1,
      anon_sym_COLON_GT,
    ACTIONS(355), 1,
      anon_sym_with,
    ACTIONS(357), 1,
      anon_sym_letrec,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [4837] = 3,
    ACTIONS(374), 1,
      anon_sym_COLON_COLON,
    STATE(106), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(121), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4852] = 2,
    ACTIONS(379), 1,
      anon_sym_COLON_COLON,
    ACTIONS(377), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4865] = 7,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_LT_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON_GT,
    STATE(127), 1,
      aux_sym_arguments_repeat1,
  [4887] = 2,
    ACTIONS(245), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(393), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4899] = 7,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_LT_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON_GT,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_arguments_repeat1,
  [4921] = 1,
    ACTIONS(121), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [4931] = 2,
    ACTIONS(397), 2,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(399), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4943] = 5,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_LT_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON_GT,
    ACTIONS(401), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4960] = 5,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_LT_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON_GT,
    ACTIONS(403), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4977] = 3,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(405), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [4990] = 2,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(407), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5001] = 5,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_LT_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON_GT,
    ACTIONS(411), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5018] = 2,
    ACTIONS(379), 1,
      anon_sym_COLON_COLON,
    ACTIONS(377), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [5029] = 5,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(389), 1,
      anon_sym_LT_COLON,
    ACTIONS(391), 1,
      anon_sym_COLON_GT,
    ACTIONS(413), 1,
      anon_sym_COMMA,
  [5045] = 4,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      anon_sym_where,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    STATE(121), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5059] = 3,
    ACTIONS(421), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(121), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5071] = 4,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_where,
    STATE(120), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5085] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(428), 1,
      sym_string,
    ACTIONS(430), 1,
      sym__id,
    STATE(153), 1,
      sym_identifier,
  [5098] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      sym__id,
    STATE(129), 1,
      sym_identifier,
    STATE(152), 1,
      sym_parameters,
  [5111] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      sym__id,
    STATE(129), 1,
      sym_identifier,
    STATE(162), 1,
      sym_parameters,
  [5124] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
  [5134] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
  [5144] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      sym__id,
    STATE(159), 1,
      sym_identifier,
  [5154] = 3,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_parameters_repeat1,
  [5164] = 3,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_parameters_repeat1,
  [5174] = 1,
    ACTIONS(445), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [5180] = 3,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_parameters_repeat1,
  [5190] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      sym__id,
    STATE(123), 1,
      sym_identifier,
  [5200] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      sym__id,
    STATE(144), 1,
      sym_identifier,
  [5210] = 3,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(449), 1,
      sym__id,
    STATE(48), 1,
      sym_identifier,
  [5220] = 3,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_arguments_repeat1,
  [5230] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(430), 1,
      sym__id,
    STATE(141), 1,
      sym_identifier,
  [5240] = 2,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
  [5247] = 2,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_environment,
  [5254] = 2,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_rec_environment,
  [5261] = 1,
    ACTIONS(462), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5266] = 2,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_environment,
  [5273] = 1,
    ACTIONS(464), 1,
      anon_sym_SEMI,
  [5277] = 1,
    ACTIONS(466), 1,
      anon_sym_EQ,
  [5281] = 1,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [5285] = 1,
    ACTIONS(470), 1,
      sym_string,
  [5289] = 1,
    ACTIONS(472), 1,
      anon_sym_DOT,
  [5293] = 1,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [5297] = 1,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
  [5301] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [5305] = 1,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
  [5309] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [5313] = 1,
    ACTIONS(484), 1,
      sym_string,
  [5317] = 1,
    ACTIONS(486), 1,
      anon_sym_SEMI,
  [5321] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [5325] = 1,
    ACTIONS(490), 1,
      anon_sym_SEMI,
  [5329] = 1,
    ACTIONS(492), 1,
      anon_sym_SEMI,
  [5333] = 1,
    ACTIONS(494), 1,
      anon_sym_EQ,
  [5337] = 1,
    ACTIONS(496), 1,
      anon_sym_COMMA,
  [5341] = 1,
    ACTIONS(498), 1,
      sym__id,
  [5345] = 1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [5349] = 1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [5353] = 1,
    ACTIONS(504), 1,
      sym_string,
  [5357] = 1,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
  [5361] = 1,
    ACTIONS(508), 1,
      anon_sym_SEMI,
  [5365] = 1,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
  [5369] = 1,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [5373] = 1,
    ACTIONS(514), 1,
      sym__id,
  [5377] = 1,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
  [5381] = 1,
    ACTIONS(518), 1,
      sym__id,
  [5385] = 1,
    ACTIONS(520), 1,
      sym__id,
  [5389] = 1,
    ACTIONS(522), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 630,
  [SMALL_STATE(10)] = 720,
  [SMALL_STATE(11)] = 810,
  [SMALL_STATE(12)] = 900,
  [SMALL_STATE(13)] = 990,
  [SMALL_STATE(14)] = 1079,
  [SMALL_STATE(15)] = 1168,
  [SMALL_STATE(16)] = 1254,
  [SMALL_STATE(17)] = 1340,
  [SMALL_STATE(18)] = 1426,
  [SMALL_STATE(19)] = 1512,
  [SMALL_STATE(20)] = 1598,
  [SMALL_STATE(21)] = 1684,
  [SMALL_STATE(22)] = 1763,
  [SMALL_STATE(23)] = 1842,
  [SMALL_STATE(24)] = 1921,
  [SMALL_STATE(25)] = 2000,
  [SMALL_STATE(26)] = 2079,
  [SMALL_STATE(27)] = 2158,
  [SMALL_STATE(28)] = 2237,
  [SMALL_STATE(29)] = 2316,
  [SMALL_STATE(30)] = 2395,
  [SMALL_STATE(31)] = 2474,
  [SMALL_STATE(32)] = 2515,
  [SMALL_STATE(33)] = 2559,
  [SMALL_STATE(34)] = 2605,
  [SMALL_STATE(35)] = 2661,
  [SMALL_STATE(36)] = 2709,
  [SMALL_STATE(37)] = 2759,
  [SMALL_STATE(38)] = 2821,
  [SMALL_STATE(39)] = 2873,
  [SMALL_STATE(40)] = 2914,
  [SMALL_STATE(41)] = 2955,
  [SMALL_STATE(42)] = 2996,
  [SMALL_STATE(43)] = 3037,
  [SMALL_STATE(44)] = 3078,
  [SMALL_STATE(45)] = 3114,
  [SMALL_STATE(46)] = 3151,
  [SMALL_STATE(47)] = 3192,
  [SMALL_STATE(48)] = 3251,
  [SMALL_STATE(49)] = 3286,
  [SMALL_STATE(50)] = 3321,
  [SMALL_STATE(51)] = 3364,
  [SMALL_STATE(52)] = 3417,
  [SMALL_STATE(53)] = 3452,
  [SMALL_STATE(54)] = 3497,
  [SMALL_STATE(55)] = 3532,
  [SMALL_STATE(56)] = 3579,
  [SMALL_STATE(57)] = 3614,
  [SMALL_STATE(58)] = 3649,
  [SMALL_STATE(59)] = 3684,
  [SMALL_STATE(60)] = 3719,
  [SMALL_STATE(61)] = 3768,
  [SMALL_STATE(62)] = 3803,
  [SMALL_STATE(63)] = 3838,
  [SMALL_STATE(64)] = 3873,
  [SMALL_STATE(65)] = 3908,
  [SMALL_STATE(66)] = 3956,
  [SMALL_STATE(67)] = 4004,
  [SMALL_STATE(68)] = 4038,
  [SMALL_STATE(69)] = 4061,
  [SMALL_STATE(70)] = 4092,
  [SMALL_STATE(71)] = 4115,
  [SMALL_STATE(72)] = 4146,
  [SMALL_STATE(73)] = 4177,
  [SMALL_STATE(74)] = 4208,
  [SMALL_STATE(75)] = 4239,
  [SMALL_STATE(76)] = 4270,
  [SMALL_STATE(77)] = 4301,
  [SMALL_STATE(78)] = 4324,
  [SMALL_STATE(79)] = 4349,
  [SMALL_STATE(80)] = 4365,
  [SMALL_STATE(81)] = 4381,
  [SMALL_STATE(82)] = 4397,
  [SMALL_STATE(83)] = 4413,
  [SMALL_STATE(84)] = 4432,
  [SMALL_STATE(85)] = 4446,
  [SMALL_STATE(86)] = 4464,
  [SMALL_STATE(87)] = 4486,
  [SMALL_STATE(88)] = 4508,
  [SMALL_STATE(89)] = 4522,
  [SMALL_STATE(90)] = 4536,
  [SMALL_STATE(91)] = 4550,
  [SMALL_STATE(92)] = 4564,
  [SMALL_STATE(93)] = 4582,
  [SMALL_STATE(94)] = 4596,
  [SMALL_STATE(95)] = 4610,
  [SMALL_STATE(96)] = 4635,
  [SMALL_STATE(97)] = 4650,
  [SMALL_STATE(98)] = 4667,
  [SMALL_STATE(99)] = 4682,
  [SMALL_STATE(100)] = 4697,
  [SMALL_STATE(101)] = 4722,
  [SMALL_STATE(102)] = 4747,
  [SMALL_STATE(103)] = 4762,
  [SMALL_STATE(104)] = 4787,
  [SMALL_STATE(105)] = 4812,
  [SMALL_STATE(106)] = 4837,
  [SMALL_STATE(107)] = 4852,
  [SMALL_STATE(108)] = 4865,
  [SMALL_STATE(109)] = 4887,
  [SMALL_STATE(110)] = 4899,
  [SMALL_STATE(111)] = 4921,
  [SMALL_STATE(112)] = 4931,
  [SMALL_STATE(113)] = 4943,
  [SMALL_STATE(114)] = 4960,
  [SMALL_STATE(115)] = 4977,
  [SMALL_STATE(116)] = 4990,
  [SMALL_STATE(117)] = 5001,
  [SMALL_STATE(118)] = 5018,
  [SMALL_STATE(119)] = 5029,
  [SMALL_STATE(120)] = 5045,
  [SMALL_STATE(121)] = 5059,
  [SMALL_STATE(122)] = 5071,
  [SMALL_STATE(123)] = 5085,
  [SMALL_STATE(124)] = 5098,
  [SMALL_STATE(125)] = 5111,
  [SMALL_STATE(126)] = 5124,
  [SMALL_STATE(127)] = 5134,
  [SMALL_STATE(128)] = 5144,
  [SMALL_STATE(129)] = 5154,
  [SMALL_STATE(130)] = 5164,
  [SMALL_STATE(131)] = 5174,
  [SMALL_STATE(132)] = 5180,
  [SMALL_STATE(133)] = 5190,
  [SMALL_STATE(134)] = 5200,
  [SMALL_STATE(135)] = 5210,
  [SMALL_STATE(136)] = 5220,
  [SMALL_STATE(137)] = 5230,
  [SMALL_STATE(138)] = 5240,
  [SMALL_STATE(139)] = 5247,
  [SMALL_STATE(140)] = 5254,
  [SMALL_STATE(141)] = 5261,
  [SMALL_STATE(142)] = 5266,
  [SMALL_STATE(143)] = 5273,
  [SMALL_STATE(144)] = 5277,
  [SMALL_STATE(145)] = 5281,
  [SMALL_STATE(146)] = 5285,
  [SMALL_STATE(147)] = 5289,
  [SMALL_STATE(148)] = 5293,
  [SMALL_STATE(149)] = 5297,
  [SMALL_STATE(150)] = 5301,
  [SMALL_STATE(151)] = 5305,
  [SMALL_STATE(152)] = 5309,
  [SMALL_STATE(153)] = 5313,
  [SMALL_STATE(154)] = 5317,
  [SMALL_STATE(155)] = 5321,
  [SMALL_STATE(156)] = 5325,
  [SMALL_STATE(157)] = 5329,
  [SMALL_STATE(158)] = 5333,
  [SMALL_STATE(159)] = 5337,
  [SMALL_STATE(160)] = 5341,
  [SMALL_STATE(161)] = 5345,
  [SMALL_STATE(162)] = 5349,
  [SMALL_STATE(163)] = 5353,
  [SMALL_STATE(164)] = 5357,
  [SMALL_STATE(165)] = 5361,
  [SMALL_STATE(166)] = 5365,
  [SMALL_STATE(167)] = 5369,
  [SMALL_STATE(168)] = 5373,
  [SMALL_STATE(169)] = 5377,
  [SMALL_STATE(170)] = 5381,
  [SMALL_STATE(171)] = 5385,
  [SMALL_STATE(172)] = 5389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(171),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 7),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 10),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 11),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(133),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(168),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(102),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(118),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(168),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(102),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(70),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(107),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 6),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 12),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(118),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(160),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(134),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(137),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 14),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 9),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [510] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
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
