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
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 34
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_DOT = 6,
  anon_sym_DASH = 7,
  anon_sym_BSLASH = 8,
  anon_sym_environment = 9,
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
  sym_add = 27,
  sym_mult = 28,
  sym_div = 29,
  sym_mod = 30,
  sym_pow = 31,
  sym_or = 32,
  sym_and = 33,
  sym_xor = 34,
  sym_lshift = 35,
  sym_rshift = 36,
  sym_lt = 37,
  sym_le = 38,
  sym_gt = 39,
  sym_ge = 40,
  sym_eq = 41,
  sym_neq = 42,
  sym_delay = 43,
  sym_exp = 44,
  sym_log = 45,
  sym_log10 = 46,
  sym_sqrt = 47,
  sym_abs = 48,
  sym_floor = 49,
  sym_ceil = 50,
  sym_rint = 51,
  sym_round = 52,
  sym_acos = 53,
  sym_asin = 54,
  sym_atan = 55,
  sym_cos = 56,
  sym_sin = 57,
  sym_tan = 58,
  sym_int_cast = 59,
  sym_float_cast = 60,
  sym_pow_fun = 61,
  sym_min = 62,
  sym_max = 63,
  sym_fmod = 64,
  sym_remainder = 65,
  sym_atan2 = 66,
  sym_prefix_prim = 67,
  sym_attach = 68,
  sym_enable = 69,
  sym_control = 70,
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
  sym_prefix = 106,
  sym_partial = 107,
  sym_prim1 = 108,
  sym_prim2 = 109,
  sym_function_call = 110,
  sym_modifier = 111,
  sym_access = 112,
  sym__primitive = 113,
  sym_parameters = 114,
  sym_arguments = 115,
  sym__argument = 116,
  sym_recursive_arg = 117,
  sym_sequential_arg = 118,
  sym_split_arg = 119,
  sym_merge_arg = 120,
  sym_iteration = 121,
  sym_with_environment = 122,
  sym_environment = 123,
  sym_letrec_environment = 124,
  sym_rec_environment = 125,
  sym_recinition = 126,
  sym_substitution = 127,
  sym_substitutions = 128,
  sym_component = 129,
  sym__infix = 130,
  sym__prim1 = 131,
  sym__prim2 = 132,
  sym__modifier = 133,
  sym_sub = 134,
  sym_one_sample_delay = 135,
  sym__number = 136,
  sym_documentation = 137,
  sym__doc_content = 138,
  sym__special_doc_tag = 139,
  sym_file_import = 140,
  sym_global_metadata = 141,
  sym_function_metadata = 142,
  sym__binary_composition = 143,
  sym_recursive = 144,
  sym_sequential = 145,
  sym_split = 146,
  sym_merge = 147,
  sym_parallel = 148,
  sym_variant = 149,
  sym_id = 150,
  aux_sym_program_repeat1 = 151,
  aux_sym__statement_repeat1 = 152,
  aux_sym_parameters_repeat1 = 153,
  aux_sym_arguments_repeat1 = 154,
  aux_sym_environment_repeat1 = 155,
  aux_sym_rec_environment_repeat1 = 156,
  aux_sym_documentation_repeat1 = 157,
  aux_sym_id_repeat1 = 158,
  alias_sym_parameter = 159,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_environment] = "environment",
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
  [sym_add] = "add",
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
  [sym_partial] = "partial",
  [sym_prim1] = "prim1",
  [sym_prim2] = "prim2",
  [sym_function_call] = "function_call",
  [sym_modifier] = "modifier",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
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
  [sym__modifier] = "_modifier",
  [sym_sub] = "sub",
  [sym_one_sample_delay] = "one_sample_delay",
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
  [sym_id] = "id",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_rec_environment_repeat1] = "rec_environment_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_environment] = anon_sym_environment,
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
  [sym_add] = sym_add,
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
  [sym_partial] = sym_partial,
  [sym_prim1] = sym_prim1,
  [sym_prim2] = sym_prim2,
  [sym_function_call] = sym_function_call,
  [sym_modifier] = sym_modifier,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
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
  [sym__modifier] = sym__modifier,
  [sym_sub] = sym_sub,
  [sym_one_sample_delay] = sym_one_sample_delay,
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
  [sym_id] = sym_id,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_rec_environment_repeat1] = aux_sym_rec_environment_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
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
  [anon_sym_COMMA] = {
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
  [sym_add] = {
    .visible = true,
    .named = true,
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
  [sym_partial] = {
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
  [sym__modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_one_sample_delay] = {
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
  [sym_id] = {
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
  field_function_name = 7,
  field_key = 8,
  field_left = 9,
  field_local_environment = 10,
  field_name = 11,
  field_num_iters = 12,
  field_operand = 13,
  field_operator = 14,
  field_primitive = 15,
  field_right = 16,
  field_type = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
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
  [field_primitive] = "primitive",
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
  [15] = {.index = 24, .length = 1},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 4},
  [19] = {.index = 34, .length = 2},
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
    {field_argument, 2},
    {field_primitive, 0},
  [24] =
    {field_primitive, 0},
  [25] =
    {field_name, 0},
    {field_value, 5},
  [27] =
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [30] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [34] =
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
  [29] = 28,
  [30] = 25,
  [31] = 27,
  [32] = 24,
  [33] = 26,
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
  [47] = 38,
  [48] = 48,
  [49] = 49,
  [50] = 40,
  [51] = 35,
  [52] = 36,
  [53] = 37,
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
  [65] = 41,
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
  [109] = 45,
  [110] = 110,
  [111] = 42,
  [112] = 112,
  [113] = 43,
  [114] = 114,
  [115] = 44,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 96,
  [120] = 120,
  [121] = 46,
  [122] = 122,
  [123] = 123,
  [124] = 48,
  [125] = 125,
  [126] = 110,
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
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 182,
  [185] = 174,
  [186] = 186,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(255);
      if (lookahead == '!') ADVANCE(369);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(294);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead == '^') ADVANCE(298);
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
      if (lookahead == '|') ADVANCE(299);
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
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(294);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(306);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead == '^') ADVANCE(298);
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
      if (lookahead == '|') ADVANCE(299);
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
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(293);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(441);
      if (lookahead == 'w') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(514);
      if (lookahead == '|') ADVANCE(299);
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
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(293);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '|') ADVANCE(299);
      if (lookahead == '~') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(293);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(514);
      if (lookahead == '|') ADVANCE(299);
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
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '&') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '+') ADVANCE(293);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == ':') ADVANCE(270);
      if (lookahead == ';') ADVANCE(256);
      if (lookahead == '<') ADVANCE(305);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(312);
      if (lookahead == '[') ADVANCE(289);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(171);
      if (lookahead == '|') ADVANCE(299);
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
      if (lookahead == ',') ADVANCE(260);
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
      if (lookahead == '0') ADVANCE(317);
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
      if (lookahead == '=') ADVANCE(311);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(310);
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
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(329);
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
      if (lookahead == 'g') ADVANCE(315);
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
      if (lookahead == 'l') ADVANCE(325);
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
      if (lookahead == 's') ADVANCE(337);
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
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(335);
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
      if (lookahead == 'p') ADVANCE(313);
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
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(355);
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
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(331);
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
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(266);
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
      if (lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 246:
      if (lookahead == 'x') ADVANCE(351);
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
      if (lookahead == '.') ADVANCE(261);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
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
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(271);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(303);
      if (lookahead == '=') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '>') ADVANCE(304);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(357);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_control);
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
      if (lookahead == '=') ADVANCE(311);
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
      if (lookahead == '0') ADVANCE(318);
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
      if (lookahead == 'd') ADVANCE(354);
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
      if (lookahead == 'd') ADVANCE(330);
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
      if (lookahead == 'g') ADVANCE(316);
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
      if (lookahead == 'l') ADVANCE(326);
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
      if (lookahead == 's') ADVANCE(338);
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
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(336);
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
      if (lookahead == 'p') ADVANCE(314);
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
      if (lookahead == 'r') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(356);
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
      if (lookahead == 's') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(332);
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
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(346);
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
      if (lookahead == 't') ADVANCE(267);
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
      if (lookahead == 'w') ADVANCE(348);
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
      if (lookahead == 'x') ADVANCE(352);
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
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 4},
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
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 254},
  [77] = {.lex_state = 254},
  [78] = {.lex_state = 254},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 254},
  [93] = {.lex_state = 254},
  [94] = {.lex_state = 254},
  [95] = {.lex_state = 254},
  [96] = {.lex_state = 254},
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
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 254},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
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
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 254},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_environment] = ACTIONS(1),
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
    [sym_add] = ACTIONS(1),
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
    [sym_program] = STATE(180),
    [sym__statement] = STATE(76),
    [sym__definition] = STATE(179),
    [sym_definition] = STATE(179),
    [sym_function_definition] = STATE(179),
    [sym_documentation] = STATE(76),
    [sym_file_import] = STATE(179),
    [sym_global_metadata] = STATE(179),
    [sym_function_metadata] = STATE(179),
    [sym_variant] = STATE(78),
    [sym_id] = STATE(154),
    [aux_sym_program_repeat1] = STATE(76),
    [aux_sym__statement_repeat1] = STATE(78),
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
    [sym__expression] = STATE(117),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(117),
    [sym_letrec_environment] = STATE(117),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(117),
    [sym_recursive] = STATE(117),
    [sym_sequential] = STATE(117),
    [sym_split] = STATE(117),
    [sym_merge] = STATE(117),
    [sym_parallel] = STATE(117),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [3] = {
    [sym__expression] = STATE(116),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(116),
    [sym_letrec_environment] = STATE(116),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(116),
    [sym_recursive] = STATE(116),
    [sym_sequential] = STATE(116),
    [sym_split] = STATE(116),
    [sym_merge] = STATE(116),
    [sym_parallel] = STATE(116),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [4] = {
    [sym__expression] = STATE(101),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(101),
    [sym_letrec_environment] = STATE(101),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(101),
    [sym_recursive] = STATE(101),
    [sym_sequential] = STATE(101),
    [sym_split] = STATE(101),
    [sym_merge] = STATE(101),
    [sym_parallel] = STATE(101),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [5] = {
    [sym__expression] = STATE(102),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(102),
    [sym_letrec_environment] = STATE(102),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(102),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [6] = {
    [sym__expression] = STATE(103),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(103),
    [sym_letrec_environment] = STATE(103),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(103),
    [sym_recursive] = STATE(103),
    [sym_sequential] = STATE(103),
    [sym_split] = STATE(103),
    [sym_merge] = STATE(103),
    [sym_parallel] = STATE(103),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [7] = {
    [sym__expression] = STATE(104),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(104),
    [sym_letrec_environment] = STATE(104),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(104),
    [sym_recursive] = STATE(104),
    [sym_sequential] = STATE(104),
    [sym_split] = STATE(104),
    [sym_merge] = STATE(104),
    [sym_parallel] = STATE(104),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [8] = {
    [sym__expression] = STATE(97),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(97),
    [sym_letrec_environment] = STATE(97),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(97),
    [sym_recursive] = STATE(97),
    [sym_sequential] = STATE(97),
    [sym_split] = STATE(97),
    [sym_merge] = STATE(97),
    [sym_parallel] = STATE(97),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [9] = {
    [sym__expression] = STATE(118),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(118),
    [sym_letrec_environment] = STATE(118),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(118),
    [sym_recursive] = STATE(118),
    [sym_sequential] = STATE(118),
    [sym_split] = STATE(118),
    [sym_merge] = STATE(118),
    [sym_parallel] = STATE(118),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [10] = {
    [sym__expression] = STATE(120),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(120),
    [sym_letrec_environment] = STATE(120),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(120),
    [sym_recursive] = STATE(120),
    [sym_sequential] = STATE(120),
    [sym_split] = STATE(120),
    [sym_merge] = STATE(120),
    [sym_parallel] = STATE(120),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [11] = {
    [sym__expression] = STATE(122),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(122),
    [sym_letrec_environment] = STATE(122),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(122),
    [sym_recursive] = STATE(122),
    [sym_sequential] = STATE(122),
    [sym_split] = STATE(122),
    [sym_merge] = STATE(122),
    [sym_parallel] = STATE(122),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [12] = {
    [sym__expression] = STATE(112),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(112),
    [sym_letrec_environment] = STATE(112),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(112),
    [sym_recursive] = STATE(112),
    [sym_sequential] = STATE(112),
    [sym_split] = STATE(112),
    [sym_merge] = STATE(112),
    [sym_parallel] = STATE(112),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [13] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym_arguments] = STATE(173),
    [sym__argument] = STATE(123),
    [sym_recursive_arg] = STATE(123),
    [sym_sequential_arg] = STATE(123),
    [sym_split_arg] = STATE(123),
    [sym_merge_arg] = STATE(123),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [14] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym_arguments] = STATE(181),
    [sym__argument] = STATE(123),
    [sym_recursive_arg] = STATE(123),
    [sym_sequential_arg] = STATE(123),
    [sym_split_arg] = STATE(123),
    [sym_merge_arg] = STATE(123),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [15] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(130),
    [sym_recursive_arg] = STATE(130),
    [sym_sequential_arg] = STATE(130),
    [sym_split_arg] = STATE(130),
    [sym_merge_arg] = STATE(130),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [16] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(133),
    [sym_recursive_arg] = STATE(133),
    [sym_sequential_arg] = STATE(133),
    [sym_split_arg] = STATE(133),
    [sym_merge_arg] = STATE(133),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [17] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(128),
    [sym_recursive_arg] = STATE(128),
    [sym_sequential_arg] = STATE(128),
    [sym_split_arg] = STATE(128),
    [sym_merge_arg] = STATE(128),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [18] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(125),
    [sym_recursive_arg] = STATE(125),
    [sym_sequential_arg] = STATE(125),
    [sym_split_arg] = STATE(125),
    [sym_merge_arg] = STATE(125),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [19] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(127),
    [sym_recursive_arg] = STATE(127),
    [sym_sequential_arg] = STATE(127),
    [sym_split_arg] = STATE(127),
    [sym_merge_arg] = STATE(127),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [20] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(131),
    [sym_recursive_arg] = STATE(131),
    [sym_sequential_arg] = STATE(131),
    [sym_split_arg] = STATE(131),
    [sym_merge_arg] = STATE(131),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [21] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(134),
    [sym_recursive_arg] = STATE(134),
    [sym_sequential_arg] = STATE(134),
    [sym_split_arg] = STATE(134),
    [sym_merge_arg] = STATE(134),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [22] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(129),
    [sym_recursive_arg] = STATE(129),
    [sym_sequential_arg] = STATE(129),
    [sym_split_arg] = STATE(129),
    [sym_merge_arg] = STATE(129),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [23] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [24] = {
    [sym__infix_expression] = STATE(40),
    [sym_infix] = STATE(40),
    [sym_prefix] = STATE(40),
    [sym_partial] = STATE(40),
    [sym_prim1] = STATE(40),
    [sym_prim2] = STATE(40),
    [sym_function_call] = STATE(40),
    [sym_modifier] = STATE(40),
    [sym_access] = STATE(40),
    [sym__primitive] = STATE(40),
    [sym_iteration] = STATE(40),
    [sym_substitution] = STATE(40),
    [sym_component] = STATE(40),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(40),
    [sym_id] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [25] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [26] = {
    [sym__infix_expression] = STATE(47),
    [sym_infix] = STATE(47),
    [sym_prefix] = STATE(47),
    [sym_partial] = STATE(47),
    [sym_prim1] = STATE(47),
    [sym_prim2] = STATE(47),
    [sym_function_call] = STATE(47),
    [sym_modifier] = STATE(47),
    [sym_access] = STATE(47),
    [sym__primitive] = STATE(47),
    [sym_iteration] = STATE(47),
    [sym_substitution] = STATE(47),
    [sym_component] = STATE(47),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(47),
    [sym_id] = STATE(47),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(61),
    [sym_cut] = ACTIONS(61),
    [sym_mem] = ACTIONS(61),
    [sym_int] = ACTIONS(61),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [27] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(65),
    [sym_cut] = ACTIONS(65),
    [sym_mem] = ACTIONS(65),
    [sym_int] = ACTIONS(65),
    [sym_real] = ACTIONS(67),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [28] = {
    [sym__infix_expression] = STATE(51),
    [sym_infix] = STATE(51),
    [sym_prefix] = STATE(51),
    [sym_partial] = STATE(51),
    [sym_prim1] = STATE(51),
    [sym_prim2] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_modifier] = STATE(51),
    [sym_access] = STATE(51),
    [sym__primitive] = STATE(51),
    [sym_iteration] = STATE(51),
    [sym_substitution] = STATE(51),
    [sym_component] = STATE(51),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(51),
    [sym_id] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [29] = {
    [sym__infix_expression] = STATE(35),
    [sym_infix] = STATE(35),
    [sym_prefix] = STATE(35),
    [sym_partial] = STATE(35),
    [sym_prim1] = STATE(35),
    [sym_prim2] = STATE(35),
    [sym_function_call] = STATE(35),
    [sym_modifier] = STATE(35),
    [sym_access] = STATE(35),
    [sym__primitive] = STATE(35),
    [sym_iteration] = STATE(35),
    [sym_substitution] = STATE(35),
    [sym_component] = STATE(35),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(35),
    [sym_id] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [30] = {
    [sym__infix_expression] = STATE(36),
    [sym_infix] = STATE(36),
    [sym_prefix] = STATE(36),
    [sym_partial] = STATE(36),
    [sym_prim1] = STATE(36),
    [sym_prim2] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_modifier] = STATE(36),
    [sym_access] = STATE(36),
    [sym__primitive] = STATE(36),
    [sym_iteration] = STATE(36),
    [sym_substitution] = STATE(36),
    [sym_component] = STATE(36),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(36),
    [sym_id] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(77),
    [sym_cut] = ACTIONS(77),
    [sym_mem] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_real] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [31] = {
    [sym__infix_expression] = STATE(37),
    [sym_infix] = STATE(37),
    [sym_prefix] = STATE(37),
    [sym_partial] = STATE(37),
    [sym_prim1] = STATE(37),
    [sym_prim2] = STATE(37),
    [sym_function_call] = STATE(37),
    [sym_modifier] = STATE(37),
    [sym_access] = STATE(37),
    [sym__primitive] = STATE(37),
    [sym_iteration] = STATE(37),
    [sym_substitution] = STATE(37),
    [sym_component] = STATE(37),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(37),
    [sym_id] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(81),
    [sym_cut] = ACTIONS(81),
    [sym_mem] = ACTIONS(81),
    [sym_int] = ACTIONS(81),
    [sym_real] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [32] = {
    [sym__infix_expression] = STATE(50),
    [sym_infix] = STATE(50),
    [sym_prefix] = STATE(50),
    [sym_partial] = STATE(50),
    [sym_prim1] = STATE(50),
    [sym_prim2] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_modifier] = STATE(50),
    [sym_access] = STATE(50),
    [sym__primitive] = STATE(50),
    [sym_iteration] = STATE(50),
    [sym_substitution] = STATE(50),
    [sym_component] = STATE(50),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(50),
    [sym_id] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(85),
    [sym_cut] = ACTIONS(85),
    [sym_mem] = ACTIONS(85),
    [sym_int] = ACTIONS(85),
    [sym_real] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [33] = {
    [sym__infix_expression] = STATE(38),
    [sym_infix] = STATE(38),
    [sym_prefix] = STATE(38),
    [sym_partial] = STATE(38),
    [sym_prim1] = STATE(38),
    [sym_prim2] = STATE(38),
    [sym_function_call] = STATE(38),
    [sym_modifier] = STATE(38),
    [sym_access] = STATE(38),
    [sym__primitive] = STATE(38),
    [sym_iteration] = STATE(38),
    [sym_substitution] = STATE(38),
    [sym_component] = STATE(38),
    [sym__infix] = STATE(70),
    [sym__prim1] = STATE(69),
    [sym__prim2] = STATE(68),
    [sym_sub] = STATE(70),
    [sym__number] = STATE(38),
    [sym_id] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(89),
    [sym_cut] = ACTIONS(89),
    [sym_mem] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(93), 17,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
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
      sym_real,
      anon_sym_COLON_COLON,
    ACTIONS(95), 43,
      anon_sym_DASH,
      anon_sym_environment,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
      anon_sym_component,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_exp,
      sym_log,
      sym_log10,
      sym_sqrt,
      sym_abs,
      sym_floor,
      sym_ceil,
      sym_rint,
      sym_round,
      sym_acos,
      sym_asin,
      sym_atan,
      sym_cos,
      sym_sin,
      sym_tan,
      sym_int_cast,
      sym_float_cast,
      sym_pow_fun,
      sym_min,
      sym_max,
      sym_fmod,
      sym_remainder,
      sym_atan2,
      sym_prefix_prim,
      sym_attach,
      sym_enable,
      sym_control,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
      sym__id,
  [65] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    STATE(24), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 23,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
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
  [121] = 9,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym_delay,
    STATE(24), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 24,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
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
  [175] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    ACTIONS(111), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    ACTIONS(113), 2,
      sym_add,
      sym_or,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(115), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [237] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 25,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
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
  [289] = 16,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    ACTIONS(113), 2,
      sym_add,
      sym_or,
    ACTIONS(123), 2,
      sym_lt,
      sym_gt,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(125), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(115), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(117), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [357] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    STATE(24), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(115), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [415] = 5,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(45), 1,
      sym__id,
    STATE(59), 1,
      sym_id,
    ACTIONS(95), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(93), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [460] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(44), 1,
      aux_sym_id_repeat1,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [502] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(46), 1,
      aux_sym_id_repeat1,
    ACTIONS(135), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(133), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [544] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(45), 1,
      aux_sym_id_repeat1,
    ACTIONS(135), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(133), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [586] = 4,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    STATE(45), 1,
      aux_sym_id_repeat1,
    ACTIONS(139), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(137), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [628] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(45), 1,
      aux_sym_id_repeat1,
    ACTIONS(146), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(144), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [670] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
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
  [719] = 2,
    ACTIONS(139), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(137), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [756] = 16,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      sym_pow,
    ACTIONS(162), 1,
      sym_delay,
    STATE(32), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    ACTIONS(152), 2,
      sym_add,
      sym_or,
    ACTIONS(158), 2,
      sym_lt,
      sym_gt,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(160), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(148), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(154), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [821] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      sym_pow,
    ACTIONS(162), 1,
      sym_delay,
    STATE(32), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(154), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [876] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      sym_pow,
    ACTIONS(162), 1,
      sym_delay,
    STATE(32), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
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
  [929] = 9,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_delay,
    STATE(32), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
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
  [980] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(156), 1,
      sym_pow,
    ACTIONS(162), 1,
      sym_delay,
    STATE(32), 1,
      sym_sub,
    STATE(73), 1,
      sym_substitutions,
    ACTIONS(152), 2,
      sym_add,
      sym_or,
    STATE(74), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(154), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1039] = 2,
    ACTIONS(166), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(164), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1075] = 2,
    ACTIONS(170), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(168), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1111] = 2,
    ACTIONS(174), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(172), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1147] = 2,
    ACTIONS(178), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(176), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1183] = 2,
    ACTIONS(182), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(180), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1219] = 2,
    ACTIONS(186), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(184), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1255] = 2,
    ACTIONS(190), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(188), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1291] = 2,
    ACTIONS(194), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1327] = 2,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(196), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1363] = 2,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(200), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1399] = 2,
    ACTIONS(206), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(204), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1435] = 5,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(45), 1,
      sym__id,
    STATE(59), 1,
      sym_id,
    ACTIONS(95), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(93), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1477] = 2,
    ACTIONS(210), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(208), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1513] = 2,
    ACTIONS(214), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(212), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1549] = 3,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(216), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1587] = 3,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(216), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1625] = 3,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(216), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1663] = 2,
    ACTIONS(228), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(226), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1699] = 2,
    ACTIONS(232), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(230), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1735] = 2,
    ACTIONS(236), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(234), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1771] = 2,
    ACTIONS(240), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(238), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1807] = 2,
    ACTIONS(244), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(242), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
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
  [1843] = 12,
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
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      sym_comment,
    STATE(154), 1,
      sym_id,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(77), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(179), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [1891] = 12,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(255), 1,
      anon_sym_import,
    ACTIONS(258), 1,
      anon_sym_declare,
    ACTIONS(264), 1,
      anon_sym_COLON_COLON,
    ACTIONS(267), 1,
      sym__id,
    ACTIONS(270), 1,
      sym_comment,
    STATE(154), 1,
      sym_id,
    STATE(78), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(77), 3,
      sym__statement,
      sym_documentation,
      aux_sym_program_repeat1,
    ACTIONS(261), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(179), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [1939] = 8,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(154), 1,
      sym_id,
    STATE(96), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(11), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(171), 6,
      sym__definition,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_function_metadata,
  [1973] = 8,
    ACTIONS(278), 1,
      anon_sym_COLON_COLON,
    ACTIONS(281), 1,
      sym__id,
    STATE(79), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(275), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2005] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2036] = 4,
    ACTIONS(288), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(290), 1,
      sym__doc_char,
    STATE(81), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(293), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2059] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2090] = 4,
    ACTIONS(298), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(300), 1,
      sym__doc_char,
    STATE(81), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(302), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2113] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2144] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2175] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2206] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2237] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2268] = 4,
    ACTIONS(312), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(314), 1,
      sym__doc_char,
    STATE(83), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(316), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2291] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_environment_repeat1,
    STATE(154), 1,
      sym_id,
    STATE(91), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(164), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2322] = 6,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(154), 1,
      sym_id,
    STATE(119), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(175), 3,
      sym__definition,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2347] = 2,
    ACTIONS(320), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(322), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2363] = 2,
    ACTIONS(324), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(326), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2379] = 2,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(330), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2395] = 2,
    ACTIONS(332), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2411] = 4,
    ACTIONS(341), 1,
      anon_sym_COLON_COLON,
    STATE(96), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(336), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(338), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2430] = 6,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(343), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2452] = 2,
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
  [2466] = 2,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(359), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2480] = 2,
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
  [2494] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(367), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2512] = 2,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(371), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2526] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(375), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2544] = 6,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(377), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2566] = 2,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(379), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2580] = 2,
    ACTIONS(385), 1,
      anon_sym_COLON,
    ACTIONS(383), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2594] = 2,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(387), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2608] = 2,
    ACTIONS(391), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(393), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2621] = 3,
    ACTIONS(395), 1,
      anon_sym_COLON_COLON,
    STATE(109), 1,
      aux_sym_id_repeat1,
    ACTIONS(137), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2636] = 2,
    ACTIONS(400), 1,
      anon_sym_COLON_COLON,
    ACTIONS(398), 7,
      anon_sym_import,
      anon_sym_declare,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2649] = 3,
    ACTIONS(402), 1,
      anon_sym_COLON_COLON,
    STATE(115), 1,
      aux_sym_id_repeat1,
    ACTIONS(127), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2664] = 8,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      anon_sym_with,
    ACTIONS(408), 1,
      anon_sym_letrec,
  [2689] = 3,
    ACTIONS(402), 1,
      anon_sym_COLON_COLON,
    STATE(121), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2704] = 2,
    ACTIONS(273), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(410), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2717] = 3,
    ACTIONS(402), 1,
      anon_sym_COLON_COLON,
    STATE(109), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2732] = 8,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(406), 1,
      anon_sym_with,
    ACTIONS(408), 1,
      anon_sym_letrec,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2757] = 8,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(406), 1,
      anon_sym_with,
    ACTIONS(408), 1,
      anon_sym_letrec,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [2782] = 8,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(406), 1,
      anon_sym_with,
    ACTIONS(408), 1,
      anon_sym_letrec,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [2807] = 4,
    ACTIONS(336), 1,
      sym__id,
    ACTIONS(341), 1,
      anon_sym_COLON_COLON,
    STATE(119), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(418), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2824] = 8,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(406), 1,
      anon_sym_with,
    ACTIONS(408), 1,
      anon_sym_letrec,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [2849] = 3,
    ACTIONS(402), 1,
      anon_sym_COLON_COLON,
    STATE(109), 1,
      aux_sym_id_repeat1,
    ACTIONS(144), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2864] = 8,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_TILDE,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_LT_COLON,
    ACTIONS(353), 1,
      anon_sym_COLON_GT,
    ACTIONS(406), 1,
      anon_sym_with,
    ACTIONS(408), 1,
      anon_sym_letrec,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [2889] = 7,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    STATE(149), 1,
      aux_sym_arguments_repeat1,
  [2911] = 1,
    ACTIONS(137), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2921] = 5,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2938] = 2,
    ACTIONS(400), 1,
      anon_sym_COLON_COLON,
    ACTIONS(398), 5,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      sym__id,
  [2949] = 6,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
  [2968] = 5,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(443), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2985] = 3,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(445), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2998] = 2,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(447), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3009] = 5,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(451), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3026] = 4,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(453), 1,
      anon_sym_where,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    STATE(135), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3040] = 5,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [3056] = 5,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [3072] = 3,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(461), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(135), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3084] = 4,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(468), 1,
      anon_sym_where,
    STATE(132), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3098] = 5,
    ACTIONS(429), 1,
      anon_sym_TILDE,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LT_COLON,
    ACTIONS(435), 1,
      anon_sym_COLON_GT,
    ACTIONS(470), 1,
      anon_sym_COMMA,
  [3114] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(472), 1,
      sym_string,
    ACTIONS(474), 1,
      sym__id,
    STATE(167), 1,
      sym_id,
  [3127] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      sym__id,
    STATE(144), 1,
      sym_id,
    STATE(163), 1,
      sym_parameters,
  [3140] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      sym__id,
    STATE(144), 1,
      sym_id,
    STATE(157), 1,
      sym_parameters,
  [3153] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      sym__id,
    STATE(153), 1,
      sym_id,
  [3163] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      sym__id,
    STATE(138), 1,
      sym_id,
  [3173] = 3,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_parameters_repeat1,
  [3183] = 3,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_parameters_repeat1,
  [3193] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      sym__id,
    STATE(166), 1,
      sym_id,
  [3203] = 1,
    ACTIONS(485), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [3209] = 3,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [3219] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_parameters_repeat1,
  [3229] = 3,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_arguments_repeat1,
  [3239] = 3,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(494), 1,
      sym__id,
    STATE(57), 1,
      sym_id,
  [3249] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(474), 1,
      sym__id,
    STATE(183), 1,
      sym_id,
  [3259] = 2,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_environment,
  [3266] = 1,
    ACTIONS(498), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3271] = 2,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
  [3278] = 2,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_environment,
  [3285] = 2,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_rec_environment,
  [3292] = 1,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [3296] = 1,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
  [3300] = 1,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [3304] = 1,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
  [3308] = 1,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
  [3312] = 1,
    ACTIONS(516), 1,
      anon_sym_EQ,
  [3316] = 1,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [3320] = 1,
    ACTIONS(520), 1,
      anon_sym_SEMI,
  [3324] = 1,
    ACTIONS(522), 1,
      anon_sym_SEMI,
  [3328] = 1,
    ACTIONS(524), 1,
      anon_sym_COMMA,
  [3332] = 1,
    ACTIONS(526), 1,
      sym_string,
  [3336] = 1,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [3340] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [3344] = 1,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [3348] = 1,
    ACTIONS(534), 1,
      anon_sym_SEMI,
  [3352] = 1,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [3356] = 1,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [3360] = 1,
    ACTIONS(540), 1,
      sym__id,
  [3364] = 1,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [3368] = 1,
    ACTIONS(544), 1,
      anon_sym_DOT,
  [3372] = 1,
    ACTIONS(546), 1,
      sym_string,
  [3376] = 1,
    ACTIONS(548), 1,
      sym_string,
  [3380] = 1,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3384] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [3388] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [3392] = 1,
    ACTIONS(556), 1,
      sym__id,
  [3396] = 1,
    ACTIONS(558), 1,
      anon_sym_EQ,
  [3400] = 1,
    ACTIONS(560), 1,
      sym__id,
  [3404] = 1,
    ACTIONS(562), 1,
      sym__id,
  [3408] = 1,
    ACTIONS(564), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(34)] = 0,
  [SMALL_STATE(35)] = 65,
  [SMALL_STATE(36)] = 121,
  [SMALL_STATE(37)] = 175,
  [SMALL_STATE(38)] = 237,
  [SMALL_STATE(39)] = 289,
  [SMALL_STATE(40)] = 357,
  [SMALL_STATE(41)] = 415,
  [SMALL_STATE(42)] = 460,
  [SMALL_STATE(43)] = 502,
  [SMALL_STATE(44)] = 544,
  [SMALL_STATE(45)] = 586,
  [SMALL_STATE(46)] = 628,
  [SMALL_STATE(47)] = 670,
  [SMALL_STATE(48)] = 719,
  [SMALL_STATE(49)] = 756,
  [SMALL_STATE(50)] = 821,
  [SMALL_STATE(51)] = 876,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 980,
  [SMALL_STATE(54)] = 1039,
  [SMALL_STATE(55)] = 1075,
  [SMALL_STATE(56)] = 1111,
  [SMALL_STATE(57)] = 1147,
  [SMALL_STATE(58)] = 1183,
  [SMALL_STATE(59)] = 1219,
  [SMALL_STATE(60)] = 1255,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1327,
  [SMALL_STATE(63)] = 1363,
  [SMALL_STATE(64)] = 1399,
  [SMALL_STATE(65)] = 1435,
  [SMALL_STATE(66)] = 1477,
  [SMALL_STATE(67)] = 1513,
  [SMALL_STATE(68)] = 1549,
  [SMALL_STATE(69)] = 1587,
  [SMALL_STATE(70)] = 1625,
  [SMALL_STATE(71)] = 1663,
  [SMALL_STATE(72)] = 1699,
  [SMALL_STATE(73)] = 1735,
  [SMALL_STATE(74)] = 1771,
  [SMALL_STATE(75)] = 1807,
  [SMALL_STATE(76)] = 1843,
  [SMALL_STATE(77)] = 1891,
  [SMALL_STATE(78)] = 1939,
  [SMALL_STATE(79)] = 1973,
  [SMALL_STATE(80)] = 2005,
  [SMALL_STATE(81)] = 2036,
  [SMALL_STATE(82)] = 2059,
  [SMALL_STATE(83)] = 2090,
  [SMALL_STATE(84)] = 2113,
  [SMALL_STATE(85)] = 2144,
  [SMALL_STATE(86)] = 2175,
  [SMALL_STATE(87)] = 2206,
  [SMALL_STATE(88)] = 2237,
  [SMALL_STATE(89)] = 2268,
  [SMALL_STATE(90)] = 2291,
  [SMALL_STATE(91)] = 2322,
  [SMALL_STATE(92)] = 2347,
  [SMALL_STATE(93)] = 2363,
  [SMALL_STATE(94)] = 2379,
  [SMALL_STATE(95)] = 2395,
  [SMALL_STATE(96)] = 2411,
  [SMALL_STATE(97)] = 2430,
  [SMALL_STATE(98)] = 2452,
  [SMALL_STATE(99)] = 2466,
  [SMALL_STATE(100)] = 2480,
  [SMALL_STATE(101)] = 2494,
  [SMALL_STATE(102)] = 2512,
  [SMALL_STATE(103)] = 2526,
  [SMALL_STATE(104)] = 2544,
  [SMALL_STATE(105)] = 2566,
  [SMALL_STATE(106)] = 2580,
  [SMALL_STATE(107)] = 2594,
  [SMALL_STATE(108)] = 2608,
  [SMALL_STATE(109)] = 2621,
  [SMALL_STATE(110)] = 2636,
  [SMALL_STATE(111)] = 2649,
  [SMALL_STATE(112)] = 2664,
  [SMALL_STATE(113)] = 2689,
  [SMALL_STATE(114)] = 2704,
  [SMALL_STATE(115)] = 2717,
  [SMALL_STATE(116)] = 2732,
  [SMALL_STATE(117)] = 2757,
  [SMALL_STATE(118)] = 2782,
  [SMALL_STATE(119)] = 2807,
  [SMALL_STATE(120)] = 2824,
  [SMALL_STATE(121)] = 2849,
  [SMALL_STATE(122)] = 2864,
  [SMALL_STATE(123)] = 2889,
  [SMALL_STATE(124)] = 2911,
  [SMALL_STATE(125)] = 2921,
  [SMALL_STATE(126)] = 2938,
  [SMALL_STATE(127)] = 2949,
  [SMALL_STATE(128)] = 2968,
  [SMALL_STATE(129)] = 2985,
  [SMALL_STATE(130)] = 2998,
  [SMALL_STATE(131)] = 3009,
  [SMALL_STATE(132)] = 3026,
  [SMALL_STATE(133)] = 3040,
  [SMALL_STATE(134)] = 3056,
  [SMALL_STATE(135)] = 3072,
  [SMALL_STATE(136)] = 3084,
  [SMALL_STATE(137)] = 3098,
  [SMALL_STATE(138)] = 3114,
  [SMALL_STATE(139)] = 3127,
  [SMALL_STATE(140)] = 3140,
  [SMALL_STATE(141)] = 3153,
  [SMALL_STATE(142)] = 3163,
  [SMALL_STATE(143)] = 3173,
  [SMALL_STATE(144)] = 3183,
  [SMALL_STATE(145)] = 3193,
  [SMALL_STATE(146)] = 3203,
  [SMALL_STATE(147)] = 3209,
  [SMALL_STATE(148)] = 3219,
  [SMALL_STATE(149)] = 3229,
  [SMALL_STATE(150)] = 3239,
  [SMALL_STATE(151)] = 3249,
  [SMALL_STATE(152)] = 3259,
  [SMALL_STATE(153)] = 3266,
  [SMALL_STATE(154)] = 3271,
  [SMALL_STATE(155)] = 3278,
  [SMALL_STATE(156)] = 3285,
  [SMALL_STATE(157)] = 3292,
  [SMALL_STATE(158)] = 3296,
  [SMALL_STATE(159)] = 3300,
  [SMALL_STATE(160)] = 3304,
  [SMALL_STATE(161)] = 3308,
  [SMALL_STATE(162)] = 3312,
  [SMALL_STATE(163)] = 3316,
  [SMALL_STATE(164)] = 3320,
  [SMALL_STATE(165)] = 3324,
  [SMALL_STATE(166)] = 3328,
  [SMALL_STATE(167)] = 3332,
  [SMALL_STATE(168)] = 3336,
  [SMALL_STATE(169)] = 3340,
  [SMALL_STATE(170)] = 3344,
  [SMALL_STATE(171)] = 3348,
  [SMALL_STATE(172)] = 3352,
  [SMALL_STATE(173)] = 3356,
  [SMALL_STATE(174)] = 3360,
  [SMALL_STATE(175)] = 3364,
  [SMALL_STATE(176)] = 3368,
  [SMALL_STATE(177)] = 3372,
  [SMALL_STATE(178)] = 3376,
  [SMALL_STATE(179)] = 3380,
  [SMALL_STATE(180)] = 3384,
  [SMALL_STATE(181)] = 3388,
  [SMALL_STATE(182)] = 3392,
  [SMALL_STATE(183)] = 3396,
  [SMALL_STATE(184)] = 3400,
  [SMALL_STATE(185)] = 3404,
  [SMALL_STATE(186)] = 3408,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 10),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 10),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(185),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 9),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 14),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 14),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 15),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 13),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 13),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 18),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 18),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 17),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(110),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(182),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(111),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(126),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(182),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(111),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(81),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(81),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(110),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 8),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 8),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 8),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 8),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 7),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 3),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(174),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 16),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(126),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 7),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 7),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(151),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(141),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 19),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 11),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
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
