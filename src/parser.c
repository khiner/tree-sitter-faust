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
#define STATE_COUNT 326
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 181
#define ALIAS_COUNT 1
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 27

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
  anon_sym_TILDE = 15,
  anon_sym_LT_COLON = 16,
  anon_sym_COLON_GT = 17,
  sym_par = 18,
  sym_seq = 19,
  sym_sum = 20,
  sym_prod = 21,
  anon_sym_with = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_letrec = 25,
  anon_sym_where = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_component = 28,
  sym_add = 29,
  anon_sym_DASH = 30,
  sym_mult = 31,
  sym_div = 32,
  sym_mod = 33,
  sym_pow = 34,
  sym_or = 35,
  sym_and = 36,
  sym_xor = 37,
  sym_lshift = 38,
  sym_rshift = 39,
  sym_lt = 40,
  sym_le = 41,
  sym_gt = 42,
  sym_ge = 43,
  sym_eq = 44,
  sym_neq = 45,
  sym_delay = 46,
  sym_exp = 47,
  sym_log = 48,
  sym_log10 = 49,
  sym_sqrt = 50,
  sym_abs = 51,
  sym_floor = 52,
  sym_ceil = 53,
  sym_rint = 54,
  sym_round = 55,
  sym_acos = 56,
  sym_asin = 57,
  sym_atan = 58,
  sym_cos = 59,
  sym_sin = 60,
  sym_tan = 61,
  sym_int_cast = 62,
  sym_float_cast = 63,
  sym_pow_fun = 64,
  sym_min = 65,
  sym_max = 66,
  sym_fmod = 67,
  sym_remainder = 68,
  sym_atan2 = 69,
  sym_prefix_prim = 70,
  sym_attach = 71,
  sym_enable = 72,
  sym_control = 73,
  sym_wire = 74,
  sym_cut = 75,
  sym_mem = 76,
  sym_rdtable = 77,
  sym_rwtable = 78,
  sym_select2 = 79,
  sym_select3 = 80,
  sym_lowest = 81,
  sym_highest = 82,
  sym_assertbounds = 83,
  sym_int = 84,
  sym_real = 85,
  anon_sym_LTmdoc_GT = 86,
  anon_sym_LT_SLASHmdoc_GT = 87,
  sym__doc_char = 88,
  anon_sym_LTnotice_SLASH_GT = 89,
  anon_sym_LTnotice_SLASH_GT2 = 90,
  anon_sym_LTequation_GT = 91,
  anon_sym_LT_SLASHequation_GT = 92,
  anon_sym_LTdiagram_GT = 93,
  anon_sym_LT_SLASHdiagram_GT = 94,
  anon_sym_LTmetadata_GT = 95,
  anon_sym_LT_SLASHmetadata_GT = 96,
  anon_sym_LTlisting = 97,
  sym_single_precision = 98,
  sym_double_precision = 99,
  sym_quad_precision = 100,
  sym_fixed_point_precision = 101,
  sym_string = 102,
  anon_sym_COLON_COLON = 103,
  sym__id = 104,
  sym_comment = 105,
  sym_program = 106,
  sym__statement = 107,
  sym__definition = 108,
  sym_definition = 109,
  sym_function_definition = 110,
  sym__metadata_definition = 111,
  sym_global_metadata = 112,
  sym_function_metadata = 113,
  sym_file_import = 114,
  sym__expression = 115,
  sym__infix_expression = 116,
  sym_infix = 117,
  sym_partial = 118,
  sym_prefix = 119,
  sym_prim1 = 120,
  sym_prim2 = 121,
  sym_prim3 = 122,
  sym_prim4 = 123,
  sym_prim5 = 124,
  sym_function_call = 125,
  sym_modifier = 126,
  sym_access = 127,
  sym__primitive = 128,
  sym_lambda = 129,
  sym_modulation = 130,
  sym_modulators = 131,
  sym_modulator = 132,
  sym_parameters = 133,
  sym_arguments = 134,
  sym__argument = 135,
  sym_recursive_arg = 136,
  sym_sequential_arg = 137,
  sym_split_arg = 138,
  sym_merge_arg = 139,
  sym_iteration = 140,
  sym_with_environment = 141,
  sym_environment = 142,
  sym_letrec_environment = 143,
  sym_rec_environment = 144,
  sym_recinition = 145,
  sym_substitution = 146,
  sym_substitutions = 147,
  sym_component = 148,
  sym__infix = 149,
  sym__prim1 = 150,
  sym__prim2 = 151,
  sym__prim3 = 152,
  sym__prim4 = 153,
  sym__prim5 = 154,
  sym__modifier = 155,
  sym_one_sample_delay = 156,
  sym_sub = 157,
  sym__number = 158,
  sym_documentation = 159,
  sym__doc_content = 160,
  sym__special_doc_tag = 161,
  sym__binary_composition = 162,
  sym_recursive = 163,
  sym_sequential = 164,
  sym_split = 165,
  sym_merge = 166,
  sym_parallel = 167,
  sym_variants = 168,
  sym__variant = 169,
  sym_id = 170,
  sym_negate_id = 171,
  aux_sym_program_repeat1 = 172,
  aux_sym_modulators_repeat1 = 173,
  aux_sym_parameters_repeat1 = 174,
  aux_sym_arguments_repeat1 = 175,
  aux_sym_environment_repeat1 = 176,
  aux_sym_rec_environment_repeat1 = 177,
  aux_sym_documentation_repeat1 = 178,
  aux_sym_variants_repeat1 = 179,
  aux_sym_id_repeat1 = 180,
  alias_sym_parameter = 181,
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
  [anon_sym_TILDE] = "~",
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
  [anon_sym_TILDE] = anon_sym_TILDE,
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
  [25] = {.index = 39, .length = 4},
  [26] = {.index = 43, .length = 2},
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
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [43] =
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
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 3,
  [14] = 4,
  [15] = 15,
  [16] = 16,
  [17] = 5,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 24,
  [28] = 22,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 35,
  [40] = 34,
  [41] = 33,
  [42] = 36,
  [43] = 31,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 30,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 51,
  [55] = 52,
  [56] = 48,
  [57] = 49,
  [58] = 49,
  [59] = 50,
  [60] = 51,
  [61] = 52,
  [62] = 48,
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
  [80] = 69,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 68,
  [89] = 67,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 67,
  [99] = 99,
  [100] = 100,
  [101] = 64,
  [102] = 68,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 65,
  [107] = 107,
  [108] = 108,
  [109] = 69,
  [110] = 110,
  [111] = 111,
  [112] = 65,
  [113] = 113,
  [114] = 81,
  [115] = 115,
  [116] = 116,
  [117] = 64,
  [118] = 70,
  [119] = 70,
  [120] = 75,
  [121] = 71,
  [122] = 74,
  [123] = 73,
  [124] = 72,
  [125] = 76,
  [126] = 77,
  [127] = 111,
  [128] = 85,
  [129] = 86,
  [130] = 99,
  [131] = 100,
  [132] = 97,
  [133] = 96,
  [134] = 78,
  [135] = 93,
  [136] = 107,
  [137] = 103,
  [138] = 92,
  [139] = 108,
  [140] = 94,
  [141] = 84,
  [142] = 91,
  [143] = 115,
  [144] = 113,
  [145] = 87,
  [146] = 90,
  [147] = 79,
  [148] = 83,
  [149] = 82,
  [150] = 95,
  [151] = 110,
  [152] = 105,
  [153] = 104,
  [154] = 116,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 161,
  [165] = 158,
  [166] = 163,
  [167] = 167,
  [168] = 168,
  [169] = 162,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
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
  [194] = 72,
  [195] = 192,
  [196] = 196,
  [197] = 197,
  [198] = 73,
  [199] = 71,
  [200] = 200,
  [201] = 196,
  [202] = 75,
  [203] = 190,
  [204] = 193,
  [205] = 205,
  [206] = 177,
  [207] = 191,
  [208] = 208,
  [209] = 208,
  [210] = 210,
  [211] = 211,
  [212] = 74,
  [213] = 213,
  [214] = 214,
  [215] = 76,
  [216] = 216,
  [217] = 217,
  [218] = 216,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 223,
  [224] = 223,
  [225] = 217,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 228,
  [231] = 231,
  [232] = 232,
  [233] = 229,
  [234] = 232,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 239,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 244,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 242,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 243,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 261,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 270,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
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
  [297] = 297,
  [298] = 278,
  [299] = 280,
  [300] = 285,
  [301] = 295,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 279,
  [307] = 307,
  [308] = 308,
  [309] = 278,
  [310] = 293,
  [311] = 292,
  [312] = 312,
  [313] = 303,
  [314] = 296,
  [315] = 276,
  [316] = 291,
  [317] = 317,
  [318] = 302,
  [319] = 280,
  [320] = 282,
  [321] = 289,
  [322] = 290,
  [323] = 323,
  [324] = 288,
  [325] = 284,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(294);
      if (lookahead == '!') ADVANCE(416);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(337);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(308);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '}') ADVANCE(329);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(416);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(337);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(353);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(308);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(573);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == 'p') ADVANCE(466);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == 'x') ADVANCE(592);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead == 'x') ADVANCE(592);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(592);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == ';') ADVANCE(295);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(592);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(344);
      if (lookahead == '&') ADVANCE(347);
      if (lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == '*') ADVANCE(342);
      if (lookahead == '+') ADVANCE(336);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '<') ADVANCE(352);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(355);
      if (lookahead == '@') ADVANCE(359);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(345);
      if (lookahead == 'x') ADVANCE(199);
      if (lookahead == '|') ADVANCE(346);
      if (lookahead == '~') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '(') ADVANCE(297);
      if (lookahead == ')') ADVANCE(298);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(657);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(364);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(423);
      if (lookahead == '3') ADVANCE(425);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(459);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'q') ADVANCE(647);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead == '}') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(585);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'q') ADVANCE(647);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 24:
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(357);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(310);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(437);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(438);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(445);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(441);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(446);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(443);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(447);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(442);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(444);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(448);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'q') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'q') ADVANCE(320);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(360);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 223:
      if (lookahead == 'q') ADVANCE(281);
      END_STATE();
    case 224:
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(394);
      END_STATE();
    case 285:
      if (lookahead == 'x') ADVANCE(398);
      END_STATE();
    case 286:
      if (lookahead == 'x') ADVANCE(406);
      END_STATE();
    case 287:
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 288:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 291:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 292:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(658);
      END_STATE();
    case 293:
      if (eof) ADVANCE(294);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(496);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 'q') ADVANCE(647);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(293)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(459);
      if (lookahead == '>') ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '>') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(310);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == '<') ADVANCE(350);
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(350);
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '>') ADVANCE(351);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(18);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(404);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(365);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(424);
      if (lookahead == '3') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'o') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'v') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(621);
      if (lookahead == 'c') ADVANCE(589);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(649);
      if (lookahead == 'w') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(568);
      if (lookahead == 'q') ADVANCE(613);
      if (lookahead == 'u') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(363);
      if (lookahead == 'w') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead == 's') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'q') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(584);
      if (lookahead == 'm') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead == 's') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(471);
      if (lookahead == 'x') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(657);
      if (lookahead == '\\') ADVANCE(292);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 293},
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
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 6},
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
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
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
  [155] = {.lex_state = 293},
  [156] = {.lex_state = 293},
  [157] = {.lex_state = 21},
  [158] = {.lex_state = 21},
  [159] = {.lex_state = 21},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 21},
  [162] = {.lex_state = 21},
  [163] = {.lex_state = 21},
  [164] = {.lex_state = 21},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 21},
  [169] = {.lex_state = 21},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 24},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 293},
  [174] = {.lex_state = 293},
  [175] = {.lex_state = 293},
  [176] = {.lex_state = 293},
  [177] = {.lex_state = 293},
  [178] = {.lex_state = 293},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 22},
  [191] = {.lex_state = 22},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 21},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 21},
  [207] = {.lex_state = 21},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 23},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 15},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 293},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 293},
  [319] = {.lex_state = 10},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
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
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_program] = STATE(307),
    [sym__statement] = STATE(156),
    [sym__definition] = STATE(156),
    [sym_definition] = STATE(306),
    [sym_function_definition] = STATE(306),
    [sym__metadata_definition] = STATE(156),
    [sym_global_metadata] = STATE(305),
    [sym_function_metadata] = STATE(305),
    [sym_file_import] = STATE(156),
    [sym_documentation] = STATE(156),
    [sym_variants] = STATE(237),
    [sym__variant] = STATE(190),
    [sym_id] = STATE(268),
    [aux_sym_program_repeat1] = STATE(156),
    [aux_sym_variants_repeat1] = STATE(190),
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
    [sym__expression] = STATE(200),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(200),
    [sym_letrec_environment] = STATE(200),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(200),
    [sym_recursive] = STATE(200),
    [sym_sequential] = STATE(200),
    [sym_split] = STATE(200),
    [sym_merge] = STATE(200),
    [sym_parallel] = STATE(200),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [3] = {
    [sym__expression] = STATE(201),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(201),
    [sym_letrec_environment] = STATE(201),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(201),
    [sym_recursive] = STATE(201),
    [sym_sequential] = STATE(201),
    [sym_split] = STATE(201),
    [sym_merge] = STATE(201),
    [sym_parallel] = STATE(201),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [4] = {
    [sym__expression] = STATE(192),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(192),
    [sym_letrec_environment] = STATE(192),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(192),
    [sym_recursive] = STATE(192),
    [sym_sequential] = STATE(192),
    [sym_split] = STATE(192),
    [sym_merge] = STATE(192),
    [sym_parallel] = STATE(192),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [5] = {
    [sym__expression] = STATE(204),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(204),
    [sym_letrec_environment] = STATE(204),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(204),
    [sym_recursive] = STATE(204),
    [sym_sequential] = STATE(204),
    [sym_split] = STATE(204),
    [sym_merge] = STATE(204),
    [sym_parallel] = STATE(204),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [6] = {
    [sym__expression] = STATE(184),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(184),
    [sym_letrec_environment] = STATE(184),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(184),
    [sym_recursive] = STATE(184),
    [sym_sequential] = STATE(184),
    [sym_split] = STATE(184),
    [sym_merge] = STATE(184),
    [sym_parallel] = STATE(184),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [7] = {
    [sym__expression] = STATE(185),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(185),
    [sym_letrec_environment] = STATE(185),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(185),
    [sym_recursive] = STATE(185),
    [sym_sequential] = STATE(185),
    [sym_split] = STATE(185),
    [sym_merge] = STATE(185),
    [sym_parallel] = STATE(185),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [8] = {
    [sym__expression] = STATE(183),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(183),
    [sym_letrec_environment] = STATE(183),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(183),
    [sym_recursive] = STATE(183),
    [sym_sequential] = STATE(183),
    [sym_split] = STATE(183),
    [sym_merge] = STATE(183),
    [sym_parallel] = STATE(183),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [9] = {
    [sym__expression] = STATE(208),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(208),
    [sym_letrec_environment] = STATE(208),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(208),
    [sym_recursive] = STATE(208),
    [sym_sequential] = STATE(208),
    [sym_split] = STATE(208),
    [sym_merge] = STATE(208),
    [sym_parallel] = STATE(208),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [10] = {
    [sym__expression] = STATE(186),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(186),
    [sym_letrec_environment] = STATE(186),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(186),
    [sym_recursive] = STATE(186),
    [sym_sequential] = STATE(186),
    [sym_split] = STATE(186),
    [sym_merge] = STATE(186),
    [sym_parallel] = STATE(186),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [11] = {
    [sym__expression] = STATE(209),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(209),
    [sym_letrec_environment] = STATE(209),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(209),
    [sym_recursive] = STATE(209),
    [sym_sequential] = STATE(209),
    [sym_split] = STATE(209),
    [sym_merge] = STATE(209),
    [sym_parallel] = STATE(209),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [12] = {
    [sym__expression] = STATE(197),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(197),
    [sym_letrec_environment] = STATE(197),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(197),
    [sym_recursive] = STATE(197),
    [sym_sequential] = STATE(197),
    [sym_split] = STATE(197),
    [sym_merge] = STATE(197),
    [sym_parallel] = STATE(197),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [13] = {
    [sym__expression] = STATE(196),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(196),
    [sym_letrec_environment] = STATE(196),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(196),
    [sym_recursive] = STATE(196),
    [sym_sequential] = STATE(196),
    [sym_split] = STATE(196),
    [sym_merge] = STATE(196),
    [sym_parallel] = STATE(196),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [14] = {
    [sym__expression] = STATE(195),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(195),
    [sym_letrec_environment] = STATE(195),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(195),
    [sym_recursive] = STATE(195),
    [sym_sequential] = STATE(195),
    [sym_split] = STATE(195),
    [sym_merge] = STATE(195),
    [sym_parallel] = STATE(195),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [15] = {
    [sym__expression] = STATE(210),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(210),
    [sym_letrec_environment] = STATE(210),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(210),
    [sym_recursive] = STATE(210),
    [sym_sequential] = STATE(210),
    [sym_split] = STATE(210),
    [sym_merge] = STATE(210),
    [sym_parallel] = STATE(210),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [16] = {
    [sym__expression] = STATE(211),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(211),
    [sym_letrec_environment] = STATE(211),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(211),
    [sym_recursive] = STATE(211),
    [sym_sequential] = STATE(211),
    [sym_split] = STATE(211),
    [sym_merge] = STATE(211),
    [sym_parallel] = STATE(211),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [17] = {
    [sym__expression] = STATE(193),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(193),
    [sym_letrec_environment] = STATE(193),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(193),
    [sym_recursive] = STATE(193),
    [sym_sequential] = STATE(193),
    [sym_split] = STATE(193),
    [sym_merge] = STATE(193),
    [sym_parallel] = STATE(193),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [18] = {
    [sym__expression] = STATE(180),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(180),
    [sym_letrec_environment] = STATE(180),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(180),
    [sym_recursive] = STATE(180),
    [sym_sequential] = STATE(180),
    [sym_split] = STATE(180),
    [sym_merge] = STATE(180),
    [sym_parallel] = STATE(180),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [19] = {
    [sym__expression] = STATE(205),
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
    [sym_iteration] = STATE(66),
    [sym_with_environment] = STATE(205),
    [sym_letrec_environment] = STATE(205),
    [sym_substitution] = STATE(66),
    [sym_component] = STATE(66),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(66),
    [sym__binary_composition] = STATE(205),
    [sym_recursive] = STATE(205),
    [sym_sequential] = STATE(205),
    [sym_split] = STATE(205),
    [sym_merge] = STATE(205),
    [sym_parallel] = STATE(205),
    [sym_id] = STATE(66),
    [sym_negate_id] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(41),
    [sym_cut] = ACTIONS(41),
    [sym_mem] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(49),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [20] = {
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
    [sym_arguments] = STATE(291),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [21] = {
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
    [sym_arguments] = STATE(310),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [22] = {
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
    [sym_arguments] = STATE(322),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [23] = {
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
    [sym_arguments] = STATE(316),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [24] = {
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
    [sym_arguments] = STATE(300),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [25] = {
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
    [sym_arguments] = STATE(311),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [26] = {
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
    [sym_arguments] = STATE(293),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [27] = {
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
    [sym_arguments] = STATE(285),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [28] = {
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
    [sym_arguments] = STATE(290),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [29] = {
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
    [sym_arguments] = STATE(292),
    [sym__argument] = STATE(214),
    [sym_recursive_arg] = STATE(214),
    [sym_sequential_arg] = STATE(214),
    [sym_split_arg] = STATE(214),
    [sym_merge_arg] = STATE(214),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [30] = {
    [sym__infix_expression] = STATE(81),
    [sym_infix] = STATE(81),
    [sym_partial] = STATE(81),
    [sym_prefix] = STATE(81),
    [sym_prim1] = STATE(81),
    [sym_prim2] = STATE(81),
    [sym_prim3] = STATE(81),
    [sym_prim4] = STATE(81),
    [sym_prim5] = STATE(81),
    [sym_function_call] = STATE(81),
    [sym_modifier] = STATE(81),
    [sym_access] = STATE(81),
    [sym__primitive] = STATE(81),
    [sym_lambda] = STATE(81),
    [sym_modulation] = STATE(81),
    [sym__argument] = STATE(223),
    [sym_recursive_arg] = STATE(223),
    [sym_sequential_arg] = STATE(223),
    [sym_split_arg] = STATE(223),
    [sym_merge_arg] = STATE(223),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_component] = STATE(81),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(83),
    [sym_cut] = ACTIONS(83),
    [sym_mem] = ACTIONS(83),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [31] = {
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
    [sym__argument] = STATE(213),
    [sym_recursive_arg] = STATE(213),
    [sym_sequential_arg] = STATE(213),
    [sym_split_arg] = STATE(213),
    [sym_merge_arg] = STATE(213),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [32] = {
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
    [sym__argument] = STATE(232),
    [sym_recursive_arg] = STATE(232),
    [sym_sequential_arg] = STATE(232),
    [sym_split_arg] = STATE(232),
    [sym_merge_arg] = STATE(232),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [33] = {
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
    [sym__argument] = STATE(228),
    [sym_recursive_arg] = STATE(228),
    [sym_sequential_arg] = STATE(228),
    [sym_split_arg] = STATE(228),
    [sym_merge_arg] = STATE(228),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [34] = {
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
    [sym__argument] = STATE(229),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [35] = {
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
    [sym__argument] = STATE(222),
    [sym_recursive_arg] = STATE(222),
    [sym_sequential_arg] = STATE(222),
    [sym_split_arg] = STATE(222),
    [sym_merge_arg] = STATE(222),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [36] = {
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
    [sym__argument] = STATE(218),
    [sym_recursive_arg] = STATE(218),
    [sym_sequential_arg] = STATE(218),
    [sym_split_arg] = STATE(218),
    [sym_merge_arg] = STATE(218),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [37] = {
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
    [sym__argument] = STATE(234),
    [sym_recursive_arg] = STATE(234),
    [sym_sequential_arg] = STATE(234),
    [sym_split_arg] = STATE(234),
    [sym_merge_arg] = STATE(234),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [38] = {
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
    [sym__argument] = STATE(220),
    [sym_recursive_arg] = STATE(220),
    [sym_sequential_arg] = STATE(220),
    [sym_split_arg] = STATE(220),
    [sym_merge_arg] = STATE(220),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [39] = {
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
    [sym__argument] = STATE(219),
    [sym_recursive_arg] = STATE(219),
    [sym_sequential_arg] = STATE(219),
    [sym_split_arg] = STATE(219),
    [sym_merge_arg] = STATE(219),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [40] = {
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
    [sym__argument] = STATE(233),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [41] = {
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
    [sym__argument] = STATE(230),
    [sym_recursive_arg] = STATE(230),
    [sym_sequential_arg] = STATE(230),
    [sym_split_arg] = STATE(230),
    [sym_merge_arg] = STATE(230),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [42] = {
    [sym__infix_expression] = STATE(81),
    [sym_infix] = STATE(81),
    [sym_partial] = STATE(81),
    [sym_prefix] = STATE(81),
    [sym_prim1] = STATE(81),
    [sym_prim2] = STATE(81),
    [sym_prim3] = STATE(81),
    [sym_prim4] = STATE(81),
    [sym_prim5] = STATE(81),
    [sym_function_call] = STATE(81),
    [sym_modifier] = STATE(81),
    [sym_access] = STATE(81),
    [sym__primitive] = STATE(81),
    [sym_lambda] = STATE(81),
    [sym_modulation] = STATE(81),
    [sym__argument] = STATE(216),
    [sym_recursive_arg] = STATE(216),
    [sym_sequential_arg] = STATE(216),
    [sym_split_arg] = STATE(216),
    [sym_merge_arg] = STATE(216),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_component] = STATE(81),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(83),
    [sym_cut] = ACTIONS(83),
    [sym_mem] = ACTIONS(83),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [43] = {
    [sym__infix_expression] = STATE(81),
    [sym_infix] = STATE(81),
    [sym_partial] = STATE(81),
    [sym_prefix] = STATE(81),
    [sym_prim1] = STATE(81),
    [sym_prim2] = STATE(81),
    [sym_prim3] = STATE(81),
    [sym_prim4] = STATE(81),
    [sym_prim5] = STATE(81),
    [sym_function_call] = STATE(81),
    [sym_modifier] = STATE(81),
    [sym_access] = STATE(81),
    [sym__primitive] = STATE(81),
    [sym_lambda] = STATE(81),
    [sym_modulation] = STATE(81),
    [sym__argument] = STATE(213),
    [sym_recursive_arg] = STATE(213),
    [sym_sequential_arg] = STATE(213),
    [sym_split_arg] = STATE(213),
    [sym_merge_arg] = STATE(213),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_component] = STATE(81),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(83),
    [sym_cut] = ACTIONS(83),
    [sym_mem] = ACTIONS(83),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [44] = {
    [sym__infix_expression] = STATE(81),
    [sym_infix] = STATE(81),
    [sym_partial] = STATE(81),
    [sym_prefix] = STATE(81),
    [sym_prim1] = STATE(81),
    [sym_prim2] = STATE(81),
    [sym_prim3] = STATE(81),
    [sym_prim4] = STATE(81),
    [sym_prim5] = STATE(81),
    [sym_function_call] = STATE(81),
    [sym_modifier] = STATE(81),
    [sym_access] = STATE(81),
    [sym__primitive] = STATE(81),
    [sym_lambda] = STATE(81),
    [sym_modulation] = STATE(81),
    [sym__argument] = STATE(225),
    [sym_recursive_arg] = STATE(225),
    [sym_sequential_arg] = STATE(225),
    [sym_split_arg] = STATE(225),
    [sym_merge_arg] = STATE(225),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_component] = STATE(81),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(83),
    [sym_cut] = ACTIONS(83),
    [sym_mem] = ACTIONS(83),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [45] = {
    [sym__infix_expression] = STATE(81),
    [sym_infix] = STATE(81),
    [sym_partial] = STATE(81),
    [sym_prefix] = STATE(81),
    [sym_prim1] = STATE(81),
    [sym_prim2] = STATE(81),
    [sym_prim3] = STATE(81),
    [sym_prim4] = STATE(81),
    [sym_prim5] = STATE(81),
    [sym_function_call] = STATE(81),
    [sym_modifier] = STATE(81),
    [sym_access] = STATE(81),
    [sym__primitive] = STATE(81),
    [sym_lambda] = STATE(81),
    [sym_modulation] = STATE(81),
    [sym__argument] = STATE(221),
    [sym_recursive_arg] = STATE(221),
    [sym_sequential_arg] = STATE(221),
    [sym_split_arg] = STATE(221),
    [sym_merge_arg] = STATE(221),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_component] = STATE(81),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(83),
    [sym_cut] = ACTIONS(83),
    [sym_mem] = ACTIONS(83),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [46] = {
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
    [sym__argument] = STATE(217),
    [sym_recursive_arg] = STATE(217),
    [sym_sequential_arg] = STATE(217),
    [sym_split_arg] = STATE(217),
    [sym_merge_arg] = STATE(217),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [47] = {
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
    [sym__argument] = STATE(224),
    [sym_recursive_arg] = STATE(224),
    [sym_sequential_arg] = STATE(224),
    [sym_split_arg] = STATE(224),
    [sym_merge_arg] = STATE(224),
    [sym_iteration] = STATE(114),
    [sym_substitution] = STATE(114),
    [sym_component] = STATE(114),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(114),
    [sym_id] = STATE(114),
    [sym_negate_id] = STATE(114),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [48] = {
    [sym__infix_expression] = STATE(112),
    [sym_infix] = STATE(112),
    [sym_partial] = STATE(112),
    [sym_prefix] = STATE(112),
    [sym_prim1] = STATE(112),
    [sym_prim2] = STATE(112),
    [sym_prim3] = STATE(112),
    [sym_prim4] = STATE(112),
    [sym_prim5] = STATE(112),
    [sym_function_call] = STATE(112),
    [sym_modifier] = STATE(112),
    [sym_access] = STATE(112),
    [sym__primitive] = STATE(112),
    [sym_lambda] = STATE(112),
    [sym_modulation] = STATE(112),
    [sym_iteration] = STATE(112),
    [sym_substitution] = STATE(112),
    [sym_component] = STATE(112),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(112),
    [sym_id] = STATE(112),
    [sym_negate_id] = STATE(112),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(97),
    [sym_cut] = ACTIONS(97),
    [sym_mem] = ACTIONS(97),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(97),
    [sym_real] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [49] = {
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
    [sym_iteration] = STATE(69),
    [sym_substitution] = STATE(69),
    [sym_component] = STATE(69),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(69),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [50] = {
    [sym__infix_expression] = STATE(101),
    [sym_infix] = STATE(101),
    [sym_partial] = STATE(101),
    [sym_prefix] = STATE(101),
    [sym_prim1] = STATE(101),
    [sym_prim2] = STATE(101),
    [sym_prim3] = STATE(101),
    [sym_prim4] = STATE(101),
    [sym_prim5] = STATE(101),
    [sym_function_call] = STATE(101),
    [sym_modifier] = STATE(101),
    [sym_access] = STATE(101),
    [sym__primitive] = STATE(101),
    [sym_lambda] = STATE(101),
    [sym_modulation] = STATE(101),
    [sym_iteration] = STATE(101),
    [sym_substitution] = STATE(101),
    [sym_component] = STATE(101),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(101),
    [sym_id] = STATE(101),
    [sym_negate_id] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(105),
    [sym_cut] = ACTIONS(105),
    [sym_mem] = ACTIONS(105),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(105),
    [sym_real] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [51] = {
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
    [sym_iteration] = STATE(88),
    [sym_substitution] = STATE(88),
    [sym_component] = STATE(88),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(88),
    [sym_id] = STATE(88),
    [sym_negate_id] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(109),
    [sym_cut] = ACTIONS(109),
    [sym_mem] = ACTIONS(109),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(109),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [52] = {
    [sym__infix_expression] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_prim1] = STATE(89),
    [sym_prim2] = STATE(89),
    [sym_prim3] = STATE(89),
    [sym_prim4] = STATE(89),
    [sym_prim5] = STATE(89),
    [sym_function_call] = STATE(89),
    [sym_modifier] = STATE(89),
    [sym_access] = STATE(89),
    [sym__primitive] = STATE(89),
    [sym_lambda] = STATE(89),
    [sym_modulation] = STATE(89),
    [sym_iteration] = STATE(89),
    [sym_substitution] = STATE(89),
    [sym_component] = STATE(89),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(89),
    [sym_id] = STATE(89),
    [sym_negate_id] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(113),
    [sym_cut] = ACTIONS(113),
    [sym_mem] = ACTIONS(113),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(113),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [53] = {
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
    [sym_iteration] = STATE(117),
    [sym_substitution] = STATE(117),
    [sym_component] = STATE(117),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(117),
    [sym_id] = STATE(117),
    [sym_negate_id] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(117),
    [sym_cut] = ACTIONS(117),
    [sym_mem] = ACTIONS(117),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(117),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [54] = {
    [sym__infix_expression] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_prim1] = STATE(102),
    [sym_prim2] = STATE(102),
    [sym_prim3] = STATE(102),
    [sym_prim4] = STATE(102),
    [sym_prim5] = STATE(102),
    [sym_function_call] = STATE(102),
    [sym_modifier] = STATE(102),
    [sym_access] = STATE(102),
    [sym__primitive] = STATE(102),
    [sym_lambda] = STATE(102),
    [sym_modulation] = STATE(102),
    [sym_iteration] = STATE(102),
    [sym_substitution] = STATE(102),
    [sym_component] = STATE(102),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(102),
    [sym_id] = STATE(102),
    [sym_negate_id] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(121),
    [sym_cut] = ACTIONS(121),
    [sym_mem] = ACTIONS(121),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(121),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [55] = {
    [sym__infix_expression] = STATE(98),
    [sym_infix] = STATE(98),
    [sym_partial] = STATE(98),
    [sym_prefix] = STATE(98),
    [sym_prim1] = STATE(98),
    [sym_prim2] = STATE(98),
    [sym_prim3] = STATE(98),
    [sym_prim4] = STATE(98),
    [sym_prim5] = STATE(98),
    [sym_function_call] = STATE(98),
    [sym_modifier] = STATE(98),
    [sym_access] = STATE(98),
    [sym__primitive] = STATE(98),
    [sym_lambda] = STATE(98),
    [sym_modulation] = STATE(98),
    [sym_iteration] = STATE(98),
    [sym_substitution] = STATE(98),
    [sym_component] = STATE(98),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(98),
    [sym_id] = STATE(98),
    [sym_negate_id] = STATE(98),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(125),
    [sym_cut] = ACTIONS(125),
    [sym_mem] = ACTIONS(125),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(125),
    [sym_real] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [56] = {
    [sym__infix_expression] = STATE(106),
    [sym_infix] = STATE(106),
    [sym_partial] = STATE(106),
    [sym_prefix] = STATE(106),
    [sym_prim1] = STATE(106),
    [sym_prim2] = STATE(106),
    [sym_prim3] = STATE(106),
    [sym_prim4] = STATE(106),
    [sym_prim5] = STATE(106),
    [sym_function_call] = STATE(106),
    [sym_modifier] = STATE(106),
    [sym_access] = STATE(106),
    [sym__primitive] = STATE(106),
    [sym_lambda] = STATE(106),
    [sym_modulation] = STATE(106),
    [sym_iteration] = STATE(106),
    [sym_substitution] = STATE(106),
    [sym_component] = STATE(106),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(106),
    [sym_id] = STATE(106),
    [sym_negate_id] = STATE(106),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(129),
    [sym_cut] = ACTIONS(129),
    [sym_mem] = ACTIONS(129),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(129),
    [sym_real] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [57] = {
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
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_component] = STATE(80),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(55),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(133),
    [sym_cut] = ACTIONS(133),
    [sym_mem] = ACTIONS(133),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [58] = {
    [sym__infix_expression] = STATE(109),
    [sym_infix] = STATE(109),
    [sym_partial] = STATE(109),
    [sym_prefix] = STATE(109),
    [sym_prim1] = STATE(109),
    [sym_prim2] = STATE(109),
    [sym_prim3] = STATE(109),
    [sym_prim4] = STATE(109),
    [sym_prim5] = STATE(109),
    [sym_function_call] = STATE(109),
    [sym_modifier] = STATE(109),
    [sym_access] = STATE(109),
    [sym__primitive] = STATE(109),
    [sym_lambda] = STATE(109),
    [sym_modulation] = STATE(109),
    [sym_iteration] = STATE(109),
    [sym_substitution] = STATE(109),
    [sym_component] = STATE(109),
    [sym__infix] = STATE(132),
    [sym__prim1] = STATE(133),
    [sym__prim2] = STATE(135),
    [sym__prim3] = STATE(138),
    [sym__prim4] = STATE(142),
    [sym__prim5] = STATE(146),
    [sym_sub] = STATE(132),
    [sym__number] = STATE(109),
    [sym_id] = STATE(109),
    [sym_negate_id] = STATE(109),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_environment] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_par] = ACTIONS(69),
    [sym_seq] = ACTIONS(69),
    [sym_sum] = ACTIONS(69),
    [sym_prod] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(71),
    [sym_add] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_mult] = ACTIONS(77),
    [sym_div] = ACTIONS(77),
    [sym_mod] = ACTIONS(77),
    [sym_pow] = ACTIONS(77),
    [sym_or] = ACTIONS(77),
    [sym_and] = ACTIONS(77),
    [sym_xor] = ACTIONS(73),
    [sym_lshift] = ACTIONS(77),
    [sym_rshift] = ACTIONS(77),
    [sym_lt] = ACTIONS(73),
    [sym_le] = ACTIONS(77),
    [sym_gt] = ACTIONS(73),
    [sym_ge] = ACTIONS(77),
    [sym_eq] = ACTIONS(77),
    [sym_neq] = ACTIONS(77),
    [sym_delay] = ACTIONS(77),
    [sym_exp] = ACTIONS(79),
    [sym_log] = ACTIONS(79),
    [sym_log10] = ACTIONS(79),
    [sym_sqrt] = ACTIONS(79),
    [sym_abs] = ACTIONS(79),
    [sym_floor] = ACTIONS(79),
    [sym_ceil] = ACTIONS(79),
    [sym_rint] = ACTIONS(79),
    [sym_round] = ACTIONS(79),
    [sym_acos] = ACTIONS(79),
    [sym_asin] = ACTIONS(79),
    [sym_atan] = ACTIONS(79),
    [sym_cos] = ACTIONS(79),
    [sym_sin] = ACTIONS(79),
    [sym_tan] = ACTIONS(79),
    [sym_int_cast] = ACTIONS(79),
    [sym_float_cast] = ACTIONS(79),
    [sym_pow_fun] = ACTIONS(81),
    [sym_min] = ACTIONS(81),
    [sym_max] = ACTIONS(81),
    [sym_fmod] = ACTIONS(81),
    [sym_remainder] = ACTIONS(81),
    [sym_atan2] = ACTIONS(81),
    [sym_prefix_prim] = ACTIONS(81),
    [sym_attach] = ACTIONS(81),
    [sym_enable] = ACTIONS(81),
    [sym_control] = ACTIONS(81),
    [sym_wire] = ACTIONS(137),
    [sym_cut] = ACTIONS(137),
    [sym_mem] = ACTIONS(137),
    [sym_rdtable] = ACTIONS(85),
    [sym_rwtable] = ACTIONS(87),
    [sym_select2] = ACTIONS(85),
    [sym_select3] = ACTIONS(89),
    [sym_lowest] = ACTIONS(79),
    [sym_highest] = ACTIONS(79),
    [sym_assertbounds] = ACTIONS(85),
    [sym_int] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym__id] = ACTIONS(95),
  },
  [59] = {
    [sym__infix_expression] = STATE(64),
    [sym_infix] = STATE(64),
    [sym_partial] = STATE(64),
    [sym_prefix] = STATE(64),
    [sym_prim1] = STATE(64),
    [sym_prim2] = STATE(64),
    [sym_prim3] = STATE(64),
    [sym_prim4] = STATE(64),
    [sym_prim5] = STATE(64),
    [sym_function_call] = STATE(64),
    [sym_modifier] = STATE(64),
    [sym_access] = STATE(64),
    [sym__primitive] = STATE(64),
    [sym_lambda] = STATE(64),
    [sym_modulation] = STATE(64),
    [sym_iteration] = STATE(64),
    [sym_substitution] = STATE(64),
    [sym_component] = STATE(64),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(64),
    [sym_id] = STATE(64),
    [sym_negate_id] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(141),
    [sym_cut] = ACTIONS(141),
    [sym_mem] = ACTIONS(141),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [60] = {
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
    [sym_iteration] = STATE(68),
    [sym_substitution] = STATE(68),
    [sym_component] = STATE(68),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(68),
    [sym_id] = STATE(68),
    [sym_negate_id] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(145),
    [sym_cut] = ACTIONS(145),
    [sym_mem] = ACTIONS(145),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [61] = {
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
    [sym_iteration] = STATE(67),
    [sym_substitution] = STATE(67),
    [sym_component] = STATE(67),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(67),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(149),
    [sym_cut] = ACTIONS(149),
    [sym_mem] = ACTIONS(149),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [62] = {
    [sym__infix_expression] = STATE(65),
    [sym_infix] = STATE(65),
    [sym_partial] = STATE(65),
    [sym_prefix] = STATE(65),
    [sym_prim1] = STATE(65),
    [sym_prim2] = STATE(65),
    [sym_prim3] = STATE(65),
    [sym_prim4] = STATE(65),
    [sym_prim5] = STATE(65),
    [sym_function_call] = STATE(65),
    [sym_modifier] = STATE(65),
    [sym_access] = STATE(65),
    [sym__primitive] = STATE(65),
    [sym_lambda] = STATE(65),
    [sym_modulation] = STATE(65),
    [sym_iteration] = STATE(65),
    [sym_substitution] = STATE(65),
    [sym_component] = STATE(65),
    [sym__infix] = STATE(97),
    [sym__prim1] = STATE(96),
    [sym__prim2] = STATE(93),
    [sym__prim3] = STATE(92),
    [sym__prim4] = STATE(91),
    [sym__prim5] = STATE(90),
    [sym_sub] = STATE(97),
    [sym__number] = STATE(65),
    [sym_id] = STATE(65),
    [sym_negate_id] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [sym_mult] = ACTIONS(35),
    [sym_div] = ACTIONS(35),
    [sym_mod] = ACTIONS(35),
    [sym_pow] = ACTIONS(35),
    [sym_or] = ACTIONS(35),
    [sym_and] = ACTIONS(35),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(35),
    [sym_rshift] = ACTIONS(35),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(35),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(35),
    [sym_eq] = ACTIONS(35),
    [sym_neq] = ACTIONS(35),
    [sym_delay] = ACTIONS(35),
    [sym_exp] = ACTIONS(37),
    [sym_log] = ACTIONS(37),
    [sym_log10] = ACTIONS(37),
    [sym_sqrt] = ACTIONS(37),
    [sym_abs] = ACTIONS(37),
    [sym_floor] = ACTIONS(37),
    [sym_ceil] = ACTIONS(37),
    [sym_rint] = ACTIONS(37),
    [sym_round] = ACTIONS(37),
    [sym_acos] = ACTIONS(37),
    [sym_asin] = ACTIONS(37),
    [sym_atan] = ACTIONS(37),
    [sym_cos] = ACTIONS(37),
    [sym_sin] = ACTIONS(37),
    [sym_tan] = ACTIONS(37),
    [sym_int_cast] = ACTIONS(37),
    [sym_float_cast] = ACTIONS(37),
    [sym_pow_fun] = ACTIONS(39),
    [sym_min] = ACTIONS(39),
    [sym_max] = ACTIONS(39),
    [sym_fmod] = ACTIONS(39),
    [sym_remainder] = ACTIONS(39),
    [sym_atan2] = ACTIONS(39),
    [sym_prefix_prim] = ACTIONS(39),
    [sym_attach] = ACTIONS(39),
    [sym_enable] = ACTIONS(39),
    [sym_control] = ACTIONS(39),
    [sym_wire] = ACTIONS(153),
    [sym_cut] = ACTIONS(153),
    [sym_mem] = ACTIONS(153),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [sym_lowest] = ACTIONS(37),
    [sym_highest] = ACTIONS(37),
    [sym_assertbounds] = ACTIONS(43),
    [sym_int] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(51),
    [sym__id] = ACTIONS(53),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_environment] = ACTIONS(159),
    [anon_sym_BSLASH] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_par] = ACTIONS(159),
    [sym_seq] = ACTIONS(159),
    [sym_sum] = ACTIONS(159),
    [sym_prod] = ACTIONS(159),
    [anon_sym_component] = ACTIONS(159),
    [sym_add] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [sym_mult] = ACTIONS(157),
    [sym_div] = ACTIONS(157),
    [sym_mod] = ACTIONS(157),
    [sym_pow] = ACTIONS(157),
    [sym_or] = ACTIONS(157),
    [sym_and] = ACTIONS(157),
    [sym_xor] = ACTIONS(159),
    [sym_lshift] = ACTIONS(157),
    [sym_rshift] = ACTIONS(157),
    [sym_lt] = ACTIONS(159),
    [sym_le] = ACTIONS(157),
    [sym_gt] = ACTIONS(159),
    [sym_ge] = ACTIONS(157),
    [sym_eq] = ACTIONS(157),
    [sym_neq] = ACTIONS(157),
    [sym_delay] = ACTIONS(157),
    [sym_exp] = ACTIONS(159),
    [sym_log] = ACTIONS(159),
    [sym_log10] = ACTIONS(159),
    [sym_sqrt] = ACTIONS(159),
    [sym_abs] = ACTIONS(159),
    [sym_floor] = ACTIONS(159),
    [sym_ceil] = ACTIONS(159),
    [sym_rint] = ACTIONS(159),
    [sym_round] = ACTIONS(159),
    [sym_acos] = ACTIONS(159),
    [sym_asin] = ACTIONS(159),
    [sym_atan] = ACTIONS(159),
    [sym_cos] = ACTIONS(159),
    [sym_sin] = ACTIONS(159),
    [sym_tan] = ACTIONS(159),
    [sym_int_cast] = ACTIONS(159),
    [sym_float_cast] = ACTIONS(159),
    [sym_pow_fun] = ACTIONS(159),
    [sym_min] = ACTIONS(159),
    [sym_max] = ACTIONS(159),
    [sym_fmod] = ACTIONS(159),
    [sym_remainder] = ACTIONS(159),
    [sym_atan2] = ACTIONS(159),
    [sym_prefix_prim] = ACTIONS(159),
    [sym_attach] = ACTIONS(159),
    [sym_enable] = ACTIONS(159),
    [sym_control] = ACTIONS(159),
    [sym_wire] = ACTIONS(159),
    [sym_cut] = ACTIONS(159),
    [sym_mem] = ACTIONS(159),
    [sym_rdtable] = ACTIONS(159),
    [sym_rwtable] = ACTIONS(159),
    [sym_select2] = ACTIONS(159),
    [sym_select3] = ACTIONS(159),
    [sym_lowest] = ACTIONS(159),
    [sym_highest] = ACTIONS(159),
    [sym_assertbounds] = ACTIONS(159),
    [sym_int] = ACTIONS(159),
    [sym_real] = ACTIONS(157),
    [anon_sym_COLON_COLON] = ACTIONS(157),
    [sym__id] = ACTIONS(159),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_pow,
    ACTIONS(175), 1,
      sym_delay,
    STATE(59), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(171), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(161), 17,
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
  [59] = 13,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_pow,
    ACTIONS(175), 1,
      sym_delay,
    ACTIONS(179), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    ACTIONS(177), 2,
      sym_add,
      sym_or,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(171), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(161), 14,
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
  [122] = 16,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_pow,
    ACTIONS(175), 1,
      sym_delay,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    ACTIONS(177), 2,
      sym_add,
      sym_or,
    ACTIONS(187), 2,
      sym_lt,
      sym_gt,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(189), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(171), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(181), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [191] = 9,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      sym_delay,
    STATE(59), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(161), 25,
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
  [246] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_pow,
    ACTIONS(175), 1,
      sym_delay,
    STATE(59), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(161), 24,
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
  [303] = 8,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(161), 26,
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
  [356] = 5,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(82), 1,
      sym_id,
    ACTIONS(159), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(157), 26,
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
    ACTIONS(195), 1,
      anon_sym_COLON_COLON,
    STATE(73), 1,
      aux_sym_id_repeat1,
    ACTIONS(193), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(191), 29,
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
    ACTIONS(195), 1,
      anon_sym_COLON_COLON,
    STATE(74), 1,
      aux_sym_id_repeat1,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 29,
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
    ACTIONS(195), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 29,
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
    ACTIONS(195), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
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
  [574] = 4,
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
  [692] = 2,
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
  [729] = 2,
    ACTIONS(222), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(220), 29,
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
  [766] = 8,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(161), 22,
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
  [815] = 16,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(242), 1,
      sym_pow,
    ACTIONS(248), 1,
      sym_delay,
    STATE(53), 1,
      sym_sub,
    STATE(140), 1,
      sym_substitutions,
    ACTIONS(236), 2,
      sym_add,
      sym_or,
    ACTIONS(244), 2,
      sym_lt,
      sym_gt,
    STATE(150), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(246), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(226), 5,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(240), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [880] = 2,
    ACTIONS(252), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(250), 29,
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
  [917] = 2,
    ACTIONS(256), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(254), 29,
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
  [954] = 2,
    ACTIONS(260), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(258), 29,
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
  [991] = 2,
    ACTIONS(264), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(262), 29,
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
  [1028] = 2,
    ACTIONS(268), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(266), 29,
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
  [1065] = 2,
    ACTIONS(272), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(270), 29,
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
  [1102] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(50), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(161), 20,
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
  [1155] = 9,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      sym_delay,
    STATE(50), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(161), 21,
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
  [1206] = 3,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 28,
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
  [1245] = 3,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 28,
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
  [1284] = 3,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 28,
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
  [1323] = 3,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 28,
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
  [1362] = 2,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(290), 29,
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
  [1399] = 2,
    ACTIONS(296), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(294), 29,
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
  [1436] = 3,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 28,
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
  [1475] = 3,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 28,
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
  [1514] = 9,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_delay,
    STATE(53), 1,
      sym_sub,
    STATE(140), 1,
      sym_substitutions,
    STATE(150), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(161), 20,
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
  [1565] = 2,
    ACTIONS(304), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(302), 29,
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
  [1602] = 2,
    ACTIONS(308), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(306), 29,
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
  [1639] = 11,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(274), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(50), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(310), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(161), 13,
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
  [1694] = 10,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      sym_pow,
    ACTIONS(248), 1,
      sym_delay,
    STATE(53), 1,
      sym_sub,
    STATE(140), 1,
      sym_substitutions,
    STATE(150), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(161), 19,
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
  [1747] = 2,
    ACTIONS(314), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(312), 29,
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
  [1784] = 2,
    ACTIONS(318), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(316), 29,
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
  [1821] = 2,
    ACTIONS(322), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(320), 29,
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
  [1858] = 13,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(50), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    ACTIONS(324), 2,
      sym_add,
      sym_or,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(310), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(161), 10,
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
  [1917] = 2,
    ACTIONS(328), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(326), 29,
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
  [1954] = 2,
    ACTIONS(332), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(330), 29,
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
  [1991] = 8,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym_sub,
    STATE(140), 1,
      sym_substitutions,
    STATE(150), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(161), 21,
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
  [2040] = 2,
    ACTIONS(336), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(334), 29,
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
  [2077] = 2,
    ACTIONS(340), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(338), 29,
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
  [2114] = 13,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(242), 1,
      sym_pow,
    ACTIONS(248), 1,
      sym_delay,
    STATE(53), 1,
      sym_sub,
    STATE(140), 1,
      sym_substitutions,
    ACTIONS(236), 2,
      sym_add,
      sym_or,
    STATE(150), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(240), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(161), 10,
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
  [2173] = 2,
    ACTIONS(344), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(342), 29,
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
  [2210] = 16,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(50), 1,
      sym_sub,
    STATE(94), 1,
      sym_substitutions,
    ACTIONS(324), 2,
      sym_add,
      sym_or,
    ACTIONS(346), 2,
      sym_lt,
      sym_gt,
    STATE(95), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(348), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(226), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(310), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [2275] = 2,
    ACTIONS(352), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(350), 29,
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
  [2312] = 2,
    ACTIONS(356), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(354), 29,
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
  [2349] = 11,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
    ACTIONS(242), 1,
      sym_pow,
    ACTIONS(248), 1,
      sym_delay,
    STATE(53), 1,
      sym_sub,
    STATE(140), 1,
      sym_substitutions,
    STATE(150), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(167), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(240), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(161), 12,
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
  [2404] = 5,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(95), 1,
      sym__id,
    STATE(149), 1,
      sym_id,
    ACTIONS(159), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(157), 23,
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
  [2446] = 5,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(82), 1,
      sym_id,
    ACTIONS(159), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(157), 24,
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
  [2488] = 4,
    ACTIONS(358), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
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
  [2527] = 4,
    ACTIONS(361), 1,
      anon_sym_COLON_COLON,
    STATE(123), 1,
      aux_sym_id_repeat1,
    ACTIONS(193), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(191), 24,
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
  [2566] = 4,
    ACTIONS(361), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
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
  [2605] = 4,
    ACTIONS(361), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
      aux_sym_id_repeat1,
    ACTIONS(199), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(197), 24,
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
  [2644] = 4,
    ACTIONS(361), 1,
      anon_sym_COLON_COLON,
    STATE(122), 1,
      aux_sym_id_repeat1,
    ACTIONS(199), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(197), 24,
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
  [2683] = 2,
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
  [2717] = 2,
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
  [2750] = 2,
    ACTIONS(340), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(338), 24,
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
  [2783] = 2,
    ACTIONS(264), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(262), 24,
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
  [2816] = 2,
    ACTIONS(268), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(266), 24,
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
  [2849] = 2,
    ACTIONS(304), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(302), 24,
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
  [2882] = 2,
    ACTIONS(308), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(306), 24,
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
  [2915] = 3,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(278), 23,
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
  [2950] = 3,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(278), 23,
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
  [3018] = 3,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(278), 23,
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
  [3053] = 2,
    ACTIONS(328), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(326), 24,
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
  [3086] = 2,
    ACTIONS(314), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(312), 24,
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
  [3119] = 3,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(278), 23,
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
  [3154] = 2,
    ACTIONS(332), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(330), 24,
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
  [3187] = 2,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(290), 24,
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
  [3220] = 2,
    ACTIONS(260), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(258), 24,
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
  [3253] = 3,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(278), 23,
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
  [3288] = 2,
    ACTIONS(352), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(350), 24,
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
  [3321] = 2,
    ACTIONS(344), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(342), 24,
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
  [3354] = 2,
    ACTIONS(272), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(270), 24,
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
  [3387] = 3,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(278), 23,
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
  [3422] = 2,
    ACTIONS(222), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(220), 24,
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
  [3455] = 2,
    ACTIONS(256), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(254), 24,
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
  [3488] = 2,
    ACTIONS(252), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(250), 24,
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
  [3521] = 2,
    ACTIONS(296), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(294), 24,
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
  [3554] = 2,
    ACTIONS(336), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(334), 24,
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
  [3587] = 2,
    ACTIONS(322), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(320), 24,
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
  [3620] = 2,
    ACTIONS(318), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(316), 24,
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
  [3653] = 2,
    ACTIONS(356), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(354), 24,
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
  [3686] = 14,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      anon_sym_declare,
    ACTIONS(380), 1,
      anon_sym_import,
    ACTIONS(383), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(389), 1,
      anon_sym_COLON_COLON,
    ACTIONS(392), 1,
      sym__id,
    ACTIONS(395), 1,
      sym_comment,
    STATE(237), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(190), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(305), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(306), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(386), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(155), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [3740] = 14,
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
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      sym_comment,
    STATE(237), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(190), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(305), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(306), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(155), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [3794] = 9,
    ACTIONS(407), 1,
      anon_sym_COLON_COLON,
    ACTIONS(410), 1,
      sym__id,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    ACTIONS(402), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(404), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3829] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(166), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3863] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(168), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3897] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(167), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3931] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(169), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3965] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3999] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4033] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(162), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4067] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(163), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4101] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4135] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4169] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4203] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_variants,
    STATE(268), 1,
      sym_id,
    STATE(157), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(203), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(279), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(415), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4237] = 4,
    ACTIONS(437), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(439), 1,
      sym__doc_char,
    STATE(171), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(441), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4260] = 4,
    ACTIONS(443), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(445), 1,
      sym__doc_char,
    STATE(171), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(448), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4283] = 4,
    ACTIONS(451), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(453), 1,
      sym__doc_char,
    STATE(170), 3,
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
  [4306] = 2,
    ACTIONS(457), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(459), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4322] = 2,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(463), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4338] = 2,
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
  [4354] = 2,
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
  [4370] = 2,
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
  [4386] = 2,
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
  [4402] = 2,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(481), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4417] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(485), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4436] = 2,
    ACTIONS(495), 1,
      anon_sym_COLON,
    ACTIONS(493), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4451] = 2,
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
  [4466] = 6,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(501), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4489] = 6,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(509), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4512] = 2,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(511), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4527] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(515), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4546] = 2,
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
  [4561] = 2,
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
  [4576] = 2,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(525), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4591] = 4,
    ACTIONS(533), 1,
      anon_sym_COLON_COLON,
    ACTIONS(529), 2,
      anon_sym_import,
      sym__id,
    STATE(191), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(531), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4609] = 4,
    ACTIONS(540), 1,
      anon_sym_COLON_COLON,
    ACTIONS(535), 2,
      anon_sym_import,
      sym__id,
    STATE(191), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(537), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4627] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
  [4652] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
  [4677] = 3,
    ACTIONS(550), 1,
      anon_sym_COLON_COLON,
    STATE(212), 1,
      aux_sym_id_repeat1,
    ACTIONS(197), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4692] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [4717] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [4742] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(556), 1,
      anon_sym_SEMI,
  [4767] = 3,
    ACTIONS(550), 1,
      anon_sym_COLON_COLON,
    STATE(202), 1,
      aux_sym_id_repeat1,
    ACTIONS(197), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4782] = 3,
    ACTIONS(550), 1,
      anon_sym_COLON_COLON,
    STATE(198), 1,
      aux_sym_id_repeat1,
    ACTIONS(191), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4797] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(558), 1,
      anon_sym_SEMI,
  [4822] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
  [4847] = 3,
    ACTIONS(562), 1,
      anon_sym_COLON_COLON,
    STATE(202), 1,
      aux_sym_id_repeat1,
    ACTIONS(205), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [4862] = 4,
    ACTIONS(529), 1,
      sym__id,
    ACTIONS(533), 1,
      anon_sym_COLON_COLON,
    STATE(207), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(565), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4879] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
  [4904] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(569), 1,
      anon_sym_SEMI,
  [4929] = 2,
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
  [4942] = 4,
    ACTIONS(535), 1,
      sym__id,
    ACTIONS(540), 1,
      anon_sym_COLON_COLON,
    STATE(207), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(571), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4959] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [4984] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [5009] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(578), 1,
      anon_sym_SEMI,
  [5034] = 8,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_TILDE,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_LT_COLON,
    ACTIONS(507), 1,
      anon_sym_COLON_GT,
    ACTIONS(544), 1,
      anon_sym_with,
    ACTIONS(546), 1,
      anon_sym_letrec,
    ACTIONS(580), 1,
      anon_sym_SEMI,
  [5059] = 3,
    ACTIONS(550), 1,
      anon_sym_COLON_COLON,
    STATE(202), 1,
      aux_sym_id_repeat1,
    ACTIONS(201), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [5074] = 2,
    ACTIONS(584), 1,
      anon_sym_COLON,
    ACTIONS(582), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5086] = 7,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    STATE(259), 1,
      aux_sym_arguments_repeat1,
  [5108] = 1,
    ACTIONS(205), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5118] = 3,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(598), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5131] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5148] = 3,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(598), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5161] = 6,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
  [5180] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(610), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5197] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(614), 1,
      anon_sym_LT_COLON,
    ACTIONS(616), 1,
      anon_sym_COLON_GT,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5214] = 6,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      anon_sym_COMMA,
  [5233] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(614), 1,
      anon_sym_LT_COLON,
    ACTIONS(616), 1,
      anon_sym_COLON_GT,
    ACTIONS(622), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5250] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(622), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5267] = 5,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(602), 1,
      anon_sym_TILDE,
    ACTIONS(614), 1,
      anon_sym_LT_COLON,
    ACTIONS(616), 1,
      anon_sym_COLON_GT,
    ACTIONS(604), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5284] = 4,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      anon_sym_where,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(227), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5298] = 4,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    ACTIONS(630), 1,
      anon_sym_where,
    STATE(231), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5312] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
  [5328] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [5344] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [5360] = 3,
    ACTIONS(640), 1,
      anon_sym_SQUOTE,
    ACTIONS(638), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(231), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5372] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(643), 1,
      anon_sym_COMMA,
  [5388] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
  [5404] = 5,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_TILDE,
    ACTIONS(594), 1,
      anon_sym_LT_COLON,
    ACTIONS(596), 1,
      anon_sym_COLON_GT,
    ACTIONS(647), 1,
      anon_sym_COMMA,
  [5420] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(248), 1,
      sym_id,
    STATE(283), 1,
      sym_parameters,
  [5433] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(248), 1,
      sym_id,
    STATE(271), 1,
      sym_parameters,
  [5446] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(651), 1,
      anon_sym_import,
    STATE(263), 1,
      sym_id,
  [5459] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    ACTIONS(653), 1,
      sym_string,
    STATE(273), 1,
      sym_id,
  [5472] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(248), 1,
      sym_id,
    STATE(282), 1,
      sym_parameters,
  [5485] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(248), 1,
      sym_id,
    STATE(320), 1,
      sym_parameters,
  [5498] = 3,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_parameters_repeat1,
  [5508] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(659), 1,
      sym__id,
    STATE(110), 1,
      sym_id,
  [5518] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(321), 1,
      sym_id,
  [5528] = 3,
    ACTIONS(661), 1,
      sym_string,
    STATE(254), 1,
      sym_modulator,
    STATE(296), 1,
      sym_modulators,
  [5538] = 3,
    ACTIONS(661), 1,
      sym_string,
    STATE(254), 1,
      sym_modulator,
    STATE(314), 1,
      sym_modulators,
  [5548] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(263), 1,
      sym_id,
  [5558] = 3,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_parameters_repeat1,
  [5568] = 3,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      aux_sym_parameters_repeat1,
  [5578] = 3,
    ACTIONS(93), 1,
      anon_sym_COLON_COLON,
    ACTIONS(670), 1,
      sym__id,
    STATE(151), 1,
      sym_id,
  [5588] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(269), 1,
      sym_id,
  [5598] = 3,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_DASH_GT,
    STATE(251), 1,
      aux_sym_modulators_repeat1,
  [5608] = 2,
    ACTIONS(679), 1,
      anon_sym_COLON,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5616] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(297), 1,
      sym_id,
  [5626] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_DASH_GT,
    STATE(256), 1,
      aux_sym_modulators_repeat1,
  [5636] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(289), 1,
      sym_id,
  [5646] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_DASH_GT,
    STATE(251), 1,
      aux_sym_modulators_repeat1,
  [5656] = 3,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_arguments_repeat1,
  [5666] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(649), 1,
      sym__id,
    STATE(238), 1,
      sym_id,
  [5676] = 3,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_arguments_repeat1,
  [5686] = 1,
    ACTIONS(692), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [5692] = 2,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_environment,
  [5699] = 2,
    ACTIONS(661), 1,
      sym_string,
    STATE(267), 1,
      sym_modulator,
  [5706] = 2,
    ACTIONS(696), 1,
      anon_sym_EQ,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
  [5713] = 2,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    STATE(181), 1,
      sym_rec_environment,
  [5720] = 2,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_environment,
  [5727] = 2,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_environment,
  [5734] = 1,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5739] = 2,
    ACTIONS(704), 1,
      anon_sym_EQ,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
  [5746] = 1,
    ACTIONS(708), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5751] = 1,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
  [5755] = 1,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [5759] = 1,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
  [5763] = 1,
    ACTIONS(716), 1,
      sym_string,
  [5767] = 1,
    ACTIONS(718), 1,
      anon_sym_SEMI,
  [5771] = 1,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [5775] = 1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
  [5779] = 1,
    ACTIONS(724), 1,
      anon_sym_SEMI,
  [5783] = 1,
    ACTIONS(726), 1,
      sym__id,
  [5787] = 1,
    ACTIONS(728), 1,
      anon_sym_SEMI,
  [5791] = 1,
    ACTIONS(730), 1,
      sym__id,
  [5795] = 1,
    ACTIONS(732), 1,
      anon_sym_EQ,
  [5799] = 1,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
  [5803] = 1,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
  [5807] = 1,
    ACTIONS(738), 1,
      anon_sym_LPAREN,
  [5811] = 1,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
  [5815] = 1,
    ACTIONS(742), 1,
      sym_string,
  [5819] = 1,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
  [5823] = 1,
    ACTIONS(746), 1,
      anon_sym_LPAREN,
  [5827] = 1,
    ACTIONS(748), 1,
      anon_sym_COMMA,
  [5831] = 1,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [5835] = 1,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [5839] = 1,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
  [5843] = 1,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [5847] = 1,
    ACTIONS(758), 1,
      anon_sym_EQ,
  [5851] = 1,
    ACTIONS(760), 1,
      sym_string,
  [5855] = 1,
    ACTIONS(762), 1,
      anon_sym_DASH_GT,
  [5859] = 1,
    ACTIONS(764), 1,
      anon_sym_EQ,
  [5863] = 1,
    ACTIONS(766), 1,
      sym__id,
  [5867] = 1,
    ACTIONS(768), 1,
      sym__id,
  [5871] = 1,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [5875] = 1,
    ACTIONS(772), 1,
      sym_string,
  [5879] = 1,
    ACTIONS(774), 1,
      anon_sym_DOT,
  [5883] = 1,
    ACTIONS(776), 1,
      anon_sym_LPAREN,
  [5887] = 1,
    ACTIONS(778), 1,
      anon_sym_SEMI,
  [5891] = 1,
    ACTIONS(780), 1,
      anon_sym_SEMI,
  [5895] = 1,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [5899] = 1,
    ACTIONS(784), 1,
      ts_builtin_sym_end,
  [5903] = 1,
    ACTIONS(786), 1,
      sym_string,
  [5907] = 1,
    ACTIONS(788), 1,
      sym__id,
  [5911] = 1,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [5915] = 1,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [5919] = 1,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
  [5923] = 1,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
  [5927] = 1,
    ACTIONS(798), 1,
      anon_sym_DASH_GT,
  [5931] = 1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
  [5935] = 1,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [5939] = 1,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [5943] = 1,
    ACTIONS(806), 1,
      anon_sym_DOT,
  [5947] = 1,
    ACTIONS(808), 1,
      sym__id,
  [5951] = 1,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [5955] = 1,
    ACTIONS(812), 1,
      anon_sym_COMMA,
  [5959] = 1,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [5963] = 1,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [5967] = 1,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
  [5971] = 1,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 59,
  [SMALL_STATE(66)] = 122,
  [SMALL_STATE(67)] = 191,
  [SMALL_STATE(68)] = 246,
  [SMALL_STATE(69)] = 303,
  [SMALL_STATE(70)] = 356,
  [SMALL_STATE(71)] = 402,
  [SMALL_STATE(72)] = 445,
  [SMALL_STATE(73)] = 488,
  [SMALL_STATE(74)] = 531,
  [SMALL_STATE(75)] = 574,
  [SMALL_STATE(76)] = 617,
  [SMALL_STATE(77)] = 655,
  [SMALL_STATE(78)] = 692,
  [SMALL_STATE(79)] = 729,
  [SMALL_STATE(80)] = 766,
  [SMALL_STATE(81)] = 815,
  [SMALL_STATE(82)] = 880,
  [SMALL_STATE(83)] = 917,
  [SMALL_STATE(84)] = 954,
  [SMALL_STATE(85)] = 991,
  [SMALL_STATE(86)] = 1028,
  [SMALL_STATE(87)] = 1065,
  [SMALL_STATE(88)] = 1102,
  [SMALL_STATE(89)] = 1155,
  [SMALL_STATE(90)] = 1206,
  [SMALL_STATE(91)] = 1245,
  [SMALL_STATE(92)] = 1284,
  [SMALL_STATE(93)] = 1323,
  [SMALL_STATE(94)] = 1362,
  [SMALL_STATE(95)] = 1399,
  [SMALL_STATE(96)] = 1436,
  [SMALL_STATE(97)] = 1475,
  [SMALL_STATE(98)] = 1514,
  [SMALL_STATE(99)] = 1565,
  [SMALL_STATE(100)] = 1602,
  [SMALL_STATE(101)] = 1639,
  [SMALL_STATE(102)] = 1694,
  [SMALL_STATE(103)] = 1747,
  [SMALL_STATE(104)] = 1784,
  [SMALL_STATE(105)] = 1821,
  [SMALL_STATE(106)] = 1858,
  [SMALL_STATE(107)] = 1917,
  [SMALL_STATE(108)] = 1954,
  [SMALL_STATE(109)] = 1991,
  [SMALL_STATE(110)] = 2040,
  [SMALL_STATE(111)] = 2077,
  [SMALL_STATE(112)] = 2114,
  [SMALL_STATE(113)] = 2173,
  [SMALL_STATE(114)] = 2210,
  [SMALL_STATE(115)] = 2275,
  [SMALL_STATE(116)] = 2312,
  [SMALL_STATE(117)] = 2349,
  [SMALL_STATE(118)] = 2404,
  [SMALL_STATE(119)] = 2446,
  [SMALL_STATE(120)] = 2488,
  [SMALL_STATE(121)] = 2527,
  [SMALL_STATE(122)] = 2566,
  [SMALL_STATE(123)] = 2605,
  [SMALL_STATE(124)] = 2644,
  [SMALL_STATE(125)] = 2683,
  [SMALL_STATE(126)] = 2717,
  [SMALL_STATE(127)] = 2750,
  [SMALL_STATE(128)] = 2783,
  [SMALL_STATE(129)] = 2816,
  [SMALL_STATE(130)] = 2849,
  [SMALL_STATE(131)] = 2882,
  [SMALL_STATE(132)] = 2915,
  [SMALL_STATE(133)] = 2950,
  [SMALL_STATE(134)] = 2985,
  [SMALL_STATE(135)] = 3018,
  [SMALL_STATE(136)] = 3053,
  [SMALL_STATE(137)] = 3086,
  [SMALL_STATE(138)] = 3119,
  [SMALL_STATE(139)] = 3154,
  [SMALL_STATE(140)] = 3187,
  [SMALL_STATE(141)] = 3220,
  [SMALL_STATE(142)] = 3253,
  [SMALL_STATE(143)] = 3288,
  [SMALL_STATE(144)] = 3321,
  [SMALL_STATE(145)] = 3354,
  [SMALL_STATE(146)] = 3387,
  [SMALL_STATE(147)] = 3422,
  [SMALL_STATE(148)] = 3455,
  [SMALL_STATE(149)] = 3488,
  [SMALL_STATE(150)] = 3521,
  [SMALL_STATE(151)] = 3554,
  [SMALL_STATE(152)] = 3587,
  [SMALL_STATE(153)] = 3620,
  [SMALL_STATE(154)] = 3653,
  [SMALL_STATE(155)] = 3686,
  [SMALL_STATE(156)] = 3740,
  [SMALL_STATE(157)] = 3794,
  [SMALL_STATE(158)] = 3829,
  [SMALL_STATE(159)] = 3863,
  [SMALL_STATE(160)] = 3897,
  [SMALL_STATE(161)] = 3931,
  [SMALL_STATE(162)] = 3965,
  [SMALL_STATE(163)] = 3999,
  [SMALL_STATE(164)] = 4033,
  [SMALL_STATE(165)] = 4067,
  [SMALL_STATE(166)] = 4101,
  [SMALL_STATE(167)] = 4135,
  [SMALL_STATE(168)] = 4169,
  [SMALL_STATE(169)] = 4203,
  [SMALL_STATE(170)] = 4237,
  [SMALL_STATE(171)] = 4260,
  [SMALL_STATE(172)] = 4283,
  [SMALL_STATE(173)] = 4306,
  [SMALL_STATE(174)] = 4322,
  [SMALL_STATE(175)] = 4338,
  [SMALL_STATE(176)] = 4354,
  [SMALL_STATE(177)] = 4370,
  [SMALL_STATE(178)] = 4386,
  [SMALL_STATE(179)] = 4402,
  [SMALL_STATE(180)] = 4417,
  [SMALL_STATE(181)] = 4436,
  [SMALL_STATE(182)] = 4451,
  [SMALL_STATE(183)] = 4466,
  [SMALL_STATE(184)] = 4489,
  [SMALL_STATE(185)] = 4512,
  [SMALL_STATE(186)] = 4527,
  [SMALL_STATE(187)] = 4546,
  [SMALL_STATE(188)] = 4561,
  [SMALL_STATE(189)] = 4576,
  [SMALL_STATE(190)] = 4591,
  [SMALL_STATE(191)] = 4609,
  [SMALL_STATE(192)] = 4627,
  [SMALL_STATE(193)] = 4652,
  [SMALL_STATE(194)] = 4677,
  [SMALL_STATE(195)] = 4692,
  [SMALL_STATE(196)] = 4717,
  [SMALL_STATE(197)] = 4742,
  [SMALL_STATE(198)] = 4767,
  [SMALL_STATE(199)] = 4782,
  [SMALL_STATE(200)] = 4797,
  [SMALL_STATE(201)] = 4822,
  [SMALL_STATE(202)] = 4847,
  [SMALL_STATE(203)] = 4862,
  [SMALL_STATE(204)] = 4879,
  [SMALL_STATE(205)] = 4904,
  [SMALL_STATE(206)] = 4929,
  [SMALL_STATE(207)] = 4942,
  [SMALL_STATE(208)] = 4959,
  [SMALL_STATE(209)] = 4984,
  [SMALL_STATE(210)] = 5009,
  [SMALL_STATE(211)] = 5034,
  [SMALL_STATE(212)] = 5059,
  [SMALL_STATE(213)] = 5074,
  [SMALL_STATE(214)] = 5086,
  [SMALL_STATE(215)] = 5108,
  [SMALL_STATE(216)] = 5118,
  [SMALL_STATE(217)] = 5131,
  [SMALL_STATE(218)] = 5148,
  [SMALL_STATE(219)] = 5161,
  [SMALL_STATE(220)] = 5180,
  [SMALL_STATE(221)] = 5197,
  [SMALL_STATE(222)] = 5214,
  [SMALL_STATE(223)] = 5233,
  [SMALL_STATE(224)] = 5250,
  [SMALL_STATE(225)] = 5267,
  [SMALL_STATE(226)] = 5284,
  [SMALL_STATE(227)] = 5298,
  [SMALL_STATE(228)] = 5312,
  [SMALL_STATE(229)] = 5328,
  [SMALL_STATE(230)] = 5344,
  [SMALL_STATE(231)] = 5360,
  [SMALL_STATE(232)] = 5372,
  [SMALL_STATE(233)] = 5388,
  [SMALL_STATE(234)] = 5404,
  [SMALL_STATE(235)] = 5420,
  [SMALL_STATE(236)] = 5433,
  [SMALL_STATE(237)] = 5446,
  [SMALL_STATE(238)] = 5459,
  [SMALL_STATE(239)] = 5472,
  [SMALL_STATE(240)] = 5485,
  [SMALL_STATE(241)] = 5498,
  [SMALL_STATE(242)] = 5508,
  [SMALL_STATE(243)] = 5518,
  [SMALL_STATE(244)] = 5528,
  [SMALL_STATE(245)] = 5538,
  [SMALL_STATE(246)] = 5548,
  [SMALL_STATE(247)] = 5558,
  [SMALL_STATE(248)] = 5568,
  [SMALL_STATE(249)] = 5578,
  [SMALL_STATE(250)] = 5588,
  [SMALL_STATE(251)] = 5598,
  [SMALL_STATE(252)] = 5608,
  [SMALL_STATE(253)] = 5616,
  [SMALL_STATE(254)] = 5626,
  [SMALL_STATE(255)] = 5636,
  [SMALL_STATE(256)] = 5646,
  [SMALL_STATE(257)] = 5656,
  [SMALL_STATE(258)] = 5666,
  [SMALL_STATE(259)] = 5676,
  [SMALL_STATE(260)] = 5686,
  [SMALL_STATE(261)] = 5692,
  [SMALL_STATE(262)] = 5699,
  [SMALL_STATE(263)] = 5706,
  [SMALL_STATE(264)] = 5713,
  [SMALL_STATE(265)] = 5720,
  [SMALL_STATE(266)] = 5727,
  [SMALL_STATE(267)] = 5734,
  [SMALL_STATE(268)] = 5739,
  [SMALL_STATE(269)] = 5746,
  [SMALL_STATE(270)] = 5751,
  [SMALL_STATE(271)] = 5755,
  [SMALL_STATE(272)] = 5759,
  [SMALL_STATE(273)] = 5763,
  [SMALL_STATE(274)] = 5767,
  [SMALL_STATE(275)] = 5771,
  [SMALL_STATE(276)] = 5775,
  [SMALL_STATE(277)] = 5779,
  [SMALL_STATE(278)] = 5783,
  [SMALL_STATE(279)] = 5787,
  [SMALL_STATE(280)] = 5791,
  [SMALL_STATE(281)] = 5795,
  [SMALL_STATE(282)] = 5799,
  [SMALL_STATE(283)] = 5803,
  [SMALL_STATE(284)] = 5807,
  [SMALL_STATE(285)] = 5811,
  [SMALL_STATE(286)] = 5815,
  [SMALL_STATE(287)] = 5819,
  [SMALL_STATE(288)] = 5823,
  [SMALL_STATE(289)] = 5827,
  [SMALL_STATE(290)] = 5831,
  [SMALL_STATE(291)] = 5835,
  [SMALL_STATE(292)] = 5839,
  [SMALL_STATE(293)] = 5843,
  [SMALL_STATE(294)] = 5847,
  [SMALL_STATE(295)] = 5851,
  [SMALL_STATE(296)] = 5855,
  [SMALL_STATE(297)] = 5859,
  [SMALL_STATE(298)] = 5863,
  [SMALL_STATE(299)] = 5867,
  [SMALL_STATE(300)] = 5871,
  [SMALL_STATE(301)] = 5875,
  [SMALL_STATE(302)] = 5879,
  [SMALL_STATE(303)] = 5883,
  [SMALL_STATE(304)] = 5887,
  [SMALL_STATE(305)] = 5891,
  [SMALL_STATE(306)] = 5895,
  [SMALL_STATE(307)] = 5899,
  [SMALL_STATE(308)] = 5903,
  [SMALL_STATE(309)] = 5907,
  [SMALL_STATE(310)] = 5911,
  [SMALL_STATE(311)] = 5915,
  [SMALL_STATE(312)] = 5919,
  [SMALL_STATE(313)] = 5923,
  [SMALL_STATE(314)] = 5927,
  [SMALL_STATE(315)] = 5931,
  [SMALL_STATE(316)] = 5935,
  [SMALL_STATE(317)] = 5939,
  [SMALL_STATE(318)] = 5943,
  [SMALL_STATE(319)] = 5947,
  [SMALL_STATE(320)] = 5951,
  [SMALL_STATE(321)] = 5955,
  [SMALL_STATE(322)] = 5959,
  [SMALL_STATE(323)] = 5963,
  [SMALL_STATE(324)] = 5967,
  [SMALL_STATE(325)] = 5971,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 13),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(280),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 19),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 19),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 19),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 19),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 25),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 25),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 24),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 24),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 23),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 23),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulation, 5, .production_id = 22),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulation, 5, .production_id = 22),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 19),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 19),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 17),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 17),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 18),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 18),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 12),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 12),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 16),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 19),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 19),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(299),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(258),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(312),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(190),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(309),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(199),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(203),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(309),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(199),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(171),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(171),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 15),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 15),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 10),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 10),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 11),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 11),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 11),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 11),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 10),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 10),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 10),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 10),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(191),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(319),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(207),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 21),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 20),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 10),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 10),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 10),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 3, .production_id = 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 10),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(253),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(250),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2), SHIFT_REPEAT(262),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 1, .production_id = 6),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 2),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(38),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 26),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 14),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [784] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
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
