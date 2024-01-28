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
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 1
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_component = 26,
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
  sym_wire = 47,
  sym_cut = 48,
  sym_mem = 49,
  sym_int = 50,
  sym_real = 51,
  anon_sym_LTmdoc_GT = 52,
  anon_sym_LT_SLASHmdoc_GT = 53,
  sym__doc_char = 54,
  anon_sym_LTnotice_SLASH_GT = 55,
  anon_sym_LTnotice_SLASH_GT2 = 56,
  anon_sym_LTequation_GT = 57,
  anon_sym_LT_SLASHequation_GT = 58,
  anon_sym_LTdiagram_GT = 59,
  anon_sym_LT_SLASHdiagram_GT = 60,
  anon_sym_LTmetadata_GT = 61,
  anon_sym_LT_SLASHmetadata_GT = 62,
  anon_sym_LTlisting = 63,
  anon_sym_import = 64,
  anon_sym_declare = 65,
  anon_sym_singleprecision = 66,
  anon_sym_doubleprecision = 67,
  anon_sym_quadprecision = 68,
  anon_sym_fixedpointprecision = 69,
  sym_string = 70,
  anon_sym_COLON_COLON = 71,
  sym__id = 72,
  sym_comment = 73,
  sym_program = 74,
  sym__statement = 75,
  sym__definition = 76,
  sym_definition = 77,
  sym_function_definition = 78,
  sym__expression = 79,
  sym__infix_expression = 80,
  sym_infix = 81,
  sym_function_call = 82,
  sym_prefix = 83,
  sym_modifier = 84,
  sym_access = 85,
  sym__primitive = 86,
  sym_parameters = 87,
  sym_arguments = 88,
  sym__args = 89,
  sym__argument = 90,
  sym_recursive_arg = 91,
  sym_sequential_arg = 92,
  sym_split_arg = 93,
  sym_merge_arg = 94,
  sym_iteration = 95,
  sym_with_environment = 96,
  sym_environment = 97,
  sym_letrec_environment = 98,
  sym_rec_environment = 99,
  sym_recinition = 100,
  sym_substitution = 101,
  sym_substitutions = 102,
  sym_component = 103,
  sym__unary_op = 104,
  sym__binary_op = 105,
  sym__modifier_op = 106,
  sym_sub_op = 107,
  sym_one_sample_delay_op = 108,
  sym__number = 109,
  sym_documentation = 110,
  sym__doc_content = 111,
  sym__special_doc_tag = 112,
  sym_file_import = 113,
  sym_global_metadata = 114,
  sym_function_metadata = 115,
  sym__binary_composition = 116,
  sym_recursive = 117,
  sym_sequential = 118,
  sym_split = 119,
  sym_merge = 120,
  sym_parallel = 121,
  sym_variant = 122,
  sym_identifier = 123,
  aux_sym_program_repeat1 = 124,
  aux_sym__statement_repeat1 = 125,
  aux_sym_parameters_repeat1 = 126,
  aux_sym_arguments_repeat1 = 127,
  aux_sym_environment_repeat1 = 128,
  aux_sym_rec_environment_repeat1 = 129,
  aux_sym_documentation_repeat1 = 130,
  aux_sym_identifier_repeat1 = 131,
  alias_sym_parameter = 132,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_substitution] = "substitution",
  [sym_substitutions] = "substitutions",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_substitution] = sym_substitution,
  [sym_substitutions] = sym_substitutions,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_substitutions] = {
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
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 4},
  [15] = {.index = 26, .length = 2},
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
    {field_expression, 0},
  [8] =
    {field_left, 0},
    {field_right, 2},
  [10] =
    {field_expression, 0},
    {field_local_environment, 2},
  [12] =
    {field_definition, 2},
    {field_environment, 0},
  [14] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [17] =
    {field_callee, 0},
  [18] =
    {field_operand, 2},
    {field_operator, 0},
  [20] =
    {field_name, 0},
    {field_value, 5},
  [22] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [26] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [10] = {
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
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 24,
  [29] = 21,
  [30] = 25,
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
  [45] = 37,
  [46] = 46,
  [47] = 34,
  [48] = 32,
  [49] = 35,
  [50] = 36,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 38,
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
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 39,
  [101] = 43,
  [102] = 102,
  [103] = 103,
  [104] = 41,
  [105] = 105,
  [106] = 106,
  [107] = 42,
  [108] = 108,
  [109] = 109,
  [110] = 40,
  [111] = 88,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 44,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 103,
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
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 168,
  [177] = 177,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      if (lookahead == '!') ADVANCE(275);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_') ADVANCE(273);
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
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(275);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(264);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'm') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 's') ADVANCE(325);
      if (lookahead == 'x') ADVANCE(383);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == 'w') ADVANCE(352);
      if (lookahead == 'x') ADVANCE(383);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(383);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '~') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '&') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead == '+') ADVANCE(251);
      if (lookahead == ',') ADVANCE(221);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '|') ADVANCE(257);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(426);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(425);
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
      if (lookahead == ':') ADVANCE(308);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'q') ADVANCE(419);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(268);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(282);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(283);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(290);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(291);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(288);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(287);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(289);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
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
      if (lookahead == 'e') ADVANCE(297);
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
      if (lookahead == 'g') ADVANCE(294);
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
      if (lookahead == 'm') ADVANCE(276);
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
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(305);
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
      if (lookahead == 'r') ADVANCE(259);
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
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(245);
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
      if (lookahead == 'x') ADVANCE(271);
      END_STATE();
    case 202:
      if (lookahead == 'x') ADVANCE(74);
      END_STATE();
    case 203:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(426);
      if (lookahead == '\r') ADVANCE(427);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(118);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'q') ADVANCE(419);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(208)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(308);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(261);
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(267);
      if (lookahead == '>') ADVANCE(262);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'v') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(426);
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
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
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
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 208},
  [85] = {.lex_state = 208},
  [86] = {.lex_state = 208},
  [87] = {.lex_state = 208},
  [88] = {.lex_state = 208},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 208},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 208},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_program] = STATE(173),
    [sym__statement] = STATE(68),
    [sym__definition] = STATE(172),
    [sym_definition] = STATE(172),
    [sym_function_definition] = STATE(172),
    [sym_documentation] = STATE(68),
    [sym_file_import] = STATE(172),
    [sym_global_metadata] = STATE(172),
    [sym_function_metadata] = STATE(172),
    [sym_variant] = STATE(70),
    [sym_identifier] = STATE(145),
    [aux_sym_program_repeat1] = STATE(68),
    [aux_sym__statement_repeat1] = STATE(70),
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
    STATE(64), 3,
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
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [91] = 15,
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
    STATE(64), 3,
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
    STATE(114), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [182] = 15,
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
    STATE(64), 3,
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
    STATE(102), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [273] = 15,
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
    STATE(64), 3,
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
    STATE(108), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [364] = 15,
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
    STATE(64), 3,
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
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [455] = 15,
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
    STATE(64), 3,
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
    STATE(109), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [546] = 15,
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
    STATE(64), 3,
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
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [637] = 15,
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
    STATE(64), 3,
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
    STATE(113), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [728] = 15,
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
    STATE(64), 3,
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
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [819] = 15,
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
    STATE(64), 3,
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
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [910] = 15,
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
    STATE(64), 3,
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
    STATE(112), 9,
      sym__expression,
      sym_with_environment,
      sym_letrec_environment,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(33), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1001] = 16,
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
    STATE(153), 1,
      sym__args,
    STATE(64), 3,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1091] = 16,
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
    STATE(64), 3,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1181] = 15,
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
    STATE(64), 3,
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
    STATE(123), 5,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1268] = 15,
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
    STATE(64), 3,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1355] = 15,
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
    STATE(64), 3,
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
    STATE(118), 5,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1442] = 15,
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
    STATE(64), 3,
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
    STATE(122), 5,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1529] = 15,
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
    STATE(64), 3,
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
    STATE(124), 5,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1616] = 15,
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
    STATE(64), 3,
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
    STATE(121), 5,
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
    STATE(46), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1703] = 14,
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
    STATE(64), 3,
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
    STATE(45), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1783] = 14,
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
    STATE(64), 3,
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
    STATE(47), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1863] = 14,
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
    ACTIONS(59), 1,
      sym_real,
    STATE(64), 3,
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
    STATE(34), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [1943] = 14,
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
    STATE(64), 3,
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
    STATE(36), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2023] = 14,
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
    STATE(64), 3,
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
    STATE(32), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2103] = 14,
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
    STATE(64), 3,
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
    STATE(35), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2183] = 14,
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
    ACTIONS(75), 1,
      sym_real,
    STATE(64), 3,
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
    STATE(49), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2263] = 14,
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
    STATE(64), 3,
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
    STATE(50), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2343] = 14,
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
    ACTIONS(83), 1,
      sym_real,
    STATE(64), 3,
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
    STATE(37), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2423] = 14,
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
    ACTIONS(87), 1,
      sym_real,
    STATE(64), 3,
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
    STATE(48), 12,
      sym__infix_expression,
      sym_infix,
      sym_function_call,
      sym_prefix,
      sym_modifier,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_substitution,
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
  [2503] = 2,
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
  [2544] = 9,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
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
      anon_sym_LBRACK,
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
  [2598] = 16,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    ACTIONS(115), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(119), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(121), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(117), 7,
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
  [2666] = 10,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(117), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 17,
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
      anon_sym_LBRACK,
      sym_add_op,
      sym_or_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2722] = 8,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym_delay_op,
    STATE(23), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
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
      anon_sym_LBRACK,
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
  [2774] = 12,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_exp_op,
    ACTIONS(103), 1,
      sym_delay_op,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(23), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    ACTIONS(115), 2,
      sym_add_op,
      sym_or_op,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(117), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 14,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [2834] = 7,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 26,
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
      anon_sym_LBRACK,
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
  [2884] = 5,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(91), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(89), 25,
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
      anon_sym_LBRACK,
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
  [2929] = 4,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(125), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(123), 28,
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
      anon_sym_LBRACK,
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
  [2971] = 4,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(131), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(129), 28,
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
      anon_sym_LBRACK,
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
  [3013] = 4,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    STATE(40), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(138), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(136), 28,
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
      anon_sym_LBRACK,
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
  [3055] = 4,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    STATE(39), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(138), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(136), 28,
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
      anon_sym_LBRACK,
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
  [3097] = 4,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    STATE(41), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(142), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(140), 28,
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
      anon_sym_LBRACK,
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
  [3139] = 2,
    ACTIONS(131), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(129), 29,
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
      anon_sym_LBRACK,
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
  [3176] = 7,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(93), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
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
  [3223] = 16,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(152), 1,
      sym_exp_op,
    ACTIONS(158), 1,
      sym_delay_op,
    STATE(22), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    ACTIONS(148), 2,
      sym_add_op,
      sym_or_op,
    ACTIONS(154), 2,
      sym_lt_op,
      sym_gt_op,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(156), 4,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
    ACTIONS(144), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(150), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
  [3288] = 10,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_exp_op,
    ACTIONS(158), 1,
      sym_delay_op,
    STATE(22), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(150), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add_op,
      sym_or_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [3341] = 9,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_exp_op,
    ACTIONS(158), 1,
      sym_delay_op,
    STATE(22), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
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
      anon_sym_LBRACK,
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
  [3392] = 8,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      sym_delay_op,
    STATE(22), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    STATE(67), 2,
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
      anon_sym_LBRACK,
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
  [3441] = 12,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_exp_op,
    ACTIONS(158), 1,
      sym_delay_op,
    STATE(22), 1,
      sym_sub_op,
    STATE(66), 1,
      sym_substitutions,
    ACTIONS(148), 2,
      sym_add_op,
      sym_or_op,
    STATE(67), 2,
      sym__modifier_op,
      sym_one_sample_delay_op,
    ACTIONS(97), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(150), 7,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
    ACTIONS(93), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [3498] = 2,
    ACTIONS(162), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(160), 28,
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
      anon_sym_LBRACK,
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
  [3534] = 2,
    ACTIONS(166), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(164), 28,
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
      anon_sym_LBRACK,
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
  [3570] = 2,
    ACTIONS(170), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(168), 28,
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
      anon_sym_LBRACK,
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
  [3606] = 2,
    ACTIONS(174), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(172), 28,
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
      anon_sym_LBRACK,
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
  [3642] = 2,
    ACTIONS(178), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(176), 28,
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
      anon_sym_LBRACK,
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
  [3678] = 2,
    ACTIONS(182), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(180), 28,
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
      anon_sym_LBRACK,
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
  [3714] = 2,
    ACTIONS(186), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(184), 28,
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
      anon_sym_LBRACK,
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
  [3750] = 5,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(41), 1,
      sym__id,
    STATE(56), 1,
      sym_identifier,
    ACTIONS(91), 4,
      anon_sym_COLON,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(89), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [3792] = 2,
    ACTIONS(190), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(188), 28,
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
      anon_sym_LBRACK,
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
  [3828] = 2,
    ACTIONS(194), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(192), 28,
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
      anon_sym_LBRACK,
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
  [3864] = 2,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(196), 28,
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
      anon_sym_LBRACK,
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
  [3900] = 2,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(200), 28,
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
      anon_sym_LBRACK,
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
  [3936] = 2,
    ACTIONS(206), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(204), 28,
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
      anon_sym_LBRACK,
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
  [3972] = 3,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(212), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(208), 27,
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
      anon_sym_LBRACK,
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
  [4010] = 2,
    ACTIONS(216), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(214), 28,
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
      anon_sym_LBRACK,
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
  [4046] = 2,
    ACTIONS(220), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(218), 28,
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
      anon_sym_LBRACK,
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
  [4082] = 2,
    ACTIONS(224), 3,
      anon_sym_COLON,
      sym_lt_op,
      sym_gt_op,
    ACTIONS(222), 28,
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
      anon_sym_LBRACK,
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
  [4118] = 12,
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
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      sym_comment,
    STATE(145), 1,
      sym_identifier,
    STATE(70), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(69), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(172), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [4166] = 12,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(235), 1,
      anon_sym_import,
    ACTIONS(238), 1,
      anon_sym_declare,
    ACTIONS(244), 1,
      anon_sym_COLON_COLON,
    ACTIONS(247), 1,
      sym__id,
    ACTIONS(250), 1,
      sym_comment,
    STATE(145), 1,
      sym_identifier,
    STATE(70), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(69), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(241), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(172), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [4214] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(145), 1,
      sym_identifier,
    STATE(88), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(166), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [4248] = 8,
    ACTIONS(258), 1,
      anon_sym_COLON_COLON,
    ACTIONS(261), 1,
      sym__id,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(255), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4280] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4311] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4342] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4373] = 4,
    ACTIONS(272), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(274), 1,
      sym__doc_char,
    STATE(78), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(276), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4396] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4427] = 4,
    ACTIONS(280), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(282), 1,
      sym__doc_char,
    STATE(75), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(284), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4450] = 4,
    ACTIONS(286), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(288), 1,
      sym__doc_char,
    STATE(78), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(291), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4473] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4504] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4535] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4566] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_environment_repeat1,
    STATE(145), 1,
      sym_identifier,
    STATE(83), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(171), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4597] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(145), 1,
      sym_identifier,
    STATE(111), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(169), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(266), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4622] = 2,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(302), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4638] = 2,
    ACTIONS(304), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(306), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4654] = 2,
    ACTIONS(308), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(310), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4670] = 2,
    ACTIONS(312), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(314), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4686] = 4,
    ACTIONS(321), 1,
      anon_sym_COLON_COLON,
    STATE(88), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(316), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(318), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [4705] = 6,
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
    ACTIONS(323), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4727] = 2,
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
  [4741] = 2,
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
  [4755] = 6,
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
    ACTIONS(343), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [4777] = 2,
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
  [4791] = 2,
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
  [4805] = 4,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(353), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4823] = 2,
    ACTIONS(357), 1,
      anon_sym_COLON,
    ACTIONS(355), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4837] = 4,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(359), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4855] = 2,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(363), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4869] = 2,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(367), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4883] = 3,
    ACTIONS(371), 1,
      anon_sym_COLON_COLON,
    STATE(110), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(123), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4898] = 3,
    ACTIONS(371), 1,
      anon_sym_COLON_COLON,
    STATE(104), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(140), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4913] = 8,
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
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      anon_sym_with,
    ACTIONS(377), 1,
      anon_sym_letrec,
  [4938] = 2,
    ACTIONS(381), 1,
      anon_sym_COLON_COLON,
    ACTIONS(379), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4951] = 3,
    ACTIONS(371), 1,
      anon_sym_COLON_COLON,
    STATE(110), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(136), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4966] = 2,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(383), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4979] = 2,
    ACTIONS(385), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(387), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [4992] = 3,
    ACTIONS(371), 1,
      anon_sym_COLON_COLON,
    STATE(100), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(136), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [5007] = 8,
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
    ACTIONS(375), 1,
      anon_sym_with,
    ACTIONS(377), 1,
      anon_sym_letrec,
    ACTIONS(389), 1,
      anon_sym_SEMI,
  [5032] = 8,
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
    ACTIONS(375), 1,
      anon_sym_with,
    ACTIONS(377), 1,
      anon_sym_letrec,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [5057] = 3,
    ACTIONS(393), 1,
      anon_sym_COLON_COLON,
    STATE(110), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(129), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [5072] = 4,
    ACTIONS(316), 1,
      sym__id,
    ACTIONS(321), 1,
      anon_sym_COLON_COLON,
    STATE(111), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(396), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [5089] = 8,
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
    ACTIONS(375), 1,
      anon_sym_with,
    ACTIONS(377), 1,
      anon_sym_letrec,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [5114] = 8,
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
    ACTIONS(375), 1,
      anon_sym_with,
    ACTIONS(377), 1,
      anon_sym_letrec,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [5139] = 8,
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
    ACTIONS(375), 1,
      anon_sym_with,
    ACTIONS(377), 1,
      anon_sym_letrec,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [5164] = 7,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_LT_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_GT,
    STATE(132), 1,
      aux_sym_arguments_repeat1,
  [5186] = 1,
    ACTIONS(129), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5196] = 7,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_LT_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_GT,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_arguments_repeat1,
  [5218] = 2,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(419), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5229] = 3,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(423), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5242] = 2,
    ACTIONS(381), 1,
      anon_sym_COLON_COLON,
    ACTIONS(379), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [5253] = 5,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_LT_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_GT,
    ACTIONS(425), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5270] = 5,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_LT_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_GT,
    ACTIONS(427), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5287] = 5,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_LT_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_GT,
    ACTIONS(429), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5304] = 5,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(413), 1,
      anon_sym_LT_COLON,
    ACTIONS(415), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_COMMA,
  [5320] = 4,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      anon_sym_where,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
    STATE(127), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5334] = 4,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      anon_sym_where,
    STATE(125), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5348] = 3,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(127), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5360] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(446), 1,
      sym_string,
    ACTIONS(448), 1,
      sym__id,
    STATE(149), 1,
      sym_identifier,
  [5373] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(136), 1,
      sym_identifier,
    STATE(158), 1,
      sym_parameters,
  [5386] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(136), 1,
      sym_identifier,
    STATE(163), 1,
      sym_parameters,
  [5399] = 3,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(450), 1,
      sym__id,
    STATE(51), 1,
      sym_identifier,
  [5409] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [5419] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(128), 1,
      sym_identifier,
  [5429] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(157), 1,
      sym_identifier,
  [5439] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [5449] = 3,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_parameters_repeat1,
  [5459] = 1,
    ACTIONS(460), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [5465] = 3,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_parameters_repeat1,
  [5475] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(161), 1,
      sym_identifier,
  [5485] = 3,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [5495] = 3,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_parameters_repeat1,
  [5505] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(144), 1,
      sym_identifier,
  [5515] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_environment,
  [5522] = 1,
    ACTIONS(474), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5527] = 2,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
  [5534] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_environment,
  [5541] = 2,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_rec_environment,
  [5548] = 1,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
  [5552] = 1,
    ACTIONS(484), 1,
      sym_string,
  [5556] = 1,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [5560] = 1,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [5564] = 1,
    ACTIONS(490), 1,
      sym_string,
  [5568] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [5572] = 1,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
  [5576] = 1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [5580] = 1,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [5584] = 1,
    ACTIONS(500), 1,
      anon_sym_EQ,
  [5588] = 1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [5592] = 1,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
  [5596] = 1,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [5600] = 1,
    ACTIONS(508), 1,
      anon_sym_COMMA,
  [5604] = 1,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [5608] = 1,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [5612] = 1,
    ACTIONS(514), 1,
      anon_sym_SEMI,
  [5616] = 1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [5620] = 1,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [5624] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [5628] = 1,
    ACTIONS(522), 1,
      sym__id,
  [5632] = 1,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [5636] = 1,
    ACTIONS(526), 1,
      sym_string,
  [5640] = 1,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [5644] = 1,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [5648] = 1,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
  [5652] = 1,
    ACTIONS(534), 1,
      sym__id,
  [5656] = 1,
    ACTIONS(536), 1,
      sym__id,
  [5660] = 1,
    ACTIONS(538), 1,
      sym__id,
  [5664] = 1,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 455,
  [SMALL_STATE(8)] = 546,
  [SMALL_STATE(9)] = 637,
  [SMALL_STATE(10)] = 728,
  [SMALL_STATE(11)] = 819,
  [SMALL_STATE(12)] = 910,
  [SMALL_STATE(13)] = 1001,
  [SMALL_STATE(14)] = 1091,
  [SMALL_STATE(15)] = 1181,
  [SMALL_STATE(16)] = 1268,
  [SMALL_STATE(17)] = 1355,
  [SMALL_STATE(18)] = 1442,
  [SMALL_STATE(19)] = 1529,
  [SMALL_STATE(20)] = 1616,
  [SMALL_STATE(21)] = 1703,
  [SMALL_STATE(22)] = 1783,
  [SMALL_STATE(23)] = 1863,
  [SMALL_STATE(24)] = 1943,
  [SMALL_STATE(25)] = 2023,
  [SMALL_STATE(26)] = 2103,
  [SMALL_STATE(27)] = 2183,
  [SMALL_STATE(28)] = 2263,
  [SMALL_STATE(29)] = 2343,
  [SMALL_STATE(30)] = 2423,
  [SMALL_STATE(31)] = 2503,
  [SMALL_STATE(32)] = 2544,
  [SMALL_STATE(33)] = 2598,
  [SMALL_STATE(34)] = 2666,
  [SMALL_STATE(35)] = 2722,
  [SMALL_STATE(36)] = 2774,
  [SMALL_STATE(37)] = 2834,
  [SMALL_STATE(38)] = 2884,
  [SMALL_STATE(39)] = 2929,
  [SMALL_STATE(40)] = 2971,
  [SMALL_STATE(41)] = 3013,
  [SMALL_STATE(42)] = 3055,
  [SMALL_STATE(43)] = 3097,
  [SMALL_STATE(44)] = 3139,
  [SMALL_STATE(45)] = 3176,
  [SMALL_STATE(46)] = 3223,
  [SMALL_STATE(47)] = 3288,
  [SMALL_STATE(48)] = 3341,
  [SMALL_STATE(49)] = 3392,
  [SMALL_STATE(50)] = 3441,
  [SMALL_STATE(51)] = 3498,
  [SMALL_STATE(52)] = 3534,
  [SMALL_STATE(53)] = 3570,
  [SMALL_STATE(54)] = 3606,
  [SMALL_STATE(55)] = 3642,
  [SMALL_STATE(56)] = 3678,
  [SMALL_STATE(57)] = 3714,
  [SMALL_STATE(58)] = 3750,
  [SMALL_STATE(59)] = 3792,
  [SMALL_STATE(60)] = 3828,
  [SMALL_STATE(61)] = 3864,
  [SMALL_STATE(62)] = 3900,
  [SMALL_STATE(63)] = 3936,
  [SMALL_STATE(64)] = 3972,
  [SMALL_STATE(65)] = 4010,
  [SMALL_STATE(66)] = 4046,
  [SMALL_STATE(67)] = 4082,
  [SMALL_STATE(68)] = 4118,
  [SMALL_STATE(69)] = 4166,
  [SMALL_STATE(70)] = 4214,
  [SMALL_STATE(71)] = 4248,
  [SMALL_STATE(72)] = 4280,
  [SMALL_STATE(73)] = 4311,
  [SMALL_STATE(74)] = 4342,
  [SMALL_STATE(75)] = 4373,
  [SMALL_STATE(76)] = 4396,
  [SMALL_STATE(77)] = 4427,
  [SMALL_STATE(78)] = 4450,
  [SMALL_STATE(79)] = 4473,
  [SMALL_STATE(80)] = 4504,
  [SMALL_STATE(81)] = 4535,
  [SMALL_STATE(82)] = 4566,
  [SMALL_STATE(83)] = 4597,
  [SMALL_STATE(84)] = 4622,
  [SMALL_STATE(85)] = 4638,
  [SMALL_STATE(86)] = 4654,
  [SMALL_STATE(87)] = 4670,
  [SMALL_STATE(88)] = 4686,
  [SMALL_STATE(89)] = 4705,
  [SMALL_STATE(90)] = 4727,
  [SMALL_STATE(91)] = 4741,
  [SMALL_STATE(92)] = 4755,
  [SMALL_STATE(93)] = 4777,
  [SMALL_STATE(94)] = 4791,
  [SMALL_STATE(95)] = 4805,
  [SMALL_STATE(96)] = 4823,
  [SMALL_STATE(97)] = 4837,
  [SMALL_STATE(98)] = 4855,
  [SMALL_STATE(99)] = 4869,
  [SMALL_STATE(100)] = 4883,
  [SMALL_STATE(101)] = 4898,
  [SMALL_STATE(102)] = 4913,
  [SMALL_STATE(103)] = 4938,
  [SMALL_STATE(104)] = 4951,
  [SMALL_STATE(105)] = 4966,
  [SMALL_STATE(106)] = 4979,
  [SMALL_STATE(107)] = 4992,
  [SMALL_STATE(108)] = 5007,
  [SMALL_STATE(109)] = 5032,
  [SMALL_STATE(110)] = 5057,
  [SMALL_STATE(111)] = 5072,
  [SMALL_STATE(112)] = 5089,
  [SMALL_STATE(113)] = 5114,
  [SMALL_STATE(114)] = 5139,
  [SMALL_STATE(115)] = 5164,
  [SMALL_STATE(116)] = 5186,
  [SMALL_STATE(117)] = 5196,
  [SMALL_STATE(118)] = 5218,
  [SMALL_STATE(119)] = 5229,
  [SMALL_STATE(120)] = 5242,
  [SMALL_STATE(121)] = 5253,
  [SMALL_STATE(122)] = 5270,
  [SMALL_STATE(123)] = 5287,
  [SMALL_STATE(124)] = 5304,
  [SMALL_STATE(125)] = 5320,
  [SMALL_STATE(126)] = 5334,
  [SMALL_STATE(127)] = 5348,
  [SMALL_STATE(128)] = 5360,
  [SMALL_STATE(129)] = 5373,
  [SMALL_STATE(130)] = 5386,
  [SMALL_STATE(131)] = 5399,
  [SMALL_STATE(132)] = 5409,
  [SMALL_STATE(133)] = 5419,
  [SMALL_STATE(134)] = 5429,
  [SMALL_STATE(135)] = 5439,
  [SMALL_STATE(136)] = 5449,
  [SMALL_STATE(137)] = 5459,
  [SMALL_STATE(138)] = 5465,
  [SMALL_STATE(139)] = 5475,
  [SMALL_STATE(140)] = 5485,
  [SMALL_STATE(141)] = 5495,
  [SMALL_STATE(142)] = 5505,
  [SMALL_STATE(143)] = 5515,
  [SMALL_STATE(144)] = 5522,
  [SMALL_STATE(145)] = 5527,
  [SMALL_STATE(146)] = 5534,
  [SMALL_STATE(147)] = 5541,
  [SMALL_STATE(148)] = 5548,
  [SMALL_STATE(149)] = 5552,
  [SMALL_STATE(150)] = 5556,
  [SMALL_STATE(151)] = 5560,
  [SMALL_STATE(152)] = 5564,
  [SMALL_STATE(153)] = 5568,
  [SMALL_STATE(154)] = 5572,
  [SMALL_STATE(155)] = 5576,
  [SMALL_STATE(156)] = 5580,
  [SMALL_STATE(157)] = 5584,
  [SMALL_STATE(158)] = 5588,
  [SMALL_STATE(159)] = 5592,
  [SMALL_STATE(160)] = 5596,
  [SMALL_STATE(161)] = 5600,
  [SMALL_STATE(162)] = 5604,
  [SMALL_STATE(163)] = 5608,
  [SMALL_STATE(164)] = 5612,
  [SMALL_STATE(165)] = 5616,
  [SMALL_STATE(166)] = 5620,
  [SMALL_STATE(167)] = 5624,
  [SMALL_STATE(168)] = 5628,
  [SMALL_STATE(169)] = 5632,
  [SMALL_STATE(170)] = 5636,
  [SMALL_STATE(171)] = 5640,
  [SMALL_STATE(172)] = 5644,
  [SMALL_STATE(173)] = 5648,
  [SMALL_STATE(174)] = 5652,
  [SMALL_STATE(175)] = 5656,
  [SMALL_STATE(176)] = 5660,
  [SMALL_STATE(177)] = 5664,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_op, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub_op, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 9),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(176),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 8),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 12),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 12),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay_op, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay_op, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 14),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(154),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(133),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(103),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(174),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(101),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(120),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(174),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(101),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(78),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(78),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(103),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 7),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 7),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 6),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(168),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(120),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 6),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 6),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(134),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 15),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(142),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(18),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 10),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [532] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
