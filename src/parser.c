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
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 17

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
  sym_exp_op = 29,
  sym_log_op = 30,
  sym_log10_op = 31,
  sym_sqrt_op = 32,
  sym_abs_op = 33,
  sym_floor_op = 34,
  sym_ceil_op = 35,
  sym_rint_op = 36,
  sym_round_op = 37,
  sym_acos_op = 38,
  sym_asin_op = 39,
  sym_atan_op = 40,
  sym_cos_op = 41,
  sym_sin_op = 42,
  sym_tan_op = 43,
  sym_add_op = 44,
  sym_mult_op = 45,
  sym_div_op = 46,
  sym_mod_op = 47,
  sym_pow_op = 48,
  sym_pow_fun_op = 49,
  sym_min_op = 50,
  sym_max_op = 51,
  sym_fmod_op = 52,
  sym_remainder_op = 53,
  sym_atan2_op = 54,
  sym_or_op = 55,
  sym_and_op = 56,
  sym_xor_op = 57,
  sym_lshift_op = 58,
  sym_rshift_op = 59,
  sym_lt_op = 60,
  sym_le_op = 61,
  sym_gt_op = 62,
  sym_ge_op = 63,
  sym_eq_op = 64,
  sym_neq_op = 65,
  sym_delay_op = 66,
  sym_prefix_op = 67,
  sym_attach_op = 68,
  sym_enable_op = 69,
  sym_control_op = 70,
  sym_wire = 71,
  sym_cut = 72,
  sym_mem = 73,
  sym_int = 74,
  sym_real = 75,
  anon_sym_LTmdoc_GT = 76,
  anon_sym_LT_SLASHmdoc_GT = 77,
  sym__doc_char = 78,
  anon_sym_LTnotice_SLASH_GT = 79,
  anon_sym_LTnotice_SLASH_GT2 = 80,
  anon_sym_LTequation_GT = 81,
  anon_sym_LT_SLASHequation_GT = 82,
  anon_sym_LTdiagram_GT = 83,
  anon_sym_LT_SLASHdiagram_GT = 84,
  anon_sym_LTmetadata_GT = 85,
  anon_sym_LT_SLASHmetadata_GT = 86,
  anon_sym_LTlisting = 87,
  anon_sym_import = 88,
  anon_sym_declare = 89,
  anon_sym_singleprecision = 90,
  anon_sym_doubleprecision = 91,
  anon_sym_quadprecision = 92,
  anon_sym_fixedpointprecision = 93,
  sym_string = 94,
  anon_sym_COLON_COLON = 95,
  sym__id = 96,
  sym_comment = 97,
  sym_program = 98,
  sym__statement = 99,
  sym__definition = 100,
  sym_definition = 101,
  sym_function_definition = 102,
  sym__expression = 103,
  sym__infix_expression = 104,
  sym_infix = 105,
  sym_function_call = 106,
  sym_prefix = 107,
  sym_modifier = 108,
  sym_access = 109,
  sym__primitive = 110,
  sym_parameters = 111,
  sym_arguments = 112,
  sym__args = 113,
  sym__argument = 114,
  sym_recursive_arg = 115,
  sym_sequential_arg = 116,
  sym_split_arg = 117,
  sym_merge_arg = 118,
  sym_iteration = 119,
  sym_with_environment = 120,
  sym_environment = 121,
  sym_letrec_environment = 122,
  sym_rec_environment = 123,
  sym_recinition = 124,
  sym_substitution = 125,
  sym_substitutions = 126,
  sym_component = 127,
  sym__unary_op = 128,
  sym__binary_op = 129,
  sym__modifier_op = 130,
  sym_sub_op = 131,
  sym_one_sample_delay_op = 132,
  sym__number = 133,
  sym_documentation = 134,
  sym__doc_content = 135,
  sym__special_doc_tag = 136,
  sym_file_import = 137,
  sym_global_metadata = 138,
  sym_function_metadata = 139,
  sym__binary_composition = 140,
  sym_recursive = 141,
  sym_sequential = 142,
  sym_split = 143,
  sym_merge = 144,
  sym_parallel = 145,
  sym_variant = 146,
  sym_identifier = 147,
  aux_sym_program_repeat1 = 148,
  aux_sym__statement_repeat1 = 149,
  aux_sym_parameters_repeat1 = 150,
  aux_sym_arguments_repeat1 = 151,
  aux_sym_environment_repeat1 = 152,
  aux_sym_rec_environment_repeat1 = 153,
  aux_sym_documentation_repeat1 = 154,
  aux_sym_identifier_repeat1 = 155,
  alias_sym_parameter = 156,
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
  [sym_exp_op] = "exp_op",
  [sym_log_op] = "log_op",
  [sym_log10_op] = "log10_op",
  [sym_sqrt_op] = "sqrt_op",
  [sym_abs_op] = "abs_op",
  [sym_floor_op] = "floor_op",
  [sym_ceil_op] = "ceil_op",
  [sym_rint_op] = "rint_op",
  [sym_round_op] = "round_op",
  [sym_acos_op] = "acos_op",
  [sym_asin_op] = "asin_op",
  [sym_atan_op] = "atan_op",
  [sym_cos_op] = "cos_op",
  [sym_sin_op] = "sin_op",
  [sym_tan_op] = "tan_op",
  [sym_add_op] = "add_op",
  [sym_mult_op] = "mult_op",
  [sym_div_op] = "div_op",
  [sym_mod_op] = "mod_op",
  [sym_pow_op] = "pow_op",
  [sym_pow_fun_op] = "pow_fun_op",
  [sym_min_op] = "min_op",
  [sym_max_op] = "max_op",
  [sym_fmod_op] = "fmod_op",
  [sym_remainder_op] = "remainder_op",
  [sym_atan2_op] = "atan2_op",
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
  [sym_attach_op] = "attach_op",
  [sym_enable_op] = "enable_op",
  [sym_control_op] = "control_op",
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
  [sym_exp_op] = sym_exp_op,
  [sym_log_op] = sym_log_op,
  [sym_log10_op] = sym_log10_op,
  [sym_sqrt_op] = sym_sqrt_op,
  [sym_abs_op] = sym_abs_op,
  [sym_floor_op] = sym_floor_op,
  [sym_ceil_op] = sym_ceil_op,
  [sym_rint_op] = sym_rint_op,
  [sym_round_op] = sym_round_op,
  [sym_acos_op] = sym_acos_op,
  [sym_asin_op] = sym_asin_op,
  [sym_atan_op] = sym_atan_op,
  [sym_cos_op] = sym_cos_op,
  [sym_sin_op] = sym_sin_op,
  [sym_tan_op] = sym_tan_op,
  [sym_add_op] = sym_add_op,
  [sym_mult_op] = sym_mult_op,
  [sym_div_op] = sym_div_op,
  [sym_mod_op] = sym_mod_op,
  [sym_pow_op] = sym_pow_op,
  [sym_pow_fun_op] = sym_pow_fun_op,
  [sym_min_op] = sym_min_op,
  [sym_max_op] = sym_max_op,
  [sym_fmod_op] = sym_fmod_op,
  [sym_remainder_op] = sym_remainder_op,
  [sym_atan2_op] = sym_atan2_op,
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
  [sym_attach_op] = sym_attach_op,
  [sym_enable_op] = sym_enable_op,
  [sym_control_op] = sym_control_op,
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
  [sym_exp_op] = {
    .visible = true,
    .named = true,
  },
  [sym_log_op] = {
    .visible = true,
    .named = true,
  },
  [sym_log10_op] = {
    .visible = true,
    .named = true,
  },
  [sym_sqrt_op] = {
    .visible = true,
    .named = true,
  },
  [sym_abs_op] = {
    .visible = true,
    .named = true,
  },
  [sym_floor_op] = {
    .visible = true,
    .named = true,
  },
  [sym_ceil_op] = {
    .visible = true,
    .named = true,
  },
  [sym_rint_op] = {
    .visible = true,
    .named = true,
  },
  [sym_round_op] = {
    .visible = true,
    .named = true,
  },
  [sym_acos_op] = {
    .visible = true,
    .named = true,
  },
  [sym_asin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_atan_op] = {
    .visible = true,
    .named = true,
  },
  [sym_cos_op] = {
    .visible = true,
    .named = true,
  },
  [sym_sin_op] = {
    .visible = true,
    .named = true,
  },
  [sym_tan_op] = {
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
  [sym_pow_op] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_fun_op] = {
    .visible = true,
    .named = true,
  },
  [sym_min_op] = {
    .visible = true,
    .named = true,
  },
  [sym_max_op] = {
    .visible = true,
    .named = true,
  },
  [sym_fmod_op] = {
    .visible = true,
    .named = true,
  },
  [sym_remainder_op] = {
    .visible = true,
    .named = true,
  },
  [sym_atan2_op] = {
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
  [sym_attach_op] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_op] = {
    .visible = true,
    .named = true,
  },
  [sym_control_op] = {
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
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 4},
  [16] = {.index = 28, .length = 2},
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
    {field_operand, 0},
    {field_operator, 1},
  [10] =
    {field_left, 0},
    {field_right, 2},
  [12] =
    {field_expression, 0},
    {field_local_environment, 2},
  [14] =
    {field_definition, 2},
    {field_environment, 0},
  [16] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [19] =
    {field_callee, 0},
  [20] =
    {field_operand, 2},
    {field_operator, 0},
  [22] =
    {field_name, 0},
    {field_value, 5},
  [24] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [28] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [11] = {
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
      if (eof) ADVANCE(255);
      if (lookahead == '!') ADVANCE(369);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(328);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == '_') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'q') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(369);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(328);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == '_') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'c') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(405);
      if (lookahead == 'p') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == 'x') ADVANCE(514);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == 'w') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(514);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(514);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '&') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(351);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(354);
      if (lookahead == '@') ADVANCE(358);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == ',') ADVANCE(267);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(568);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(567);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(301);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(402);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(506);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 'q') ADVANCE(559);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(356);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(376);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(377);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(384);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(380);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(385);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(382);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(386);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(381);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(383);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(387);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'q') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(361);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(370);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(186);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 194:
      if (lookahead == 'q') ADVANCE(275);
      END_STATE();
    case 195:
      if (lookahead == 'q') ADVANCE(242);
      END_STATE();
    case 196:
      if (lookahead == 'q') ADVANCE(244);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 245:
      if (lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(337);
      END_STATE();
    case 247:
      if (lookahead == 'x') ADVANCE(359);
      END_STATE();
    case 248:
      if (lookahead == 'x') ADVANCE(90);
      END_STATE();
    case 249:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 252:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(568);
      if (lookahead == '\r') ADVANCE(569);
      END_STATE();
    case 254:
      if (eof) ADVANCE(255);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead == 'f') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'q') ADVANCE(559);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_exp_op);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_exp_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_log_op);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_log_op);
      if (lookahead == '1') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_log10_op);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_log10_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_sqrt_op);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_sqrt_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_abs_op);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_abs_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_floor_op);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_floor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ceil_op);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ceil_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_rint_op);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_rint_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_round_op);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_round_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_acos_op);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_acos_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_asin_op);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_asin_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_atan_op);
      if (lookahead == '2') ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_atan_op);
      if (lookahead == '2') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_cos_op);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_cos_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_sin_op);
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_sin_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_tan_op);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_tan_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_add_op);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_add_op);
      if (lookahead == '.') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_mult_op);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_div_op);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_mod_op);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_pow_op);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_pow_fun_op);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_pow_fun_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_min_op);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_min_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_max_op);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_max_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_fmod_op);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_fmod_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_remainder_op);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_remainder_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_atan2_op);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_atan2_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_or_op);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_and_op);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_xor_op);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_xor_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_lshift_op);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_rshift_op);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_lt_op);
      if (lookahead == '<') ADVANCE(349);
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_le_op);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_gt_op);
      if (lookahead == '=') ADVANCE(355);
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ge_op);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_eq_op);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_neq_op);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_delay_op);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_prefix_op);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_prefix_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_attach_op);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_attach_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_enable_op);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_enable_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_control_op);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_control_op);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(302);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 't') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'v') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(542);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'q') ADVANCE(535);
      if (lookahead == 'u') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'm') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead == 's') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(568);
      if (lookahead == '\\') ADVANCE(253);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 254},
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
  [68] = {.lex_state = 254},
  [69] = {.lex_state = 254},
  [70] = {.lex_state = 254},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 254},
  [85] = {.lex_state = 254},
  [86] = {.lex_state = 254},
  [87] = {.lex_state = 254},
  [88] = {.lex_state = 254},
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
  [103] = {.lex_state = 254},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 16},
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
  [151] = {.lex_state = 254},
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
    [sym_exp_op] = ACTIONS(1),
    [sym_log_op] = ACTIONS(1),
    [sym_log10_op] = ACTIONS(1),
    [sym_sqrt_op] = ACTIONS(1),
    [sym_abs_op] = ACTIONS(1),
    [sym_floor_op] = ACTIONS(1),
    [sym_ceil_op] = ACTIONS(1),
    [sym_rint_op] = ACTIONS(1),
    [sym_round_op] = ACTIONS(1),
    [sym_acos_op] = ACTIONS(1),
    [sym_asin_op] = ACTIONS(1),
    [sym_atan_op] = ACTIONS(1),
    [sym_cos_op] = ACTIONS(1),
    [sym_sin_op] = ACTIONS(1),
    [sym_tan_op] = ACTIONS(1),
    [sym_add_op] = ACTIONS(1),
    [sym_mult_op] = ACTIONS(1),
    [sym_div_op] = ACTIONS(1),
    [sym_mod_op] = ACTIONS(1),
    [sym_pow_op] = ACTIONS(1),
    [sym_pow_fun_op] = ACTIONS(1),
    [sym_min_op] = ACTIONS(1),
    [sym_max_op] = ACTIONS(1),
    [sym_fmod_op] = ACTIONS(1),
    [sym_remainder_op] = ACTIONS(1),
    [sym_atan2_op] = ACTIONS(1),
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
    [sym_attach_op] = ACTIONS(1),
    [sym_enable_op] = ACTIONS(1),
    [sym_control_op] = ACTIONS(1),
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
  [2] = {
    [sym__expression] = STATE(92),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(92),
    [sym_letrec_environment] = STATE(92),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(92),
    [sym_recursive] = STATE(92),
    [sym_sequential] = STATE(92),
    [sym_split] = STATE(92),
    [sym_merge] = STATE(92),
    [sym_parallel] = STATE(92),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [3] = {
    [sym__expression] = STATE(114),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(114),
    [sym_letrec_environment] = STATE(114),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(114),
    [sym_recursive] = STATE(114),
    [sym_sequential] = STATE(114),
    [sym_split] = STATE(114),
    [sym_merge] = STATE(114),
    [sym_parallel] = STATE(114),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [4] = {
    [sym__expression] = STATE(102),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(102),
    [sym_letrec_environment] = STATE(102),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(102),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [5] = {
    [sym__expression] = STATE(108),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(108),
    [sym_letrec_environment] = STATE(108),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(108),
    [sym_recursive] = STATE(108),
    [sym_sequential] = STATE(108),
    [sym_split] = STATE(108),
    [sym_merge] = STATE(108),
    [sym_parallel] = STATE(108),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [6] = {
    [sym__expression] = STATE(97),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(97),
    [sym_letrec_environment] = STATE(97),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(97),
    [sym_recursive] = STATE(97),
    [sym_sequential] = STATE(97),
    [sym_split] = STATE(97),
    [sym_merge] = STATE(97),
    [sym_parallel] = STATE(97),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [7] = {
    [sym__expression] = STATE(109),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(109),
    [sym_letrec_environment] = STATE(109),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(109),
    [sym_recursive] = STATE(109),
    [sym_sequential] = STATE(109),
    [sym_split] = STATE(109),
    [sym_merge] = STATE(109),
    [sym_parallel] = STATE(109),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [8] = {
    [sym__expression] = STATE(89),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(89),
    [sym_letrec_environment] = STATE(89),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(89),
    [sym_recursive] = STATE(89),
    [sym_sequential] = STATE(89),
    [sym_split] = STATE(89),
    [sym_merge] = STATE(89),
    [sym_parallel] = STATE(89),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [9] = {
    [sym__expression] = STATE(113),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(113),
    [sym_letrec_environment] = STATE(113),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(113),
    [sym_recursive] = STATE(113),
    [sym_sequential] = STATE(113),
    [sym_split] = STATE(113),
    [sym_merge] = STATE(113),
    [sym_parallel] = STATE(113),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [10] = {
    [sym__expression] = STATE(95),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(95),
    [sym_letrec_environment] = STATE(95),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(95),
    [sym_recursive] = STATE(95),
    [sym_sequential] = STATE(95),
    [sym_split] = STATE(95),
    [sym_merge] = STATE(95),
    [sym_parallel] = STATE(95),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [11] = {
    [sym__expression] = STATE(96),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(96),
    [sym_letrec_environment] = STATE(96),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(96),
    [sym_recursive] = STATE(96),
    [sym_sequential] = STATE(96),
    [sym_split] = STATE(96),
    [sym_merge] = STATE(96),
    [sym_parallel] = STATE(96),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [12] = {
    [sym__expression] = STATE(112),
    [sym__infix_expression] = STATE(33),
    [sym_infix] = STATE(33),
    [sym_function_call] = STATE(33),
    [sym_prefix] = STATE(33),
    [sym_modifier] = STATE(33),
    [sym_access] = STATE(33),
    [sym__primitive] = STATE(33),
    [sym_iteration] = STATE(33),
    [sym_with_environment] = STATE(112),
    [sym_letrec_environment] = STATE(112),
    [sym_substitution] = STATE(33),
    [sym_component] = STATE(33),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(33),
    [sym__binary_composition] = STATE(112),
    [sym_recursive] = STATE(112),
    [sym_sequential] = STATE(112),
    [sym_split] = STATE(112),
    [sym_merge] = STATE(112),
    [sym_parallel] = STATE(112),
    [sym_identifier] = STATE(33),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(35),
    [sym_cut] = ACTIONS(35),
    [sym_mem] = ACTIONS(35),
    [sym_int] = ACTIONS(35),
    [sym_real] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [13] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__args] = STATE(153),
    [sym__argument] = STATE(117),
    [sym_recursive_arg] = STATE(117),
    [sym_sequential_arg] = STATE(117),
    [sym_split_arg] = STATE(117),
    [sym_merge_arg] = STATE(117),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [14] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym_arguments] = STATE(167),
    [sym__argument] = STATE(115),
    [sym_recursive_arg] = STATE(115),
    [sym_sequential_arg] = STATE(115),
    [sym_split_arg] = STATE(115),
    [sym_merge_arg] = STATE(115),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [15] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__argument] = STATE(123),
    [sym_recursive_arg] = STATE(123),
    [sym_sequential_arg] = STATE(123),
    [sym_split_arg] = STATE(123),
    [sym_merge_arg] = STATE(123),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [16] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__argument] = STATE(119),
    [sym_recursive_arg] = STATE(119),
    [sym_sequential_arg] = STATE(119),
    [sym_split_arg] = STATE(119),
    [sym_merge_arg] = STATE(119),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [17] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__argument] = STATE(118),
    [sym_recursive_arg] = STATE(118),
    [sym_sequential_arg] = STATE(118),
    [sym_split_arg] = STATE(118),
    [sym_merge_arg] = STATE(118),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [18] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__argument] = STATE(122),
    [sym_recursive_arg] = STATE(122),
    [sym_sequential_arg] = STATE(122),
    [sym_split_arg] = STATE(122),
    [sym_merge_arg] = STATE(122),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [19] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__argument] = STATE(124),
    [sym_recursive_arg] = STATE(124),
    [sym_sequential_arg] = STATE(124),
    [sym_split_arg] = STATE(124),
    [sym_merge_arg] = STATE(124),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [20] = {
    [sym__infix_expression] = STATE(46),
    [sym_infix] = STATE(46),
    [sym_function_call] = STATE(46),
    [sym_prefix] = STATE(46),
    [sym_modifier] = STATE(46),
    [sym_access] = STATE(46),
    [sym__primitive] = STATE(46),
    [sym__argument] = STATE(121),
    [sym_recursive_arg] = STATE(121),
    [sym_sequential_arg] = STATE(121),
    [sym_split_arg] = STATE(121),
    [sym_merge_arg] = STATE(121),
    [sym_iteration] = STATE(46),
    [sym_substitution] = STATE(46),
    [sym_component] = STATE(46),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(46),
    [sym_identifier] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(45),
    [sym_cut] = ACTIONS(45),
    [sym_mem] = ACTIONS(45),
    [sym_int] = ACTIONS(45),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [21] = {
    [sym__infix_expression] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_function_call] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_modifier] = STATE(45),
    [sym_access] = STATE(45),
    [sym__primitive] = STATE(45),
    [sym_iteration] = STATE(45),
    [sym_substitution] = STATE(45),
    [sym_component] = STATE(45),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(45),
    [sym_identifier] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [22] = {
    [sym__infix_expression] = STATE(47),
    [sym_infix] = STATE(47),
    [sym_function_call] = STATE(47),
    [sym_prefix] = STATE(47),
    [sym_modifier] = STATE(47),
    [sym_access] = STATE(47),
    [sym__primitive] = STATE(47),
    [sym_iteration] = STATE(47),
    [sym_substitution] = STATE(47),
    [sym_component] = STATE(47),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(47),
    [sym_identifier] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [23] = {
    [sym__infix_expression] = STATE(34),
    [sym_infix] = STATE(34),
    [sym_function_call] = STATE(34),
    [sym_prefix] = STATE(34),
    [sym_modifier] = STATE(34),
    [sym_access] = STATE(34),
    [sym__primitive] = STATE(34),
    [sym_iteration] = STATE(34),
    [sym_substitution] = STATE(34),
    [sym_component] = STATE(34),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(34),
    [sym_identifier] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [24] = {
    [sym__infix_expression] = STATE(36),
    [sym_infix] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_prefix] = STATE(36),
    [sym_modifier] = STATE(36),
    [sym_access] = STATE(36),
    [sym__primitive] = STATE(36),
    [sym_iteration] = STATE(36),
    [sym_substitution] = STATE(36),
    [sym_component] = STATE(36),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(36),
    [sym_identifier] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(61),
    [sym_cut] = ACTIONS(61),
    [sym_mem] = ACTIONS(61),
    [sym_int] = ACTIONS(61),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [25] = {
    [sym__infix_expression] = STATE(32),
    [sym_infix] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_prefix] = STATE(32),
    [sym_modifier] = STATE(32),
    [sym_access] = STATE(32),
    [sym__primitive] = STATE(32),
    [sym_iteration] = STATE(32),
    [sym_substitution] = STATE(32),
    [sym_component] = STATE(32),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(32),
    [sym_identifier] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(65),
    [sym_cut] = ACTIONS(65),
    [sym_mem] = ACTIONS(65),
    [sym_int] = ACTIONS(65),
    [sym_real] = ACTIONS(67),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [26] = {
    [sym__infix_expression] = STATE(35),
    [sym_infix] = STATE(35),
    [sym_function_call] = STATE(35),
    [sym_prefix] = STATE(35),
    [sym_modifier] = STATE(35),
    [sym_access] = STATE(35),
    [sym__primitive] = STATE(35),
    [sym_iteration] = STATE(35),
    [sym_substitution] = STATE(35),
    [sym_component] = STATE(35),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(35),
    [sym_identifier] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [27] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(49),
    [sym_identifier] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [28] = {
    [sym__infix_expression] = STATE(50),
    [sym_infix] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_prefix] = STATE(50),
    [sym_modifier] = STATE(50),
    [sym_access] = STATE(50),
    [sym__primitive] = STATE(50),
    [sym_iteration] = STATE(50),
    [sym_substitution] = STATE(50),
    [sym_component] = STATE(50),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(50),
    [sym_identifier] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(77),
    [sym_cut] = ACTIONS(77),
    [sym_mem] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_real] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [29] = {
    [sym__infix_expression] = STATE(37),
    [sym_infix] = STATE(37),
    [sym_function_call] = STATE(37),
    [sym_prefix] = STATE(37),
    [sym_modifier] = STATE(37),
    [sym_access] = STATE(37),
    [sym__primitive] = STATE(37),
    [sym_iteration] = STATE(37),
    [sym_substitution] = STATE(37),
    [sym_component] = STATE(37),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(37),
    [sym_identifier] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(81),
    [sym_cut] = ACTIONS(81),
    [sym_mem] = ACTIONS(81),
    [sym_int] = ACTIONS(81),
    [sym_real] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
  [30] = {
    [sym__infix_expression] = STATE(48),
    [sym_infix] = STATE(48),
    [sym_function_call] = STATE(48),
    [sym_prefix] = STATE(48),
    [sym_modifier] = STATE(48),
    [sym_access] = STATE(48),
    [sym__primitive] = STATE(48),
    [sym_iteration] = STATE(48),
    [sym_substitution] = STATE(48),
    [sym_component] = STATE(48),
    [sym__unary_op] = STATE(64),
    [sym__binary_op] = STATE(64),
    [sym_sub_op] = STATE(64),
    [sym__number] = STATE(48),
    [sym_identifier] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_int_cast] = ACTIONS(31),
    [sym_float_cast] = ACTIONS(31),
    [sym_exp_op] = ACTIONS(31),
    [sym_log_op] = ACTIONS(31),
    [sym_log10_op] = ACTIONS(31),
    [sym_sqrt_op] = ACTIONS(31),
    [sym_abs_op] = ACTIONS(31),
    [sym_floor_op] = ACTIONS(31),
    [sym_ceil_op] = ACTIONS(31),
    [sym_rint_op] = ACTIONS(31),
    [sym_round_op] = ACTIONS(31),
    [sym_acos_op] = ACTIONS(31),
    [sym_asin_op] = ACTIONS(31),
    [sym_atan_op] = ACTIONS(31),
    [sym_cos_op] = ACTIONS(31),
    [sym_sin_op] = ACTIONS(31),
    [sym_tan_op] = ACTIONS(31),
    [sym_add_op] = ACTIONS(31),
    [sym_mult_op] = ACTIONS(33),
    [sym_div_op] = ACTIONS(33),
    [sym_mod_op] = ACTIONS(33),
    [sym_pow_op] = ACTIONS(33),
    [sym_pow_fun_op] = ACTIONS(31),
    [sym_min_op] = ACTIONS(31),
    [sym_max_op] = ACTIONS(31),
    [sym_fmod_op] = ACTIONS(31),
    [sym_remainder_op] = ACTIONS(31),
    [sym_atan2_op] = ACTIONS(31),
    [sym_or_op] = ACTIONS(33),
    [sym_and_op] = ACTIONS(33),
    [sym_xor_op] = ACTIONS(31),
    [sym_lshift_op] = ACTIONS(33),
    [sym_rshift_op] = ACTIONS(33),
    [sym_lt_op] = ACTIONS(31),
    [sym_le_op] = ACTIONS(33),
    [sym_gt_op] = ACTIONS(31),
    [sym_ge_op] = ACTIONS(33),
    [sym_eq_op] = ACTIONS(33),
    [sym_neq_op] = ACTIONS(33),
    [sym_delay_op] = ACTIONS(33),
    [sym_prefix_op] = ACTIONS(31),
    [sym_attach_op] = ACTIONS(31),
    [sym_enable_op] = ACTIONS(31),
    [sym_control_op] = ACTIONS(31),
    [sym_wire] = ACTIONS(85),
    [sym_cut] = ACTIONS(85),
    [sym_mem] = ACTIONS(85),
    [sym_int] = ACTIONS(85),
    [sym_real] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [sym__id] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(89), 17,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_mult_op,
      sym_div_op,
      sym_mod_op,
      sym_pow_op,
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
    ACTIONS(91), 43,
      anon_sym_DASH,
      anon_sym_environment,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
      anon_sym_component,
      sym_int_cast,
      sym_float_cast,
      sym_exp_op,
      sym_log_op,
      sym_log10_op,
      sym_sqrt_op,
      sym_abs_op,
      sym_floor_op,
      sym_ceil_op,
      sym_rint_op,
      sym_round_op,
      sym_acos_op,
      sym_asin_op,
      sym_atan_op,
      sym_cos_op,
      sym_sin_op,
      sym_tan_op,
      sym_add_op,
      sym_pow_fun_op,
      sym_min_op,
      sym_max_op,
      sym_fmod_op,
      sym_remainder_op,
      sym_atan2_op,
      sym_xor_op,
      sym_lt_op,
      sym_gt_op,
      sym_prefix_op,
      sym_attach_op,
      sym_enable_op,
      sym_control_op,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
      sym__id,
  [65] = 9,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_pow_op,
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
  [119] = 16,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_pow_op,
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
  [187] = 10,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_pow_op,
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
  [243] = 8,
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
      sym_pow_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [295] = 12,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym_pow_op,
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
  [355] = 7,
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
      sym_pow_op,
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
  [405] = 5,
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
      sym_pow_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
  [450] = 4,
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
      sym_pow_op,
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
  [492] = 4,
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
      sym_pow_op,
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
  [534] = 4,
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
      sym_pow_op,
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
  [576] = 4,
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
      sym_pow_op,
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
  [618] = 4,
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
      sym_pow_op,
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
  [660] = 2,
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
      sym_pow_op,
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
  [697] = 7,
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
      sym_pow_op,
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
  [744] = 16,
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
      sym_pow_op,
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
  [809] = 10,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_pow_op,
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
  [862] = 9,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_pow_op,
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
  [913] = 8,
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
      sym_pow_op,
      sym_or_op,
      sym_and_op,
      sym_xor_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
  [962] = 12,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_pow_op,
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
  [1019] = 2,
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
      sym_pow_op,
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
  [1055] = 2,
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
      sym_pow_op,
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
  [1091] = 2,
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
      sym_pow_op,
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
  [1127] = 2,
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
      sym_pow_op,
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
  [1163] = 2,
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
      sym_pow_op,
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
  [1199] = 2,
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
      sym_pow_op,
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
  [1235] = 2,
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
      sym_pow_op,
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
  [1271] = 5,
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
      sym_pow_op,
      sym_or_op,
      sym_and_op,
      sym_lshift_op,
      sym_rshift_op,
      sym_le_op,
      sym_ge_op,
      sym_eq_op,
      sym_neq_op,
      sym_delay_op,
  [1313] = 2,
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
      sym_pow_op,
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
  [1349] = 2,
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
      sym_pow_op,
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
  [1385] = 2,
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
      sym_pow_op,
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
  [1421] = 2,
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
      sym_pow_op,
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
  [1457] = 2,
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
      sym_pow_op,
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
  [1493] = 3,
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
      sym_pow_op,
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
  [1531] = 2,
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
      sym_pow_op,
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
  [1567] = 2,
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
      sym_pow_op,
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
  [1603] = 2,
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
      sym_pow_op,
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
  [1639] = 12,
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
  [1687] = 12,
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
  [1735] = 8,
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
  [1769] = 8,
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
  [1801] = 8,
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
  [1832] = 8,
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
  [1863] = 8,
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
  [1894] = 4,
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
  [1917] = 8,
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
  [1948] = 4,
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
  [1971] = 4,
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
  [1994] = 8,
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
  [2025] = 8,
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
  [2056] = 8,
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
  [2087] = 8,
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
  [2118] = 6,
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
  [2143] = 2,
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
  [2159] = 2,
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
  [2175] = 2,
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
  [2191] = 2,
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
  [2207] = 4,
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
  [2226] = 6,
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
  [2248] = 2,
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
  [2262] = 2,
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
  [2276] = 6,
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
  [2298] = 2,
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
  [2312] = 2,
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
  [2326] = 4,
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
  [2344] = 2,
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
  [2358] = 4,
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
  [2376] = 2,
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
  [2390] = 2,
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
  [2404] = 3,
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
  [2419] = 3,
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
  [2434] = 8,
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
  [2459] = 2,
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
  [2472] = 3,
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
  [2487] = 2,
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
  [2500] = 2,
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
  [2513] = 3,
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
  [2528] = 8,
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
  [2553] = 8,
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
  [2578] = 3,
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
  [2593] = 4,
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
  [2610] = 8,
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
  [2635] = 8,
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
  [2660] = 8,
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
  [2685] = 7,
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
  [2707] = 1,
    ACTIONS(129), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2717] = 7,
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
  [2739] = 2,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(419), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2750] = 3,
    ACTIONS(409), 1,
      anon_sym_TILDE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(423), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2763] = 2,
    ACTIONS(381), 1,
      anon_sym_COLON_COLON,
    ACTIONS(379), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2774] = 5,
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
  [2791] = 5,
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
  [2808] = 5,
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
  [2825] = 5,
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
  [2841] = 4,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(433), 1,
      anon_sym_where,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
    STATE(127), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [2855] = 4,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      anon_sym_where,
    STATE(125), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [2869] = 3,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(127), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [2881] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(446), 1,
      sym_string,
    ACTIONS(448), 1,
      sym__id,
    STATE(149), 1,
      sym_identifier,
  [2894] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(136), 1,
      sym_identifier,
    STATE(158), 1,
      sym_parameters,
  [2907] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(136), 1,
      sym_identifier,
    STATE(163), 1,
      sym_parameters,
  [2920] = 3,
    ACTIONS(39), 1,
      anon_sym_COLON_COLON,
    ACTIONS(450), 1,
      sym__id,
    STATE(51), 1,
      sym_identifier,
  [2930] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [2940] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(128), 1,
      sym_identifier,
  [2950] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(157), 1,
      sym_identifier,
  [2960] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [2970] = 3,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_parameters_repeat1,
  [2980] = 1,
    ACTIONS(460), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [2986] = 3,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_parameters_repeat1,
  [2996] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(161), 1,
      sym_identifier,
  [3006] = 3,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_arguments_repeat1,
  [3016] = 3,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_parameters_repeat1,
  [3026] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(448), 1,
      sym__id,
    STATE(144), 1,
      sym_identifier,
  [3036] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_environment,
  [3043] = 1,
    ACTIONS(474), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3048] = 2,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
  [3055] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_environment,
  [3062] = 2,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_rec_environment,
  [3069] = 1,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
  [3073] = 1,
    ACTIONS(484), 1,
      sym_string,
  [3077] = 1,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [3081] = 1,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [3085] = 1,
    ACTIONS(490), 1,
      sym_string,
  [3089] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [3093] = 1,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
  [3097] = 1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [3101] = 1,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [3105] = 1,
    ACTIONS(500), 1,
      anon_sym_EQ,
  [3109] = 1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [3113] = 1,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
  [3117] = 1,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [3121] = 1,
    ACTIONS(508), 1,
      anon_sym_COMMA,
  [3125] = 1,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [3129] = 1,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [3133] = 1,
    ACTIONS(514), 1,
      anon_sym_SEMI,
  [3137] = 1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [3141] = 1,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [3145] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [3149] = 1,
    ACTIONS(522), 1,
      sym__id,
  [3153] = 1,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [3157] = 1,
    ACTIONS(526), 1,
      sym_string,
  [3161] = 1,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [3165] = 1,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [3169] = 1,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
  [3173] = 1,
    ACTIONS(534), 1,
      sym__id,
  [3177] = 1,
    ACTIONS(536), 1,
      sym__id,
  [3181] = 1,
    ACTIONS(538), 1,
      sym__id,
  [3185] = 1,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 65,
  [SMALL_STATE(33)] = 119,
  [SMALL_STATE(34)] = 187,
  [SMALL_STATE(35)] = 243,
  [SMALL_STATE(36)] = 295,
  [SMALL_STATE(37)] = 355,
  [SMALL_STATE(38)] = 405,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 492,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 576,
  [SMALL_STATE(43)] = 618,
  [SMALL_STATE(44)] = 660,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 744,
  [SMALL_STATE(47)] = 809,
  [SMALL_STATE(48)] = 862,
  [SMALL_STATE(49)] = 913,
  [SMALL_STATE(50)] = 962,
  [SMALL_STATE(51)] = 1019,
  [SMALL_STATE(52)] = 1055,
  [SMALL_STATE(53)] = 1091,
  [SMALL_STATE(54)] = 1127,
  [SMALL_STATE(55)] = 1163,
  [SMALL_STATE(56)] = 1199,
  [SMALL_STATE(57)] = 1235,
  [SMALL_STATE(58)] = 1271,
  [SMALL_STATE(59)] = 1313,
  [SMALL_STATE(60)] = 1349,
  [SMALL_STATE(61)] = 1385,
  [SMALL_STATE(62)] = 1421,
  [SMALL_STATE(63)] = 1457,
  [SMALL_STATE(64)] = 1493,
  [SMALL_STATE(65)] = 1531,
  [SMALL_STATE(66)] = 1567,
  [SMALL_STATE(67)] = 1603,
  [SMALL_STATE(68)] = 1639,
  [SMALL_STATE(69)] = 1687,
  [SMALL_STATE(70)] = 1735,
  [SMALL_STATE(71)] = 1769,
  [SMALL_STATE(72)] = 1801,
  [SMALL_STATE(73)] = 1832,
  [SMALL_STATE(74)] = 1863,
  [SMALL_STATE(75)] = 1894,
  [SMALL_STATE(76)] = 1917,
  [SMALL_STATE(77)] = 1948,
  [SMALL_STATE(78)] = 1971,
  [SMALL_STATE(79)] = 1994,
  [SMALL_STATE(80)] = 2025,
  [SMALL_STATE(81)] = 2056,
  [SMALL_STATE(82)] = 2087,
  [SMALL_STATE(83)] = 2118,
  [SMALL_STATE(84)] = 2143,
  [SMALL_STATE(85)] = 2159,
  [SMALL_STATE(86)] = 2175,
  [SMALL_STATE(87)] = 2191,
  [SMALL_STATE(88)] = 2207,
  [SMALL_STATE(89)] = 2226,
  [SMALL_STATE(90)] = 2248,
  [SMALL_STATE(91)] = 2262,
  [SMALL_STATE(92)] = 2276,
  [SMALL_STATE(93)] = 2298,
  [SMALL_STATE(94)] = 2312,
  [SMALL_STATE(95)] = 2326,
  [SMALL_STATE(96)] = 2344,
  [SMALL_STATE(97)] = 2358,
  [SMALL_STATE(98)] = 2376,
  [SMALL_STATE(99)] = 2390,
  [SMALL_STATE(100)] = 2404,
  [SMALL_STATE(101)] = 2419,
  [SMALL_STATE(102)] = 2434,
  [SMALL_STATE(103)] = 2459,
  [SMALL_STATE(104)] = 2472,
  [SMALL_STATE(105)] = 2487,
  [SMALL_STATE(106)] = 2500,
  [SMALL_STATE(107)] = 2513,
  [SMALL_STATE(108)] = 2528,
  [SMALL_STATE(109)] = 2553,
  [SMALL_STATE(110)] = 2578,
  [SMALL_STATE(111)] = 2593,
  [SMALL_STATE(112)] = 2610,
  [SMALL_STATE(113)] = 2635,
  [SMALL_STATE(114)] = 2660,
  [SMALL_STATE(115)] = 2685,
  [SMALL_STATE(116)] = 2707,
  [SMALL_STATE(117)] = 2717,
  [SMALL_STATE(118)] = 2739,
  [SMALL_STATE(119)] = 2750,
  [SMALL_STATE(120)] = 2763,
  [SMALL_STATE(121)] = 2774,
  [SMALL_STATE(122)] = 2791,
  [SMALL_STATE(123)] = 2808,
  [SMALL_STATE(124)] = 2825,
  [SMALL_STATE(125)] = 2841,
  [SMALL_STATE(126)] = 2855,
  [SMALL_STATE(127)] = 2869,
  [SMALL_STATE(128)] = 2881,
  [SMALL_STATE(129)] = 2894,
  [SMALL_STATE(130)] = 2907,
  [SMALL_STATE(131)] = 2920,
  [SMALL_STATE(132)] = 2930,
  [SMALL_STATE(133)] = 2940,
  [SMALL_STATE(134)] = 2950,
  [SMALL_STATE(135)] = 2960,
  [SMALL_STATE(136)] = 2970,
  [SMALL_STATE(137)] = 2980,
  [SMALL_STATE(138)] = 2986,
  [SMALL_STATE(139)] = 2996,
  [SMALL_STATE(140)] = 3006,
  [SMALL_STATE(141)] = 3016,
  [SMALL_STATE(142)] = 3026,
  [SMALL_STATE(143)] = 3036,
  [SMALL_STATE(144)] = 3043,
  [SMALL_STATE(145)] = 3048,
  [SMALL_STATE(146)] = 3055,
  [SMALL_STATE(147)] = 3062,
  [SMALL_STATE(148)] = 3069,
  [SMALL_STATE(149)] = 3073,
  [SMALL_STATE(150)] = 3077,
  [SMALL_STATE(151)] = 3081,
  [SMALL_STATE(152)] = 3085,
  [SMALL_STATE(153)] = 3089,
  [SMALL_STATE(154)] = 3093,
  [SMALL_STATE(155)] = 3097,
  [SMALL_STATE(156)] = 3101,
  [SMALL_STATE(157)] = 3105,
  [SMALL_STATE(158)] = 3109,
  [SMALL_STATE(159)] = 3113,
  [SMALL_STATE(160)] = 3117,
  [SMALL_STATE(161)] = 3121,
  [SMALL_STATE(162)] = 3125,
  [SMALL_STATE(163)] = 3129,
  [SMALL_STATE(164)] = 3133,
  [SMALL_STATE(165)] = 3137,
  [SMALL_STATE(166)] = 3141,
  [SMALL_STATE(167)] = 3145,
  [SMALL_STATE(168)] = 3149,
  [SMALL_STATE(169)] = 3153,
  [SMALL_STATE(170)] = 3157,
  [SMALL_STATE(171)] = 3161,
  [SMALL_STATE(172)] = 3165,
  [SMALL_STATE(173)] = 3169,
  [SMALL_STATE(174)] = 3173,
  [SMALL_STATE(175)] = 3177,
  [SMALL_STATE(176)] = 3181,
  [SMALL_STATE(177)] = 3185,
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
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 10),
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
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 4, .production_id = 13),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 4, .production_id = 13),
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
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 15),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 15),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 6),
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
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 8),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 8),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 8),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 7),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 7),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 7),
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
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 14),
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
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 7),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 7),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 7),
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
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 16),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(142),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(18),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 11),
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
