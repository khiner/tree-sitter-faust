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
#define STATE_COUNT 342
#define LARGE_STATE_COUNT 66
#define SYMBOL_COUNT 187
#define ALIAS_COUNT 1
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 28

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_declare = 5,
  anon_sym_import = 6,
  anon_sym_COMMA = 7,
  anon_sym_DOT = 8,
  anon_sym_environment = 9,
  anon_sym_BSLASH = 10,
  anon_sym_LBRACK = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_RBRACK = 13,
  anon_sym_COLON = 14,
  anon_sym_case = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_EQ_GT = 18,
  anon_sym_TILDE = 19,
  anon_sym_LT_COLON = 20,
  anon_sym_COLON_GT = 21,
  sym_par = 22,
  sym_seq = 23,
  sym_sum = 24,
  sym_prod = 25,
  anon_sym_with = 26,
  anon_sym_letrec = 27,
  anon_sym_where = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_component = 30,
  sym_add = 31,
  anon_sym_DASH = 32,
  sym_mult = 33,
  sym_div = 34,
  sym_mod = 35,
  sym_pow = 36,
  sym_or = 37,
  sym_and = 38,
  sym_xor = 39,
  sym_lshift = 40,
  sym_rshift = 41,
  sym_lt = 42,
  sym_le = 43,
  sym_gt = 44,
  sym_ge = 45,
  sym_eq = 46,
  sym_neq = 47,
  sym_delay = 48,
  sym_exp = 49,
  sym_log = 50,
  sym_log10 = 51,
  sym_sqrt = 52,
  sym_abs = 53,
  sym_floor = 54,
  sym_ceil = 55,
  sym_rint = 56,
  sym_round = 57,
  sym_acos = 58,
  sym_asin = 59,
  sym_atan = 60,
  sym_cos = 61,
  sym_sin = 62,
  sym_tan = 63,
  sym_int_cast = 64,
  sym_float_cast = 65,
  sym_pow_fun = 66,
  sym_min = 67,
  sym_max = 68,
  sym_fmod = 69,
  sym_remainder = 70,
  sym_atan2 = 71,
  sym_prefix_prim = 72,
  sym_attach = 73,
  sym_enable = 74,
  sym_control = 75,
  sym_wire = 76,
  sym_cut = 77,
  sym_mem = 78,
  sym_rdtable = 79,
  sym_rwtable = 80,
  sym_select2 = 81,
  sym_select3 = 82,
  sym_lowest = 83,
  sym_highest = 84,
  sym_assertbounds = 85,
  sym_int = 86,
  sym_real = 87,
  anon_sym_LTmdoc_GT = 88,
  anon_sym_LT_SLASHmdoc_GT = 89,
  sym__doc_char = 90,
  anon_sym_LTnotice_SLASH_GT = 91,
  anon_sym_LTnotice_SLASH_GT2 = 92,
  anon_sym_LTequation_GT = 93,
  anon_sym_LT_SLASHequation_GT = 94,
  anon_sym_LTdiagram_GT = 95,
  anon_sym_LT_SLASHdiagram_GT = 96,
  anon_sym_LTmetadata_GT = 97,
  anon_sym_LT_SLASHmetadata_GT = 98,
  anon_sym_LTlisting = 99,
  sym_single_precision = 100,
  sym_double_precision = 101,
  sym_quad_precision = 102,
  sym_fixed_point_precision = 103,
  sym_string = 104,
  anon_sym_COLON_COLON = 105,
  sym__id = 106,
  sym_comment = 107,
  sym_program = 108,
  sym__statement = 109,
  sym__definition = 110,
  sym_definition = 111,
  sym_function_definition = 112,
  sym__metadata_definition = 113,
  sym_global_metadata = 114,
  sym_function_metadata = 115,
  sym_file_import = 116,
  sym__expression = 117,
  sym__infix_expression = 118,
  sym_infix = 119,
  sym_partial = 120,
  sym_prefix = 121,
  sym_prim1 = 122,
  sym_prim2 = 123,
  sym_prim3 = 124,
  sym_prim4 = 125,
  sym_prim5 = 126,
  sym_function_call = 127,
  sym_modifier = 128,
  sym_access = 129,
  sym__primitive = 130,
  sym_lambda = 131,
  sym_modulation = 132,
  sym_modulators = 133,
  sym_modulator = 134,
  sym_parameters = 135,
  sym_arguments = 136,
  sym__argument = 137,
  sym_pattern = 138,
  sym_rules = 139,
  sym_rule = 140,
  sym_recursive_arg = 141,
  sym_sequential_arg = 142,
  sym_split_arg = 143,
  sym_merge_arg = 144,
  sym_iteration = 145,
  sym_with_environment = 146,
  sym_environment = 147,
  sym_letrec_environment = 148,
  sym_rec_environment = 149,
  sym_recinition = 150,
  sym_substitution = 151,
  sym_substitutions = 152,
  sym_component = 153,
  sym__infix = 154,
  sym__prim1 = 155,
  sym__prim2 = 156,
  sym__prim3 = 157,
  sym__prim4 = 158,
  sym__prim5 = 159,
  sym__modifier = 160,
  sym_one_sample_delay = 161,
  sym_sub = 162,
  sym__number = 163,
  sym_documentation = 164,
  sym__doc_content = 165,
  sym__special_doc_tag = 166,
  sym__binary_composition = 167,
  sym_recursive = 168,
  sym_sequential = 169,
  sym_split = 170,
  sym_merge = 171,
  sym_parallel = 172,
  sym_variants = 173,
  sym__variant = 174,
  sym_id = 175,
  sym_negate_id = 176,
  aux_sym_program_repeat1 = 177,
  aux_sym_modulators_repeat1 = 178,
  aux_sym_parameters_repeat1 = 179,
  aux_sym_arguments_repeat1 = 180,
  aux_sym_rules_repeat1 = 181,
  aux_sym_environment_repeat1 = 182,
  aux_sym_rec_environment_repeat1 = 183,
  aux_sym_documentation_repeat1 = 184,
  aux_sym_variants_repeat1 = 185,
  aux_sym_id_repeat1 = 186,
  alias_sym_parameter = 187,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_declare] = "declare",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_environment] = "environment",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_case] = "case",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [sym_par] = "par",
  [sym_seq] = "seq",
  [sym_sum] = "sum",
  [sym_prod] = "prod",
  [anon_sym_with] = "with",
  [anon_sym_letrec] = "letrec",
  [anon_sym_where] = "where",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_component] = "component",
  [sym_add] = "add",
  [anon_sym_DASH] = "-",
  [sym_mult] = "mult",
  [sym_div] = "div",
  [sym_mod] = "mod",
  [sym_pow] = "pow",
  [sym_or] = "or",
  [sym_and] = "and",
  [sym_xor] = "xor",
  [sym_lshift] = "lshift",
  [sym_rshift] = "rshift",
  [sym_lt] = "lt",
  [sym_le] = "le",
  [sym_gt] = "gt",
  [sym_ge] = "ge",
  [sym_eq] = "eq",
  [sym_neq] = "neq",
  [sym_delay] = "delay",
  [sym_exp] = "exp",
  [sym_log] = "log",
  [sym_log10] = "log10",
  [sym_sqrt] = "sqrt",
  [sym_abs] = "abs",
  [sym_floor] = "floor",
  [sym_ceil] = "ceil",
  [sym_rint] = "rint",
  [sym_round] = "round",
  [sym_acos] = "acos",
  [sym_asin] = "asin",
  [sym_atan] = "atan",
  [sym_cos] = "cos",
  [sym_sin] = "sin",
  [sym_tan] = "tan",
  [sym_int_cast] = "int_cast",
  [sym_float_cast] = "float_cast",
  [sym_pow_fun] = "pow_fun",
  [sym_min] = "min",
  [sym_max] = "max",
  [sym_fmod] = "fmod",
  [sym_remainder] = "remainder",
  [sym_atan2] = "atan2",
  [sym_prefix_prim] = "prefix_prim",
  [sym_attach] = "attach",
  [sym_enable] = "enable",
  [sym_control] = "control",
  [sym_wire] = "wire",
  [sym_cut] = "cut",
  [sym_mem] = "mem",
  [sym_rdtable] = "rdtable",
  [sym_rwtable] = "rwtable",
  [sym_select2] = "select2",
  [sym_select3] = "select3",
  [sym_lowest] = "lowest",
  [sym_highest] = "highest",
  [sym_assertbounds] = "assertbounds",
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
  [sym_single_precision] = "single_precision",
  [sym_double_precision] = "double_precision",
  [sym_quad_precision] = "quad_precision",
  [sym_fixed_point_precision] = "fixed_point_precision",
  [sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [sym__id] = "_id",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__definition] = "_definition",
  [sym_definition] = "definition",
  [sym_function_definition] = "function_definition",
  [sym__metadata_definition] = "_metadata_definition",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym_file_import] = "file_import",
  [sym__expression] = "_expression",
  [sym__infix_expression] = "_infix_expression",
  [sym_infix] = "infix",
  [sym_partial] = "partial",
  [sym_prefix] = "prefix",
  [sym_prim1] = "prim1",
  [sym_prim2] = "prim2",
  [sym_prim3] = "prim3",
  [sym_prim4] = "prim4",
  [sym_prim5] = "prim5",
  [sym_function_call] = "function_call",
  [sym_modifier] = "modifier",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
  [sym_lambda] = "lambda",
  [sym_modulation] = "modulation",
  [sym_modulators] = "modulators",
  [sym_modulator] = "modulator",
  [sym_parameters] = "parameters",
  [sym_arguments] = "arguments",
  [sym__argument] = "_argument",
  [sym_pattern] = "pattern",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_recursive_arg] = "recursive",
  [sym_sequential_arg] = "sequential",
  [sym_split_arg] = "split",
  [sym_merge_arg] = "merge",
  [sym_iteration] = "iteration",
  [sym_with_environment] = "with_environment",
  [sym_environment] = "environment",
  [sym_letrec_environment] = "letrec_environment",
  [sym_rec_environment] = "rec_environment",
  [sym_recinition] = "recinition",
  [sym_substitution] = "substitution",
  [sym_substitutions] = "substitutions",
  [sym_component] = "component",
  [sym__infix] = "_infix",
  [sym__prim1] = "_prim1",
  [sym__prim2] = "_prim2",
  [sym__prim3] = "_prim3",
  [sym__prim4] = "_prim4",
  [sym__prim5] = "_prim5",
  [sym__modifier] = "_modifier",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_sub] = "sub",
  [sym__number] = "_number",
  [sym_documentation] = "documentation",
  [sym__doc_content] = "_doc_content",
  [sym__special_doc_tag] = "_special_doc_tag",
  [sym__binary_composition] = "_binary_composition",
  [sym_recursive] = "recursive",
  [sym_sequential] = "sequential",
  [sym_split] = "split",
  [sym_merge] = "merge",
  [sym_parallel] = "parallel",
  [sym_variants] = "variants",
  [sym__variant] = "_variant",
  [sym_id] = "id",
  [sym_negate_id] = "negate_id",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_modulators_repeat1] = "modulators_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_rec_environment_repeat1] = "rec_environment_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_environment] = anon_sym_environment,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [sym_par] = sym_par,
  [sym_seq] = sym_seq,
  [sym_sum] = sym_sum,
  [sym_prod] = sym_prod,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_letrec] = anon_sym_letrec,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_component] = anon_sym_component,
  [sym_add] = sym_add,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_mult] = sym_mult,
  [sym_div] = sym_div,
  [sym_mod] = sym_mod,
  [sym_pow] = sym_pow,
  [sym_or] = sym_or,
  [sym_and] = sym_and,
  [sym_xor] = sym_xor,
  [sym_lshift] = sym_lshift,
  [sym_rshift] = sym_rshift,
  [sym_lt] = sym_lt,
  [sym_le] = sym_le,
  [sym_gt] = sym_gt,
  [sym_ge] = sym_ge,
  [sym_eq] = sym_eq,
  [sym_neq] = sym_neq,
  [sym_delay] = sym_delay,
  [sym_exp] = sym_exp,
  [sym_log] = sym_log,
  [sym_log10] = sym_log10,
  [sym_sqrt] = sym_sqrt,
  [sym_abs] = sym_abs,
  [sym_floor] = sym_floor,
  [sym_ceil] = sym_ceil,
  [sym_rint] = sym_rint,
  [sym_round] = sym_round,
  [sym_acos] = sym_acos,
  [sym_asin] = sym_asin,
  [sym_atan] = sym_atan,
  [sym_cos] = sym_cos,
  [sym_sin] = sym_sin,
  [sym_tan] = sym_tan,
  [sym_int_cast] = sym_int_cast,
  [sym_float_cast] = sym_float_cast,
  [sym_pow_fun] = sym_pow_fun,
  [sym_min] = sym_min,
  [sym_max] = sym_max,
  [sym_fmod] = sym_fmod,
  [sym_remainder] = sym_remainder,
  [sym_atan2] = sym_atan2,
  [sym_prefix_prim] = sym_prefix_prim,
  [sym_attach] = sym_attach,
  [sym_enable] = sym_enable,
  [sym_control] = sym_control,
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
  [sym_mem] = sym_mem,
  [sym_rdtable] = sym_rdtable,
  [sym_rwtable] = sym_rwtable,
  [sym_select2] = sym_select2,
  [sym_select3] = sym_select3,
  [sym_lowest] = sym_lowest,
  [sym_highest] = sym_highest,
  [sym_assertbounds] = sym_assertbounds,
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
  [sym_single_precision] = sym_single_precision,
  [sym_double_precision] = sym_double_precision,
  [sym_quad_precision] = sym_quad_precision,
  [sym_fixed_point_precision] = sym_fixed_point_precision,
  [sym_string] = sym_string,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__id] = sym__id,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__definition] = sym__definition,
  [sym_definition] = sym_definition,
  [sym_function_definition] = sym_function_definition,
  [sym__metadata_definition] = sym__metadata_definition,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym_file_import] = sym_file_import,
  [sym__expression] = sym__expression,
  [sym__infix_expression] = sym__infix_expression,
  [sym_infix] = sym_infix,
  [sym_partial] = sym_partial,
  [sym_prefix] = sym_prefix,
  [sym_prim1] = sym_prim1,
  [sym_prim2] = sym_prim2,
  [sym_prim3] = sym_prim3,
  [sym_prim4] = sym_prim4,
  [sym_prim5] = sym_prim5,
  [sym_function_call] = sym_function_call,
  [sym_modifier] = sym_modifier,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
  [sym_lambda] = sym_lambda,
  [sym_modulation] = sym_modulation,
  [sym_modulators] = sym_modulators,
  [sym_modulator] = sym_modulator,
  [sym_parameters] = sym_parameters,
  [sym_arguments] = sym_arguments,
  [sym__argument] = sym__argument,
  [sym_pattern] = sym_pattern,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_recursive_arg] = sym_recursive,
  [sym_sequential_arg] = sym_sequential,
  [sym_split_arg] = sym_split,
  [sym_merge_arg] = sym_merge,
  [sym_iteration] = sym_iteration,
  [sym_with_environment] = sym_with_environment,
  [sym_environment] = sym_environment,
  [sym_letrec_environment] = sym_letrec_environment,
  [sym_rec_environment] = sym_rec_environment,
  [sym_recinition] = sym_recinition,
  [sym_substitution] = sym_substitution,
  [sym_substitutions] = sym_substitutions,
  [sym_component] = sym_component,
  [sym__infix] = sym__infix,
  [sym__prim1] = sym__prim1,
  [sym__prim2] = sym__prim2,
  [sym__prim3] = sym__prim3,
  [sym__prim4] = sym__prim4,
  [sym__prim5] = sym__prim5,
  [sym__modifier] = sym__modifier,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_sub] = sym_sub,
  [sym__number] = sym__number,
  [sym_documentation] = sym_documentation,
  [sym__doc_content] = sym__doc_content,
  [sym__special_doc_tag] = sym__special_doc_tag,
  [sym__binary_composition] = sym__binary_composition,
  [sym_recursive] = sym_recursive,
  [sym_sequential] = sym_sequential,
  [sym_split] = sym_split,
  [sym_merge] = sym_merge,
  [sym_parallel] = sym_parallel,
  [sym_variants] = sym_variants,
  [sym__variant] = sym__variant,
  [sym_id] = sym_id,
  [sym_negate_id] = sym_negate_id,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_modulators_repeat1] = aux_sym_modulators_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_rec_environment_repeat1] = aux_sym_rec_environment_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
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
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_environment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_mult] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_pow] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_lshift] = {
    .visible = true,
    .named = true,
  },
  [sym_rshift] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_le] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_ge] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_neq] = {
    .visible = true,
    .named = true,
  },
  [sym_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_log] = {
    .visible = true,
    .named = true,
  },
  [sym_log10] = {
    .visible = true,
    .named = true,
  },
  [sym_sqrt] = {
    .visible = true,
    .named = true,
  },
  [sym_abs] = {
    .visible = true,
    .named = true,
  },
  [sym_floor] = {
    .visible = true,
    .named = true,
  },
  [sym_ceil] = {
    .visible = true,
    .named = true,
  },
  [sym_rint] = {
    .visible = true,
    .named = true,
  },
  [sym_round] = {
    .visible = true,
    .named = true,
  },
  [sym_acos] = {
    .visible = true,
    .named = true,
  },
  [sym_asin] = {
    .visible = true,
    .named = true,
  },
  [sym_atan] = {
    .visible = true,
    .named = true,
  },
  [sym_cos] = {
    .visible = true,
    .named = true,
  },
  [sym_sin] = {
    .visible = true,
    .named = true,
  },
  [sym_tan] = {
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
  [sym_pow_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_fmod] = {
    .visible = true,
    .named = true,
  },
  [sym_remainder] = {
    .visible = true,
    .named = true,
  },
  [sym_atan2] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_attach] = {
    .visible = true,
    .named = true,
  },
  [sym_enable] = {
    .visible = true,
    .named = true,
  },
  [sym_control] = {
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
  [sym_rdtable] = {
    .visible = true,
    .named = true,
  },
  [sym_rwtable] = {
    .visible = true,
    .named = true,
  },
  [sym_select2] = {
    .visible = true,
    .named = true,
  },
  [sym_select3] = {
    .visible = true,
    .named = true,
  },
  [sym_lowest] = {
    .visible = true,
    .named = true,
  },
  [sym_highest] = {
    .visible = true,
    .named = true,
  },
  [sym_assertbounds] = {
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
  [sym_single_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_double_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_quad_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_point_precision] = {
    .visible = true,
    .named = true,
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
  [sym__metadata_definition] = {
    .visible = false,
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
  [sym_file_import] = {
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
  [sym_partial] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_prim1] = {
    .visible = true,
    .named = true,
  },
  [sym_prim2] = {
    .visible = true,
    .named = true,
  },
  [sym_prim3] = {
    .visible = true,
    .named = true,
  },
  [sym_prim4] = {
    .visible = true,
    .named = true,
  },
  [sym_prim5] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
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
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_modulation] = {
    .visible = true,
    .named = true,
  },
  [sym_modulators] = {
    .visible = true,
    .named = true,
  },
  [sym_modulator] = {
    .visible = true,
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
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
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
  [sym__infix] = {
    .visible = false,
    .named = true,
  },
  [sym__prim1] = {
    .visible = false,
    .named = true,
  },
  [sym__prim2] = {
    .visible = false,
    .named = true,
  },
  [sym__prim3] = {
    .visible = false,
    .named = true,
  },
  [sym__prim4] = {
    .visible = false,
    .named = true,
  },
  [sym__prim5] = {
    .visible = false,
    .named = true,
  },
  [sym__modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_one_sample_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
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
  [sym_variants] = {
    .visible = true,
    .named = true,
  },
  [sym__variant] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_negate_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modulators_repeat1] = {
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
  [aux_sym_rules_repeat1] = {
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
  [aux_sym_variants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_callee = 2,
  field_current_iter = 3,
  field_definition = 4,
  field_environment = 5,
  field_expression = 6,
  field_filename = 7,
  field_function_name = 8,
  field_key = 9,
  field_left = 10,
  field_local_environment = 11,
  field_name = 12,
  field_num_iters = 13,
  field_operand = 14,
  field_operator = 15,
  field_primitive = 16,
  field_right = 17,
  field_type = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_callee] = "callee",
  [field_current_iter] = "current_iter",
  [field_definition] = "definition",
  [field_environment] = "environment",
  [field_expression] = "expression",
  [field_filename] = "filename",
  [field_function_name] = "function_name",
  [field_key] = "key",
  [field_left] = "left",
  [field_local_environment] = "local_environment",
  [field_name] = "name",
  [field_num_iters] = "num_iters",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_primitive] = "primitive",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 1},
  [23] = {.index = 35, .length = 3},
  [24] = {.index = 38, .length = 1},
  [25] = {.index = 39, .length = 1},
  [26] = {.index = 40, .length = 4},
  [27] = {.index = 44, .length = 2},
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
    {field_name, 1},
    {field_value, 3},
  [9] =
    {field_name, 0},
  [10] =
    {field_expression, 0},
  [11] =
    {field_operand, 0},
    {field_operator, 1},
  [13] =
    {field_filename, 2},
  [14] =
    {field_left, 0},
    {field_right, 2},
  [16] =
    {field_expression, 0},
    {field_local_environment, 2},
  [18] =
    {field_definition, 2},
    {field_environment, 0},
  [20] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [23] =
    {field_filename, 3},
  [24] =
    {field_callee, 0},
  [25] =
    {field_operand, 2},
    {field_operator, 0},
  [27] =
    {field_argument, 2},
    {field_primitive, 0},
  [29] =
    {field_primitive, 0},
  [30] =
    {field_name, 0},
    {field_value, 5},
  [32] =
    {field_name, 1},
    {field_value, 6},
  [34] =
    {field_expression, 3},
  [35] =
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [38] =
    {field_value, 6},
  [39] =
    {field_expression, 4},
  [40] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [44] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [14] = {
    [1] = alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 2,
    sym_id,
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
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 5,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 25,
  [30] = 22,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 33,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 34,
  [44] = 44,
  [45] = 36,
  [46] = 32,
  [47] = 37,
  [48] = 42,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 50,
  [55] = 51,
  [56] = 50,
  [57] = 53,
  [58] = 52,
  [59] = 51,
  [60] = 60,
  [61] = 52,
  [62] = 60,
  [63] = 53,
  [64] = 60,
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
  [80] = 70,
  [81] = 81,
  [82] = 82,
  [83] = 66,
  [84] = 84,
  [85] = 85,
  [86] = 69,
  [87] = 87,
  [88] = 68,
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
  [111] = 71,
  [112] = 112,
  [113] = 69,
  [114] = 70,
  [115] = 68,
  [116] = 66,
  [117] = 71,
  [118] = 103,
  [119] = 119,
  [120] = 120,
  [121] = 72,
  [122] = 72,
  [123] = 74,
  [124] = 76,
  [125] = 75,
  [126] = 77,
  [127] = 73,
  [128] = 78,
  [129] = 84,
  [130] = 120,
  [131] = 108,
  [132] = 107,
  [133] = 119,
  [134] = 99,
  [135] = 101,
  [136] = 112,
  [137] = 89,
  [138] = 98,
  [139] = 97,
  [140] = 81,
  [141] = 87,
  [142] = 93,
  [143] = 110,
  [144] = 96,
  [145] = 90,
  [146] = 95,
  [147] = 94,
  [148] = 79,
  [149] = 82,
  [150] = 92,
  [151] = 85,
  [152] = 100,
  [153] = 102,
  [154] = 104,
  [155] = 105,
  [156] = 106,
  [157] = 91,
  [158] = 109,
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
  [170] = 167,
  [171] = 162,
  [172] = 165,
  [173] = 166,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 73,
  [198] = 196,
  [199] = 199,
  [200] = 200,
  [201] = 200,
  [202] = 74,
  [203] = 77,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 199,
  [208] = 208,
  [209] = 209,
  [210] = 75,
  [211] = 211,
  [212] = 212,
  [213] = 209,
  [214] = 76,
  [215] = 195,
  [216] = 194,
  [217] = 179,
  [218] = 78,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 227,
  [228] = 223,
  [229] = 222,
  [230] = 221,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 232,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 233,
  [239] = 236,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 242,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 246,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 253,
  [258] = 255,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 262,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 271,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 280,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 296,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 298,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 299,
  [310] = 304,
  [311] = 311,
  [312] = 290,
  [313] = 292,
  [314] = 314,
  [315] = 306,
  [316] = 282,
  [317] = 307,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 291,
  [322] = 322,
  [323] = 323,
  [324] = 290,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 286,
  [329] = 284,
  [330] = 305,
  [331] = 331,
  [332] = 332,
  [333] = 292,
  [334] = 319,
  [335] = 331,
  [336] = 295,
  [337] = 302,
  [338] = 338,
  [339] = 339,
  [340] = 287,
  [341] = 285,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(297);
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(311);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(420);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'q') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(201);
      if (lookahead == '{') ADVANCE(320);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(422);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(343);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(359);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(311);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == 'f') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == 'x') ADVANCE(598);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(517);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == 'x') ADVANCE(598);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(201);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(598);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(201);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(317);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == 'x') ADVANCE(201);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(598);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(350);
      if (lookahead == '&') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '*') ADVANCE(348);
      if (lookahead == '+') ADVANCE(342);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(361);
      if (lookahead == '@') ADVANCE(365);
      if (lookahead == '[') ADVANCE(312);
      if (lookahead == '^') ADVANCE(351);
      if (lookahead == 'x') ADVANCE(201);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '~') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(665);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(664);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(370);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(429);
      if (lookahead == '3') ADVANCE(431);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(465);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'q') ADVANCE(655);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'q') ADVANCE(655);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 24:
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(445);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(363);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(313);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(322);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(443);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(444);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(451);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(447);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(452);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(449);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(453);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(448);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(450);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(454);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(406);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(278);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'q') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(368);
      if (lookahead == 'w') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(455);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(236);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'q') ADVANCE(328);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(366);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(244);
      END_STATE();
    case 225:
      if (lookahead == 'q') ADVANCE(284);
      END_STATE();
    case 226:
      if (lookahead == 'q') ADVANCE(286);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 287:
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 288:
      if (lookahead == 'x') ADVANCE(404);
      END_STATE();
    case 289:
      if (lookahead == 'x') ADVANCE(412);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 291:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 294:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 295:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(665);
      if (lookahead == '\r') ADVANCE(666);
      END_STATE();
    case 296:
      if (eof) ADVANCE(297);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(174);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'q') ADVANCE(655);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(296)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(465);
      if (lookahead == '>') ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(292);
      if (lookahead == '>') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(313);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == '<') ADVANCE(356);
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(356);
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(362);
      if (lookahead == '>') ADVANCE(357);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(18);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(364);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(371);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(430);
      if (lookahead == '3') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'v') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(628);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(650);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == 'w') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'q') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(369);
      if (lookahead == 'w') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == 's') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(513);
      if (lookahead == 'q') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead == 'm') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(608);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 's') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(478);
      if (lookahead == 'x') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(665);
      if (lookahead == '\\') ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 296},
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
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 7},
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
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 296},
  [160] = {.lex_state = 296},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 21},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 21},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 24},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 24},
  [177] = {.lex_state = 296},
  [178] = {.lex_state = 296},
  [179] = {.lex_state = 296},
  [180] = {.lex_state = 296},
  [181] = {.lex_state = 296},
  [182] = {.lex_state = 296},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 22},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 21},
  [217] = {.lex_state = 21},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 15},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 296},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 10},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 296},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 296},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_environment] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [sym_par] = ACTIONS(1),
    [sym_seq] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_prod] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_letrec] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_mult] = ACTIONS(1),
    [sym_div] = ACTIONS(1),
    [sym_mod] = ACTIONS(1),
    [sym_pow] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_xor] = ACTIONS(1),
    [sym_lshift] = ACTIONS(1),
    [sym_rshift] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_le] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_ge] = ACTIONS(1),
    [sym_neq] = ACTIONS(1),
    [sym_delay] = ACTIONS(1),
    [sym_exp] = ACTIONS(1),
    [sym_log] = ACTIONS(1),
    [sym_log10] = ACTIONS(1),
    [sym_sqrt] = ACTIONS(1),
    [sym_abs] = ACTIONS(1),
    [sym_floor] = ACTIONS(1),
    [sym_ceil] = ACTIONS(1),
    [sym_rint] = ACTIONS(1),
    [sym_round] = ACTIONS(1),
    [sym_acos] = ACTIONS(1),
    [sym_asin] = ACTIONS(1),
    [sym_atan] = ACTIONS(1),
    [sym_cos] = ACTIONS(1),
    [sym_sin] = ACTIONS(1),
    [sym_tan] = ACTIONS(1),
    [sym_int_cast] = ACTIONS(1),
    [sym_float_cast] = ACTIONS(1),
    [sym_pow_fun] = ACTIONS(1),
    [sym_min] = ACTIONS(1),
    [sym_max] = ACTIONS(1),
    [sym_fmod] = ACTIONS(1),
    [sym_remainder] = ACTIONS(1),
    [sym_atan2] = ACTIONS(1),
    [sym_prefix_prim] = ACTIONS(1),
    [sym_attach] = ACTIONS(1),
    [sym_enable] = ACTIONS(1),
    [sym_control] = ACTIONS(1),
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
    [sym_mem] = ACTIONS(1),
    [sym_rdtable] = ACTIONS(1),
    [sym_rwtable] = ACTIONS(1),
    [sym_select2] = ACTIONS(1),
    [sym_select3] = ACTIONS(1),
    [sym_lowest] = ACTIONS(1),
    [sym_highest] = ACTIONS(1),
    [sym_assertbounds] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_single_precision] = ACTIONS(1),
    [sym_double_precision] = ACTIONS(1),
    [sym_quad_precision] = ACTIONS(1),
    [sym_fixed_point_precision] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(322),
    [sym__statement] = STATE(159),
    [sym__definition] = STATE(159),
    [sym_definition] = STATE(321),
    [sym_function_definition] = STATE(321),
    [sym__metadata_definition] = STATE(159),
    [sym_global_metadata] = STATE(320),
    [sym_function_metadata] = STATE(320),
    [sym_file_import] = STATE(159),
    [sym_documentation] = STATE(159),
    [sym_variants] = STATE(240),
    [sym__variant] = STATE(195),
    [sym_id] = STATE(275),
    [aux_sym_program_repeat1] = STATE(159),
    [aux_sym_variants_repeat1] = STATE(195),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_declare] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_LTmdoc_GT] = ACTIONS(9),
    [sym_single_precision] = ACTIONS(11),
    [sym_double_precision] = ACTIONS(11),
    [sym_quad_precision] = ACTIONS(11),
    [sym_fixed_point_precision] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(13),
    [sym__id] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym__expression] = STATE(190),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(190),
    [sym_letrec_environment] = STATE(190),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(190),
    [sym_recursive] = STATE(190),
    [sym_sequential] = STATE(190),
    [sym_split] = STATE(190),
    [sym_merge] = STATE(190),
    [sym_parallel] = STATE(190),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [3] = {
    [sym__expression] = STATE(212),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(212),
    [sym_letrec_environment] = STATE(212),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(212),
    [sym_recursive] = STATE(212),
    [sym_sequential] = STATE(212),
    [sym_split] = STATE(212),
    [sym_merge] = STATE(212),
    [sym_parallel] = STATE(212),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [4] = {
    [sym__expression] = STATE(205),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(205),
    [sym_letrec_environment] = STATE(205),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(205),
    [sym_recursive] = STATE(205),
    [sym_sequential] = STATE(205),
    [sym_split] = STATE(205),
    [sym_merge] = STATE(205),
    [sym_parallel] = STATE(205),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [5] = {
    [sym__expression] = STATE(201),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(201),
    [sym_letrec_environment] = STATE(201),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(201),
    [sym_recursive] = STATE(201),
    [sym_sequential] = STATE(201),
    [sym_split] = STATE(201),
    [sym_merge] = STATE(201),
    [sym_parallel] = STATE(201),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [6] = {
    [sym__expression] = STATE(204),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(204),
    [sym_letrec_environment] = STATE(204),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(204),
    [sym_recursive] = STATE(204),
    [sym_sequential] = STATE(204),
    [sym_split] = STATE(204),
    [sym_merge] = STATE(204),
    [sym_parallel] = STATE(204),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [7] = {
    [sym__expression] = STATE(192),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(192),
    [sym_letrec_environment] = STATE(192),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(192),
    [sym_recursive] = STATE(192),
    [sym_sequential] = STATE(192),
    [sym_split] = STATE(192),
    [sym_merge] = STATE(192),
    [sym_parallel] = STATE(192),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [8] = {
    [sym__expression] = STATE(191),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(191),
    [sym_letrec_environment] = STATE(191),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(191),
    [sym_recursive] = STATE(191),
    [sym_sequential] = STATE(191),
    [sym_split] = STATE(191),
    [sym_merge] = STATE(191),
    [sym_parallel] = STATE(191),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [9] = {
    [sym__expression] = STATE(209),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(209),
    [sym_letrec_environment] = STATE(209),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(209),
    [sym_recursive] = STATE(209),
    [sym_sequential] = STATE(209),
    [sym_split] = STATE(209),
    [sym_merge] = STATE(209),
    [sym_parallel] = STATE(209),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [10] = {
    [sym__expression] = STATE(213),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(213),
    [sym_letrec_environment] = STATE(213),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(213),
    [sym_recursive] = STATE(213),
    [sym_sequential] = STATE(213),
    [sym_split] = STATE(213),
    [sym_merge] = STATE(213),
    [sym_parallel] = STATE(213),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [11] = {
    [sym__expression] = STATE(199),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(199),
    [sym_letrec_environment] = STATE(199),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(199),
    [sym_recursive] = STATE(199),
    [sym_sequential] = STATE(199),
    [sym_split] = STATE(199),
    [sym_merge] = STATE(199),
    [sym_parallel] = STATE(199),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [12] = {
    [sym__expression] = STATE(208),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(208),
    [sym_letrec_environment] = STATE(208),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(208),
    [sym_recursive] = STATE(208),
    [sym_sequential] = STATE(208),
    [sym_split] = STATE(208),
    [sym_merge] = STATE(208),
    [sym_parallel] = STATE(208),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [13] = {
    [sym__expression] = STATE(207),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(207),
    [sym_letrec_environment] = STATE(207),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(207),
    [sym_recursive] = STATE(207),
    [sym_sequential] = STATE(207),
    [sym_split] = STATE(207),
    [sym_merge] = STATE(207),
    [sym_parallel] = STATE(207),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [14] = {
    [sym__expression] = STATE(206),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(206),
    [sym_letrec_environment] = STATE(206),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(206),
    [sym_recursive] = STATE(206),
    [sym_sequential] = STATE(206),
    [sym_split] = STATE(206),
    [sym_merge] = STATE(206),
    [sym_parallel] = STATE(206),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [15] = {
    [sym__expression] = STATE(196),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(196),
    [sym_letrec_environment] = STATE(196),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(196),
    [sym_recursive] = STATE(196),
    [sym_sequential] = STATE(196),
    [sym_split] = STATE(196),
    [sym_merge] = STATE(196),
    [sym_parallel] = STATE(196),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [16] = {
    [sym__expression] = STATE(200),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(200),
    [sym_letrec_environment] = STATE(200),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(200),
    [sym_recursive] = STATE(200),
    [sym_sequential] = STATE(200),
    [sym_split] = STATE(200),
    [sym_merge] = STATE(200),
    [sym_parallel] = STATE(200),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [17] = {
    [sym__expression] = STATE(198),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(198),
    [sym_letrec_environment] = STATE(198),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(198),
    [sym_recursive] = STATE(198),
    [sym_sequential] = STATE(198),
    [sym_split] = STATE(198),
    [sym_merge] = STATE(198),
    [sym_parallel] = STATE(198),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [18] = {
    [sym__expression] = STATE(183),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(183),
    [sym_letrec_environment] = STATE(183),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(183),
    [sym_recursive] = STATE(183),
    [sym_sequential] = STATE(183),
    [sym_split] = STATE(183),
    [sym_merge] = STATE(183),
    [sym_parallel] = STATE(183),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [19] = {
    [sym__expression] = STATE(185),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(185),
    [sym_letrec_environment] = STATE(185),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(185),
    [sym_recursive] = STATE(185),
    [sym_sequential] = STATE(185),
    [sym_split] = STATE(185),
    [sym_merge] = STATE(185),
    [sym_parallel] = STATE(185),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [20] = {
    [sym__expression] = STATE(211),
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_with_environment] = STATE(211),
    [sym_letrec_environment] = STATE(211),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(67),
    [sym__binary_composition] = STATE(211),
    [sym_recursive] = STATE(211),
    [sym_sequential] = STATE(211),
    [sym_split] = STATE(211),
    [sym_merge] = STATE(211),
    [sym_parallel] = STATE(211),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(43),
    [sym_cut] = ACTIONS(43),
    [sym_mem] = ACTIONS(43),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(43),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [21] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(306),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [22] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(281),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [23] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(315),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [24] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(332),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [25] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(307),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [26] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(310),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [27] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(299),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [28] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(304),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [29] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(317),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [30] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(280),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [31] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym_arguments] = STATE(309),
    [sym__argument] = STATE(220),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [32] = {
    [sym__infix_expression] = STATE(118),
    [sym_infix] = STATE(118),
    [sym_partial] = STATE(118),
    [sym_prefix] = STATE(118),
    [sym_prim1] = STATE(118),
    [sym_prim2] = STATE(118),
    [sym_prim3] = STATE(118),
    [sym_prim4] = STATE(118),
    [sym_prim5] = STATE(118),
    [sym_function_call] = STATE(118),
    [sym_modifier] = STATE(118),
    [sym_access] = STATE(118),
    [sym__primitive] = STATE(118),
    [sym_lambda] = STATE(118),
    [sym_modulation] = STATE(118),
    [sym__argument] = STATE(219),
    [sym_pattern] = STATE(118),
    [sym_recursive_arg] = STATE(219),
    [sym_sequential_arg] = STATE(219),
    [sym_split_arg] = STATE(219),
    [sym_merge_arg] = STATE(219),
    [sym_iteration] = STATE(118),
    [sym_substitution] = STATE(118),
    [sym_component] = STATE(118),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(118),
    [sym_id] = STATE(118),
    [sym_negate_id] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(87),
    [sym_cut] = ACTIONS(87),
    [sym_mem] = ACTIONS(87),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [33] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(239),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(239),
    [sym_sequential_arg] = STATE(239),
    [sym_split_arg] = STATE(239),
    [sym_merge_arg] = STATE(239),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [34] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(232),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(232),
    [sym_sequential_arg] = STATE(232),
    [sym_split_arg] = STATE(232),
    [sym_merge_arg] = STATE(232),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [35] = {
    [sym__infix_expression] = STATE(118),
    [sym_infix] = STATE(118),
    [sym_partial] = STATE(118),
    [sym_prefix] = STATE(118),
    [sym_prim1] = STATE(118),
    [sym_prim2] = STATE(118),
    [sym_prim3] = STATE(118),
    [sym_prim4] = STATE(118),
    [sym_prim5] = STATE(118),
    [sym_function_call] = STATE(118),
    [sym_modifier] = STATE(118),
    [sym_access] = STATE(118),
    [sym__primitive] = STATE(118),
    [sym_lambda] = STATE(118),
    [sym_modulation] = STATE(118),
    [sym__argument] = STATE(226),
    [sym_pattern] = STATE(118),
    [sym_recursive_arg] = STATE(226),
    [sym_sequential_arg] = STATE(226),
    [sym_split_arg] = STATE(226),
    [sym_merge_arg] = STATE(226),
    [sym_iteration] = STATE(118),
    [sym_substitution] = STATE(118),
    [sym_component] = STATE(118),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(118),
    [sym_id] = STATE(118),
    [sym_negate_id] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(87),
    [sym_cut] = ACTIONS(87),
    [sym_mem] = ACTIONS(87),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [36] = {
    [sym__infix_expression] = STATE(118),
    [sym_infix] = STATE(118),
    [sym_partial] = STATE(118),
    [sym_prefix] = STATE(118),
    [sym_prim1] = STATE(118),
    [sym_prim2] = STATE(118),
    [sym_prim3] = STATE(118),
    [sym_prim4] = STATE(118),
    [sym_prim5] = STATE(118),
    [sym_function_call] = STATE(118),
    [sym_modifier] = STATE(118),
    [sym_access] = STATE(118),
    [sym__primitive] = STATE(118),
    [sym_lambda] = STATE(118),
    [sym_modulation] = STATE(118),
    [sym__argument] = STATE(222),
    [sym_pattern] = STATE(118),
    [sym_recursive_arg] = STATE(222),
    [sym_sequential_arg] = STATE(222),
    [sym_split_arg] = STATE(222),
    [sym_merge_arg] = STATE(222),
    [sym_iteration] = STATE(118),
    [sym_substitution] = STATE(118),
    [sym_component] = STATE(118),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(118),
    [sym_id] = STATE(118),
    [sym_negate_id] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(87),
    [sym_cut] = ACTIONS(87),
    [sym_mem] = ACTIONS(87),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [37] = {
    [sym__infix_expression] = STATE(118),
    [sym_infix] = STATE(118),
    [sym_partial] = STATE(118),
    [sym_prefix] = STATE(118),
    [sym_prim1] = STATE(118),
    [sym_prim2] = STATE(118),
    [sym_prim3] = STATE(118),
    [sym_prim4] = STATE(118),
    [sym_prim5] = STATE(118),
    [sym_function_call] = STATE(118),
    [sym_modifier] = STATE(118),
    [sym_access] = STATE(118),
    [sym__primitive] = STATE(118),
    [sym_lambda] = STATE(118),
    [sym_modulation] = STATE(118),
    [sym__argument] = STATE(223),
    [sym_pattern] = STATE(118),
    [sym_recursive_arg] = STATE(223),
    [sym_sequential_arg] = STATE(223),
    [sym_split_arg] = STATE(223),
    [sym_merge_arg] = STATE(223),
    [sym_iteration] = STATE(118),
    [sym_substitution] = STATE(118),
    [sym_component] = STATE(118),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(118),
    [sym_id] = STATE(118),
    [sym_negate_id] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(87),
    [sym_cut] = ACTIONS(87),
    [sym_mem] = ACTIONS(87),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [38] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(238),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(238),
    [sym_sequential_arg] = STATE(238),
    [sym_split_arg] = STATE(238),
    [sym_merge_arg] = STATE(238),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [39] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(236),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(236),
    [sym_sequential_arg] = STATE(236),
    [sym_split_arg] = STATE(236),
    [sym_merge_arg] = STATE(236),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [40] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(221),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(221),
    [sym_sequential_arg] = STATE(221),
    [sym_split_arg] = STATE(221),
    [sym_merge_arg] = STATE(221),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [41] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(230),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(230),
    [sym_sequential_arg] = STATE(230),
    [sym_split_arg] = STATE(230),
    [sym_merge_arg] = STATE(230),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [42] = {
    [sym__infix_expression] = STATE(118),
    [sym_infix] = STATE(118),
    [sym_partial] = STATE(118),
    [sym_prefix] = STATE(118),
    [sym_prim1] = STATE(118),
    [sym_prim2] = STATE(118),
    [sym_prim3] = STATE(118),
    [sym_prim4] = STATE(118),
    [sym_prim5] = STATE(118),
    [sym_function_call] = STATE(118),
    [sym_modifier] = STATE(118),
    [sym_access] = STATE(118),
    [sym__primitive] = STATE(118),
    [sym_lambda] = STATE(118),
    [sym_modulation] = STATE(118),
    [sym__argument] = STATE(224),
    [sym_pattern] = STATE(118),
    [sym_recursive_arg] = STATE(224),
    [sym_sequential_arg] = STATE(224),
    [sym_split_arg] = STATE(224),
    [sym_merge_arg] = STATE(224),
    [sym_iteration] = STATE(118),
    [sym_substitution] = STATE(118),
    [sym_component] = STATE(118),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(118),
    [sym_id] = STATE(118),
    [sym_negate_id] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(87),
    [sym_cut] = ACTIONS(87),
    [sym_mem] = ACTIONS(87),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [43] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(234),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(234),
    [sym_sequential_arg] = STATE(234),
    [sym_split_arg] = STATE(234),
    [sym_merge_arg] = STATE(234),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [44] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(227),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(227),
    [sym_sequential_arg] = STATE(227),
    [sym_split_arg] = STATE(227),
    [sym_merge_arg] = STATE(227),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [45] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [46] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(219),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(219),
    [sym_sequential_arg] = STATE(219),
    [sym_split_arg] = STATE(219),
    [sym_merge_arg] = STATE(219),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [47] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(228),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(228),
    [sym_sequential_arg] = STATE(228),
    [sym_split_arg] = STATE(228),
    [sym_merge_arg] = STATE(228),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [48] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(225),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(225),
    [sym_sequential_arg] = STATE(225),
    [sym_split_arg] = STATE(225),
    [sym_merge_arg] = STATE(225),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [49] = {
    [sym__infix_expression] = STATE(103),
    [sym_infix] = STATE(103),
    [sym_partial] = STATE(103),
    [sym_prefix] = STATE(103),
    [sym_prim1] = STATE(103),
    [sym_prim2] = STATE(103),
    [sym_prim3] = STATE(103),
    [sym_prim4] = STATE(103),
    [sym_prim5] = STATE(103),
    [sym_function_call] = STATE(103),
    [sym_modifier] = STATE(103),
    [sym_access] = STATE(103),
    [sym__primitive] = STATE(103),
    [sym_lambda] = STATE(103),
    [sym_modulation] = STATE(103),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(103),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(103),
    [sym_substitution] = STATE(103),
    [sym_component] = STATE(103),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(103),
    [sym_id] = STATE(103),
    [sym_negate_id] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [50] = {
    [sym__infix_expression] = STATE(115),
    [sym_infix] = STATE(115),
    [sym_partial] = STATE(115),
    [sym_prefix] = STATE(115),
    [sym_prim1] = STATE(115),
    [sym_prim2] = STATE(115),
    [sym_prim3] = STATE(115),
    [sym_prim4] = STATE(115),
    [sym_prim5] = STATE(115),
    [sym_function_call] = STATE(115),
    [sym_modifier] = STATE(115),
    [sym_access] = STATE(115),
    [sym__primitive] = STATE(115),
    [sym_lambda] = STATE(115),
    [sym_modulation] = STATE(115),
    [sym_pattern] = STATE(115),
    [sym_iteration] = STATE(115),
    [sym_substitution] = STATE(115),
    [sym_component] = STATE(115),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(115),
    [sym_id] = STATE(115),
    [sym_negate_id] = STATE(115),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [51] = {
    [sym__infix_expression] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_prim1] = STATE(114),
    [sym_prim2] = STATE(114),
    [sym_prim3] = STATE(114),
    [sym_prim4] = STATE(114),
    [sym_prim5] = STATE(114),
    [sym_function_call] = STATE(114),
    [sym_modifier] = STATE(114),
    [sym_access] = STATE(114),
    [sym__primitive] = STATE(114),
    [sym_lambda] = STATE(114),
    [sym_modulation] = STATE(114),
    [sym_pattern] = STATE(114),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(105),
    [sym_cut] = ACTIONS(105),
    [sym_mem] = ACTIONS(105),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(105),
    [sym_real] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [52] = {
    [sym__infix_expression] = STATE(71),
    [sym_infix] = STATE(71),
    [sym_partial] = STATE(71),
    [sym_prefix] = STATE(71),
    [sym_prim1] = STATE(71),
    [sym_prim2] = STATE(71),
    [sym_prim3] = STATE(71),
    [sym_prim4] = STATE(71),
    [sym_prim5] = STATE(71),
    [sym_function_call] = STATE(71),
    [sym_modifier] = STATE(71),
    [sym_access] = STATE(71),
    [sym__primitive] = STATE(71),
    [sym_lambda] = STATE(71),
    [sym_modulation] = STATE(71),
    [sym_pattern] = STATE(71),
    [sym_iteration] = STATE(71),
    [sym_substitution] = STATE(71),
    [sym_component] = STATE(71),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(71),
    [sym_id] = STATE(71),
    [sym_negate_id] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(109),
    [sym_cut] = ACTIONS(109),
    [sym_mem] = ACTIONS(109),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(109),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [53] = {
    [sym__infix_expression] = STATE(66),
    [sym_infix] = STATE(66),
    [sym_partial] = STATE(66),
    [sym_prefix] = STATE(66),
    [sym_prim1] = STATE(66),
    [sym_prim2] = STATE(66),
    [sym_prim3] = STATE(66),
    [sym_prim4] = STATE(66),
    [sym_prim5] = STATE(66),
    [sym_function_call] = STATE(66),
    [sym_modifier] = STATE(66),
    [sym_access] = STATE(66),
    [sym__primitive] = STATE(66),
    [sym_lambda] = STATE(66),
    [sym_modulation] = STATE(66),
    [sym_pattern] = STATE(66),
    [sym_iteration] = STATE(66),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(66),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(113),
    [sym_cut] = ACTIONS(113),
    [sym_mem] = ACTIONS(113),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(113),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [54] = {
    [sym__infix_expression] = STATE(68),
    [sym_infix] = STATE(68),
    [sym_partial] = STATE(68),
    [sym_prefix] = STATE(68),
    [sym_prim1] = STATE(68),
    [sym_prim2] = STATE(68),
    [sym_prim3] = STATE(68),
    [sym_prim4] = STATE(68),
    [sym_prim5] = STATE(68),
    [sym_function_call] = STATE(68),
    [sym_modifier] = STATE(68),
    [sym_access] = STATE(68),
    [sym__primitive] = STATE(68),
    [sym_lambda] = STATE(68),
    [sym_modulation] = STATE(68),
    [sym_pattern] = STATE(68),
    [sym_iteration] = STATE(68),
    [sym_substitution] = STATE(68),
    [sym_component] = STATE(68),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(68),
    [sym_id] = STATE(68),
    [sym_negate_id] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(117),
    [sym_cut] = ACTIONS(117),
    [sym_mem] = ACTIONS(117),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(117),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [55] = {
    [sym__infix_expression] = STATE(80),
    [sym_infix] = STATE(80),
    [sym_partial] = STATE(80),
    [sym_prefix] = STATE(80),
    [sym_prim1] = STATE(80),
    [sym_prim2] = STATE(80),
    [sym_prim3] = STATE(80),
    [sym_prim4] = STATE(80),
    [sym_prim5] = STATE(80),
    [sym_function_call] = STATE(80),
    [sym_modifier] = STATE(80),
    [sym_access] = STATE(80),
    [sym__primitive] = STATE(80),
    [sym_lambda] = STATE(80),
    [sym_modulation] = STATE(80),
    [sym_pattern] = STATE(80),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_component] = STATE(80),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(121),
    [sym_cut] = ACTIONS(121),
    [sym_mem] = ACTIONS(121),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(121),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [56] = {
    [sym__infix_expression] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_prim1] = STATE(88),
    [sym_prim2] = STATE(88),
    [sym_prim3] = STATE(88),
    [sym_prim4] = STATE(88),
    [sym_prim5] = STATE(88),
    [sym_function_call] = STATE(88),
    [sym_modifier] = STATE(88),
    [sym_access] = STATE(88),
    [sym__primitive] = STATE(88),
    [sym_lambda] = STATE(88),
    [sym_modulation] = STATE(88),
    [sym_pattern] = STATE(88),
    [sym_iteration] = STATE(88),
    [sym_substitution] = STATE(88),
    [sym_component] = STATE(88),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(88),
    [sym_id] = STATE(88),
    [sym_negate_id] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(125),
    [sym_cut] = ACTIONS(125),
    [sym_mem] = ACTIONS(125),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(125),
    [sym_real] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [57] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_pattern] = STATE(83),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_component] = STATE(83),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(129),
    [sym_cut] = ACTIONS(129),
    [sym_mem] = ACTIONS(129),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(129),
    [sym_real] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [58] = {
    [sym__infix_expression] = STATE(111),
    [sym_infix] = STATE(111),
    [sym_partial] = STATE(111),
    [sym_prefix] = STATE(111),
    [sym_prim1] = STATE(111),
    [sym_prim2] = STATE(111),
    [sym_prim3] = STATE(111),
    [sym_prim4] = STATE(111),
    [sym_prim5] = STATE(111),
    [sym_function_call] = STATE(111),
    [sym_modifier] = STATE(111),
    [sym_access] = STATE(111),
    [sym__primitive] = STATE(111),
    [sym_lambda] = STATE(111),
    [sym_modulation] = STATE(111),
    [sym_pattern] = STATE(111),
    [sym_iteration] = STATE(111),
    [sym_substitution] = STATE(111),
    [sym_component] = STATE(111),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(111),
    [sym_id] = STATE(111),
    [sym_negate_id] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(133),
    [sym_cut] = ACTIONS(133),
    [sym_mem] = ACTIONS(133),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [59] = {
    [sym__infix_expression] = STATE(70),
    [sym_infix] = STATE(70),
    [sym_partial] = STATE(70),
    [sym_prefix] = STATE(70),
    [sym_prim1] = STATE(70),
    [sym_prim2] = STATE(70),
    [sym_prim3] = STATE(70),
    [sym_prim4] = STATE(70),
    [sym_prim5] = STATE(70),
    [sym_function_call] = STATE(70),
    [sym_modifier] = STATE(70),
    [sym_access] = STATE(70),
    [sym__primitive] = STATE(70),
    [sym_lambda] = STATE(70),
    [sym_modulation] = STATE(70),
    [sym_pattern] = STATE(70),
    [sym_iteration] = STATE(70),
    [sym_substitution] = STATE(70),
    [sym_component] = STATE(70),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(70),
    [sym_id] = STATE(70),
    [sym_negate_id] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(137),
    [sym_cut] = ACTIONS(137),
    [sym_mem] = ACTIONS(137),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [60] = {
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_substitution] = STATE(69),
    [sym_component] = STATE(69),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(69),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(141),
    [sym_cut] = ACTIONS(141),
    [sym_mem] = ACTIONS(141),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [61] = {
    [sym__infix_expression] = STATE(117),
    [sym_infix] = STATE(117),
    [sym_partial] = STATE(117),
    [sym_prefix] = STATE(117),
    [sym_prim1] = STATE(117),
    [sym_prim2] = STATE(117),
    [sym_prim3] = STATE(117),
    [sym_prim4] = STATE(117),
    [sym_prim5] = STATE(117),
    [sym_function_call] = STATE(117),
    [sym_modifier] = STATE(117),
    [sym_access] = STATE(117),
    [sym__primitive] = STATE(117),
    [sym_lambda] = STATE(117),
    [sym_modulation] = STATE(117),
    [sym_pattern] = STATE(117),
    [sym_iteration] = STATE(117),
    [sym_substitution] = STATE(117),
    [sym_component] = STATE(117),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(117),
    [sym_id] = STATE(117),
    [sym_negate_id] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(145),
    [sym_cut] = ACTIONS(145),
    [sym_mem] = ACTIONS(145),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [62] = {
    [sym__infix_expression] = STATE(86),
    [sym_infix] = STATE(86),
    [sym_partial] = STATE(86),
    [sym_prefix] = STATE(86),
    [sym_prim1] = STATE(86),
    [sym_prim2] = STATE(86),
    [sym_prim3] = STATE(86),
    [sym_prim4] = STATE(86),
    [sym_prim5] = STATE(86),
    [sym_function_call] = STATE(86),
    [sym_modifier] = STATE(86),
    [sym_access] = STATE(86),
    [sym__primitive] = STATE(86),
    [sym_lambda] = STATE(86),
    [sym_modulation] = STATE(86),
    [sym_pattern] = STATE(86),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_component] = STATE(86),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(149),
    [sym_cut] = ACTIONS(149),
    [sym_mem] = ACTIONS(149),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [63] = {
    [sym__infix_expression] = STATE(116),
    [sym_infix] = STATE(116),
    [sym_partial] = STATE(116),
    [sym_prefix] = STATE(116),
    [sym_prim1] = STATE(116),
    [sym_prim2] = STATE(116),
    [sym_prim3] = STATE(116),
    [sym_prim4] = STATE(116),
    [sym_prim5] = STATE(116),
    [sym_function_call] = STATE(116),
    [sym_modifier] = STATE(116),
    [sym_access] = STATE(116),
    [sym__primitive] = STATE(116),
    [sym_lambda] = STATE(116),
    [sym_modulation] = STATE(116),
    [sym_pattern] = STATE(116),
    [sym_iteration] = STATE(116),
    [sym_substitution] = STATE(116),
    [sym_component] = STATE(116),
    [sym__infix] = STATE(110),
    [sym__prim1] = STATE(109),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(105),
    [sym__prim4] = STATE(104),
    [sym__prim5] = STATE(102),
    [sym_sub] = STATE(110),
    [sym__number] = STATE(116),
    [sym_id] = STATE(116),
    [sym_negate_id] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_component] = ACTIONS(31),
    [sym_add] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_mult] = ACTIONS(37),
    [sym_div] = ACTIONS(37),
    [sym_mod] = ACTIONS(37),
    [sym_pow] = ACTIONS(37),
    [sym_or] = ACTIONS(37),
    [sym_and] = ACTIONS(37),
    [sym_xor] = ACTIONS(33),
    [sym_lshift] = ACTIONS(37),
    [sym_rshift] = ACTIONS(37),
    [sym_lt] = ACTIONS(33),
    [sym_le] = ACTIONS(37),
    [sym_gt] = ACTIONS(33),
    [sym_ge] = ACTIONS(37),
    [sym_eq] = ACTIONS(37),
    [sym_neq] = ACTIONS(37),
    [sym_delay] = ACTIONS(37),
    [sym_exp] = ACTIONS(39),
    [sym_log] = ACTIONS(39),
    [sym_log10] = ACTIONS(39),
    [sym_sqrt] = ACTIONS(39),
    [sym_abs] = ACTIONS(39),
    [sym_floor] = ACTIONS(39),
    [sym_ceil] = ACTIONS(39),
    [sym_rint] = ACTIONS(39),
    [sym_round] = ACTIONS(39),
    [sym_acos] = ACTIONS(39),
    [sym_asin] = ACTIONS(39),
    [sym_atan] = ACTIONS(39),
    [sym_cos] = ACTIONS(39),
    [sym_sin] = ACTIONS(39),
    [sym_tan] = ACTIONS(39),
    [sym_int_cast] = ACTIONS(39),
    [sym_float_cast] = ACTIONS(39),
    [sym_pow_fun] = ACTIONS(41),
    [sym_min] = ACTIONS(41),
    [sym_max] = ACTIONS(41),
    [sym_fmod] = ACTIONS(41),
    [sym_remainder] = ACTIONS(41),
    [sym_atan2] = ACTIONS(41),
    [sym_prefix_prim] = ACTIONS(41),
    [sym_attach] = ACTIONS(41),
    [sym_enable] = ACTIONS(41),
    [sym_control] = ACTIONS(41),
    [sym_wire] = ACTIONS(153),
    [sym_cut] = ACTIONS(153),
    [sym_mem] = ACTIONS(153),
    [sym_rdtable] = ACTIONS(45),
    [sym_rwtable] = ACTIONS(47),
    [sym_select2] = ACTIONS(45),
    [sym_select3] = ACTIONS(49),
    [sym_lowest] = ACTIONS(39),
    [sym_highest] = ACTIONS(39),
    [sym_assertbounds] = ACTIONS(45),
    [sym_int] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [sym__id] = ACTIONS(55),
  },
  [64] = {
    [sym__infix_expression] = STATE(113),
    [sym_infix] = STATE(113),
    [sym_partial] = STATE(113),
    [sym_prefix] = STATE(113),
    [sym_prim1] = STATE(113),
    [sym_prim2] = STATE(113),
    [sym_prim3] = STATE(113),
    [sym_prim4] = STATE(113),
    [sym_prim5] = STATE(113),
    [sym_function_call] = STATE(113),
    [sym_modifier] = STATE(113),
    [sym_access] = STATE(113),
    [sym__primitive] = STATE(113),
    [sym_lambda] = STATE(113),
    [sym_modulation] = STATE(113),
    [sym_pattern] = STATE(113),
    [sym_iteration] = STATE(113),
    [sym_substitution] = STATE(113),
    [sym_component] = STATE(113),
    [sym__infix] = STATE(143),
    [sym__prim1] = STATE(158),
    [sym__prim2] = STATE(156),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(154),
    [sym__prim5] = STATE(153),
    [sym_sub] = STATE(143),
    [sym__number] = STATE(113),
    [sym_id] = STATE(113),
    [sym_negate_id] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_environment] = ACTIONS(65),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_case] = ACTIONS(71),
    [sym_par] = ACTIONS(73),
    [sym_seq] = ACTIONS(73),
    [sym_sum] = ACTIONS(73),
    [sym_prod] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(75),
    [sym_add] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_mult] = ACTIONS(81),
    [sym_div] = ACTIONS(81),
    [sym_mod] = ACTIONS(81),
    [sym_pow] = ACTIONS(81),
    [sym_or] = ACTIONS(81),
    [sym_and] = ACTIONS(81),
    [sym_xor] = ACTIONS(77),
    [sym_lshift] = ACTIONS(81),
    [sym_rshift] = ACTIONS(81),
    [sym_lt] = ACTIONS(77),
    [sym_le] = ACTIONS(81),
    [sym_gt] = ACTIONS(77),
    [sym_ge] = ACTIONS(81),
    [sym_eq] = ACTIONS(81),
    [sym_neq] = ACTIONS(81),
    [sym_delay] = ACTIONS(81),
    [sym_exp] = ACTIONS(83),
    [sym_log] = ACTIONS(83),
    [sym_log10] = ACTIONS(83),
    [sym_sqrt] = ACTIONS(83),
    [sym_abs] = ACTIONS(83),
    [sym_floor] = ACTIONS(83),
    [sym_ceil] = ACTIONS(83),
    [sym_rint] = ACTIONS(83),
    [sym_round] = ACTIONS(83),
    [sym_acos] = ACTIONS(83),
    [sym_asin] = ACTIONS(83),
    [sym_atan] = ACTIONS(83),
    [sym_cos] = ACTIONS(83),
    [sym_sin] = ACTIONS(83),
    [sym_tan] = ACTIONS(83),
    [sym_int_cast] = ACTIONS(83),
    [sym_float_cast] = ACTIONS(83),
    [sym_pow_fun] = ACTIONS(85),
    [sym_min] = ACTIONS(85),
    [sym_max] = ACTIONS(85),
    [sym_fmod] = ACTIONS(85),
    [sym_remainder] = ACTIONS(85),
    [sym_atan2] = ACTIONS(85),
    [sym_prefix_prim] = ACTIONS(85),
    [sym_attach] = ACTIONS(85),
    [sym_enable] = ACTIONS(85),
    [sym_control] = ACTIONS(85),
    [sym_wire] = ACTIONS(157),
    [sym_cut] = ACTIONS(157),
    [sym_mem] = ACTIONS(157),
    [sym_rdtable] = ACTIONS(89),
    [sym_rwtable] = ACTIONS(91),
    [sym_select2] = ACTIONS(89),
    [sym_select3] = ACTIONS(93),
    [sym_lowest] = ACTIONS(83),
    [sym_highest] = ACTIONS(83),
    [sym_assertbounds] = ACTIONS(89),
    [sym_int] = ACTIONS(157),
    [sym_real] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym__id] = ACTIONS(99),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_environment] = ACTIONS(163),
    [anon_sym_BSLASH] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_case] = ACTIONS(163),
    [sym_par] = ACTIONS(163),
    [sym_seq] = ACTIONS(163),
    [sym_sum] = ACTIONS(163),
    [sym_prod] = ACTIONS(163),
    [anon_sym_component] = ACTIONS(163),
    [sym_add] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [sym_mult] = ACTIONS(161),
    [sym_div] = ACTIONS(161),
    [sym_mod] = ACTIONS(161),
    [sym_pow] = ACTIONS(161),
    [sym_or] = ACTIONS(161),
    [sym_and] = ACTIONS(161),
    [sym_xor] = ACTIONS(163),
    [sym_lshift] = ACTIONS(161),
    [sym_rshift] = ACTIONS(161),
    [sym_lt] = ACTIONS(163),
    [sym_le] = ACTIONS(161),
    [sym_gt] = ACTIONS(163),
    [sym_ge] = ACTIONS(161),
    [sym_eq] = ACTIONS(161),
    [sym_neq] = ACTIONS(161),
    [sym_delay] = ACTIONS(161),
    [sym_exp] = ACTIONS(163),
    [sym_log] = ACTIONS(163),
    [sym_log10] = ACTIONS(163),
    [sym_sqrt] = ACTIONS(163),
    [sym_abs] = ACTIONS(163),
    [sym_floor] = ACTIONS(163),
    [sym_ceil] = ACTIONS(163),
    [sym_rint] = ACTIONS(163),
    [sym_round] = ACTIONS(163),
    [sym_acos] = ACTIONS(163),
    [sym_asin] = ACTIONS(163),
    [sym_atan] = ACTIONS(163),
    [sym_cos] = ACTIONS(163),
    [sym_sin] = ACTIONS(163),
    [sym_tan] = ACTIONS(163),
    [sym_int_cast] = ACTIONS(163),
    [sym_float_cast] = ACTIONS(163),
    [sym_pow_fun] = ACTIONS(163),
    [sym_min] = ACTIONS(163),
    [sym_max] = ACTIONS(163),
    [sym_fmod] = ACTIONS(163),
    [sym_remainder] = ACTIONS(163),
    [sym_atan2] = ACTIONS(163),
    [sym_prefix_prim] = ACTIONS(163),
    [sym_attach] = ACTIONS(163),
    [sym_enable] = ACTIONS(163),
    [sym_control] = ACTIONS(163),
    [sym_wire] = ACTIONS(163),
    [sym_cut] = ACTIONS(163),
    [sym_mem] = ACTIONS(163),
    [sym_rdtable] = ACTIONS(163),
    [sym_rwtable] = ACTIONS(163),
    [sym_select2] = ACTIONS(163),
    [sym_select3] = ACTIONS(163),
    [sym_lowest] = ACTIONS(163),
    [sym_highest] = ACTIONS(163),
    [sym_assertbounds] = ACTIONS(163),
    [sym_int] = ACTIONS(163),
    [sym_real] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(161),
    [sym__id] = ACTIONS(163),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_pow,
    ACTIONS(177), 1,
      sym_delay,
    STATE(52), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(165), 24,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [57] = 16,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_pow,
    ACTIONS(177), 1,
      sym_delay,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    ACTIONS(185), 2,
      sym_add,
      sym_or,
    ACTIONS(191), 2,
      sym_lt,
      sym_gt,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(193), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(189), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(179), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [126] = 9,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym_delay,
    STATE(52), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(165), 25,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [181] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(165), 26,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [234] = 13,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_pow,
    ACTIONS(177), 1,
      sym_delay,
    ACTIONS(187), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    ACTIONS(185), 2,
      sym_add,
      sym_or,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(165), 14,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [297] = 11,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_pow,
    ACTIONS(177), 1,
      sym_delay,
    STATE(52), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(165), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_add,
      anon_sym_DASH,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [356] = 5,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      sym__id,
    STATE(85), 1,
      sym_id,
    ACTIONS(163), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(161), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [402] = 4,
    ACTIONS(199), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(197), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(195), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [445] = 4,
    ACTIONS(199), 1,
      anon_sym_COLON_COLON,
    STATE(73), 1,
      aux_sym_id_repeat1,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(201), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [488] = 4,
    ACTIONS(209), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(207), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(205), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [531] = 4,
    ACTIONS(199), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_id_repeat1,
    ACTIONS(197), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(195), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [574] = 4,
    ACTIONS(199), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(214), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(212), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [617] = 2,
    ACTIONS(207), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(205), 30,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      anon_sym_COLON_COLON,
  [655] = 2,
    ACTIONS(218), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(216), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [692] = 13,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_pow,
    ACTIONS(234), 1,
      sym_delay,
    STATE(58), 1,
      sym_sub,
    STATE(139), 1,
      sym_substitutions,
    ACTIONS(226), 2,
      sym_add,
      sym_or,
    STATE(138), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(230), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(165), 10,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [751] = 2,
    ACTIONS(238), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(236), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [788] = 2,
    ACTIONS(242), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(240), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [825] = 10,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      sym_pow,
    ACTIONS(234), 1,
      sym_delay,
    STATE(58), 1,
      sym_sub,
    STATE(139), 1,
      sym_substitutions,
    STATE(138), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(165), 19,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [878] = 2,
    ACTIONS(246), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(244), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [915] = 2,
    ACTIONS(250), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(248), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [952] = 8,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(165), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1001] = 2,
    ACTIONS(254), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(252), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1038] = 9,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      sym_delay,
    STATE(58), 1,
      sym_sub,
    STATE(139), 1,
      sym_substitutions,
    STATE(138), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(165), 20,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1089] = 2,
    ACTIONS(258), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(256), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1126] = 2,
    ACTIONS(262), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(260), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1163] = 2,
    ACTIONS(266), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(264), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1200] = 2,
    ACTIONS(270), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(268), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1237] = 2,
    ACTIONS(274), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(272), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1274] = 2,
    ACTIONS(278), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1311] = 2,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(280), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1348] = 2,
    ACTIONS(286), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(284), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1385] = 2,
    ACTIONS(290), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1422] = 2,
    ACTIONS(294), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(292), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1459] = 2,
    ACTIONS(298), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(296), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1496] = 2,
    ACTIONS(302), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(300), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1533] = 2,
    ACTIONS(306), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(304), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1570] = 3,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1609] = 16,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      sym_pow,
    ACTIONS(328), 1,
      sym_delay,
    STATE(61), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    ACTIONS(318), 2,
      sym_add,
      sym_or,
    ACTIONS(324), 2,
      sym_lt,
      sym_gt,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(326), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(314), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(320), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [1674] = 3,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1713] = 3,
    ACTIONS(332), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1752] = 3,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1791] = 2,
    ACTIONS(338), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(336), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1828] = 2,
    ACTIONS(342), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(340), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1865] = 3,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1904] = 3,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1943] = 11,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      sym_pow,
    ACTIONS(234), 1,
      sym_delay,
    STATE(58), 1,
      sym_sub,
    STATE(139), 1,
      sym_substitutions,
    STATE(138), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(230), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(165), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1998] = 2,
    ACTIONS(350), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(348), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2035] = 8,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_sub,
    STATE(139), 1,
      sym_substitutions,
    STATE(138), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(165), 21,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2084] = 13,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      sym_pow,
    ACTIONS(328), 1,
      sym_delay,
    STATE(61), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    ACTIONS(318), 2,
      sym_add,
      sym_or,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(320), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(165), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [2143] = 9,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(328), 1,
      sym_delay,
    STATE(61), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(165), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [2194] = 10,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      sym_pow,
    ACTIONS(328), 1,
      sym_delay,
    STATE(61), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(165), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [2247] = 11,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      sym_pow,
    ACTIONS(328), 1,
      sym_delay,
    STATE(61), 1,
      sym_sub,
    STATE(97), 1,
      sym_substitutions,
    STATE(98), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(171), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(320), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(165), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      anon_sym_DASH,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [2302] = 16,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_DOT,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_pow,
    ACTIONS(234), 1,
      sym_delay,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_sub,
    STATE(139), 1,
      sym_substitutions,
    ACTIONS(226), 2,
      sym_add,
      sym_or,
    ACTIONS(354), 2,
      sym_lt,
      sym_gt,
    STATE(138), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(356), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(314), 5,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(230), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [2367] = 2,
    ACTIONS(360), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(358), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2404] = 2,
    ACTIONS(364), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(362), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2441] = 5,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(99), 1,
      sym__id,
    STATE(151), 1,
      sym_id,
    ACTIONS(163), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(161), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2483] = 5,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(55), 1,
      sym__id,
    STATE(85), 1,
      sym_id,
    ACTIONS(163), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(161), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2525] = 4,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    STATE(127), 1,
      aux_sym_id_repeat1,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(201), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2564] = 4,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    STATE(126), 1,
      aux_sym_id_repeat1,
    ACTIONS(197), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(195), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2603] = 4,
    ACTIONS(368), 1,
      anon_sym_COLON_COLON,
    STATE(125), 1,
      aux_sym_id_repeat1,
    ACTIONS(207), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(205), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2642] = 4,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    STATE(125), 1,
      aux_sym_id_repeat1,
    ACTIONS(214), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(212), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2681] = 4,
    ACTIONS(366), 1,
      anon_sym_COLON_COLON,
    STATE(125), 1,
      aux_sym_id_repeat1,
    ACTIONS(197), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(195), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2720] = 2,
    ACTIONS(207), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(205), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      anon_sym_COLON_COLON,
  [2754] = 2,
    ACTIONS(246), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(244), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2787] = 2,
    ACTIONS(364), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(362), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2820] = 2,
    ACTIONS(342), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(340), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2853] = 2,
    ACTIONS(338), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(336), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2886] = 2,
    ACTIONS(360), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(358), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2919] = 2,
    ACTIONS(298), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(296), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2952] = 2,
    ACTIONS(306), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(304), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2985] = 2,
    ACTIONS(350), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(348), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3018] = 2,
    ACTIONS(258), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(256), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3051] = 2,
    ACTIONS(294), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(292), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3084] = 2,
    ACTIONS(290), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3117] = 2,
    ACTIONS(238), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(236), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3150] = 2,
    ACTIONS(254), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(252), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3183] = 2,
    ACTIONS(274), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(272), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3216] = 3,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3251] = 2,
    ACTIONS(286), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(284), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3284] = 2,
    ACTIONS(262), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(260), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3317] = 2,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(280), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3350] = 2,
    ACTIONS(278), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3383] = 2,
    ACTIONS(218), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(216), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3416] = 2,
    ACTIONS(242), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(240), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3449] = 2,
    ACTIONS(270), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(268), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3482] = 2,
    ACTIONS(250), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(248), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3515] = 2,
    ACTIONS(302), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(300), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3548] = 3,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3583] = 3,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3618] = 3,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3653] = 3,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3688] = 2,
    ACTIONS(266), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(264), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3721] = 3,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3756] = 14,
    ACTIONS(5), 1,
      anon_sym_declare,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 1,
      sym_comment,
    STATE(240), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(195), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(320), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(321), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(160), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [3810] = 14,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      anon_sym_declare,
    ACTIONS(392), 1,
      anon_sym_import,
    ACTIONS(395), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(401), 1,
      anon_sym_COLON_COLON,
    ACTIONS(404), 1,
      sym__id,
    ACTIONS(407), 1,
      sym_comment,
    STATE(240), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(195), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(320), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(321), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(398), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(160), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [3864] = 9,
    ACTIONS(415), 1,
      anon_sym_COLON_COLON,
    ACTIONS(418), 1,
      sym__id,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    ACTIONS(410), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(412), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3899] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(166), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3933] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3967] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(163), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4001] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(167), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4035] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4069] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4103] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4137] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(168), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4171] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4205] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(173), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4239] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4273] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_variants,
    STATE(275), 1,
      sym_id,
    STATE(161), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(215), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(291), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(423), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4307] = 4,
    ACTIONS(445), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(447), 1,
      sym__doc_char,
    STATE(176), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(449), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4330] = 4,
    ACTIONS(451), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(453), 1,
      sym__doc_char,
    STATE(174), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(455), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4353] = 4,
    ACTIONS(457), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(459), 1,
      sym__doc_char,
    STATE(176), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(462), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4376] = 2,
    ACTIONS(465), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(467), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4392] = 2,
    ACTIONS(469), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(471), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4408] = 2,
    ACTIONS(473), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(475), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4424] = 2,
    ACTIONS(477), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(479), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4440] = 2,
    ACTIONS(481), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(483), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4456] = 2,
    ACTIONS(485), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(487), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4472] = 4,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_COLON,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(489), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4491] = 2,
    ACTIONS(499), 1,
      anon_sym_COLON,
    ACTIONS(497), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4506] = 4,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(501), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4525] = 2,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(505), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4540] = 2,
    ACTIONS(511), 1,
      anon_sym_COLON,
    ACTIONS(509), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4555] = 2,
    ACTIONS(515), 1,
      anon_sym_COLON,
    ACTIONS(513), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4570] = 2,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(517), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4585] = 2,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(521), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4600] = 6,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(525), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4623] = 6,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(531), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4646] = 2,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(533), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4661] = 4,
    ACTIONS(542), 1,
      anon_sym_COLON_COLON,
    ACTIONS(537), 2,
      anon_sym_import,
      sym__id,
    STATE(194), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(539), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4679] = 4,
    ACTIONS(548), 1,
      anon_sym_COLON_COLON,
    ACTIONS(544), 2,
      anon_sym_import,
      sym__id,
    STATE(194), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(546), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4697] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
  [4722] = 3,
    ACTIONS(556), 1,
      anon_sym_COLON_COLON,
    STATE(210), 1,
      aux_sym_id_repeat1,
    ACTIONS(195), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4737] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [4762] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
  [4787] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
  [4812] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
  [4837] = 3,
    ACTIONS(556), 1,
      anon_sym_COLON_COLON,
    STATE(197), 1,
      aux_sym_id_repeat1,
    ACTIONS(201), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4852] = 3,
    ACTIONS(556), 1,
      anon_sym_COLON_COLON,
    STATE(210), 1,
      aux_sym_id_repeat1,
    ACTIONS(212), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4867] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(566), 1,
      anon_sym_SEMI,
  [4892] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(568), 1,
      anon_sym_SEMI,
  [4917] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(570), 1,
      anon_sym_SEMI,
  [4942] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [4967] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [4992] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [5017] = 3,
    ACTIONS(578), 1,
      anon_sym_COLON_COLON,
    STATE(210), 1,
      aux_sym_id_repeat1,
    ACTIONS(205), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [5032] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [5057] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(583), 1,
      anon_sym_SEMI,
  [5082] = 8,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LT_COLON,
    ACTIONS(529), 1,
      anon_sym_COLON_GT,
    ACTIONS(552), 1,
      anon_sym_with,
    ACTIONS(554), 1,
      anon_sym_letrec,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [5107] = 3,
    ACTIONS(556), 1,
      anon_sym_COLON_COLON,
    STATE(203), 1,
      aux_sym_id_repeat1,
    ACTIONS(195), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [5122] = 4,
    ACTIONS(544), 1,
      sym__id,
    ACTIONS(548), 1,
      anon_sym_COLON_COLON,
    STATE(216), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(587), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5139] = 4,
    ACTIONS(537), 1,
      sym__id,
    ACTIONS(542), 1,
      anon_sym_COLON_COLON,
    STATE(216), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(589), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5156] = 2,
    ACTIONS(473), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(475), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5169] = 1,
    ACTIONS(205), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5179] = 2,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(592), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5191] = 7,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    STATE(251), 1,
      aux_sym_arguments_repeat1,
  [5213] = 6,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COMMA,
  [5232] = 3,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_TILDE,
    ACTIONS(612), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5245] = 5,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_TILDE,
    ACTIONS(620), 1,
      anon_sym_LT_COLON,
    ACTIONS(622), 1,
      anon_sym_COLON_GT,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5262] = 5,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_TILDE,
    ACTIONS(620), 1,
      anon_sym_LT_COLON,
    ACTIONS(622), 1,
      anon_sym_COLON_GT,
    ACTIONS(624), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5279] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(624), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5296] = 5,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_TILDE,
    ACTIONS(620), 1,
      anon_sym_LT_COLON,
    ACTIONS(622), 1,
      anon_sym_COLON_GT,
    ACTIONS(626), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5313] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5330] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(618), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5347] = 3,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(612), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5360] = 6,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
  [5379] = 4,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 1,
      anon_sym_where,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(237), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5393] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(638), 1,
      anon_sym_COMMA,
  [5409] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
  [5425] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(642), 1,
      anon_sym_COMMA,
  [5441] = 4,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    ACTIONS(646), 1,
      anon_sym_where,
    STATE(231), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5455] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [5471] = 3,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    ACTIONS(650), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(237), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5483] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [5499] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(604), 1,
      anon_sym_LT_COLON,
    ACTIONS(606), 1,
      anon_sym_COLON_GT,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [5515] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(659), 1,
      anon_sym_import,
    STATE(273), 1,
      sym_id,
  [5528] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(260), 1,
      sym_id,
    STATE(314), 1,
      sym_parameters,
  [5541] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(260), 1,
      sym_id,
    STATE(336), 1,
      sym_parameters,
  [5554] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    ACTIONS(663), 1,
      sym_string,
    STATE(301), 1,
      sym_id,
  [5567] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(260), 1,
      sym_id,
    STATE(295), 1,
      sym_parameters,
  [5580] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(260), 1,
      sym_id,
    STATE(283), 1,
      sym_parameters,
  [5593] = 3,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_rules,
    STATE(247), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5604] = 3,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(248), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5615] = 3,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    STATE(248), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5626] = 3,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym_rules,
    STATE(247), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5637] = 3,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_parameters_repeat1,
  [5647] = 3,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_arguments_repeat1,
  [5657] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(273), 1,
      sym_id,
  [5667] = 3,
    ACTIONS(680), 1,
      sym_string,
    STATE(264), 1,
      sym_modulator,
    STATE(330), 1,
      sym_modulators,
  [5677] = 3,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_arguments_repeat1,
  [5687] = 3,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    ACTIONS(685), 1,
      sym__id,
    STATE(133), 1,
      sym_id,
  [5697] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(270), 1,
      sym_id,
  [5707] = 3,
    ACTIONS(680), 1,
      sym_string,
    STATE(264), 1,
      sym_modulator,
    STATE(305), 1,
      sym_modulators,
  [5717] = 3,
    ACTIONS(53), 1,
      anon_sym_COLON_COLON,
    ACTIONS(687), 1,
      sym__id,
    STATE(119), 1,
      sym_id,
  [5727] = 1,
    ACTIONS(689), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [5733] = 3,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_parameters_repeat1,
  [5743] = 3,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_parameters_repeat1,
  [5753] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(302), 1,
      sym_id,
  [5763] = 3,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_DASH_GT,
    STATE(265), 1,
      aux_sym_modulators_repeat1,
  [5773] = 3,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_DASH_GT,
    STATE(263), 1,
      aux_sym_modulators_repeat1,
  [5783] = 3,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_DASH_GT,
    STATE(265), 1,
      aux_sym_modulators_repeat1,
  [5793] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(308), 1,
      sym_id,
  [5803] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(243), 1,
      sym_id,
  [5813] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      sym__id,
    STATE(337), 1,
      sym_id,
  [5823] = 2,
    ACTIONS(711), 1,
      anon_sym_COLON,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5831] = 1,
    ACTIONS(713), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5836] = 2,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_environment,
  [5843] = 1,
    ACTIONS(717), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [5848] = 2,
    ACTIONS(719), 1,
      anon_sym_EQ,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
  [5855] = 1,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5860] = 2,
    ACTIONS(723), 1,
      anon_sym_EQ,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
  [5867] = 2,
    ACTIONS(727), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_environment,
  [5874] = 2,
    ACTIONS(680), 1,
      sym_string,
    STATE(274), 1,
      sym_modulator,
  [5881] = 2,
    ACTIONS(729), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_rec_environment,
  [5888] = 2,
    ACTIONS(727), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_environment,
  [5895] = 1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
  [5899] = 1,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
  [5903] = 1,
    ACTIONS(735), 1,
      sym_string,
  [5907] = 1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [5911] = 1,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
  [5915] = 1,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
  [5919] = 1,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
  [5923] = 1,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
  [5927] = 1,
    ACTIONS(747), 1,
      anon_sym_EQ,
  [5931] = 1,
    ACTIONS(749), 1,
      sym_string,
  [5935] = 1,
    ACTIONS(751), 1,
      sym__id,
  [5939] = 1,
    ACTIONS(753), 1,
      anon_sym_SEMI,
  [5943] = 1,
    ACTIONS(755), 1,
      sym__id,
  [5947] = 1,
    ACTIONS(757), 1,
      anon_sym_SEMI,
  [5951] = 1,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [5955] = 1,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
  [5959] = 1,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
  [5963] = 1,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [5967] = 1,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
  [5971] = 1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [5975] = 1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
  [5979] = 1,
    ACTIONS(773), 1,
      sym_string,
  [5983] = 1,
    ACTIONS(775), 1,
      anon_sym_COMMA,
  [5987] = 1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [5991] = 1,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [5995] = 1,
    ACTIONS(781), 1,
      anon_sym_DASH_GT,
  [5999] = 1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [6003] = 1,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [6007] = 1,
    ACTIONS(787), 1,
      anon_sym_EQ,
  [6011] = 1,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [6015] = 1,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
  [6019] = 1,
    ACTIONS(793), 1,
      anon_sym_SEMI,
  [6023] = 1,
    ACTIONS(795), 1,
      sym__id,
  [6027] = 1,
    ACTIONS(797), 1,
      sym__id,
  [6031] = 1,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
  [6035] = 1,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
  [6039] = 1,
    ACTIONS(803), 1,
      sym_string,
  [6043] = 1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [6047] = 1,
    ACTIONS(807), 1,
      anon_sym_SEMI,
  [6051] = 1,
    ACTIONS(809), 1,
      anon_sym_DOT,
  [6055] = 1,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [6059] = 1,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [6063] = 1,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
  [6067] = 1,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [6071] = 1,
    ACTIONS(819), 1,
      sym__id,
  [6075] = 1,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [6079] = 1,
    ACTIONS(823), 1,
      anon_sym_LPAREN,
  [6083] = 1,
    ACTIONS(825), 1,
      anon_sym_LPAREN,
  [6087] = 1,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
  [6091] = 1,
    ACTIONS(829), 1,
      anon_sym_LPAREN,
  [6095] = 1,
    ACTIONS(831), 1,
      anon_sym_DASH_GT,
  [6099] = 1,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
  [6103] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [6107] = 1,
    ACTIONS(837), 1,
      sym__id,
  [6111] = 1,
    ACTIONS(839), 1,
      anon_sym_DOT,
  [6115] = 1,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
  [6119] = 1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [6123] = 1,
    ACTIONS(845), 1,
      anon_sym_COMMA,
  [6127] = 1,
    ACTIONS(847), 1,
      anon_sym_EQ_GT,
  [6131] = 1,
    ACTIONS(849), 1,
      sym_string,
  [6135] = 1,
    ACTIONS(851), 1,
      anon_sym_LPAREN,
  [6139] = 1,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(66)] = 0,
  [SMALL_STATE(67)] = 57,
  [SMALL_STATE(68)] = 126,
  [SMALL_STATE(69)] = 181,
  [SMALL_STATE(70)] = 234,
  [SMALL_STATE(71)] = 297,
  [SMALL_STATE(72)] = 356,
  [SMALL_STATE(73)] = 402,
  [SMALL_STATE(74)] = 445,
  [SMALL_STATE(75)] = 488,
  [SMALL_STATE(76)] = 531,
  [SMALL_STATE(77)] = 574,
  [SMALL_STATE(78)] = 617,
  [SMALL_STATE(79)] = 655,
  [SMALL_STATE(80)] = 692,
  [SMALL_STATE(81)] = 751,
  [SMALL_STATE(82)] = 788,
  [SMALL_STATE(83)] = 825,
  [SMALL_STATE(84)] = 878,
  [SMALL_STATE(85)] = 915,
  [SMALL_STATE(86)] = 952,
  [SMALL_STATE(87)] = 1001,
  [SMALL_STATE(88)] = 1038,
  [SMALL_STATE(89)] = 1089,
  [SMALL_STATE(90)] = 1126,
  [SMALL_STATE(91)] = 1163,
  [SMALL_STATE(92)] = 1200,
  [SMALL_STATE(93)] = 1237,
  [SMALL_STATE(94)] = 1274,
  [SMALL_STATE(95)] = 1311,
  [SMALL_STATE(96)] = 1348,
  [SMALL_STATE(97)] = 1385,
  [SMALL_STATE(98)] = 1422,
  [SMALL_STATE(99)] = 1459,
  [SMALL_STATE(100)] = 1496,
  [SMALL_STATE(101)] = 1533,
  [SMALL_STATE(102)] = 1570,
  [SMALL_STATE(103)] = 1609,
  [SMALL_STATE(104)] = 1674,
  [SMALL_STATE(105)] = 1713,
  [SMALL_STATE(106)] = 1752,
  [SMALL_STATE(107)] = 1791,
  [SMALL_STATE(108)] = 1828,
  [SMALL_STATE(109)] = 1865,
  [SMALL_STATE(110)] = 1904,
  [SMALL_STATE(111)] = 1943,
  [SMALL_STATE(112)] = 1998,
  [SMALL_STATE(113)] = 2035,
  [SMALL_STATE(114)] = 2084,
  [SMALL_STATE(115)] = 2143,
  [SMALL_STATE(116)] = 2194,
  [SMALL_STATE(117)] = 2247,
  [SMALL_STATE(118)] = 2302,
  [SMALL_STATE(119)] = 2367,
  [SMALL_STATE(120)] = 2404,
  [SMALL_STATE(121)] = 2441,
  [SMALL_STATE(122)] = 2483,
  [SMALL_STATE(123)] = 2525,
  [SMALL_STATE(124)] = 2564,
  [SMALL_STATE(125)] = 2603,
  [SMALL_STATE(126)] = 2642,
  [SMALL_STATE(127)] = 2681,
  [SMALL_STATE(128)] = 2720,
  [SMALL_STATE(129)] = 2754,
  [SMALL_STATE(130)] = 2787,
  [SMALL_STATE(131)] = 2820,
  [SMALL_STATE(132)] = 2853,
  [SMALL_STATE(133)] = 2886,
  [SMALL_STATE(134)] = 2919,
  [SMALL_STATE(135)] = 2952,
  [SMALL_STATE(136)] = 2985,
  [SMALL_STATE(137)] = 3018,
  [SMALL_STATE(138)] = 3051,
  [SMALL_STATE(139)] = 3084,
  [SMALL_STATE(140)] = 3117,
  [SMALL_STATE(141)] = 3150,
  [SMALL_STATE(142)] = 3183,
  [SMALL_STATE(143)] = 3216,
  [SMALL_STATE(144)] = 3251,
  [SMALL_STATE(145)] = 3284,
  [SMALL_STATE(146)] = 3317,
  [SMALL_STATE(147)] = 3350,
  [SMALL_STATE(148)] = 3383,
  [SMALL_STATE(149)] = 3416,
  [SMALL_STATE(150)] = 3449,
  [SMALL_STATE(151)] = 3482,
  [SMALL_STATE(152)] = 3515,
  [SMALL_STATE(153)] = 3548,
  [SMALL_STATE(154)] = 3583,
  [SMALL_STATE(155)] = 3618,
  [SMALL_STATE(156)] = 3653,
  [SMALL_STATE(157)] = 3688,
  [SMALL_STATE(158)] = 3721,
  [SMALL_STATE(159)] = 3756,
  [SMALL_STATE(160)] = 3810,
  [SMALL_STATE(161)] = 3864,
  [SMALL_STATE(162)] = 3899,
  [SMALL_STATE(163)] = 3933,
  [SMALL_STATE(164)] = 3967,
  [SMALL_STATE(165)] = 4001,
  [SMALL_STATE(166)] = 4035,
  [SMALL_STATE(167)] = 4069,
  [SMALL_STATE(168)] = 4103,
  [SMALL_STATE(169)] = 4137,
  [SMALL_STATE(170)] = 4171,
  [SMALL_STATE(171)] = 4205,
  [SMALL_STATE(172)] = 4239,
  [SMALL_STATE(173)] = 4273,
  [SMALL_STATE(174)] = 4307,
  [SMALL_STATE(175)] = 4330,
  [SMALL_STATE(176)] = 4353,
  [SMALL_STATE(177)] = 4376,
  [SMALL_STATE(178)] = 4392,
  [SMALL_STATE(179)] = 4408,
  [SMALL_STATE(180)] = 4424,
  [SMALL_STATE(181)] = 4440,
  [SMALL_STATE(182)] = 4456,
  [SMALL_STATE(183)] = 4472,
  [SMALL_STATE(184)] = 4491,
  [SMALL_STATE(185)] = 4506,
  [SMALL_STATE(186)] = 4525,
  [SMALL_STATE(187)] = 4540,
  [SMALL_STATE(188)] = 4555,
  [SMALL_STATE(189)] = 4570,
  [SMALL_STATE(190)] = 4585,
  [SMALL_STATE(191)] = 4600,
  [SMALL_STATE(192)] = 4623,
  [SMALL_STATE(193)] = 4646,
  [SMALL_STATE(194)] = 4661,
  [SMALL_STATE(195)] = 4679,
  [SMALL_STATE(196)] = 4697,
  [SMALL_STATE(197)] = 4722,
  [SMALL_STATE(198)] = 4737,
  [SMALL_STATE(199)] = 4762,
  [SMALL_STATE(200)] = 4787,
  [SMALL_STATE(201)] = 4812,
  [SMALL_STATE(202)] = 4837,
  [SMALL_STATE(203)] = 4852,
  [SMALL_STATE(204)] = 4867,
  [SMALL_STATE(205)] = 4892,
  [SMALL_STATE(206)] = 4917,
  [SMALL_STATE(207)] = 4942,
  [SMALL_STATE(208)] = 4967,
  [SMALL_STATE(209)] = 4992,
  [SMALL_STATE(210)] = 5017,
  [SMALL_STATE(211)] = 5032,
  [SMALL_STATE(212)] = 5057,
  [SMALL_STATE(213)] = 5082,
  [SMALL_STATE(214)] = 5107,
  [SMALL_STATE(215)] = 5122,
  [SMALL_STATE(216)] = 5139,
  [SMALL_STATE(217)] = 5156,
  [SMALL_STATE(218)] = 5169,
  [SMALL_STATE(219)] = 5179,
  [SMALL_STATE(220)] = 5191,
  [SMALL_STATE(221)] = 5213,
  [SMALL_STATE(222)] = 5232,
  [SMALL_STATE(223)] = 5245,
  [SMALL_STATE(224)] = 5262,
  [SMALL_STATE(225)] = 5279,
  [SMALL_STATE(226)] = 5296,
  [SMALL_STATE(227)] = 5313,
  [SMALL_STATE(228)] = 5330,
  [SMALL_STATE(229)] = 5347,
  [SMALL_STATE(230)] = 5360,
  [SMALL_STATE(231)] = 5379,
  [SMALL_STATE(232)] = 5393,
  [SMALL_STATE(233)] = 5409,
  [SMALL_STATE(234)] = 5425,
  [SMALL_STATE(235)] = 5441,
  [SMALL_STATE(236)] = 5455,
  [SMALL_STATE(237)] = 5471,
  [SMALL_STATE(238)] = 5483,
  [SMALL_STATE(239)] = 5499,
  [SMALL_STATE(240)] = 5515,
  [SMALL_STATE(241)] = 5528,
  [SMALL_STATE(242)] = 5541,
  [SMALL_STATE(243)] = 5554,
  [SMALL_STATE(244)] = 5567,
  [SMALL_STATE(245)] = 5580,
  [SMALL_STATE(246)] = 5593,
  [SMALL_STATE(247)] = 5604,
  [SMALL_STATE(248)] = 5615,
  [SMALL_STATE(249)] = 5626,
  [SMALL_STATE(250)] = 5637,
  [SMALL_STATE(251)] = 5647,
  [SMALL_STATE(252)] = 5657,
  [SMALL_STATE(253)] = 5667,
  [SMALL_STATE(254)] = 5677,
  [SMALL_STATE(255)] = 5687,
  [SMALL_STATE(256)] = 5697,
  [SMALL_STATE(257)] = 5707,
  [SMALL_STATE(258)] = 5717,
  [SMALL_STATE(259)] = 5727,
  [SMALL_STATE(260)] = 5733,
  [SMALL_STATE(261)] = 5743,
  [SMALL_STATE(262)] = 5753,
  [SMALL_STATE(263)] = 5763,
  [SMALL_STATE(264)] = 5773,
  [SMALL_STATE(265)] = 5783,
  [SMALL_STATE(266)] = 5793,
  [SMALL_STATE(267)] = 5803,
  [SMALL_STATE(268)] = 5813,
  [SMALL_STATE(269)] = 5823,
  [SMALL_STATE(270)] = 5831,
  [SMALL_STATE(271)] = 5836,
  [SMALL_STATE(272)] = 5843,
  [SMALL_STATE(273)] = 5848,
  [SMALL_STATE(274)] = 5855,
  [SMALL_STATE(275)] = 5860,
  [SMALL_STATE(276)] = 5867,
  [SMALL_STATE(277)] = 5874,
  [SMALL_STATE(278)] = 5881,
  [SMALL_STATE(279)] = 5888,
  [SMALL_STATE(280)] = 5895,
  [SMALL_STATE(281)] = 5899,
  [SMALL_STATE(282)] = 5903,
  [SMALL_STATE(283)] = 5907,
  [SMALL_STATE(284)] = 5911,
  [SMALL_STATE(285)] = 5915,
  [SMALL_STATE(286)] = 5919,
  [SMALL_STATE(287)] = 5923,
  [SMALL_STATE(288)] = 5927,
  [SMALL_STATE(289)] = 5931,
  [SMALL_STATE(290)] = 5935,
  [SMALL_STATE(291)] = 5939,
  [SMALL_STATE(292)] = 5943,
  [SMALL_STATE(293)] = 5947,
  [SMALL_STATE(294)] = 5951,
  [SMALL_STATE(295)] = 5955,
  [SMALL_STATE(296)] = 5959,
  [SMALL_STATE(297)] = 5963,
  [SMALL_STATE(298)] = 5967,
  [SMALL_STATE(299)] = 5971,
  [SMALL_STATE(300)] = 5975,
  [SMALL_STATE(301)] = 5979,
  [SMALL_STATE(302)] = 5983,
  [SMALL_STATE(303)] = 5987,
  [SMALL_STATE(304)] = 5991,
  [SMALL_STATE(305)] = 5995,
  [SMALL_STATE(306)] = 5999,
  [SMALL_STATE(307)] = 6003,
  [SMALL_STATE(308)] = 6007,
  [SMALL_STATE(309)] = 6011,
  [SMALL_STATE(310)] = 6015,
  [SMALL_STATE(311)] = 6019,
  [SMALL_STATE(312)] = 6023,
  [SMALL_STATE(313)] = 6027,
  [SMALL_STATE(314)] = 6031,
  [SMALL_STATE(315)] = 6035,
  [SMALL_STATE(316)] = 6039,
  [SMALL_STATE(317)] = 6043,
  [SMALL_STATE(318)] = 6047,
  [SMALL_STATE(319)] = 6051,
  [SMALL_STATE(320)] = 6055,
  [SMALL_STATE(321)] = 6059,
  [SMALL_STATE(322)] = 6063,
  [SMALL_STATE(323)] = 6067,
  [SMALL_STATE(324)] = 6071,
  [SMALL_STATE(325)] = 6075,
  [SMALL_STATE(326)] = 6079,
  [SMALL_STATE(327)] = 6083,
  [SMALL_STATE(328)] = 6087,
  [SMALL_STATE(329)] = 6091,
  [SMALL_STATE(330)] = 6095,
  [SMALL_STATE(331)] = 6099,
  [SMALL_STATE(332)] = 6103,
  [SMALL_STATE(333)] = 6107,
  [SMALL_STATE(334)] = 6111,
  [SMALL_STATE(335)] = 6115,
  [SMALL_STATE(336)] = 6119,
  [SMALL_STATE(337)] = 6123,
  [SMALL_STATE(338)] = 6127,
  [SMALL_STATE(339)] = 6131,
  [SMALL_STATE(340)] = 6135,
  [SMALL_STATE(341)] = 6139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 13),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 13),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(292),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 19),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 19),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulation, 5, .production_id = 22),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulation, 5, .production_id = 22),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 17),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 17),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 19),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 19),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 18),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 18),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 19),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 19),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 19),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 19),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 26),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 26),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 24),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 24),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 23),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 23),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 12),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 12),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(313),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(267),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(327),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(175),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(195),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(324),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(202),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(160),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(215),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(324),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(202),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(176),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(176),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 15),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 15),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 10),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 10),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 10),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 11),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 11),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 11),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 11),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 10),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 10),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 10),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 10),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(194),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 20),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 21),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(333),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(216),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 10),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 10),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 10),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 10),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 3, .production_id = 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(266),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(24),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 27),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(256),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 1),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2), SHIFT_REPEAT(277),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 1, .production_id = 6),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 14),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 25),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [815] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
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
