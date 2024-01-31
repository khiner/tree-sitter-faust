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
#define STATE_COUNT 456
#define LARGE_STATE_COUNT 73
#define SYMBOL_COUNT 211
#define ALIAS_COUNT 3
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 41

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
  anon_sym_ffunction = 30,
  anon_sym_fconstant = 31,
  anon_sym_fvariable = 32,
  anon_sym_PIPE = 33,
  anon_sym_waveform = 34,
  anon_sym_route = 35,
  sym_add = 36,
  anon_sym_DASH = 37,
  sym_mult = 38,
  sym_div = 39,
  sym_mod = 40,
  sym_pow = 41,
  sym_and = 42,
  sym_xor = 43,
  sym_lshift = 44,
  sym_rshift = 45,
  sym_lt = 46,
  sym_le = 47,
  sym_gt = 48,
  sym_ge = 49,
  sym_eq = 50,
  sym_neq = 51,
  sym_delay = 52,
  sym_exp = 53,
  sym_log = 54,
  sym_log10 = 55,
  sym_sqrt = 56,
  sym_abs = 57,
  sym_floor = 58,
  sym_ceil = 59,
  sym_rint = 60,
  sym_round = 61,
  sym_acos = 62,
  sym_asin = 63,
  sym_atan = 64,
  sym_cos = 65,
  sym_sin = 66,
  sym_tan = 67,
  sym_int_cast = 68,
  sym_float_cast = 69,
  sym_any_cast = 70,
  sym_pow_fun = 71,
  sym_min = 72,
  sym_max = 73,
  sym_fmod = 74,
  sym_remainder = 75,
  sym_atan2 = 76,
  sym_prefix_prim = 77,
  sym_attach = 78,
  sym_enable = 79,
  sym_control = 80,
  sym_wire = 81,
  sym_cut = 82,
  sym_mem = 83,
  anon_sym_component = 84,
  anon_sym_library = 85,
  sym_rdtable = 86,
  sym_rwtable = 87,
  sym_select2 = 88,
  sym_select3 = 89,
  sym_lowest = 90,
  sym_highest = 91,
  sym_assertbounds = 92,
  sym_int = 93,
  sym_real = 94,
  anon_sym_LTmdoc_GT = 95,
  anon_sym_LT_SLASHmdoc_GT = 96,
  sym__doc_char = 97,
  anon_sym_LTnotice_SLASH_GT = 98,
  anon_sym_LTnotice_SLASH_GT2 = 99,
  anon_sym_LTequation_GT = 100,
  anon_sym_LT_SLASHequation_GT = 101,
  anon_sym_LTdiagram_GT = 102,
  anon_sym_LT_SLASHdiagram_GT = 103,
  anon_sym_LTmetadata_GT = 104,
  anon_sym_LT_SLASHmetadata_GT = 105,
  anon_sym_LTlisting = 106,
  sym_single_precision = 107,
  sym_double_precision = 108,
  sym_quad_precision = 109,
  sym_fixed_point_precision = 110,
  sym_string = 111,
  sym_fstring = 112,
  anon_sym_COLON_COLON = 113,
  sym__id = 114,
  sym_comment = 115,
  sym_program = 116,
  sym__statement = 117,
  sym__definition = 118,
  sym_definition = 119,
  sym_function_definition = 120,
  sym__metadata_definition = 121,
  sym_global_metadata = 122,
  sym_function_metadata = 123,
  sym_file_import = 124,
  sym__expression = 125,
  sym__infix_expression = 126,
  sym_infix = 127,
  sym_partial = 128,
  sym_prefix = 129,
  sym_prim1 = 130,
  sym_prim2 = 131,
  sym_prim3 = 132,
  sym_prim4 = 133,
  sym_prim5 = 134,
  sym_function_call = 135,
  sym_modifier = 136,
  sym_access = 137,
  sym__primitive = 138,
  sym_lambda = 139,
  sym_modulation = 140,
  sym_modulators = 141,
  sym_modulator = 142,
  sym_parameters = 143,
  sym_arguments = 144,
  sym__argument = 145,
  sym_pattern = 146,
  sym_rules = 147,
  sym_rule = 148,
  sym_recursive_arg = 149,
  sym_sequential_arg = 150,
  sym_split_arg = 151,
  sym_merge_arg = 152,
  sym_iteration = 153,
  sym_with_environment = 154,
  sym_environment = 155,
  sym_letrec_environment = 156,
  sym_rec_environment = 157,
  sym_recinition = 158,
  sym_substitution = 159,
  sym_substitutions = 160,
  sym_ffunction = 161,
  sym_fconst = 162,
  sym_fvariable = 163,
  sym_signature = 164,
  sym_parameter_types = 165,
  sym__include_file = 166,
  sym_function_names = 167,
  sym__func_name = 168,
  sym__type = 169,
  sym_waveform = 170,
  sym_values = 171,
  sym_route = 172,
  sym__infix = 173,
  sym__prim1 = 174,
  sym__prim2 = 175,
  sym__prim3 = 176,
  sym__prim4 = 177,
  sym__prim5 = 178,
  sym__modifier = 179,
  sym_one_sample_delay = 180,
  sym_sub = 181,
  sym_or = 182,
  sym_component = 183,
  sym_library = 184,
  sym__number = 185,
  sym_documentation = 186,
  sym__doc_content = 187,
  sym__special_doc_tag = 188,
  sym__binary_composition = 189,
  sym_recursive = 190,
  sym_sequential = 191,
  sym_split = 192,
  sym_merge = 193,
  sym_parallel = 194,
  sym_variants = 195,
  sym__variant = 196,
  sym_id = 197,
  sym_negate_id = 198,
  aux_sym_program_repeat1 = 199,
  aux_sym_modulators_repeat1 = 200,
  aux_sym_parameters_repeat1 = 201,
  aux_sym_arguments_repeat1 = 202,
  aux_sym_rules_repeat1 = 203,
  aux_sym_environment_repeat1 = 204,
  aux_sym_rec_environment_repeat1 = 205,
  aux_sym_parameter_types_repeat1 = 206,
  aux_sym_values_repeat1 = 207,
  aux_sym_documentation_repeat1 = 208,
  aux_sym_variants_repeat1 = 209,
  aux_sym_id_repeat1 = 210,
  alias_sym_float = 211,
  alias_sym_function_name = 212,
  alias_sym_parameter = 213,
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
  [anon_sym_ffunction] = "ffunction",
  [anon_sym_fconstant] = "fconstant",
  [anon_sym_fvariable] = "fvariable",
  [anon_sym_PIPE] = "|",
  [anon_sym_waveform] = "waveform",
  [anon_sym_route] = "route",
  [sym_add] = "add",
  [anon_sym_DASH] = "-",
  [sym_mult] = "mult",
  [sym_div] = "div",
  [sym_mod] = "mod",
  [sym_pow] = "pow",
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
  [sym_any_cast] = "any",
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
  [anon_sym_component] = "component",
  [anon_sym_library] = "library",
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
  [sym_fstring] = "fstring",
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
  [sym_ffunction] = "ffunction",
  [sym_fconst] = "fconst",
  [sym_fvariable] = "fvariable",
  [sym_signature] = "signature",
  [sym_parameter_types] = "parameter_types",
  [sym__include_file] = "_include_file",
  [sym_function_names] = "function_names",
  [sym__func_name] = "_func_name",
  [sym__type] = "_type",
  [sym_waveform] = "waveform",
  [sym_values] = "values",
  [sym_route] = "route",
  [sym__infix] = "_infix",
  [sym__prim1] = "_prim1",
  [sym__prim2] = "_prim2",
  [sym__prim3] = "_prim3",
  [sym__prim4] = "_prim4",
  [sym__prim5] = "_prim5",
  [sym__modifier] = "_modifier",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_sub] = "sub",
  [sym_or] = "or",
  [sym_component] = "component",
  [sym_library] = "library",
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
  [aux_sym_parameter_types_repeat1] = "parameter_types_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [alias_sym_float] = "float",
  [alias_sym_function_name] = "function_name",
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
  [anon_sym_ffunction] = anon_sym_ffunction,
  [anon_sym_fconstant] = anon_sym_fconstant,
  [anon_sym_fvariable] = anon_sym_fvariable,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_waveform] = anon_sym_waveform,
  [anon_sym_route] = anon_sym_route,
  [sym_add] = sym_add,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_mult] = sym_mult,
  [sym_div] = sym_div,
  [sym_mod] = sym_mod,
  [sym_pow] = sym_pow,
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
  [sym_any_cast] = sym_any_cast,
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
  [anon_sym_component] = anon_sym_component,
  [anon_sym_library] = anon_sym_library,
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
  [sym_fstring] = sym_fstring,
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
  [sym_ffunction] = sym_ffunction,
  [sym_fconst] = sym_fconst,
  [sym_fvariable] = sym_fvariable,
  [sym_signature] = sym_signature,
  [sym_parameter_types] = sym_parameter_types,
  [sym__include_file] = sym__include_file,
  [sym_function_names] = sym_function_names,
  [sym__func_name] = sym__func_name,
  [sym__type] = sym__type,
  [sym_waveform] = sym_waveform,
  [sym_values] = sym_values,
  [sym_route] = sym_route,
  [sym__infix] = sym__infix,
  [sym__prim1] = sym__prim1,
  [sym__prim2] = sym__prim2,
  [sym__prim3] = sym__prim3,
  [sym__prim4] = sym__prim4,
  [sym__prim5] = sym__prim5,
  [sym__modifier] = sym__modifier,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_sub] = sym_sub,
  [sym_or] = sym_or,
  [sym_component] = sym_component,
  [sym_library] = sym_library,
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
  [aux_sym_parameter_types_repeat1] = aux_sym_parameter_types_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [alias_sym_float] = alias_sym_float,
  [alias_sym_function_name] = alias_sym_function_name,
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
  [anon_sym_ffunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fconstant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fvariable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_waveform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
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
  [sym_any_cast] = {
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
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
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
  [sym_fstring] = {
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
  [sym_ffunction] = {
    .visible = true,
    .named = true,
  },
  [sym_fconst] = {
    .visible = true,
    .named = true,
  },
  [sym_fvariable] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_types] = {
    .visible = true,
    .named = true,
  },
  [sym__include_file] = {
    .visible = false,
    .named = true,
  },
  [sym_function_names] = {
    .visible = true,
    .named = true,
  },
  [sym__func_name] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_waveform] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_route] = {
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
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_library] = {
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
  [aux_sym_parameter_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_repeat1] = {
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
  [alias_sym_float] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
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
  field_include_file = 9,
  field_key = 10,
  field_left = 11,
  field_library_file = 12,
  field_local_environment = 13,
  field_name = 14,
  field_num_inputs = 15,
  field_num_iters = 16,
  field_num_outputs = 17,
  field_operand = 18,
  field_operator = 19,
  field_primitive = 20,
  field_right = 21,
  field_type = 22,
  field_value = 23,
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
  [field_include_file] = "include_file",
  [field_key] = "key",
  [field_left] = "left",
  [field_library_file] = "library_file",
  [field_local_environment] = "local_environment",
  [field_name] = "name",
  [field_num_inputs] = "num_inputs",
  [field_num_iters] = "num_iters",
  [field_num_outputs] = "num_outputs",
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
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 1},
  [23] = {.index = 31, .length = 2},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 1},
  [26] = {.index = 36, .length = 1},
  [27] = {.index = 37, .length = 1},
  [30] = {.index = 38, .length = 2},
  [31] = {.index = 40, .length = 3},
  [32] = {.index = 43, .length = 3},
  [33] = {.index = 46, .length = 1},
  [34] = {.index = 47, .length = 1},
  [35] = {.index = 48, .length = 4},
  [36] = {.index = 52, .length = 2},
  [39] = {.index = 54, .length = 3},
  [40] = {.index = 57, .length = 2},
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
    {field_type, 0},
  [15] =
    {field_left, 0},
    {field_right, 2},
  [17] =
    {field_expression, 0},
    {field_local_environment, 2},
  [19] =
    {field_definition, 2},
    {field_environment, 0},
  [21] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [24] =
    {field_filename, 3},
  [25] =
    {field_callee, 0},
  [26] =
    {field_operand, 2},
    {field_operator, 0},
  [28] =
    {field_argument, 2},
    {field_primitive, 0},
  [30] =
    {field_primitive, 0},
  [31] =
    {field_name, 0},
    {field_value, 5},
  [33] =
    {field_name, 1},
    {field_value, 6},
  [35] =
    {field_expression, 3},
  [36] =
    {field_include_file, 0},
  [37] =
    {field_type, 0, .inherited = true},
  [38] =
    {field_num_inputs, 2},
    {field_num_outputs, 4},
  [40] =
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [43] =
    {field_include_file, 5, .inherited = true},
    {field_name, 3},
    {field_type, 2, .inherited = true},
  [46] =
    {field_value, 6},
  [47] =
    {field_expression, 4},
  [48] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [52] =
    {field_include_file, 4, .inherited = true},
    {field_library_file, 6},
  [54] =
    {field_expression, 6},
    {field_num_inputs, 2},
    {field_num_outputs, 4},
  [57] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [10] = {
    [0] = sym_int,
  },
  [11] = {
    [0] = alias_sym_float,
  },
  [16] = {
    [1] = alias_sym_parameter,
  },
  [18] = {
    [0] = alias_sym_function_name,
  },
  [28] = {
    [0] = sym_int,
  },
  [29] = {
    [0] = alias_sym_float,
  },
  [37] = {
    [1] = sym_int,
  },
  [38] = {
    [1] = alias_sym_float,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 3,
    sym_id,
    alias_sym_function_name,
    alias_sym_parameter,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 10,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 23,
  [29] = 27,
  [30] = 30,
  [31] = 26,
  [32] = 25,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 37,
  [44] = 38,
  [45] = 45,
  [46] = 34,
  [47] = 47,
  [48] = 48,
  [49] = 39,
  [50] = 42,
  [51] = 45,
  [52] = 41,
  [53] = 40,
  [54] = 48,
  [55] = 36,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 61,
  [64] = 62,
  [65] = 56,
  [66] = 58,
  [67] = 61,
  [68] = 62,
  [69] = 56,
  [70] = 58,
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
  [85] = 78,
  [86] = 86,
  [87] = 73,
  [88] = 73,
  [89] = 74,
  [90] = 74,
  [91] = 91,
  [92] = 86,
  [93] = 76,
  [94] = 76,
  [95] = 75,
  [96] = 78,
  [97] = 75,
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
  [126] = 72,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 79,
  [137] = 79,
  [138] = 84,
  [139] = 83,
  [140] = 80,
  [141] = 82,
  [142] = 81,
  [143] = 91,
  [144] = 129,
  [145] = 110,
  [146] = 72,
  [147] = 135,
  [148] = 109,
  [149] = 111,
  [150] = 108,
  [151] = 117,
  [152] = 107,
  [153] = 115,
  [154] = 127,
  [155] = 106,
  [156] = 128,
  [157] = 116,
  [158] = 114,
  [159] = 132,
  [160] = 112,
  [161] = 100,
  [162] = 119,
  [163] = 118,
  [164] = 105,
  [165] = 104,
  [166] = 103,
  [167] = 125,
  [168] = 124,
  [169] = 130,
  [170] = 123,
  [171] = 131,
  [172] = 99,
  [173] = 122,
  [174] = 121,
  [175] = 98,
  [176] = 134,
  [177] = 101,
  [178] = 102,
  [179] = 113,
  [180] = 133,
  [181] = 120,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 189,
  [192] = 185,
  [193] = 186,
  [194] = 187,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 80,
  [218] = 84,
  [219] = 81,
  [220] = 220,
  [221] = 82,
  [222] = 83,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 225,
  [231] = 231,
  [232] = 220,
  [233] = 224,
  [234] = 234,
  [235] = 235,
  [236] = 231,
  [237] = 234,
  [238] = 229,
  [239] = 223,
  [240] = 203,
  [241] = 241,
  [242] = 91,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 250,
  [253] = 251,
  [254] = 248,
  [255] = 246,
  [256] = 249,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 262,
  [266] = 266,
  [267] = 258,
  [268] = 264,
  [269] = 269,
  [270] = 261,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 273,
  [278] = 278,
  [279] = 275,
  [280] = 280,
  [281] = 280,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 276,
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
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 303,
  [314] = 312,
  [315] = 289,
  [316] = 316,
  [317] = 293,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 307,
  [322] = 288,
  [323] = 323,
  [324] = 316,
  [325] = 325,
  [326] = 292,
  [327] = 302,
  [328] = 328,
  [329] = 300,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 338,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 379,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 380,
  [394] = 381,
  [395] = 395,
  [396] = 396,
  [397] = 382,
  [398] = 383,
  [399] = 399,
  [400] = 400,
  [401] = 370,
  [402] = 372,
  [403] = 403,
  [404] = 388,
  [405] = 389,
  [406] = 358,
  [407] = 359,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 391,
  [412] = 412,
  [413] = 372,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 371,
  [422] = 356,
  [423] = 423,
  [424] = 384,
  [425] = 369,
  [426] = 367,
  [427] = 366,
  [428] = 357,
  [429] = 429,
  [430] = 418,
  [431] = 355,
  [432] = 419,
  [433] = 433,
  [434] = 433,
  [435] = 435,
  [436] = 370,
  [437] = 437,
  [438] = 399,
  [439] = 415,
  [440] = 440,
  [441] = 441,
  [442] = 368,
  [443] = 390,
  [444] = 396,
  [445] = 385,
  [446] = 410,
  [447] = 387,
  [448] = 375,
  [449] = 374,
  [450] = 395,
  [451] = 451,
  [452] = 452,
  [453] = 392,
  [454] = 378,
  [455] = 377,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(334);
      if (lookahead == '!') ADVANCE(468);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(389);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == ';') ADVANCE(335);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(348);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == '_') ADVANCE(466);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'q') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '{') ADVANCE(357);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(468);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(389);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(348);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == '_') ADVANCE(467);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(549);
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == 'm') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(520);
      if (lookahead == 'x') ADVANCE(669);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == ';') ADVANCE(335);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(579);
      if (lookahead == 'w') ADVANCE(612);
      if (lookahead == 'x') ADVANCE(669);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == ';') ADVANCE(335);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(669);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == ';') ADVANCE(335);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'w') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(354);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(669);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '&') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(395);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == '<') ADVANCE(403);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == '[') ADVANCE(349);
      if (lookahead == '^') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '~') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(336);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '|') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == ']') ADVANCE(351);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'q') ADVANCE(737);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(514);
      if (lookahead == '\\') ADVANCE(331);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(750);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(749);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '>') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(415);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(479);
      if (lookahead == '3') ADVANCE(481);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'q') ADVANCE(737);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 26:
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(495);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(409);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(408);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(359);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(493);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(494);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(501);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(497);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(502);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(499);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(503);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(498);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(504);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(269);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(292);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'w') ADVANCE(311);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'q') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 140:
      if (lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'q') ADVANCE(365);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(469);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(367);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 250:
      if (lookahead == 'q') ADVANCE(317);
      END_STATE();
    case 251:
      if (lookahead == 'q') ADVANCE(320);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 321:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 322:
      if (lookahead == 'w') ADVANCE(446);
      END_STATE();
    case 323:
      if (lookahead == 'x') ADVANCE(450);
      END_STATE();
    case 324:
      if (lookahead == 'x') ADVANCE(458);
      END_STATE();
    case 325:
      if (lookahead == 'x') ADVANCE(129);
      END_STATE();
    case 326:
      if (lookahead == 'y') ADVANCE(445);
      END_STATE();
    case 327:
      if (lookahead == 'y') ADVANCE(473);
      END_STATE();
    case 328:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 331:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 332:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(750);
      if (lookahead == '\r') ADVANCE(751);
      END_STATE();
    case 333:
      if (eof) ADVANCE(334);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(192);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'q') ADVANCE(737);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(333)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == '>') ADVANCE(362);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(362);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_ffunction);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_ffunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_fconstant);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_fconstant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_fvariable);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_fvariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_waveform);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_waveform);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_route);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == '>') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(361);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == '=') ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == '=') ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(407);
      if (lookahead == '>') ADVANCE(402);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(21);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(456);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_any_cast);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(409);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_library);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(491);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead == 'f') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_fstring);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(416);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(480);
      if (lookahead == '3') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(745);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead == 'r') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == 't') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead == 'v') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(706);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(674);
      if (lookahead == 'f') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(662);
      if (lookahead == 'm') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(730);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == 'w') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'q') ADVANCE(696);
      if (lookahead == 'u') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'o') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(414);
      if (lookahead == 'w') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 's') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead == 'q') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(731);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 'x') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'v') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'y') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(748);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(750);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(750);
      if (lookahead == '\\') ADVANCE(332);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 333},
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
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
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
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
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
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 333},
  [183] = {.lex_state = 333},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 11},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 26},
  [198] = {.lex_state = 26},
  [199] = {.lex_state = 26},
  [200] = {.lex_state = 333},
  [201] = {.lex_state = 333},
  [202] = {.lex_state = 333},
  [203] = {.lex_state = 333},
  [204] = {.lex_state = 333},
  [205] = {.lex_state = 333},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 24},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 24},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 25},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 333},
  [281] = {.lex_state = 333},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 10},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 333},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 11},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 10},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 10},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 11},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 10},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 10},
  [337] = {.lex_state = 10},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 10},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 10},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 10},
  [402] = {.lex_state = 10},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 10},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 333},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
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
    [anon_sym_ffunction] = ACTIONS(1),
    [anon_sym_fconstant] = ACTIONS(1),
    [anon_sym_fvariable] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_waveform] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_mult] = ACTIONS(1),
    [sym_div] = ACTIONS(1),
    [sym_mod] = ACTIONS(1),
    [sym_pow] = ACTIONS(1),
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
    [sym_any_cast] = ACTIONS(1),
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
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
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
    [sym_program] = STATE(423),
    [sym__statement] = STATE(182),
    [sym__definition] = STATE(182),
    [sym_definition] = STATE(421),
    [sym_function_definition] = STATE(421),
    [sym__metadata_definition] = STATE(182),
    [sym_global_metadata] = STATE(420),
    [sym_function_metadata] = STATE(420),
    [sym_file_import] = STATE(182),
    [sym_documentation] = STATE(182),
    [sym_variants] = STATE(272),
    [sym__variant] = STATE(220),
    [sym_id] = STATE(344),
    [aux_sym_program_repeat1] = STATE(182),
    [aux_sym_variants_repeat1] = STATE(220),
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
    [sym__expression] = STATE(212),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(212),
    [sym_letrec_environment] = STATE(212),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(212),
    [sym_recursive] = STATE(212),
    [sym_sequential] = STATE(212),
    [sym_split] = STATE(212),
    [sym_merge] = STATE(212),
    [sym_parallel] = STATE(212),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [3] = {
    [sym__expression] = STATE(210),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(210),
    [sym_letrec_environment] = STATE(210),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(210),
    [sym_recursive] = STATE(210),
    [sym_sequential] = STATE(210),
    [sym_split] = STATE(210),
    [sym_merge] = STATE(210),
    [sym_parallel] = STATE(210),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [4] = {
    [sym__expression] = STATE(229),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(229),
    [sym_letrec_environment] = STATE(229),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(229),
    [sym_recursive] = STATE(229),
    [sym_sequential] = STATE(229),
    [sym_split] = STATE(229),
    [sym_merge] = STATE(229),
    [sym_parallel] = STATE(229),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [5] = {
    [sym__expression] = STATE(238),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(238),
    [sym_letrec_environment] = STATE(238),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(238),
    [sym_recursive] = STATE(238),
    [sym_sequential] = STATE(238),
    [sym_split] = STATE(238),
    [sym_merge] = STATE(238),
    [sym_parallel] = STATE(238),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [6] = {
    [sym__expression] = STATE(224),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(224),
    [sym_letrec_environment] = STATE(224),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(224),
    [sym_recursive] = STATE(224),
    [sym_sequential] = STATE(224),
    [sym_split] = STATE(224),
    [sym_merge] = STATE(224),
    [sym_parallel] = STATE(224),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [7] = {
    [sym__expression] = STATE(233),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(233),
    [sym_letrec_environment] = STATE(233),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(233),
    [sym_recursive] = STATE(233),
    [sym_sequential] = STATE(233),
    [sym_split] = STATE(233),
    [sym_merge] = STATE(233),
    [sym_parallel] = STATE(233),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [8] = {
    [sym__expression] = STATE(234),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(234),
    [sym_letrec_environment] = STATE(234),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(234),
    [sym_recursive] = STATE(234),
    [sym_sequential] = STATE(234),
    [sym_split] = STATE(234),
    [sym_merge] = STATE(234),
    [sym_parallel] = STATE(234),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [9] = {
    [sym__expression] = STATE(214),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(214),
    [sym_letrec_environment] = STATE(214),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(214),
    [sym_recursive] = STATE(214),
    [sym_sequential] = STATE(214),
    [sym_split] = STATE(214),
    [sym_merge] = STATE(214),
    [sym_parallel] = STATE(214),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [10] = {
    [sym__expression] = STATE(225),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(225),
    [sym_letrec_environment] = STATE(225),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(225),
    [sym_recursive] = STATE(225),
    [sym_sequential] = STATE(225),
    [sym_split] = STATE(225),
    [sym_merge] = STATE(225),
    [sym_parallel] = STATE(225),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [11] = {
    [sym__expression] = STATE(236),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(236),
    [sym_letrec_environment] = STATE(236),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(236),
    [sym_recursive] = STATE(236),
    [sym_sequential] = STATE(236),
    [sym_split] = STATE(236),
    [sym_merge] = STATE(236),
    [sym_parallel] = STATE(236),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [12] = {
    [sym__expression] = STATE(235),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(235),
    [sym_letrec_environment] = STATE(235),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(235),
    [sym_recursive] = STATE(235),
    [sym_sequential] = STATE(235),
    [sym_split] = STATE(235),
    [sym_merge] = STATE(235),
    [sym_parallel] = STATE(235),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [13] = {
    [sym__expression] = STATE(237),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(237),
    [sym_letrec_environment] = STATE(237),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(237),
    [sym_recursive] = STATE(237),
    [sym_sequential] = STATE(237),
    [sym_split] = STATE(237),
    [sym_merge] = STATE(237),
    [sym_parallel] = STATE(237),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [14] = {
    [sym__expression] = STATE(207),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(207),
    [sym_letrec_environment] = STATE(207),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(207),
    [sym_recursive] = STATE(207),
    [sym_sequential] = STATE(207),
    [sym_split] = STATE(207),
    [sym_merge] = STATE(207),
    [sym_parallel] = STATE(207),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [15] = {
    [sym__expression] = STATE(209),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(209),
    [sym_letrec_environment] = STATE(209),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(209),
    [sym_recursive] = STATE(209),
    [sym_sequential] = STATE(209),
    [sym_split] = STATE(209),
    [sym_merge] = STATE(209),
    [sym_parallel] = STATE(209),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [16] = {
    [sym__expression] = STATE(226),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(226),
    [sym_letrec_environment] = STATE(226),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(226),
    [sym_recursive] = STATE(226),
    [sym_sequential] = STATE(226),
    [sym_split] = STATE(226),
    [sym_merge] = STATE(226),
    [sym_parallel] = STATE(226),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [17] = {
    [sym__expression] = STATE(227),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(227),
    [sym_letrec_environment] = STATE(227),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(227),
    [sym_recursive] = STATE(227),
    [sym_sequential] = STATE(227),
    [sym_split] = STATE(227),
    [sym_merge] = STATE(227),
    [sym_parallel] = STATE(227),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [18] = {
    [sym__expression] = STATE(228),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(228),
    [sym_letrec_environment] = STATE(228),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(228),
    [sym_recursive] = STATE(228),
    [sym_sequential] = STATE(228),
    [sym_split] = STATE(228),
    [sym_merge] = STATE(228),
    [sym_parallel] = STATE(228),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [19] = {
    [sym__expression] = STATE(231),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(231),
    [sym_letrec_environment] = STATE(231),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(231),
    [sym_recursive] = STATE(231),
    [sym_sequential] = STATE(231),
    [sym_split] = STATE(231),
    [sym_merge] = STATE(231),
    [sym_parallel] = STATE(231),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [20] = {
    [sym__expression] = STATE(230),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(230),
    [sym_letrec_environment] = STATE(230),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(230),
    [sym_recursive] = STATE(230),
    [sym_sequential] = STATE(230),
    [sym_split] = STATE(230),
    [sym_merge] = STATE(230),
    [sym_parallel] = STATE(230),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [21] = {
    [sym__expression] = STATE(241),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(241),
    [sym_letrec_environment] = STATE(241),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(241),
    [sym_recursive] = STATE(241),
    [sym_sequential] = STATE(241),
    [sym_split] = STATE(241),
    [sym_merge] = STATE(241),
    [sym_parallel] = STATE(241),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [22] = {
    [sym__expression] = STATE(243),
    [sym__infix_expression] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_prim1] = STATE(77),
    [sym_prim2] = STATE(77),
    [sym_prim3] = STATE(77),
    [sym_prim4] = STATE(77),
    [sym_prim5] = STATE(77),
    [sym_function_call] = STATE(77),
    [sym_modifier] = STATE(77),
    [sym_access] = STATE(77),
    [sym__primitive] = STATE(77),
    [sym_lambda] = STATE(77),
    [sym_modulation] = STATE(77),
    [sym_pattern] = STATE(77),
    [sym_iteration] = STATE(77),
    [sym_with_environment] = STATE(243),
    [sym_letrec_environment] = STATE(243),
    [sym_substitution] = STATE(77),
    [sym_ffunction] = STATE(77),
    [sym_fconst] = STATE(77),
    [sym_fvariable] = STATE(77),
    [sym_waveform] = STATE(77),
    [sym_route] = STATE(77),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(77),
    [sym_library] = STATE(77),
    [sym__number] = STATE(77),
    [sym__binary_composition] = STATE(243),
    [sym_recursive] = STATE(243),
    [sym_sequential] = STATE(243),
    [sym_split] = STATE(243),
    [sym_merge] = STATE(243),
    [sym_parallel] = STATE(243),
    [sym_id] = STATE(77),
    [sym_negate_id] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(65),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [23] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(443),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [24] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(416),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [25] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(398),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [26] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(391),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [27] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(388),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [28] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(390),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [29] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(404),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [30] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(405),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [31] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(411),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [32] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(383),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [33] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym_arguments] = STATE(389),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [34] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(248),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(248),
    [sym_sequential_arg] = STATE(248),
    [sym_split_arg] = STATE(248),
    [sym_merge_arg] = STATE(248),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [35] = {
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
    [sym__argument] = STATE(257),
    [sym_pattern] = STATE(86),
    [sym_recursive_arg] = STATE(257),
    [sym_sequential_arg] = STATE(257),
    [sym_split_arg] = STATE(257),
    [sym_merge_arg] = STATE(257),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym_waveform] = STATE(86),
    [sym_route] = STATE(86),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(111),
    [sym_cut] = ACTIONS(111),
    [sym_mem] = ACTIONS(111),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(111),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [36] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(264),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(264),
    [sym_sequential_arg] = STATE(264),
    [sym_split_arg] = STATE(264),
    [sym_merge_arg] = STATE(264),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [37] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(265),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(265),
    [sym_sequential_arg] = STATE(265),
    [sym_split_arg] = STATE(265),
    [sym_merge_arg] = STATE(265),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [38] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(261),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(261),
    [sym_sequential_arg] = STATE(261),
    [sym_split_arg] = STATE(261),
    [sym_merge_arg] = STATE(261),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [39] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(253),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(253),
    [sym_sequential_arg] = STATE(253),
    [sym_split_arg] = STATE(253),
    [sym_merge_arg] = STATE(253),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [40] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(267),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(267),
    [sym_sequential_arg] = STATE(267),
    [sym_split_arg] = STATE(267),
    [sym_merge_arg] = STATE(267),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [41] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(249),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(249),
    [sym_sequential_arg] = STATE(249),
    [sym_split_arg] = STATE(249),
    [sym_merge_arg] = STATE(249),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [42] = {
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
    [sym__argument] = STATE(246),
    [sym_pattern] = STATE(86),
    [sym_recursive_arg] = STATE(246),
    [sym_sequential_arg] = STATE(246),
    [sym_split_arg] = STATE(246),
    [sym_merge_arg] = STATE(246),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym_waveform] = STATE(86),
    [sym_route] = STATE(86),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(111),
    [sym_cut] = ACTIONS(111),
    [sym_mem] = ACTIONS(111),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(111),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [43] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(262),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(262),
    [sym_sequential_arg] = STATE(262),
    [sym_split_arg] = STATE(262),
    [sym_merge_arg] = STATE(262),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [44] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(270),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(270),
    [sym_sequential_arg] = STATE(270),
    [sym_split_arg] = STATE(270),
    [sym_merge_arg] = STATE(270),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [45] = {
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
    [sym__argument] = STATE(245),
    [sym_pattern] = STATE(86),
    [sym_recursive_arg] = STATE(245),
    [sym_sequential_arg] = STATE(245),
    [sym_split_arg] = STATE(245),
    [sym_merge_arg] = STATE(245),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym_waveform] = STATE(86),
    [sym_route] = STATE(86),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(111),
    [sym_cut] = ACTIONS(111),
    [sym_mem] = ACTIONS(111),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(111),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [46] = {
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
    [sym__argument] = STATE(254),
    [sym_pattern] = STATE(86),
    [sym_recursive_arg] = STATE(254),
    [sym_sequential_arg] = STATE(254),
    [sym_split_arg] = STATE(254),
    [sym_merge_arg] = STATE(254),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym_waveform] = STATE(86),
    [sym_route] = STATE(86),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(111),
    [sym_cut] = ACTIONS(111),
    [sym_mem] = ACTIONS(111),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(111),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [47] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(247),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(247),
    [sym_sequential_arg] = STATE(247),
    [sym_split_arg] = STATE(247),
    [sym_merge_arg] = STATE(247),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [48] = {
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
    [sym__argument] = STATE(252),
    [sym_pattern] = STATE(86),
    [sym_recursive_arg] = STATE(252),
    [sym_sequential_arg] = STATE(252),
    [sym_split_arg] = STATE(252),
    [sym_merge_arg] = STATE(252),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym_waveform] = STATE(86),
    [sym_route] = STATE(86),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(111),
    [sym_cut] = ACTIONS(111),
    [sym_mem] = ACTIONS(111),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(111),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [49] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(251),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(251),
    [sym_sequential_arg] = STATE(251),
    [sym_split_arg] = STATE(251),
    [sym_merge_arg] = STATE(251),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [50] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(255),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(255),
    [sym_sequential_arg] = STATE(255),
    [sym_split_arg] = STATE(255),
    [sym_merge_arg] = STATE(255),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [51] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(245),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(245),
    [sym_sequential_arg] = STATE(245),
    [sym_split_arg] = STATE(245),
    [sym_merge_arg] = STATE(245),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [52] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(256),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(256),
    [sym_sequential_arg] = STATE(256),
    [sym_split_arg] = STATE(256),
    [sym_merge_arg] = STATE(256),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [53] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(258),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(258),
    [sym_sequential_arg] = STATE(258),
    [sym_split_arg] = STATE(258),
    [sym_merge_arg] = STATE(258),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [54] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(250),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(250),
    [sym_sequential_arg] = STATE(250),
    [sym_split_arg] = STATE(250),
    [sym_merge_arg] = STATE(250),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [55] = {
    [sym__infix_expression] = STATE(92),
    [sym_infix] = STATE(92),
    [sym_partial] = STATE(92),
    [sym_prefix] = STATE(92),
    [sym_prim1] = STATE(92),
    [sym_prim2] = STATE(92),
    [sym_prim3] = STATE(92),
    [sym_prim4] = STATE(92),
    [sym_prim5] = STATE(92),
    [sym_function_call] = STATE(92),
    [sym_modifier] = STATE(92),
    [sym_access] = STATE(92),
    [sym__primitive] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_modulation] = STATE(92),
    [sym__argument] = STATE(268),
    [sym_pattern] = STATE(92),
    [sym_recursive_arg] = STATE(268),
    [sym_sequential_arg] = STATE(268),
    [sym_split_arg] = STATE(268),
    [sym_merge_arg] = STATE(268),
    [sym_iteration] = STATE(92),
    [sym_substitution] = STATE(92),
    [sym_ffunction] = STATE(92),
    [sym_fconst] = STATE(92),
    [sym_fvariable] = STATE(92),
    [sym_waveform] = STATE(92),
    [sym_route] = STATE(92),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(92),
    [sym_library] = STATE(92),
    [sym__number] = STATE(92),
    [sym_id] = STATE(92),
    [sym_negate_id] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [56] = {
    [sym__infix_expression] = STATE(95),
    [sym_infix] = STATE(95),
    [sym_partial] = STATE(95),
    [sym_prefix] = STATE(95),
    [sym_prim1] = STATE(95),
    [sym_prim2] = STATE(95),
    [sym_prim3] = STATE(95),
    [sym_prim4] = STATE(95),
    [sym_prim5] = STATE(95),
    [sym_function_call] = STATE(95),
    [sym_modifier] = STATE(95),
    [sym_access] = STATE(95),
    [sym__primitive] = STATE(95),
    [sym_lambda] = STATE(95),
    [sym_modulation] = STATE(95),
    [sym_pattern] = STATE(95),
    [sym_iteration] = STATE(95),
    [sym_substitution] = STATE(95),
    [sym_ffunction] = STATE(95),
    [sym_fconst] = STATE(95),
    [sym_fvariable] = STATE(95),
    [sym_waveform] = STATE(95),
    [sym_route] = STATE(95),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(95),
    [sym_library] = STATE(95),
    [sym__number] = STATE(95),
    [sym_id] = STATE(95),
    [sym_negate_id] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(129),
    [sym_cut] = ACTIONS(129),
    [sym_mem] = ACTIONS(129),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(129),
    [sym_real] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [57] = {
    [sym__infix_expression] = STATE(73),
    [sym_infix] = STATE(73),
    [sym_partial] = STATE(73),
    [sym_prefix] = STATE(73),
    [sym_prim1] = STATE(73),
    [sym_prim2] = STATE(73),
    [sym_prim3] = STATE(73),
    [sym_prim4] = STATE(73),
    [sym_prim5] = STATE(73),
    [sym_function_call] = STATE(73),
    [sym_modifier] = STATE(73),
    [sym_access] = STATE(73),
    [sym__primitive] = STATE(73),
    [sym_lambda] = STATE(73),
    [sym_modulation] = STATE(73),
    [sym_pattern] = STATE(73),
    [sym_iteration] = STATE(73),
    [sym_substitution] = STATE(73),
    [sym_ffunction] = STATE(73),
    [sym_fconst] = STATE(73),
    [sym_fvariable] = STATE(73),
    [sym_waveform] = STATE(73),
    [sym_route] = STATE(73),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(73),
    [sym_library] = STATE(73),
    [sym__number] = STATE(73),
    [sym_id] = STATE(73),
    [sym_negate_id] = STATE(73),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(133),
    [sym_cut] = ACTIONS(133),
    [sym_mem] = ACTIONS(133),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [58] = {
    [sym__infix_expression] = STATE(78),
    [sym_infix] = STATE(78),
    [sym_partial] = STATE(78),
    [sym_prefix] = STATE(78),
    [sym_prim1] = STATE(78),
    [sym_prim2] = STATE(78),
    [sym_prim3] = STATE(78),
    [sym_prim4] = STATE(78),
    [sym_prim5] = STATE(78),
    [sym_function_call] = STATE(78),
    [sym_modifier] = STATE(78),
    [sym_access] = STATE(78),
    [sym__primitive] = STATE(78),
    [sym_lambda] = STATE(78),
    [sym_modulation] = STATE(78),
    [sym_pattern] = STATE(78),
    [sym_iteration] = STATE(78),
    [sym_substitution] = STATE(78),
    [sym_ffunction] = STATE(78),
    [sym_fconst] = STATE(78),
    [sym_fvariable] = STATE(78),
    [sym_waveform] = STATE(78),
    [sym_route] = STATE(78),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(78),
    [sym_library] = STATE(78),
    [sym__number] = STATE(78),
    [sym_id] = STATE(78),
    [sym_negate_id] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(137),
    [sym_cut] = ACTIONS(137),
    [sym_mem] = ACTIONS(137),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [59] = {
    [sym__infix_expression] = STATE(87),
    [sym_infix] = STATE(87),
    [sym_partial] = STATE(87),
    [sym_prefix] = STATE(87),
    [sym_prim1] = STATE(87),
    [sym_prim2] = STATE(87),
    [sym_prim3] = STATE(87),
    [sym_prim4] = STATE(87),
    [sym_prim5] = STATE(87),
    [sym_function_call] = STATE(87),
    [sym_modifier] = STATE(87),
    [sym_access] = STATE(87),
    [sym__primitive] = STATE(87),
    [sym_lambda] = STATE(87),
    [sym_modulation] = STATE(87),
    [sym_pattern] = STATE(87),
    [sym_iteration] = STATE(87),
    [sym_substitution] = STATE(87),
    [sym_ffunction] = STATE(87),
    [sym_fconst] = STATE(87),
    [sym_fvariable] = STATE(87),
    [sym_waveform] = STATE(87),
    [sym_route] = STATE(87),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(87),
    [sym_library] = STATE(87),
    [sym__number] = STATE(87),
    [sym_id] = STATE(87),
    [sym_negate_id] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(141),
    [sym_cut] = ACTIONS(141),
    [sym_mem] = ACTIONS(141),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [60] = {
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
    [sym_ffunction] = STATE(88),
    [sym_fconst] = STATE(88),
    [sym_fvariable] = STATE(88),
    [sym_waveform] = STATE(88),
    [sym_route] = STATE(88),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(88),
    [sym_library] = STATE(88),
    [sym__number] = STATE(88),
    [sym_id] = STATE(88),
    [sym_negate_id] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(145),
    [sym_cut] = ACTIONS(145),
    [sym_mem] = ACTIONS(145),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [61] = {
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
    [sym_pattern] = STATE(89),
    [sym_iteration] = STATE(89),
    [sym_substitution] = STATE(89),
    [sym_ffunction] = STATE(89),
    [sym_fconst] = STATE(89),
    [sym_fvariable] = STATE(89),
    [sym_waveform] = STATE(89),
    [sym_route] = STATE(89),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(89),
    [sym_library] = STATE(89),
    [sym__number] = STATE(89),
    [sym_id] = STATE(89),
    [sym_negate_id] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(149),
    [sym_cut] = ACTIONS(149),
    [sym_mem] = ACTIONS(149),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [62] = {
    [sym__infix_expression] = STATE(93),
    [sym_infix] = STATE(93),
    [sym_partial] = STATE(93),
    [sym_prefix] = STATE(93),
    [sym_prim1] = STATE(93),
    [sym_prim2] = STATE(93),
    [sym_prim3] = STATE(93),
    [sym_prim4] = STATE(93),
    [sym_prim5] = STATE(93),
    [sym_function_call] = STATE(93),
    [sym_modifier] = STATE(93),
    [sym_access] = STATE(93),
    [sym__primitive] = STATE(93),
    [sym_lambda] = STATE(93),
    [sym_modulation] = STATE(93),
    [sym_pattern] = STATE(93),
    [sym_iteration] = STATE(93),
    [sym_substitution] = STATE(93),
    [sym_ffunction] = STATE(93),
    [sym_fconst] = STATE(93),
    [sym_fvariable] = STATE(93),
    [sym_waveform] = STATE(93),
    [sym_route] = STATE(93),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(93),
    [sym_library] = STATE(93),
    [sym__number] = STATE(93),
    [sym_id] = STATE(93),
    [sym_negate_id] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(153),
    [sym_cut] = ACTIONS(153),
    [sym_mem] = ACTIONS(153),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [63] = {
    [sym__infix_expression] = STATE(90),
    [sym_infix] = STATE(90),
    [sym_partial] = STATE(90),
    [sym_prefix] = STATE(90),
    [sym_prim1] = STATE(90),
    [sym_prim2] = STATE(90),
    [sym_prim3] = STATE(90),
    [sym_prim4] = STATE(90),
    [sym_prim5] = STATE(90),
    [sym_function_call] = STATE(90),
    [sym_modifier] = STATE(90),
    [sym_access] = STATE(90),
    [sym__primitive] = STATE(90),
    [sym_lambda] = STATE(90),
    [sym_modulation] = STATE(90),
    [sym_pattern] = STATE(90),
    [sym_iteration] = STATE(90),
    [sym_substitution] = STATE(90),
    [sym_ffunction] = STATE(90),
    [sym_fconst] = STATE(90),
    [sym_fvariable] = STATE(90),
    [sym_waveform] = STATE(90),
    [sym_route] = STATE(90),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(90),
    [sym_library] = STATE(90),
    [sym__number] = STATE(90),
    [sym_id] = STATE(90),
    [sym_negate_id] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(157),
    [sym_cut] = ACTIONS(157),
    [sym_mem] = ACTIONS(157),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(157),
    [sym_real] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [64] = {
    [sym__infix_expression] = STATE(94),
    [sym_infix] = STATE(94),
    [sym_partial] = STATE(94),
    [sym_prefix] = STATE(94),
    [sym_prim1] = STATE(94),
    [sym_prim2] = STATE(94),
    [sym_prim3] = STATE(94),
    [sym_prim4] = STATE(94),
    [sym_prim5] = STATE(94),
    [sym_function_call] = STATE(94),
    [sym_modifier] = STATE(94),
    [sym_access] = STATE(94),
    [sym__primitive] = STATE(94),
    [sym_lambda] = STATE(94),
    [sym_modulation] = STATE(94),
    [sym_pattern] = STATE(94),
    [sym_iteration] = STATE(94),
    [sym_substitution] = STATE(94),
    [sym_ffunction] = STATE(94),
    [sym_fconst] = STATE(94),
    [sym_fvariable] = STATE(94),
    [sym_waveform] = STATE(94),
    [sym_route] = STATE(94),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(94),
    [sym_library] = STATE(94),
    [sym__number] = STATE(94),
    [sym_id] = STATE(94),
    [sym_negate_id] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(161),
    [sym_cut] = ACTIONS(161),
    [sym_mem] = ACTIONS(161),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(161),
    [sym_real] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [65] = {
    [sym__infix_expression] = STATE(75),
    [sym_infix] = STATE(75),
    [sym_partial] = STATE(75),
    [sym_prefix] = STATE(75),
    [sym_prim1] = STATE(75),
    [sym_prim2] = STATE(75),
    [sym_prim3] = STATE(75),
    [sym_prim4] = STATE(75),
    [sym_prim5] = STATE(75),
    [sym_function_call] = STATE(75),
    [sym_modifier] = STATE(75),
    [sym_access] = STATE(75),
    [sym__primitive] = STATE(75),
    [sym_lambda] = STATE(75),
    [sym_modulation] = STATE(75),
    [sym_pattern] = STATE(75),
    [sym_iteration] = STATE(75),
    [sym_substitution] = STATE(75),
    [sym_ffunction] = STATE(75),
    [sym_fconst] = STATE(75),
    [sym_fvariable] = STATE(75),
    [sym_waveform] = STATE(75),
    [sym_route] = STATE(75),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(75),
    [sym_library] = STATE(75),
    [sym__number] = STATE(75),
    [sym_id] = STATE(75),
    [sym_negate_id] = STATE(75),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(165),
    [sym_cut] = ACTIONS(165),
    [sym_mem] = ACTIONS(165),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(165),
    [sym_real] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [66] = {
    [sym__infix_expression] = STATE(85),
    [sym_infix] = STATE(85),
    [sym_partial] = STATE(85),
    [sym_prefix] = STATE(85),
    [sym_prim1] = STATE(85),
    [sym_prim2] = STATE(85),
    [sym_prim3] = STATE(85),
    [sym_prim4] = STATE(85),
    [sym_prim5] = STATE(85),
    [sym_function_call] = STATE(85),
    [sym_modifier] = STATE(85),
    [sym_access] = STATE(85),
    [sym__primitive] = STATE(85),
    [sym_lambda] = STATE(85),
    [sym_modulation] = STATE(85),
    [sym_pattern] = STATE(85),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym_waveform] = STATE(85),
    [sym_route] = STATE(85),
    [sym__infix] = STATE(167),
    [sym__prim1] = STATE(168),
    [sym__prim2] = STATE(170),
    [sym__prim3] = STATE(173),
    [sym__prim4] = STATE(174),
    [sym__prim5] = STATE(181),
    [sym_sub] = STATE(167),
    [sym_or] = STATE(167),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_environment] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [sym_par] = ACTIONS(87),
    [sym_seq] = ACTIONS(87),
    [sym_sum] = ACTIONS(87),
    [sym_prod] = ACTIONS(87),
    [anon_sym_ffunction] = ACTIONS(89),
    [anon_sym_fconstant] = ACTIONS(91),
    [anon_sym_fvariable] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(95),
    [anon_sym_waveform] = ACTIONS(97),
    [anon_sym_route] = ACTIONS(99),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_mult] = ACTIONS(105),
    [sym_div] = ACTIONS(105),
    [sym_mod] = ACTIONS(105),
    [sym_pow] = ACTIONS(105),
    [sym_and] = ACTIONS(105),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(105),
    [sym_rshift] = ACTIONS(105),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(105),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(105),
    [sym_eq] = ACTIONS(105),
    [sym_neq] = ACTIONS(105),
    [sym_delay] = ACTIONS(105),
    [sym_exp] = ACTIONS(107),
    [sym_log] = ACTIONS(107),
    [sym_log10] = ACTIONS(107),
    [sym_sqrt] = ACTIONS(107),
    [sym_abs] = ACTIONS(107),
    [sym_floor] = ACTIONS(107),
    [sym_ceil] = ACTIONS(107),
    [sym_rint] = ACTIONS(107),
    [sym_round] = ACTIONS(107),
    [sym_acos] = ACTIONS(107),
    [sym_asin] = ACTIONS(107),
    [sym_atan] = ACTIONS(107),
    [sym_cos] = ACTIONS(107),
    [sym_sin] = ACTIONS(107),
    [sym_tan] = ACTIONS(107),
    [sym_int_cast] = ACTIONS(107),
    [sym_float_cast] = ACTIONS(107),
    [sym_pow_fun] = ACTIONS(109),
    [sym_min] = ACTIONS(109),
    [sym_max] = ACTIONS(109),
    [sym_fmod] = ACTIONS(109),
    [sym_remainder] = ACTIONS(109),
    [sym_atan2] = ACTIONS(109),
    [sym_prefix_prim] = ACTIONS(109),
    [sym_attach] = ACTIONS(109),
    [sym_enable] = ACTIONS(109),
    [sym_control] = ACTIONS(109),
    [sym_wire] = ACTIONS(169),
    [sym_cut] = ACTIONS(169),
    [sym_mem] = ACTIONS(169),
    [anon_sym_component] = ACTIONS(113),
    [anon_sym_library] = ACTIONS(115),
    [sym_rdtable] = ACTIONS(117),
    [sym_rwtable] = ACTIONS(119),
    [sym_select2] = ACTIONS(117),
    [sym_select3] = ACTIONS(121),
    [sym_lowest] = ACTIONS(107),
    [sym_highest] = ACTIONS(107),
    [sym_assertbounds] = ACTIONS(117),
    [sym_int] = ACTIONS(169),
    [sym_real] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [sym__id] = ACTIONS(127),
  },
  [67] = {
    [sym__infix_expression] = STATE(74),
    [sym_infix] = STATE(74),
    [sym_partial] = STATE(74),
    [sym_prefix] = STATE(74),
    [sym_prim1] = STATE(74),
    [sym_prim2] = STATE(74),
    [sym_prim3] = STATE(74),
    [sym_prim4] = STATE(74),
    [sym_prim5] = STATE(74),
    [sym_function_call] = STATE(74),
    [sym_modifier] = STATE(74),
    [sym_access] = STATE(74),
    [sym__primitive] = STATE(74),
    [sym_lambda] = STATE(74),
    [sym_modulation] = STATE(74),
    [sym_pattern] = STATE(74),
    [sym_iteration] = STATE(74),
    [sym_substitution] = STATE(74),
    [sym_ffunction] = STATE(74),
    [sym_fconst] = STATE(74),
    [sym_fvariable] = STATE(74),
    [sym_waveform] = STATE(74),
    [sym_route] = STATE(74),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(74),
    [sym_library] = STATE(74),
    [sym__number] = STATE(74),
    [sym_id] = STATE(74),
    [sym_negate_id] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(173),
    [sym_cut] = ACTIONS(173),
    [sym_mem] = ACTIONS(173),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(173),
    [sym_real] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [68] = {
    [sym__infix_expression] = STATE(76),
    [sym_infix] = STATE(76),
    [sym_partial] = STATE(76),
    [sym_prefix] = STATE(76),
    [sym_prim1] = STATE(76),
    [sym_prim2] = STATE(76),
    [sym_prim3] = STATE(76),
    [sym_prim4] = STATE(76),
    [sym_prim5] = STATE(76),
    [sym_function_call] = STATE(76),
    [sym_modifier] = STATE(76),
    [sym_access] = STATE(76),
    [sym__primitive] = STATE(76),
    [sym_lambda] = STATE(76),
    [sym_modulation] = STATE(76),
    [sym_pattern] = STATE(76),
    [sym_iteration] = STATE(76),
    [sym_substitution] = STATE(76),
    [sym_ffunction] = STATE(76),
    [sym_fconst] = STATE(76),
    [sym_fvariable] = STATE(76),
    [sym_waveform] = STATE(76),
    [sym_route] = STATE(76),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(76),
    [sym_library] = STATE(76),
    [sym__number] = STATE(76),
    [sym_id] = STATE(76),
    [sym_negate_id] = STATE(76),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(177),
    [sym_cut] = ACTIONS(177),
    [sym_mem] = ACTIONS(177),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(177),
    [sym_real] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [69] = {
    [sym__infix_expression] = STATE(97),
    [sym_infix] = STATE(97),
    [sym_partial] = STATE(97),
    [sym_prefix] = STATE(97),
    [sym_prim1] = STATE(97),
    [sym_prim2] = STATE(97),
    [sym_prim3] = STATE(97),
    [sym_prim4] = STATE(97),
    [sym_prim5] = STATE(97),
    [sym_function_call] = STATE(97),
    [sym_modifier] = STATE(97),
    [sym_access] = STATE(97),
    [sym__primitive] = STATE(97),
    [sym_lambda] = STATE(97),
    [sym_modulation] = STATE(97),
    [sym_pattern] = STATE(97),
    [sym_iteration] = STATE(97),
    [sym_substitution] = STATE(97),
    [sym_ffunction] = STATE(97),
    [sym_fconst] = STATE(97),
    [sym_fvariable] = STATE(97),
    [sym_waveform] = STATE(97),
    [sym_route] = STATE(97),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(97),
    [sym_library] = STATE(97),
    [sym__number] = STATE(97),
    [sym_id] = STATE(97),
    [sym_negate_id] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(181),
    [sym_cut] = ACTIONS(181),
    [sym_mem] = ACTIONS(181),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(181),
    [sym_real] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [70] = {
    [sym__infix_expression] = STATE(96),
    [sym_infix] = STATE(96),
    [sym_partial] = STATE(96),
    [sym_prefix] = STATE(96),
    [sym_prim1] = STATE(96),
    [sym_prim2] = STATE(96),
    [sym_prim3] = STATE(96),
    [sym_prim4] = STATE(96),
    [sym_prim5] = STATE(96),
    [sym_function_call] = STATE(96),
    [sym_modifier] = STATE(96),
    [sym_access] = STATE(96),
    [sym__primitive] = STATE(96),
    [sym_lambda] = STATE(96),
    [sym_modulation] = STATE(96),
    [sym_pattern] = STATE(96),
    [sym_iteration] = STATE(96),
    [sym_substitution] = STATE(96),
    [sym_ffunction] = STATE(96),
    [sym_fconst] = STATE(96),
    [sym_fvariable] = STATE(96),
    [sym_waveform] = STATE(96),
    [sym_route] = STATE(96),
    [sym__infix] = STATE(125),
    [sym__prim1] = STATE(124),
    [sym__prim2] = STATE(123),
    [sym__prim3] = STATE(122),
    [sym__prim4] = STATE(121),
    [sym__prim5] = STATE(120),
    [sym_sub] = STATE(125),
    [sym_or] = STATE(125),
    [sym_component] = STATE(96),
    [sym_library] = STATE(96),
    [sym__number] = STATE(96),
    [sym_id] = STATE(96),
    [sym_negate_id] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [anon_sym_route] = ACTIONS(41),
    [sym_add] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_mult] = ACTIONS(47),
    [sym_div] = ACTIONS(47),
    [sym_mod] = ACTIONS(47),
    [sym_pow] = ACTIONS(47),
    [sym_and] = ACTIONS(47),
    [sym_xor] = ACTIONS(43),
    [sym_lshift] = ACTIONS(47),
    [sym_rshift] = ACTIONS(47),
    [sym_lt] = ACTIONS(43),
    [sym_le] = ACTIONS(47),
    [sym_gt] = ACTIONS(43),
    [sym_ge] = ACTIONS(47),
    [sym_eq] = ACTIONS(47),
    [sym_neq] = ACTIONS(47),
    [sym_delay] = ACTIONS(47),
    [sym_exp] = ACTIONS(49),
    [sym_log] = ACTIONS(49),
    [sym_log10] = ACTIONS(49),
    [sym_sqrt] = ACTIONS(49),
    [sym_abs] = ACTIONS(49),
    [sym_floor] = ACTIONS(49),
    [sym_ceil] = ACTIONS(49),
    [sym_rint] = ACTIONS(49),
    [sym_round] = ACTIONS(49),
    [sym_acos] = ACTIONS(49),
    [sym_asin] = ACTIONS(49),
    [sym_atan] = ACTIONS(49),
    [sym_cos] = ACTIONS(49),
    [sym_sin] = ACTIONS(49),
    [sym_tan] = ACTIONS(49),
    [sym_int_cast] = ACTIONS(49),
    [sym_float_cast] = ACTIONS(49),
    [sym_pow_fun] = ACTIONS(51),
    [sym_min] = ACTIONS(51),
    [sym_max] = ACTIONS(51),
    [sym_fmod] = ACTIONS(51),
    [sym_remainder] = ACTIONS(51),
    [sym_atan2] = ACTIONS(51),
    [sym_prefix_prim] = ACTIONS(51),
    [sym_attach] = ACTIONS(51),
    [sym_enable] = ACTIONS(51),
    [sym_control] = ACTIONS(51),
    [sym_wire] = ACTIONS(185),
    [sym_cut] = ACTIONS(185),
    [sym_mem] = ACTIONS(185),
    [anon_sym_component] = ACTIONS(55),
    [anon_sym_library] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(59),
    [sym_rwtable] = ACTIONS(61),
    [sym_select2] = ACTIONS(59),
    [sym_select3] = ACTIONS(63),
    [sym_lowest] = ACTIONS(49),
    [sym_highest] = ACTIONS(49),
    [sym_assertbounds] = ACTIONS(59),
    [sym_int] = ACTIONS(185),
    [sym_real] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(67),
    [sym__id] = ACTIONS(69),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_environment] = ACTIONS(191),
    [anon_sym_BSLASH] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_case] = ACTIONS(191),
    [sym_par] = ACTIONS(191),
    [sym_seq] = ACTIONS(191),
    [sym_sum] = ACTIONS(191),
    [sym_prod] = ACTIONS(191),
    [anon_sym_ffunction] = ACTIONS(191),
    [anon_sym_fconstant] = ACTIONS(191),
    [anon_sym_fvariable] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_waveform] = ACTIONS(191),
    [anon_sym_route] = ACTIONS(191),
    [sym_add] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [sym_mult] = ACTIONS(189),
    [sym_div] = ACTIONS(189),
    [sym_mod] = ACTIONS(189),
    [sym_pow] = ACTIONS(189),
    [sym_and] = ACTIONS(189),
    [sym_xor] = ACTIONS(191),
    [sym_lshift] = ACTIONS(189),
    [sym_rshift] = ACTIONS(189),
    [sym_lt] = ACTIONS(191),
    [sym_le] = ACTIONS(189),
    [sym_gt] = ACTIONS(191),
    [sym_ge] = ACTIONS(189),
    [sym_eq] = ACTIONS(189),
    [sym_neq] = ACTIONS(189),
    [sym_delay] = ACTIONS(189),
    [sym_exp] = ACTIONS(191),
    [sym_log] = ACTIONS(191),
    [sym_log10] = ACTIONS(191),
    [sym_sqrt] = ACTIONS(191),
    [sym_abs] = ACTIONS(191),
    [sym_floor] = ACTIONS(191),
    [sym_ceil] = ACTIONS(191),
    [sym_rint] = ACTIONS(191),
    [sym_round] = ACTIONS(191),
    [sym_acos] = ACTIONS(191),
    [sym_asin] = ACTIONS(191),
    [sym_atan] = ACTIONS(191),
    [sym_cos] = ACTIONS(191),
    [sym_sin] = ACTIONS(191),
    [sym_tan] = ACTIONS(191),
    [sym_int_cast] = ACTIONS(191),
    [sym_float_cast] = ACTIONS(191),
    [sym_pow_fun] = ACTIONS(191),
    [sym_min] = ACTIONS(191),
    [sym_max] = ACTIONS(191),
    [sym_fmod] = ACTIONS(191),
    [sym_remainder] = ACTIONS(191),
    [sym_atan2] = ACTIONS(191),
    [sym_prefix_prim] = ACTIONS(191),
    [sym_attach] = ACTIONS(191),
    [sym_enable] = ACTIONS(191),
    [sym_control] = ACTIONS(191),
    [sym_wire] = ACTIONS(191),
    [sym_cut] = ACTIONS(191),
    [sym_mem] = ACTIONS(191),
    [anon_sym_component] = ACTIONS(191),
    [anon_sym_library] = ACTIONS(191),
    [sym_rdtable] = ACTIONS(191),
    [sym_rwtable] = ACTIONS(191),
    [sym_select2] = ACTIONS(191),
    [sym_select3] = ACTIONS(191),
    [sym_lowest] = ACTIONS(191),
    [sym_highest] = ACTIONS(191),
    [sym_assertbounds] = ACTIONS(191),
    [sym_int] = ACTIONS(191),
    [sym_real] = ACTIONS(189),
    [anon_sym_COLON_COLON] = ACTIONS(189),
    [sym__id] = ACTIONS(191),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_environment] = ACTIONS(195),
    [anon_sym_BSLASH] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_case] = ACTIONS(195),
    [sym_par] = ACTIONS(195),
    [sym_seq] = ACTIONS(195),
    [sym_sum] = ACTIONS(195),
    [sym_prod] = ACTIONS(195),
    [anon_sym_ffunction] = ACTIONS(195),
    [anon_sym_fconstant] = ACTIONS(195),
    [anon_sym_fvariable] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_waveform] = ACTIONS(195),
    [anon_sym_route] = ACTIONS(195),
    [sym_add] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [sym_mult] = ACTIONS(193),
    [sym_div] = ACTIONS(193),
    [sym_mod] = ACTIONS(193),
    [sym_pow] = ACTIONS(193),
    [sym_and] = ACTIONS(193),
    [sym_xor] = ACTIONS(195),
    [sym_lshift] = ACTIONS(193),
    [sym_rshift] = ACTIONS(193),
    [sym_lt] = ACTIONS(195),
    [sym_le] = ACTIONS(193),
    [sym_gt] = ACTIONS(195),
    [sym_ge] = ACTIONS(193),
    [sym_eq] = ACTIONS(193),
    [sym_neq] = ACTIONS(193),
    [sym_delay] = ACTIONS(193),
    [sym_exp] = ACTIONS(195),
    [sym_log] = ACTIONS(195),
    [sym_log10] = ACTIONS(195),
    [sym_sqrt] = ACTIONS(195),
    [sym_abs] = ACTIONS(195),
    [sym_floor] = ACTIONS(195),
    [sym_ceil] = ACTIONS(195),
    [sym_rint] = ACTIONS(195),
    [sym_round] = ACTIONS(195),
    [sym_acos] = ACTIONS(195),
    [sym_asin] = ACTIONS(195),
    [sym_atan] = ACTIONS(195),
    [sym_cos] = ACTIONS(195),
    [sym_sin] = ACTIONS(195),
    [sym_tan] = ACTIONS(195),
    [sym_int_cast] = ACTIONS(195),
    [sym_float_cast] = ACTIONS(195),
    [sym_pow_fun] = ACTIONS(195),
    [sym_min] = ACTIONS(195),
    [sym_max] = ACTIONS(195),
    [sym_fmod] = ACTIONS(195),
    [sym_remainder] = ACTIONS(195),
    [sym_atan2] = ACTIONS(195),
    [sym_prefix_prim] = ACTIONS(195),
    [sym_attach] = ACTIONS(195),
    [sym_enable] = ACTIONS(195),
    [sym_control] = ACTIONS(195),
    [sym_wire] = ACTIONS(195),
    [sym_cut] = ACTIONS(195),
    [sym_mem] = ACTIONS(195),
    [anon_sym_component] = ACTIONS(195),
    [anon_sym_library] = ACTIONS(195),
    [sym_rdtable] = ACTIONS(195),
    [sym_rwtable] = ACTIONS(195),
    [sym_select2] = ACTIONS(195),
    [sym_select3] = ACTIONS(195),
    [sym_lowest] = ACTIONS(195),
    [sym_highest] = ACTIONS(195),
    [sym_assertbounds] = ACTIONS(195),
    [sym_int] = ACTIONS(195),
    [sym_real] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(193),
    [sym__id] = ACTIONS(195),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_substitutions,
    STATE(58), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 26,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [54] = 14,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      sym_add,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(215), 1,
      sym_pow,
    ACTIONS(217), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(58), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(213), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(197), 14,
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
  [120] = 10,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_pow,
    ACTIONS(217), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(58), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 24,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [178] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(58), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 25,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [234] = 17,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      sym_add,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(215), 1,
      sym_pow,
    ACTIONS(217), 1,
      sym_delay,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(104), 1,
      sym_substitutions,
    ACTIONS(225), 2,
      sym_lt,
      sym_gt,
    STATE(58), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(227), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(213), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(219), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [306] = 11,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_pow,
    ACTIONS(217), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(58), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(213), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(197), 17,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [366] = 5,
    ACTIONS(67), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym__id,
    STATE(102), 1,
      sym_id,
    ACTIONS(191), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(189), 26,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [412] = 4,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_id_repeat1,
    ACTIONS(231), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(229), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [455] = 4,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(80), 1,
      aux_sym_id_repeat1,
    ACTIONS(237), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(235), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [498] = 4,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(83), 1,
      aux_sym_id_repeat1,
    ACTIONS(231), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(229), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [541] = 4,
    ACTIONS(233), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_id_repeat1,
    ACTIONS(241), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(239), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [584] = 4,
    ACTIONS(247), 1,
      anon_sym_COLON_COLON,
    STATE(84), 1,
      aux_sym_id_repeat1,
    ACTIONS(245), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(243), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [627] = 11,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_pow,
    ACTIONS(260), 1,
      sym_delay,
    STATE(165), 1,
      sym_substitutions,
    STATE(66), 2,
      sym_sub,
      sym_or,
    STATE(164), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(256), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(197), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [683] = 17,
    ACTIONS(207), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_pow,
    ACTIONS(260), 1,
      sym_delay,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      sym_add,
    ACTIONS(270), 1,
      anon_sym_DASH,
    STATE(165), 1,
      sym_substitutions,
    ACTIONS(272), 2,
      sym_lt,
      sym_gt,
    STATE(66), 2,
      sym_sub,
      sym_or,
    STATE(164), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(274), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(262), 5,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(256), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [751] = 8,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    STATE(104), 1,
      sym_substitutions,
    STATE(70), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [801] = 8,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(165), 1,
      sym_substitutions,
    STATE(66), 2,
      sym_sub,
      sym_or,
    STATE(164), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(197), 21,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [851] = 14,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(276), 1,
      sym_add,
    ACTIONS(280), 1,
      sym_pow,
    ACTIONS(282), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(70), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(197), 10,
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
  [913] = 14,
    ACTIONS(207), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_pow,
    ACTIONS(260), 1,
      sym_delay,
    ACTIONS(268), 1,
      sym_add,
    ACTIONS(270), 1,
      anon_sym_DASH,
    STATE(165), 1,
      sym_substitutions,
    STATE(66), 2,
      sym_sub,
      sym_or,
    STATE(164), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(256), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(197), 10,
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
  [975] = 2,
    ACTIONS(245), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(243), 30,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1013] = 17,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      sym_add,
    ACTIONS(280), 1,
      sym_pow,
    ACTIONS(282), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    ACTIONS(284), 2,
      sym_lt,
      sym_gt,
    STATE(70), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(286), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(262), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(278), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [1081] = 9,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(282), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(70), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1133] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      sym_delay,
    STATE(165), 1,
      sym_substitutions,
    STATE(66), 2,
      sym_sub,
      sym_or,
    STATE(164), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(197), 20,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1185] = 10,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_pow,
    ACTIONS(260), 1,
      sym_delay,
    STATE(165), 1,
      sym_substitutions,
    STATE(66), 2,
      sym_sub,
      sym_or,
    STATE(164), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(197), 19,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1239] = 11,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      sym_pow,
    ACTIONS(282), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(70), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(278), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(197), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1295] = 10,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      sym_pow,
    ACTIONS(282), 1,
      sym_delay,
    STATE(104), 1,
      sym_substitutions,
    STATE(70), 2,
      sym_sub,
      sym_or,
    STATE(105), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(203), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(197), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1349] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1386] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1423] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1460] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1497] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1534] = 2,
    ACTIONS(310), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(308), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1571] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1608] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1645] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1682] = 2,
    ACTIONS(326), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(324), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1719] = 2,
    ACTIONS(330), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(328), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1756] = 2,
    ACTIONS(334), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(332), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1793] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1830] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1867] = 2,
    ACTIONS(346), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(344), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1904] = 2,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1941] = 2,
    ACTIONS(354), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(352), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1978] = 2,
    ACTIONS(358), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(356), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2015] = 2,
    ACTIONS(362), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(360), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2052] = 2,
    ACTIONS(366), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(364), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2089] = 2,
    ACTIONS(370), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(368), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2126] = 2,
    ACTIONS(374), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(372), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2163] = 3,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 28,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2202] = 3,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 28,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2241] = 3,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 28,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2280] = 3,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 28,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2319] = 3,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 28,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2358] = 3,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 28,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2397] = 2,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2434] = 2,
    ACTIONS(394), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(392), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2471] = 2,
    ACTIONS(398), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(396), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2508] = 2,
    ACTIONS(402), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(400), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2545] = 2,
    ACTIONS(406), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(404), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2582] = 2,
    ACTIONS(410), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(408), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2619] = 2,
    ACTIONS(414), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(412), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2656] = 2,
    ACTIONS(418), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(416), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2693] = 2,
    ACTIONS(422), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(420), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2730] = 2,
    ACTIONS(426), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(424), 29,
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
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2767] = 5,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(127), 1,
      sym__id,
    STATE(178), 1,
      sym_id,
    ACTIONS(191), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(189), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2809] = 5,
    ACTIONS(67), 1,
      anon_sym_COLON_COLON,
    ACTIONS(69), 1,
      sym__id,
    STATE(102), 1,
      sym_id,
    ACTIONS(191), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(189), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2851] = 4,
    ACTIONS(428), 1,
      anon_sym_COLON_COLON,
    STATE(138), 1,
      aux_sym_id_repeat1,
    ACTIONS(245), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(243), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2890] = 4,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    STATE(138), 1,
      aux_sym_id_repeat1,
    ACTIONS(241), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(239), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2929] = 4,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    STATE(138), 1,
      aux_sym_id_repeat1,
    ACTIONS(231), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(229), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2968] = 4,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    STATE(139), 1,
      aux_sym_id_repeat1,
    ACTIONS(231), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(229), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3007] = 4,
    ACTIONS(431), 1,
      anon_sym_COLON_COLON,
    STATE(140), 1,
      aux_sym_id_repeat1,
    ACTIONS(237), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(235), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3046] = 2,
    ACTIONS(245), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(243), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [3080] = 2,
    ACTIONS(402), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(400), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3113] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3146] = 2,
    ACTIONS(195), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(193), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3179] = 2,
    ACTIONS(426), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(424), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3212] = 2,
    ACTIONS(334), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(332), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3245] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3278] = 2,
    ACTIONS(330), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(328), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3311] = 2,
    ACTIONS(366), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(364), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3344] = 2,
    ACTIONS(326), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(324), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3377] = 2,
    ACTIONS(358), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(356), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3410] = 2,
    ACTIONS(394), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(392), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3443] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3476] = 2,
    ACTIONS(398), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(396), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3509] = 2,
    ACTIONS(362), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(360), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3542] = 2,
    ACTIONS(354), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(352), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3575] = 2,
    ACTIONS(414), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(412), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3608] = 2,
    ACTIONS(346), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(344), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3641] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3674] = 2,
    ACTIONS(374), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(372), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3707] = 2,
    ACTIONS(370), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(368), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3740] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3773] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3806] = 2,
    ACTIONS(310), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(308), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3839] = 3,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3874] = 3,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3909] = 2,
    ACTIONS(406), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(404), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3942] = 3,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3977] = 2,
    ACTIONS(410), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(408), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4010] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4043] = 3,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4078] = 3,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4113] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4146] = 2,
    ACTIONS(422), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(420), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4179] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4212] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4245] = 2,
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
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4278] = 2,
    ACTIONS(418), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(416), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4311] = 3,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4346] = 14,
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
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      sym_comment,
    STATE(272), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(220), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(420), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(421), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(183), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4400] = 14,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 1,
      anon_sym_declare,
    ACTIONS(454), 1,
      anon_sym_import,
    ACTIONS(457), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(463), 1,
      anon_sym_COLON_COLON,
    ACTIONS(466), 1,
      sym__id,
    ACTIONS(469), 1,
      sym_comment,
    STATE(272), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(220), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(420), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(421), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(460), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(183), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4454] = 9,
    ACTIONS(477), 1,
      anon_sym_COLON_COLON,
    ACTIONS(480), 1,
      sym__id,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    ACTIONS(472), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(474), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4489] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(193), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4523] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4557] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(189), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4591] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(190), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4625] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4659] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4693] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4727] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(186), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4761] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4795] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(191), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4829] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(184), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4863] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_variants,
    STATE(344), 1,
      sym_id,
    STATE(195), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(232), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(371), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(485), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4897] = 4,
    ACTIONS(507), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(509), 1,
      sym__doc_char,
    STATE(197), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(512), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4920] = 4,
    ACTIONS(515), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(517), 1,
      sym__doc_char,
    STATE(199), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(519), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4943] = 4,
    ACTIONS(521), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(523), 1,
      sym__doc_char,
    STATE(197), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(525), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4966] = 2,
    ACTIONS(527), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(529), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4982] = 2,
    ACTIONS(531), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(533), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4998] = 2,
    ACTIONS(535), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(537), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5014] = 2,
    ACTIONS(539), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(541), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5030] = 2,
    ACTIONS(543), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(545), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5046] = 2,
    ACTIONS(547), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(549), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5062] = 2,
    ACTIONS(553), 1,
      anon_sym_COLON,
    ACTIONS(551), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5077] = 4,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(555), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5096] = 2,
    ACTIONS(565), 1,
      anon_sym_COLON,
    ACTIONS(563), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5111] = 4,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(567), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5130] = 6,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(571), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [5153] = 2,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(577), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5168] = 2,
    ACTIONS(583), 1,
      anon_sym_COLON,
    ACTIONS(581), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5183] = 2,
    ACTIONS(587), 1,
      anon_sym_COLON,
    ACTIONS(585), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5198] = 6,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(589), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [5221] = 2,
    ACTIONS(593), 1,
      anon_sym_COLON,
    ACTIONS(591), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5236] = 2,
    ACTIONS(597), 1,
      anon_sym_COLON,
    ACTIONS(595), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5251] = 3,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
    STATE(218), 1,
      aux_sym_id_repeat1,
    ACTIONS(229), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5267] = 3,
    ACTIONS(601), 1,
      anon_sym_COLON_COLON,
    STATE(218), 1,
      aux_sym_id_repeat1,
    ACTIONS(243), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5283] = 3,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
    STATE(217), 1,
      aux_sym_id_repeat1,
    ACTIONS(235), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5299] = 4,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(604), 2,
      anon_sym_import,
      sym__id,
    STATE(223), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(606), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5317] = 3,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
    STATE(222), 1,
      aux_sym_id_repeat1,
    ACTIONS(229), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5333] = 3,
    ACTIONS(599), 1,
      anon_sym_COLON_COLON,
    STATE(218), 1,
      aux_sym_id_repeat1,
    ACTIONS(239), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5349] = 4,
    ACTIONS(615), 1,
      anon_sym_COLON_COLON,
    ACTIONS(610), 2,
      anon_sym_import,
      sym__id,
    STATE(223), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(612), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5367] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
  [5392] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [5417] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [5442] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(627), 1,
      anon_sym_SEMI,
  [5467] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(629), 1,
      anon_sym_SEMI,
  [5492] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [5517] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
  [5542] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
  [5567] = 4,
    ACTIONS(604), 1,
      sym__id,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    STATE(239), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(637), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5584] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [5609] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [5634] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(643), 1,
      anon_sym_SEMI,
  [5659] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
  [5684] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [5709] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [5734] = 4,
    ACTIONS(610), 1,
      sym__id,
    ACTIONS(615), 1,
      anon_sym_COLON_COLON,
    STATE(239), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(651), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5751] = 2,
    ACTIONS(539), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(541), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5764] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(654), 1,
      anon_sym_SEMI,
  [5789] = 1,
    ACTIONS(243), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5800] = 8,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(561), 1,
      anon_sym_TILDE,
    ACTIONS(573), 1,
      anon_sym_LT_COLON,
    ACTIONS(575), 1,
      anon_sym_COLON_GT,
    ACTIONS(619), 1,
      anon_sym_with,
    ACTIONS(621), 1,
      anon_sym_letrec,
    ACTIONS(656), 1,
      anon_sym_SEMI,
  [5825] = 7,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    STATE(294), 1,
      aux_sym_arguments_repeat1,
  [5847] = 2,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(670), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5859] = 3,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(674), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5872] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(680), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5889] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(682), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5906] = 6,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    ACTIONS(686), 1,
      anon_sym_COMMA,
  [5925] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(688), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5942] = 6,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(692), 1,
      anon_sym_COMMA,
  [5961] = 5,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(694), 1,
      anon_sym_LT_COLON,
    ACTIONS(696), 1,
      anon_sym_COLON_GT,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5978] = 6,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(700), 1,
      anon_sym_COMMA,
  [5997] = 5,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(694), 1,
      anon_sym_LT_COLON,
    ACTIONS(696), 1,
      anon_sym_COLON_GT,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6014] = 3,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(674), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [6027] = 6,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_COMMA,
  [6046] = 5,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(694), 1,
      anon_sym_LT_COLON,
    ACTIONS(696), 1,
      anon_sym_COLON_GT,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6063] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [6079] = 4,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(712), 1,
      anon_sym_where,
    ACTIONS(714), 1,
      anon_sym_SQUOTE,
    STATE(263), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [6093] = 3,
    ACTIONS(718), 1,
      anon_sym_SQUOTE,
    ACTIONS(716), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(260), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [6105] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [6121] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(723), 1,
      anon_sym_COMMA,
  [6137] = 4,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      anon_sym_SQUOTE,
    ACTIONS(725), 1,
      anon_sym_where,
    STATE(260), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [6151] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(727), 1,
      anon_sym_COMMA,
  [6167] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(729), 1,
      anon_sym_COMMA,
  [6183] = 5,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(733), 1,
      sym_int_cast,
    ACTIONS(735), 1,
      sym_float_cast,
    ACTIONS(737), 1,
      sym_any_cast,
    STATE(451), 1,
      sym_parameter_types,
  [6199] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [6215] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(741), 1,
      anon_sym_COMMA,
  [6231] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(345), 1,
      sym__func_name,
    STATE(348), 1,
      sym_id,
    STATE(417), 1,
      sym_function_names,
  [6247] = 5,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_TILDE,
    ACTIONS(666), 1,
      anon_sym_LT_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_GT,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
  [6263] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(348), 1,
      sym_id,
    STATE(350), 1,
      sym__func_name,
  [6276] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(747), 1,
      anon_sym_import,
    STATE(341), 1,
      sym_id,
  [6289] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(331), 1,
      sym_id,
    STATE(385), 1,
      sym_parameters,
  [6302] = 3,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(285), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6313] = 3,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    STATE(386), 1,
      sym_rules,
    STATE(274), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6324] = 4,
    ACTIONS(753), 1,
      sym_int_cast,
    ACTIONS(755), 1,
      sym_float_cast,
    STATE(269), 1,
      sym__type,
    STATE(387), 1,
      sym_signature,
  [6337] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(331), 1,
      sym_id,
    STATE(445), 1,
      sym_parameters,
  [6350] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(331), 1,
      sym_id,
    STATE(360), 1,
      sym_parameters,
  [6363] = 3,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
    STATE(379), 1,
      sym_rules,
    STATE(274), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6374] = 4,
    ACTIONS(757), 1,
      sym_int,
    ACTIONS(759), 1,
      sym_real,
    STATE(319), 1,
      sym__number,
    STATE(380), 1,
      sym_values,
  [6387] = 4,
    ACTIONS(757), 1,
      sym_int,
    ACTIONS(759), 1,
      sym_real,
    STATE(319), 1,
      sym__number,
    STATE(393), 1,
      sym_values,
  [6400] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(331), 1,
      sym_id,
    STATE(365), 1,
      sym_parameters,
  [6413] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    ACTIONS(761), 1,
      sym_string,
    STATE(408), 1,
      sym_id,
  [6426] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(343), 1,
      sym__func_name,
    STATE(348), 1,
      sym_id,
  [6439] = 3,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(285), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6450] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(348), 1,
      sym_id,
    STATE(435), 1,
      sym__func_name,
  [6463] = 4,
    ACTIONS(753), 1,
      sym_int_cast,
    ACTIONS(755), 1,
      sym_float_cast,
    STATE(269), 1,
      sym__type,
    STATE(447), 1,
      sym_signature,
  [6476] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(430), 1,
      sym_id,
  [6486] = 3,
    ACTIONS(753), 1,
      sym_int_cast,
    ACTIONS(755), 1,
      sym_float_cast,
    STATE(321), 1,
      sym__type,
  [6496] = 2,
    ACTIONS(770), 1,
      anon_sym_COLON,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6504] = 3,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_parameter_types_repeat1,
  [6514] = 2,
    STATE(396), 1,
      sym__include_file,
    ACTIONS(776), 2,
      sym_string,
      sym_fstring,
  [6522] = 2,
    STATE(395), 1,
      sym__include_file,
    ACTIONS(776), 2,
      sym_string,
      sym_fstring,
  [6530] = 3,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_arguments_repeat1,
  [6540] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_parameter_types_repeat1,
  [6550] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(441), 1,
      sym_id,
  [6560] = 3,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_values_repeat1,
  [6570] = 3,
    ACTIONS(786), 1,
      sym_int,
    ACTIONS(788), 1,
      sym_real,
    STATE(334), 1,
      sym__number,
  [6580] = 3,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_arguments_repeat1,
  [6590] = 3,
    ACTIONS(67), 1,
      anon_sym_COLON_COLON,
    ACTIONS(793), 1,
      sym__id,
    STATE(117), 1,
      sym_id,
  [6600] = 3,
    ACTIONS(795), 1,
      sym_int_cast,
    ACTIONS(797), 1,
      sym_float_cast,
    ACTIONS(799), 1,
      sym_any_cast,
  [6610] = 3,
    ACTIONS(801), 1,
      sym_string,
    STATE(309), 1,
      sym_modulator,
    STATE(428), 1,
      sym_modulators,
  [6620] = 2,
    STATE(433), 1,
      sym__include_file,
    ACTIONS(776), 2,
      sym_string,
      sym_fstring,
  [6628] = 3,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(304), 1,
      aux_sym_values_repeat1,
  [6638] = 1,
    ACTIONS(808), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [6644] = 3,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_DASH_GT,
    STATE(306), 1,
      aux_sym_modulators_repeat1,
  [6654] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(431), 1,
      sym_id,
  [6664] = 3,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_parameters_repeat1,
  [6674] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_DASH_GT,
    STATE(328), 1,
      aux_sym_modulators_repeat1,
  [6684] = 3,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_parameter_types_repeat1,
  [6694] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      aux_sym_parameter_types_repeat1,
  [6704] = 3,
    ACTIONS(753), 1,
      sym_int_cast,
    ACTIONS(755), 1,
      sym_float_cast,
    STATE(322), 1,
      sym__type,
  [6714] = 2,
    STATE(434), 1,
      sym__include_file,
    ACTIONS(776), 2,
      sym_string,
      sym_fstring,
  [6722] = 3,
    ACTIONS(753), 1,
      sym_int_cast,
    ACTIONS(755), 1,
      sym_float_cast,
    STATE(288), 1,
      sym__type,
  [6732] = 3,
    ACTIONS(753), 1,
      sym_int_cast,
    ACTIONS(755), 1,
      sym_float_cast,
    STATE(307), 1,
      sym__type,
  [6742] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(410), 1,
      sym_id,
  [6752] = 2,
    STATE(450), 1,
      sym__include_file,
    ACTIONS(776), 2,
      sym_string,
      sym_fstring,
  [6760] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_parameter_types_repeat1,
  [6770] = 3,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    STATE(297), 1,
      aux_sym_values_repeat1,
  [6780] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_parameter_types_repeat1,
  [6790] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(355), 1,
      sym_id,
  [6800] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(418), 1,
      sym_id,
  [6810] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_parameter_types_repeat1,
  [6820] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(446), 1,
      sym_id,
  [6830] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(283), 1,
      sym_id,
  [6840] = 2,
    STATE(444), 1,
      sym__include_file,
    ACTIONS(776), 2,
      sym_string,
      sym_fstring,
  [6848] = 3,
    ACTIONS(801), 1,
      sym_string,
    STATE(309), 1,
      sym_modulator,
    STATE(357), 1,
      sym_modulators,
  [6858] = 3,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_DASH_GT,
    STATE(306), 1,
      aux_sym_modulators_repeat1,
  [6868] = 3,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(841), 1,
      sym__id,
    STATE(151), 1,
      sym_id,
  [6878] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(341), 1,
      sym_id,
  [6888] = 3,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_parameters_repeat1,
  [6898] = 3,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_parameters_repeat1,
  [6908] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(743), 1,
      sym__id,
    STATE(339), 1,
      sym_id,
  [6918] = 1,
    ACTIONS(806), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6923] = 2,
    ACTIONS(801), 1,
      sym_string,
    STATE(342), 1,
      sym_modulator,
  [6930] = 1,
    ACTIONS(849), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6935] = 1,
    ACTIONS(851), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6940] = 2,
    ACTIONS(853), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_environment,
  [6947] = 1,
    ACTIONS(855), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6952] = 2,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_environment,
  [6959] = 2,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
  [6966] = 1,
    ACTIONS(813), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6971] = 2,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      anon_sym_PIPE,
  [6978] = 2,
    ACTIONS(867), 1,
      anon_sym_EQ,
    ACTIONS(869), 1,
      anon_sym_LPAREN,
  [6985] = 2,
    ACTIONS(871), 1,
      anon_sym_LPAREN,
    ACTIONS(873), 1,
      anon_sym_PIPE,
  [6992] = 2,
    ACTIONS(875), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_rec_environment,
  [6999] = 2,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym_environment,
  [7006] = 1,
    ACTIONS(877), 2,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [7011] = 1,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7016] = 2,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
    ACTIONS(883), 1,
      anon_sym_PIPE,
  [7023] = 1,
    ACTIONS(824), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7028] = 1,
    ACTIONS(885), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7033] = 1,
    ACTIONS(887), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7038] = 1,
    ACTIONS(889), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [7043] = 1,
    ACTIONS(891), 1,
      anon_sym_COMMA,
  [7047] = 1,
    ACTIONS(893), 1,
      sym_string,
  [7051] = 1,
    ACTIONS(895), 1,
      anon_sym_DASH_GT,
  [7055] = 1,
    ACTIONS(897), 1,
      sym_string,
  [7059] = 1,
    ACTIONS(899), 1,
      sym_string,
  [7063] = 1,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
  [7067] = 1,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
  [7071] = 1,
    ACTIONS(905), 1,
      anon_sym_SEMI,
  [7075] = 1,
    ACTIONS(907), 1,
      anon_sym_SEMI,
  [7079] = 1,
    ACTIONS(909), 1,
      anon_sym_EQ,
  [7083] = 1,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
  [7087] = 1,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
  [7091] = 1,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
  [7095] = 1,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
  [7099] = 1,
    ACTIONS(919), 1,
      anon_sym_LBRACE,
  [7103] = 1,
    ACTIONS(921), 1,
      sym__id,
  [7107] = 1,
    ACTIONS(923), 1,
      anon_sym_SEMI,
  [7111] = 1,
    ACTIONS(925), 1,
      sym__id,
  [7115] = 1,
    ACTIONS(927), 1,
      anon_sym_SEMI,
  [7119] = 1,
    ACTIONS(929), 1,
      anon_sym_LPAREN,
  [7123] = 1,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
  [7127] = 1,
    ACTIONS(933), 1,
      anon_sym_EQ,
  [7131] = 1,
    ACTIONS(935), 1,
      anon_sym_LPAREN,
  [7135] = 1,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
  [7139] = 1,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
  [7143] = 1,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
  [7147] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [7151] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [7155] = 1,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
  [7159] = 1,
    ACTIONS(949), 1,
      anon_sym_LBRACE,
  [7163] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [7167] = 1,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [7171] = 1,
    ACTIONS(955), 1,
      anon_sym_COMMA,
  [7175] = 1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
  [7179] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [7183] = 1,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [7187] = 1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
  [7191] = 1,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
  [7195] = 1,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
  [7199] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [7203] = 1,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
  [7207] = 1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [7211] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [7215] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [7219] = 1,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
  [7223] = 1,
    ACTIONS(981), 1,
      sym_string,
  [7227] = 1,
    ACTIONS(983), 1,
      sym__id,
  [7231] = 1,
    ACTIONS(985), 1,
      sym__id,
  [7235] = 1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
  [7239] = 1,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
  [7243] = 1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
  [7247] = 1,
    ACTIONS(993), 1,
      sym_string,
  [7251] = 1,
    ACTIONS(995), 1,
      sym_string,
  [7255] = 1,
    ACTIONS(997), 1,
      sym_string,
  [7259] = 1,
    ACTIONS(999), 1,
      anon_sym_SEMI,
  [7263] = 1,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
  [7267] = 1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
  [7271] = 1,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [7275] = 1,
    ACTIONS(1007), 1,
      sym__id,
  [7279] = 1,
    ACTIONS(1009), 1,
      sym_string,
  [7283] = 1,
    ACTIONS(1011), 1,
      anon_sym_DOT,
  [7287] = 1,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
  [7291] = 1,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [7295] = 1,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
  [7299] = 1,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [7303] = 1,
    ACTIONS(1021), 1,
      anon_sym_SEMI,
  [7307] = 1,
    ACTIONS(1023), 1,
      anon_sym_SEMI,
  [7311] = 1,
    ACTIONS(1025), 1,
      sym_string,
  [7315] = 1,
    ACTIONS(1027), 1,
      ts_builtin_sym_end,
  [7319] = 1,
    ACTIONS(1029), 1,
      anon_sym_LBRACE,
  [7323] = 1,
    ACTIONS(1031), 1,
      anon_sym_LBRACE,
  [7327] = 1,
    ACTIONS(1033), 1,
      anon_sym_LPAREN,
  [7331] = 1,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [7335] = 1,
    ACTIONS(1037), 1,
      anon_sym_DASH_GT,
  [7339] = 1,
    ACTIONS(1039), 1,
      anon_sym_EQ_GT,
  [7343] = 1,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
  [7347] = 1,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
  [7351] = 1,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
  [7355] = 1,
    ACTIONS(1047), 1,
      anon_sym_COMMA,
  [7359] = 1,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
  [7363] = 1,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
  [7367] = 1,
    ACTIONS(1053), 1,
      sym__id,
  [7371] = 1,
    ACTIONS(1055), 1,
      anon_sym_COMMA,
  [7375] = 1,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [7379] = 1,
    ACTIONS(1059), 1,
      anon_sym_DOT,
  [7383] = 1,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
  [7387] = 1,
    ACTIONS(1063), 1,
      anon_sym_EQ,
  [7391] = 1,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
  [7395] = 1,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
  [7399] = 1,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
  [7403] = 1,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
  [7407] = 1,
    ACTIONS(1073), 1,
      anon_sym_COMMA,
  [7411] = 1,
    ACTIONS(1075), 1,
      anon_sym_COMMA,
  [7415] = 1,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
  [7419] = 1,
    ACTIONS(1079), 1,
      anon_sym_LPAREN,
  [7423] = 1,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
  [7427] = 1,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
  [7431] = 1,
    ACTIONS(1085), 1,
      anon_sym_COMMA,
  [7435] = 1,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
  [7439] = 1,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
  [7443] = 1,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(73)] = 0,
  [SMALL_STATE(74)] = 54,
  [SMALL_STATE(75)] = 120,
  [SMALL_STATE(76)] = 178,
  [SMALL_STATE(77)] = 234,
  [SMALL_STATE(78)] = 306,
  [SMALL_STATE(79)] = 366,
  [SMALL_STATE(80)] = 412,
  [SMALL_STATE(81)] = 455,
  [SMALL_STATE(82)] = 498,
  [SMALL_STATE(83)] = 541,
  [SMALL_STATE(84)] = 584,
  [SMALL_STATE(85)] = 627,
  [SMALL_STATE(86)] = 683,
  [SMALL_STATE(87)] = 751,
  [SMALL_STATE(88)] = 801,
  [SMALL_STATE(89)] = 851,
  [SMALL_STATE(90)] = 913,
  [SMALL_STATE(91)] = 975,
  [SMALL_STATE(92)] = 1013,
  [SMALL_STATE(93)] = 1081,
  [SMALL_STATE(94)] = 1133,
  [SMALL_STATE(95)] = 1185,
  [SMALL_STATE(96)] = 1239,
  [SMALL_STATE(97)] = 1295,
  [SMALL_STATE(98)] = 1349,
  [SMALL_STATE(99)] = 1386,
  [SMALL_STATE(100)] = 1423,
  [SMALL_STATE(101)] = 1460,
  [SMALL_STATE(102)] = 1497,
  [SMALL_STATE(103)] = 1534,
  [SMALL_STATE(104)] = 1571,
  [SMALL_STATE(105)] = 1608,
  [SMALL_STATE(106)] = 1645,
  [SMALL_STATE(107)] = 1682,
  [SMALL_STATE(108)] = 1719,
  [SMALL_STATE(109)] = 1756,
  [SMALL_STATE(110)] = 1793,
  [SMALL_STATE(111)] = 1830,
  [SMALL_STATE(112)] = 1867,
  [SMALL_STATE(113)] = 1904,
  [SMALL_STATE(114)] = 1941,
  [SMALL_STATE(115)] = 1978,
  [SMALL_STATE(116)] = 2015,
  [SMALL_STATE(117)] = 2052,
  [SMALL_STATE(118)] = 2089,
  [SMALL_STATE(119)] = 2126,
  [SMALL_STATE(120)] = 2163,
  [SMALL_STATE(121)] = 2202,
  [SMALL_STATE(122)] = 2241,
  [SMALL_STATE(123)] = 2280,
  [SMALL_STATE(124)] = 2319,
  [SMALL_STATE(125)] = 2358,
  [SMALL_STATE(126)] = 2397,
  [SMALL_STATE(127)] = 2434,
  [SMALL_STATE(128)] = 2471,
  [SMALL_STATE(129)] = 2508,
  [SMALL_STATE(130)] = 2545,
  [SMALL_STATE(131)] = 2582,
  [SMALL_STATE(132)] = 2619,
  [SMALL_STATE(133)] = 2656,
  [SMALL_STATE(134)] = 2693,
  [SMALL_STATE(135)] = 2730,
  [SMALL_STATE(136)] = 2767,
  [SMALL_STATE(137)] = 2809,
  [SMALL_STATE(138)] = 2851,
  [SMALL_STATE(139)] = 2890,
  [SMALL_STATE(140)] = 2929,
  [SMALL_STATE(141)] = 2968,
  [SMALL_STATE(142)] = 3007,
  [SMALL_STATE(143)] = 3046,
  [SMALL_STATE(144)] = 3080,
  [SMALL_STATE(145)] = 3113,
  [SMALL_STATE(146)] = 3146,
  [SMALL_STATE(147)] = 3179,
  [SMALL_STATE(148)] = 3212,
  [SMALL_STATE(149)] = 3245,
  [SMALL_STATE(150)] = 3278,
  [SMALL_STATE(151)] = 3311,
  [SMALL_STATE(152)] = 3344,
  [SMALL_STATE(153)] = 3377,
  [SMALL_STATE(154)] = 3410,
  [SMALL_STATE(155)] = 3443,
  [SMALL_STATE(156)] = 3476,
  [SMALL_STATE(157)] = 3509,
  [SMALL_STATE(158)] = 3542,
  [SMALL_STATE(159)] = 3575,
  [SMALL_STATE(160)] = 3608,
  [SMALL_STATE(161)] = 3641,
  [SMALL_STATE(162)] = 3674,
  [SMALL_STATE(163)] = 3707,
  [SMALL_STATE(164)] = 3740,
  [SMALL_STATE(165)] = 3773,
  [SMALL_STATE(166)] = 3806,
  [SMALL_STATE(167)] = 3839,
  [SMALL_STATE(168)] = 3874,
  [SMALL_STATE(169)] = 3909,
  [SMALL_STATE(170)] = 3942,
  [SMALL_STATE(171)] = 3977,
  [SMALL_STATE(172)] = 4010,
  [SMALL_STATE(173)] = 4043,
  [SMALL_STATE(174)] = 4078,
  [SMALL_STATE(175)] = 4113,
  [SMALL_STATE(176)] = 4146,
  [SMALL_STATE(177)] = 4179,
  [SMALL_STATE(178)] = 4212,
  [SMALL_STATE(179)] = 4245,
  [SMALL_STATE(180)] = 4278,
  [SMALL_STATE(181)] = 4311,
  [SMALL_STATE(182)] = 4346,
  [SMALL_STATE(183)] = 4400,
  [SMALL_STATE(184)] = 4454,
  [SMALL_STATE(185)] = 4489,
  [SMALL_STATE(186)] = 4523,
  [SMALL_STATE(187)] = 4557,
  [SMALL_STATE(188)] = 4591,
  [SMALL_STATE(189)] = 4625,
  [SMALL_STATE(190)] = 4659,
  [SMALL_STATE(191)] = 4693,
  [SMALL_STATE(192)] = 4727,
  [SMALL_STATE(193)] = 4761,
  [SMALL_STATE(194)] = 4795,
  [SMALL_STATE(195)] = 4829,
  [SMALL_STATE(196)] = 4863,
  [SMALL_STATE(197)] = 4897,
  [SMALL_STATE(198)] = 4920,
  [SMALL_STATE(199)] = 4943,
  [SMALL_STATE(200)] = 4966,
  [SMALL_STATE(201)] = 4982,
  [SMALL_STATE(202)] = 4998,
  [SMALL_STATE(203)] = 5014,
  [SMALL_STATE(204)] = 5030,
  [SMALL_STATE(205)] = 5046,
  [SMALL_STATE(206)] = 5062,
  [SMALL_STATE(207)] = 5077,
  [SMALL_STATE(208)] = 5096,
  [SMALL_STATE(209)] = 5111,
  [SMALL_STATE(210)] = 5130,
  [SMALL_STATE(211)] = 5153,
  [SMALL_STATE(212)] = 5168,
  [SMALL_STATE(213)] = 5183,
  [SMALL_STATE(214)] = 5198,
  [SMALL_STATE(215)] = 5221,
  [SMALL_STATE(216)] = 5236,
  [SMALL_STATE(217)] = 5251,
  [SMALL_STATE(218)] = 5267,
  [SMALL_STATE(219)] = 5283,
  [SMALL_STATE(220)] = 5299,
  [SMALL_STATE(221)] = 5317,
  [SMALL_STATE(222)] = 5333,
  [SMALL_STATE(223)] = 5349,
  [SMALL_STATE(224)] = 5367,
  [SMALL_STATE(225)] = 5392,
  [SMALL_STATE(226)] = 5417,
  [SMALL_STATE(227)] = 5442,
  [SMALL_STATE(228)] = 5467,
  [SMALL_STATE(229)] = 5492,
  [SMALL_STATE(230)] = 5517,
  [SMALL_STATE(231)] = 5542,
  [SMALL_STATE(232)] = 5567,
  [SMALL_STATE(233)] = 5584,
  [SMALL_STATE(234)] = 5609,
  [SMALL_STATE(235)] = 5634,
  [SMALL_STATE(236)] = 5659,
  [SMALL_STATE(237)] = 5684,
  [SMALL_STATE(238)] = 5709,
  [SMALL_STATE(239)] = 5734,
  [SMALL_STATE(240)] = 5751,
  [SMALL_STATE(241)] = 5764,
  [SMALL_STATE(242)] = 5789,
  [SMALL_STATE(243)] = 5800,
  [SMALL_STATE(244)] = 5825,
  [SMALL_STATE(245)] = 5847,
  [SMALL_STATE(246)] = 5859,
  [SMALL_STATE(247)] = 5872,
  [SMALL_STATE(248)] = 5889,
  [SMALL_STATE(249)] = 5906,
  [SMALL_STATE(250)] = 5925,
  [SMALL_STATE(251)] = 5942,
  [SMALL_STATE(252)] = 5961,
  [SMALL_STATE(253)] = 5978,
  [SMALL_STATE(254)] = 5997,
  [SMALL_STATE(255)] = 6014,
  [SMALL_STATE(256)] = 6027,
  [SMALL_STATE(257)] = 6046,
  [SMALL_STATE(258)] = 6063,
  [SMALL_STATE(259)] = 6079,
  [SMALL_STATE(260)] = 6093,
  [SMALL_STATE(261)] = 6105,
  [SMALL_STATE(262)] = 6121,
  [SMALL_STATE(263)] = 6137,
  [SMALL_STATE(264)] = 6151,
  [SMALL_STATE(265)] = 6167,
  [SMALL_STATE(266)] = 6183,
  [SMALL_STATE(267)] = 6199,
  [SMALL_STATE(268)] = 6215,
  [SMALL_STATE(269)] = 6231,
  [SMALL_STATE(270)] = 6247,
  [SMALL_STATE(271)] = 6263,
  [SMALL_STATE(272)] = 6276,
  [SMALL_STATE(273)] = 6289,
  [SMALL_STATE(274)] = 6302,
  [SMALL_STATE(275)] = 6313,
  [SMALL_STATE(276)] = 6324,
  [SMALL_STATE(277)] = 6337,
  [SMALL_STATE(278)] = 6350,
  [SMALL_STATE(279)] = 6363,
  [SMALL_STATE(280)] = 6374,
  [SMALL_STATE(281)] = 6387,
  [SMALL_STATE(282)] = 6400,
  [SMALL_STATE(283)] = 6413,
  [SMALL_STATE(284)] = 6426,
  [SMALL_STATE(285)] = 6439,
  [SMALL_STATE(286)] = 6450,
  [SMALL_STATE(287)] = 6463,
  [SMALL_STATE(288)] = 6476,
  [SMALL_STATE(289)] = 6486,
  [SMALL_STATE(290)] = 6496,
  [SMALL_STATE(291)] = 6504,
  [SMALL_STATE(292)] = 6514,
  [SMALL_STATE(293)] = 6522,
  [SMALL_STATE(294)] = 6530,
  [SMALL_STATE(295)] = 6540,
  [SMALL_STATE(296)] = 6550,
  [SMALL_STATE(297)] = 6560,
  [SMALL_STATE(298)] = 6570,
  [SMALL_STATE(299)] = 6580,
  [SMALL_STATE(300)] = 6590,
  [SMALL_STATE(301)] = 6600,
  [SMALL_STATE(302)] = 6610,
  [SMALL_STATE(303)] = 6620,
  [SMALL_STATE(304)] = 6628,
  [SMALL_STATE(305)] = 6638,
  [SMALL_STATE(306)] = 6644,
  [SMALL_STATE(307)] = 6654,
  [SMALL_STATE(308)] = 6664,
  [SMALL_STATE(309)] = 6674,
  [SMALL_STATE(310)] = 6684,
  [SMALL_STATE(311)] = 6694,
  [SMALL_STATE(312)] = 6704,
  [SMALL_STATE(313)] = 6714,
  [SMALL_STATE(314)] = 6722,
  [SMALL_STATE(315)] = 6732,
  [SMALL_STATE(316)] = 6742,
  [SMALL_STATE(317)] = 6752,
  [SMALL_STATE(318)] = 6760,
  [SMALL_STATE(319)] = 6770,
  [SMALL_STATE(320)] = 6780,
  [SMALL_STATE(321)] = 6790,
  [SMALL_STATE(322)] = 6800,
  [SMALL_STATE(323)] = 6810,
  [SMALL_STATE(324)] = 6820,
  [SMALL_STATE(325)] = 6830,
  [SMALL_STATE(326)] = 6840,
  [SMALL_STATE(327)] = 6848,
  [SMALL_STATE(328)] = 6858,
  [SMALL_STATE(329)] = 6868,
  [SMALL_STATE(330)] = 6878,
  [SMALL_STATE(331)] = 6888,
  [SMALL_STATE(332)] = 6898,
  [SMALL_STATE(333)] = 6908,
  [SMALL_STATE(334)] = 6918,
  [SMALL_STATE(335)] = 6923,
  [SMALL_STATE(336)] = 6930,
  [SMALL_STATE(337)] = 6935,
  [SMALL_STATE(338)] = 6940,
  [SMALL_STATE(339)] = 6947,
  [SMALL_STATE(340)] = 6952,
  [SMALL_STATE(341)] = 6959,
  [SMALL_STATE(342)] = 6966,
  [SMALL_STATE(343)] = 6971,
  [SMALL_STATE(344)] = 6978,
  [SMALL_STATE(345)] = 6985,
  [SMALL_STATE(346)] = 6992,
  [SMALL_STATE(347)] = 6999,
  [SMALL_STATE(348)] = 7006,
  [SMALL_STATE(349)] = 7011,
  [SMALL_STATE(350)] = 7016,
  [SMALL_STATE(351)] = 7023,
  [SMALL_STATE(352)] = 7028,
  [SMALL_STATE(353)] = 7033,
  [SMALL_STATE(354)] = 7038,
  [SMALL_STATE(355)] = 7043,
  [SMALL_STATE(356)] = 7047,
  [SMALL_STATE(357)] = 7051,
  [SMALL_STATE(358)] = 7055,
  [SMALL_STATE(359)] = 7059,
  [SMALL_STATE(360)] = 7063,
  [SMALL_STATE(361)] = 7067,
  [SMALL_STATE(362)] = 7071,
  [SMALL_STATE(363)] = 7075,
  [SMALL_STATE(364)] = 7079,
  [SMALL_STATE(365)] = 7083,
  [SMALL_STATE(366)] = 7087,
  [SMALL_STATE(367)] = 7091,
  [SMALL_STATE(368)] = 7095,
  [SMALL_STATE(369)] = 7099,
  [SMALL_STATE(370)] = 7103,
  [SMALL_STATE(371)] = 7107,
  [SMALL_STATE(372)] = 7111,
  [SMALL_STATE(373)] = 7115,
  [SMALL_STATE(374)] = 7119,
  [SMALL_STATE(375)] = 7123,
  [SMALL_STATE(376)] = 7127,
  [SMALL_STATE(377)] = 7131,
  [SMALL_STATE(378)] = 7135,
  [SMALL_STATE(379)] = 7139,
  [SMALL_STATE(380)] = 7143,
  [SMALL_STATE(381)] = 7147,
  [SMALL_STATE(382)] = 7151,
  [SMALL_STATE(383)] = 7155,
  [SMALL_STATE(384)] = 7159,
  [SMALL_STATE(385)] = 7163,
  [SMALL_STATE(386)] = 7167,
  [SMALL_STATE(387)] = 7171,
  [SMALL_STATE(388)] = 7175,
  [SMALL_STATE(389)] = 7179,
  [SMALL_STATE(390)] = 7183,
  [SMALL_STATE(391)] = 7187,
  [SMALL_STATE(392)] = 7191,
  [SMALL_STATE(393)] = 7195,
  [SMALL_STATE(394)] = 7199,
  [SMALL_STATE(395)] = 7203,
  [SMALL_STATE(396)] = 7207,
  [SMALL_STATE(397)] = 7211,
  [SMALL_STATE(398)] = 7215,
  [SMALL_STATE(399)] = 7219,
  [SMALL_STATE(400)] = 7223,
  [SMALL_STATE(401)] = 7227,
  [SMALL_STATE(402)] = 7231,
  [SMALL_STATE(403)] = 7235,
  [SMALL_STATE(404)] = 7239,
  [SMALL_STATE(405)] = 7243,
  [SMALL_STATE(406)] = 7247,
  [SMALL_STATE(407)] = 7251,
  [SMALL_STATE(408)] = 7255,
  [SMALL_STATE(409)] = 7259,
  [SMALL_STATE(410)] = 7263,
  [SMALL_STATE(411)] = 7267,
  [SMALL_STATE(412)] = 7271,
  [SMALL_STATE(413)] = 7275,
  [SMALL_STATE(414)] = 7279,
  [SMALL_STATE(415)] = 7283,
  [SMALL_STATE(416)] = 7287,
  [SMALL_STATE(417)] = 7291,
  [SMALL_STATE(418)] = 7295,
  [SMALL_STATE(419)] = 7299,
  [SMALL_STATE(420)] = 7303,
  [SMALL_STATE(421)] = 7307,
  [SMALL_STATE(422)] = 7311,
  [SMALL_STATE(423)] = 7315,
  [SMALL_STATE(424)] = 7319,
  [SMALL_STATE(425)] = 7323,
  [SMALL_STATE(426)] = 7327,
  [SMALL_STATE(427)] = 7331,
  [SMALL_STATE(428)] = 7335,
  [SMALL_STATE(429)] = 7339,
  [SMALL_STATE(430)] = 7343,
  [SMALL_STATE(431)] = 7347,
  [SMALL_STATE(432)] = 7351,
  [SMALL_STATE(433)] = 7355,
  [SMALL_STATE(434)] = 7359,
  [SMALL_STATE(435)] = 7363,
  [SMALL_STATE(436)] = 7367,
  [SMALL_STATE(437)] = 7371,
  [SMALL_STATE(438)] = 7375,
  [SMALL_STATE(439)] = 7379,
  [SMALL_STATE(440)] = 7383,
  [SMALL_STATE(441)] = 7387,
  [SMALL_STATE(442)] = 7391,
  [SMALL_STATE(443)] = 7395,
  [SMALL_STATE(444)] = 7399,
  [SMALL_STATE(445)] = 7403,
  [SMALL_STATE(446)] = 7407,
  [SMALL_STATE(447)] = 7411,
  [SMALL_STATE(448)] = 7415,
  [SMALL_STATE(449)] = 7419,
  [SMALL_STATE(450)] = 7423,
  [SMALL_STATE(451)] = 7427,
  [SMALL_STATE(452)] = 7431,
  [SMALL_STATE(453)] = 7435,
  [SMALL_STATE(454)] = 7439,
  [SMALL_STATE(455)] = 7443,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 15),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(372),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 31),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 31),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route, 6, .production_id = 30),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route, 6, .production_id = 30),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fconst, 7, .production_id = 32),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fconst, 7, .production_id = 32),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fvariable, 7, .production_id = 32),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fvariable, 7, .production_id = 32),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 33),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 33),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 35),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 35),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ffunction, 8, .production_id = 36),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ffunction, 8, .production_id = 36),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 9),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 9),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4, .production_id = 9),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library, 4, .production_id = 9),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 14),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 14),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 20),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 20),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 4),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route, 8, .production_id = 39),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_route, 8, .production_id = 39),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(402),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(325),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(440),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(198),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(220),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(436),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(219),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(183),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(232),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(436),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(219),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(197),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(197),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 12),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 12),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 12),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(413),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(223),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 24),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 23),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(239),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 12),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 12),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 12),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 3, .production_id = 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(296),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(24),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 1, .production_id = 6),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 29),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 28),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(47),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(298),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 40),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2), SHIFT_REPEAT(335),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(333),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2), SHIFT_REPEAT(301),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 29),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 28),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 11),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 10),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 16),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_name, 1, .production_id = 18),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_file, 1, .production_id = 26),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 5),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 38),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 37),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 34),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1027] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 7),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 5, .production_id = 27),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4, .production_id = 27),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
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
