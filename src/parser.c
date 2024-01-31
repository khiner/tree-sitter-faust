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
#define STATE_COUNT 438
#define LARGE_STATE_COUNT 67
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 3
#define TOKEN_COUNT 115
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 39

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
  sym_add = 35,
  anon_sym_DASH = 36,
  sym_mult = 37,
  sym_div = 38,
  sym_mod = 39,
  sym_pow = 40,
  sym_and = 41,
  sym_xor = 42,
  sym_lshift = 43,
  sym_rshift = 44,
  sym_lt = 45,
  sym_le = 46,
  sym_gt = 47,
  sym_ge = 48,
  sym_eq = 49,
  sym_neq = 50,
  sym_delay = 51,
  sym_exp = 52,
  sym_log = 53,
  sym_log10 = 54,
  sym_sqrt = 55,
  sym_abs = 56,
  sym_floor = 57,
  sym_ceil = 58,
  sym_rint = 59,
  sym_round = 60,
  sym_acos = 61,
  sym_asin = 62,
  sym_atan = 63,
  sym_cos = 64,
  sym_sin = 65,
  sym_tan = 66,
  sym_int_cast = 67,
  sym_float_cast = 68,
  sym_any_cast = 69,
  sym_pow_fun = 70,
  sym_min = 71,
  sym_max = 72,
  sym_fmod = 73,
  sym_remainder = 74,
  sym_atan2 = 75,
  sym_prefix_prim = 76,
  sym_attach = 77,
  sym_enable = 78,
  sym_control = 79,
  sym_wire = 80,
  sym_cut = 81,
  sym_mem = 82,
  anon_sym_component = 83,
  anon_sym_library = 84,
  sym_rdtable = 85,
  sym_rwtable = 86,
  sym_select2 = 87,
  sym_select3 = 88,
  sym_lowest = 89,
  sym_highest = 90,
  sym_assertbounds = 91,
  sym_int = 92,
  sym_real = 93,
  anon_sym_LTmdoc_GT = 94,
  anon_sym_LT_SLASHmdoc_GT = 95,
  sym__doc_char = 96,
  anon_sym_LTnotice_SLASH_GT = 97,
  anon_sym_LTnotice_SLASH_GT2 = 98,
  anon_sym_LTequation_GT = 99,
  anon_sym_LT_SLASHequation_GT = 100,
  anon_sym_LTdiagram_GT = 101,
  anon_sym_LT_SLASHdiagram_GT = 102,
  anon_sym_LTmetadata_GT = 103,
  anon_sym_LT_SLASHmetadata_GT = 104,
  anon_sym_LTlisting = 105,
  sym_single_precision = 106,
  sym_double_precision = 107,
  sym_quad_precision = 108,
  sym_fixed_point_precision = 109,
  sym_string = 110,
  sym_fstring = 111,
  anon_sym_COLON_COLON = 112,
  sym__id = 113,
  sym_comment = 114,
  sym_program = 115,
  sym__statement = 116,
  sym__definition = 117,
  sym_definition = 118,
  sym_function_definition = 119,
  sym__metadata_definition = 120,
  sym_global_metadata = 121,
  sym_function_metadata = 122,
  sym_file_import = 123,
  sym__expression = 124,
  sym__infix_expression = 125,
  sym_infix = 126,
  sym_partial = 127,
  sym_prefix = 128,
  sym_prim1 = 129,
  sym_prim2 = 130,
  sym_prim3 = 131,
  sym_prim4 = 132,
  sym_prim5 = 133,
  sym_function_call = 134,
  sym_modifier = 135,
  sym_access = 136,
  sym__primitive = 137,
  sym_lambda = 138,
  sym_modulation = 139,
  sym_modulators = 140,
  sym_modulator = 141,
  sym_parameters = 142,
  sym_arguments = 143,
  sym__argument = 144,
  sym_pattern = 145,
  sym_rules = 146,
  sym_rule = 147,
  sym_recursive_arg = 148,
  sym_sequential_arg = 149,
  sym_split_arg = 150,
  sym_merge_arg = 151,
  sym_iteration = 152,
  sym_with_environment = 153,
  sym_environment = 154,
  sym_letrec_environment = 155,
  sym_rec_environment = 156,
  sym_recinition = 157,
  sym_substitution = 158,
  sym_substitutions = 159,
  sym_ffunction = 160,
  sym_fconst = 161,
  sym_fvariable = 162,
  sym_signature = 163,
  sym_parameter_types = 164,
  sym__include_file = 165,
  sym_function_names = 166,
  sym__func_name = 167,
  sym__type = 168,
  sym_waveform = 169,
  sym_values = 170,
  sym__infix = 171,
  sym__prim1 = 172,
  sym__prim2 = 173,
  sym__prim3 = 174,
  sym__prim4 = 175,
  sym__prim5 = 176,
  sym__modifier = 177,
  sym_one_sample_delay = 178,
  sym_sub = 179,
  sym_or = 180,
  sym_component = 181,
  sym_library = 182,
  sym__number = 183,
  sym_documentation = 184,
  sym__doc_content = 185,
  sym__special_doc_tag = 186,
  sym__binary_composition = 187,
  sym_recursive = 188,
  sym_sequential = 189,
  sym_split = 190,
  sym_merge = 191,
  sym_parallel = 192,
  sym_variants = 193,
  sym__variant = 194,
  sym_id = 195,
  sym_negate_id = 196,
  aux_sym_program_repeat1 = 197,
  aux_sym_modulators_repeat1 = 198,
  aux_sym_parameters_repeat1 = 199,
  aux_sym_arguments_repeat1 = 200,
  aux_sym_rules_repeat1 = 201,
  aux_sym_environment_repeat1 = 202,
  aux_sym_rec_environment_repeat1 = 203,
  aux_sym_parameter_types_repeat1 = 204,
  aux_sym_values_repeat1 = 205,
  aux_sym_documentation_repeat1 = 206,
  aux_sym_variants_repeat1 = 207,
  aux_sym_id_repeat1 = 208,
  alias_sym_float = 209,
  alias_sym_function_name = 210,
  alias_sym_parameter = 211,
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
  field_num_iters = 15,
  field_operand = 16,
  field_operator = 17,
  field_primitive = 18,
  field_right = 19,
  field_type = 20,
  field_value = 21,
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
  [30] = {.index = 38, .length = 3},
  [31] = {.index = 41, .length = 3},
  [32] = {.index = 44, .length = 1},
  [33] = {.index = 45, .length = 1},
  [34] = {.index = 46, .length = 4},
  [35] = {.index = 50, .length = 2},
  [38] = {.index = 52, .length = 2},
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
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [41] =
    {field_include_file, 5, .inherited = true},
    {field_name, 3},
    {field_type, 2, .inherited = true},
  [44] =
    {field_value, 6},
  [45] =
    {field_expression, 4},
  [46] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [50] =
    {field_include_file, 4, .inherited = true},
    {field_library_file, 6},
  [52] =
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
  [36] = {
    [1] = sym_int,
  },
  [37] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 2,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 10,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 22,
  [30] = 24,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 32,
  [39] = 39,
  [40] = 40,
  [41] = 34,
  [42] = 39,
  [43] = 35,
  [44] = 36,
  [45] = 37,
  [46] = 46,
  [47] = 47,
  [48] = 33,
  [49] = 40,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 51,
  [55] = 50,
  [56] = 56,
  [57] = 53,
  [58] = 58,
  [59] = 56,
  [60] = 58,
  [61] = 56,
  [62] = 50,
  [63] = 53,
  [64] = 58,
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
  [79] = 69,
  [80] = 80,
  [81] = 80,
  [82] = 67,
  [83] = 69,
  [84] = 70,
  [85] = 71,
  [86] = 68,
  [87] = 67,
  [88] = 68,
  [89] = 71,
  [90] = 70,
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
  [127] = 65,
  [128] = 73,
  [129] = 73,
  [130] = 75,
  [131] = 74,
  [132] = 76,
  [133] = 77,
  [134] = 78,
  [135] = 91,
  [136] = 98,
  [137] = 109,
  [138] = 95,
  [139] = 102,
  [140] = 103,
  [141] = 116,
  [142] = 117,
  [143] = 125,
  [144] = 101,
  [145] = 126,
  [146] = 124,
  [147] = 120,
  [148] = 119,
  [149] = 118,
  [150] = 115,
  [151] = 94,
  [152] = 113,
  [153] = 96,
  [154] = 100,
  [155] = 97,
  [156] = 104,
  [157] = 105,
  [158] = 106,
  [159] = 123,
  [160] = 122,
  [161] = 121,
  [162] = 107,
  [163] = 108,
  [164] = 114,
  [165] = 110,
  [166] = 93,
  [167] = 111,
  [168] = 112,
  [169] = 92,
  [170] = 65,
  [171] = 99,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 178,
  [182] = 177,
  [183] = 176,
  [184] = 184,
  [185] = 185,
  [186] = 175,
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
  [207] = 74,
  [208] = 76,
  [209] = 209,
  [210] = 210,
  [211] = 78,
  [212] = 77,
  [213] = 75,
  [214] = 91,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 210,
  [221] = 221,
  [222] = 222,
  [223] = 221,
  [224] = 224,
  [225] = 209,
  [226] = 226,
  [227] = 227,
  [228] = 191,
  [229] = 216,
  [230] = 222,
  [231] = 227,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 234,
  [240] = 237,
  [241] = 235,
  [242] = 238,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 250,
  [254] = 251,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 259,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 257,
  [268] = 260,
  [269] = 269,
  [270] = 266,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
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
  [290] = 287,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 286,
  [300] = 300,
  [301] = 301,
  [302] = 297,
  [303] = 295,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 277,
  [311] = 311,
  [312] = 289,
  [313] = 285,
  [314] = 314,
  [315] = 315,
  [316] = 284,
  [317] = 278,
  [318] = 318,
  [319] = 319,
  [320] = 319,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
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
  [340] = 340,
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
  [359] = 340,
  [360] = 360,
  [361] = 356,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 366,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 371,
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
  [385] = 383,
  [386] = 380,
  [387] = 387,
  [388] = 388,
  [389] = 356,
  [390] = 390,
  [391] = 379,
  [392] = 378,
  [393] = 345,
  [394] = 346,
  [395] = 377,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 369,
  [400] = 400,
  [401] = 360,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 384,
  [406] = 340,
  [407] = 387,
  [408] = 362,
  [409] = 365,
  [410] = 403,
  [411] = 404,
  [412] = 376,
  [413] = 413,
  [414] = 339,
  [415] = 355,
  [416] = 344,
  [417] = 417,
  [418] = 342,
  [419] = 419,
  [420] = 413,
  [421] = 421,
  [422] = 375,
  [423] = 423,
  [424] = 370,
  [425] = 425,
  [426] = 426,
  [427] = 353,
  [428] = 396,
  [429] = 417,
  [430] = 397,
  [431] = 398,
  [432] = 372,
  [433] = 433,
  [434] = 434,
  [435] = 364,
  [436] = 373,
  [437] = 381,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(333);
      if (lookahead == '!') ADVANCE(465);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(386);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '.') ADVANCE(344);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(334);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(335);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(347);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == '_') ADVANCE(463);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'h') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'q') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(465);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(386);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(401);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(347);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == '_') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(546);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'm') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead == 'r') ADVANCE(556);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == 'w') ADVANCE(517);
      if (lookahead == 'x') ADVANCE(665);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(334);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead == 'x') ADVANCE(665);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == ';') ADVANCE(334);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(665);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == ';') ADVANCE(334);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(665);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '%') ADVANCE(393);
      if (lookahead == '&') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead == '+') ADVANCE(385);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(343);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(352);
      if (lookahead == '<') ADVANCE(400);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(403);
      if (lookahead == '@') ADVANCE(407);
      if (lookahead == '[') ADVANCE(348);
      if (lookahead == '^') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '~') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(335);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'f') ADVANCE(594);
      if (lookahead == 'q') ADVANCE(733);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(746);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(745);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '>') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(412);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(476);
      if (lookahead == '3') ADVANCE(478);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(513);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == 'f') ADVANCE(594);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'q') ADVANCE(733);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 26:
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(492);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(406);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(405);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(358);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(490);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(491);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(498);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(494);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(499);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(496);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(500);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(495);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(497);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(501);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(156);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(308);
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
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(268);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'w') ADVANCE(310);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'q') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 138:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 139:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(410);
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(502);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(264);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(232);
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
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(461);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'q') ADVANCE(364);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(466);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(366);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(241);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(199);
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
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 249:
      if (lookahead == 'q') ADVANCE(315);
      END_STATE();
    case 250:
      if (lookahead == 'q') ADVANCE(319);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(451);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(163);
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
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 314:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 315:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 316:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 317:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 318:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 319:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 320:
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 321:
      if (lookahead == 'w') ADVANCE(443);
      END_STATE();
    case 322:
      if (lookahead == 'x') ADVANCE(447);
      END_STATE();
    case 323:
      if (lookahead == 'x') ADVANCE(455);
      END_STATE();
    case 324:
      if (lookahead == 'x') ADVANCE(128);
      END_STATE();
    case 325:
      if (lookahead == 'y') ADVANCE(442);
      END_STATE();
    case 326:
      if (lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 327:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 330:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 331:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(746);
      if (lookahead == '\r') ADVANCE(747);
      END_STATE();
    case 332:
      if (eof) ADVANCE(333);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(594);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == 'q') ADVANCE(733);
      if (lookahead == 's') ADVANCE(595);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(332)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(513);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_ffunction);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_ffunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_fconstant);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_fconstant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_fvariable);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_fvariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_waveform);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_waveform);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '>') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(360);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == '=') ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == '=') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(404);
      if (lookahead == '>') ADVANCE(399);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(21);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(453);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_any_cast);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(406);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_library);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_fstring);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(413);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(477);
      if (lookahead == '3') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'o') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'v') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(702);
      if (lookahead == 'c') ADVANCE(666);
      if (lookahead == 's') ADVANCE(606);
      if (lookahead == 't') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == 'f') ADVANCE(735);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'm') ADVANCE(662);
      if (lookahead == 'v') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'i') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == 'i') ADVANCE(639);
      if (lookahead == 'q') ADVANCE(692);
      if (lookahead == 'u') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(411);
      if (lookahead == 'w') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'o') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead == 's') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead == 'q') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(679);
      if (lookahead == 'n') ADVANCE(727);
      if (lookahead == 's') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead == 'x') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'v') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'y') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(746);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(331);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 332},
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
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 4},
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
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
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
  [172] = {.lex_state = 332},
  [173] = {.lex_state = 332},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 26},
  [189] = {.lex_state = 26},
  [190] = {.lex_state = 332},
  [191] = {.lex_state = 332},
  [192] = {.lex_state = 332},
  [193] = {.lex_state = 332},
  [194] = {.lex_state = 332},
  [195] = {.lex_state = 332},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 24},
  [210] = {.lex_state = 24},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 332},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 25},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 332},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 10},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 11},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 16},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 332},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 11},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 10},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 10},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 10},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 332},
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
  [356] = {.lex_state = 10},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 10},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 10},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
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
  [389] = {.lex_state = 10},
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
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 10},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
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
    [sym_program] = STATE(402),
    [sym__statement] = STATE(173),
    [sym__definition] = STATE(173),
    [sym_definition] = STATE(401),
    [sym_function_definition] = STATE(401),
    [sym__metadata_definition] = STATE(173),
    [sym_global_metadata] = STATE(400),
    [sym_function_metadata] = STATE(400),
    [sym_file_import] = STATE(173),
    [sym_documentation] = STATE(173),
    [sym_variants] = STATE(265),
    [sym__variant] = STATE(209),
    [sym_id] = STATE(326),
    [aux_sym_program_repeat1] = STATE(173),
    [aux_sym_variants_repeat1] = STATE(209),
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
    [sym__expression] = STATE(216),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(216),
    [sym_letrec_environment] = STATE(216),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(216),
    [sym_recursive] = STATE(216),
    [sym_sequential] = STATE(216),
    [sym_split] = STATE(216),
    [sym_merge] = STATE(216),
    [sym_parallel] = STATE(216),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [3] = {
    [sym__expression] = STATE(215),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(215),
    [sym_letrec_environment] = STATE(215),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(215),
    [sym_recursive] = STATE(215),
    [sym_sequential] = STATE(215),
    [sym_split] = STATE(215),
    [sym_merge] = STATE(215),
    [sym_parallel] = STATE(215),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [4] = {
    [sym__expression] = STATE(202),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(202),
    [sym_letrec_environment] = STATE(202),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(202),
    [sym_recursive] = STATE(202),
    [sym_sequential] = STATE(202),
    [sym_split] = STATE(202),
    [sym_merge] = STATE(202),
    [sym_parallel] = STATE(202),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [5] = {
    [sym__expression] = STATE(200),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(200),
    [sym_letrec_environment] = STATE(200),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(200),
    [sym_recursive] = STATE(200),
    [sym_sequential] = STATE(200),
    [sym_split] = STATE(200),
    [sym_merge] = STATE(200),
    [sym_parallel] = STATE(200),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [6] = {
    [sym__expression] = STATE(201),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(201),
    [sym_letrec_environment] = STATE(201),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(201),
    [sym_recursive] = STATE(201),
    [sym_sequential] = STATE(201),
    [sym_split] = STATE(201),
    [sym_merge] = STATE(201),
    [sym_parallel] = STATE(201),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [7] = {
    [sym__expression] = STATE(219),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(219),
    [sym_letrec_environment] = STATE(219),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(219),
    [sym_recursive] = STATE(219),
    [sym_sequential] = STATE(219),
    [sym_split] = STATE(219),
    [sym_merge] = STATE(219),
    [sym_parallel] = STATE(219),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [8] = {
    [sym__expression] = STATE(229),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(229),
    [sym_letrec_environment] = STATE(229),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(229),
    [sym_recursive] = STATE(229),
    [sym_sequential] = STATE(229),
    [sym_split] = STATE(229),
    [sym_merge] = STATE(229),
    [sym_parallel] = STATE(229),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [9] = {
    [sym__expression] = STATE(217),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(217),
    [sym_letrec_environment] = STATE(217),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(217),
    [sym_recursive] = STATE(217),
    [sym_sequential] = STATE(217),
    [sym_split] = STATE(217),
    [sym_merge] = STATE(217),
    [sym_parallel] = STATE(217),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [10] = {
    [sym__expression] = STATE(230),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(230),
    [sym_letrec_environment] = STATE(230),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(230),
    [sym_recursive] = STATE(230),
    [sym_sequential] = STATE(230),
    [sym_split] = STATE(230),
    [sym_merge] = STATE(230),
    [sym_parallel] = STATE(230),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [11] = {
    [sym__expression] = STATE(227),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(227),
    [sym_letrec_environment] = STATE(227),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(227),
    [sym_recursive] = STATE(227),
    [sym_sequential] = STATE(227),
    [sym_split] = STATE(227),
    [sym_merge] = STATE(227),
    [sym_parallel] = STATE(227),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [12] = {
    [sym__expression] = STATE(221),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(221),
    [sym_letrec_environment] = STATE(221),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(221),
    [sym_recursive] = STATE(221),
    [sym_sequential] = STATE(221),
    [sym_split] = STATE(221),
    [sym_merge] = STATE(221),
    [sym_parallel] = STATE(221),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [13] = {
    [sym__expression] = STATE(223),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(223),
    [sym_letrec_environment] = STATE(223),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(223),
    [sym_recursive] = STATE(223),
    [sym_sequential] = STATE(223),
    [sym_split] = STATE(223),
    [sym_merge] = STATE(223),
    [sym_parallel] = STATE(223),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [14] = {
    [sym__expression] = STATE(224),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(224),
    [sym_letrec_environment] = STATE(224),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(224),
    [sym_recursive] = STATE(224),
    [sym_sequential] = STATE(224),
    [sym_split] = STATE(224),
    [sym_merge] = STATE(224),
    [sym_parallel] = STATE(224),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [15] = {
    [sym__expression] = STATE(218),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(218),
    [sym_letrec_environment] = STATE(218),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(218),
    [sym_recursive] = STATE(218),
    [sym_sequential] = STATE(218),
    [sym_split] = STATE(218),
    [sym_merge] = STATE(218),
    [sym_parallel] = STATE(218),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [16] = {
    [sym__expression] = STATE(231),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(231),
    [sym_letrec_environment] = STATE(231),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(231),
    [sym_recursive] = STATE(231),
    [sym_sequential] = STATE(231),
    [sym_split] = STATE(231),
    [sym_merge] = STATE(231),
    [sym_parallel] = STATE(231),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [17] = {
    [sym__expression] = STATE(226),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(226),
    [sym_letrec_environment] = STATE(226),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(226),
    [sym_recursive] = STATE(226),
    [sym_sequential] = STATE(226),
    [sym_split] = STATE(226),
    [sym_merge] = STATE(226),
    [sym_parallel] = STATE(226),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [18] = {
    [sym__expression] = STATE(222),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(222),
    [sym_letrec_environment] = STATE(222),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(222),
    [sym_recursive] = STATE(222),
    [sym_sequential] = STATE(222),
    [sym_split] = STATE(222),
    [sym_merge] = STATE(222),
    [sym_parallel] = STATE(222),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [19] = {
    [sym__expression] = STATE(199),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(199),
    [sym_letrec_environment] = STATE(199),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(199),
    [sym_recursive] = STATE(199),
    [sym_sequential] = STATE(199),
    [sym_split] = STATE(199),
    [sym_merge] = STATE(199),
    [sym_parallel] = STATE(199),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [20] = {
    [sym__expression] = STATE(198),
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_with_environment] = STATE(198),
    [sym_letrec_environment] = STATE(198),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym_waveform] = STATE(72),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(198),
    [sym_recursive] = STATE(198),
    [sym_sequential] = STATE(198),
    [sym_split] = STATE(198),
    [sym_merge] = STATE(198),
    [sym_parallel] = STATE(198),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(51),
    [sym_cut] = ACTIONS(51),
    [sym_mem] = ACTIONS(51),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(51),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [21] = {
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
    [sym_arguments] = STATE(367),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [22] = {
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
    [sym_arguments] = STATE(378),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [23] = {
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
    [sym_arguments] = STATE(380),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [24] = {
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
    [sym_arguments] = STATE(379),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [25] = {
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
    [sym_arguments] = STATE(386),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [26] = {
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
    [sym_arguments] = STATE(432),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [27] = {
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
    [sym_arguments] = STATE(372),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [28] = {
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
    [sym_arguments] = STATE(395),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [29] = {
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
    [sym_arguments] = STATE(392),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
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
    [sym_arguments] = STATE(391),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [31] = {
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
    [sym_arguments] = STATE(377),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [32] = {
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
    [sym__argument] = STATE(254),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(254),
    [sym_sequential_arg] = STATE(254),
    [sym_split_arg] = STATE(254),
    [sym_merge_arg] = STATE(254),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [33] = {
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
    [sym__argument] = STATE(246),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(246),
    [sym_sequential_arg] = STATE(246),
    [sym_split_arg] = STATE(246),
    [sym_merge_arg] = STATE(246),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [34] = {
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
    [sym__argument] = STATE(234),
    [sym_pattern] = STATE(80),
    [sym_recursive_arg] = STATE(234),
    [sym_sequential_arg] = STATE(234),
    [sym_split_arg] = STATE(234),
    [sym_merge_arg] = STATE(234),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_ffunction] = STATE(80),
    [sym_fconst] = STATE(80),
    [sym_fvariable] = STATE(80),
    [sym_waveform] = STATE(80),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(80),
    [sym_library] = STATE(80),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(107),
    [sym_cut] = ACTIONS(107),
    [sym_mem] = ACTIONS(107),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(107),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [35] = {
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
    [sym__argument] = STATE(242),
    [sym_pattern] = STATE(80),
    [sym_recursive_arg] = STATE(242),
    [sym_sequential_arg] = STATE(242),
    [sym_split_arg] = STATE(242),
    [sym_merge_arg] = STATE(242),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_ffunction] = STATE(80),
    [sym_fconst] = STATE(80),
    [sym_fvariable] = STATE(80),
    [sym_waveform] = STATE(80),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(80),
    [sym_library] = STATE(80),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(107),
    [sym_cut] = ACTIONS(107),
    [sym_mem] = ACTIONS(107),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(107),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [36] = {
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
    [sym__argument] = STATE(232),
    [sym_pattern] = STATE(80),
    [sym_recursive_arg] = STATE(232),
    [sym_sequential_arg] = STATE(232),
    [sym_split_arg] = STATE(232),
    [sym_merge_arg] = STATE(232),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_ffunction] = STATE(80),
    [sym_fconst] = STATE(80),
    [sym_fvariable] = STATE(80),
    [sym_waveform] = STATE(80),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(80),
    [sym_library] = STATE(80),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(107),
    [sym_cut] = ACTIONS(107),
    [sym_mem] = ACTIONS(107),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(107),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [37] = {
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
    [sym__argument] = STATE(240),
    [sym_pattern] = STATE(80),
    [sym_recursive_arg] = STATE(240),
    [sym_sequential_arg] = STATE(240),
    [sym_split_arg] = STATE(240),
    [sym_merge_arg] = STATE(240),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_ffunction] = STATE(80),
    [sym_fconst] = STATE(80),
    [sym_fvariable] = STATE(80),
    [sym_waveform] = STATE(80),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(80),
    [sym_library] = STATE(80),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(107),
    [sym_cut] = ACTIONS(107),
    [sym_mem] = ACTIONS(107),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(107),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [38] = {
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
    [sym__argument] = STATE(251),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(251),
    [sym_sequential_arg] = STATE(251),
    [sym_split_arg] = STATE(251),
    [sym_merge_arg] = STATE(251),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [39] = {
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
    [sym__argument] = STATE(241),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(241),
    [sym_sequential_arg] = STATE(241),
    [sym_split_arg] = STATE(241),
    [sym_merge_arg] = STATE(241),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [40] = {
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
    [sym__argument] = STATE(250),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(250),
    [sym_sequential_arg] = STATE(250),
    [sym_split_arg] = STATE(250),
    [sym_merge_arg] = STATE(250),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [41] = {
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
    [sym__argument] = STATE(239),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(239),
    [sym_sequential_arg] = STATE(239),
    [sym_split_arg] = STATE(239),
    [sym_merge_arg] = STATE(239),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
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
    [sym__argument] = STATE(235),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(235),
    [sym_sequential_arg] = STATE(235),
    [sym_split_arg] = STATE(235),
    [sym_merge_arg] = STATE(235),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
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
    [sym__argument] = STATE(238),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(238),
    [sym_sequential_arg] = STATE(238),
    [sym_split_arg] = STATE(238),
    [sym_merge_arg] = STATE(238),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
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
    [sym__argument] = STATE(232),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(232),
    [sym_sequential_arg] = STATE(232),
    [sym_split_arg] = STATE(232),
    [sym_merge_arg] = STATE(232),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
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
    [sym__argument] = STATE(237),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(237),
    [sym_sequential_arg] = STATE(237),
    [sym_split_arg] = STATE(237),
    [sym_merge_arg] = STATE(237),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [46] = {
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
    [sym__argument] = STATE(236),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(236),
    [sym_sequential_arg] = STATE(236),
    [sym_split_arg] = STATE(236),
    [sym_merge_arg] = STATE(236),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [47] = {
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
    [sym__argument] = STATE(243),
    [sym_pattern] = STATE(80),
    [sym_recursive_arg] = STATE(243),
    [sym_sequential_arg] = STATE(243),
    [sym_split_arg] = STATE(243),
    [sym_merge_arg] = STATE(243),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_ffunction] = STATE(80),
    [sym_fconst] = STATE(80),
    [sym_fvariable] = STATE(80),
    [sym_waveform] = STATE(80),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(80),
    [sym_library] = STATE(80),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(107),
    [sym_cut] = ACTIONS(107),
    [sym_mem] = ACTIONS(107),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(107),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [48] = {
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
    [sym__argument] = STATE(247),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(247),
    [sym_sequential_arg] = STATE(247),
    [sym_split_arg] = STATE(247),
    [sym_merge_arg] = STATE(247),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [49] = {
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
    [sym__argument] = STATE(253),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(253),
    [sym_sequential_arg] = STATE(253),
    [sym_split_arg] = STATE(253),
    [sym_merge_arg] = STATE(253),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym_waveform] = STATE(81),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [50] = {
    [sym__infix_expression] = STATE(84),
    [sym_infix] = STATE(84),
    [sym_partial] = STATE(84),
    [sym_prefix] = STATE(84),
    [sym_prim1] = STATE(84),
    [sym_prim2] = STATE(84),
    [sym_prim3] = STATE(84),
    [sym_prim4] = STATE(84),
    [sym_prim5] = STATE(84),
    [sym_function_call] = STATE(84),
    [sym_modifier] = STATE(84),
    [sym_access] = STATE(84),
    [sym__primitive] = STATE(84),
    [sym_lambda] = STATE(84),
    [sym_modulation] = STATE(84),
    [sym_pattern] = STATE(84),
    [sym_iteration] = STATE(84),
    [sym_substitution] = STATE(84),
    [sym_ffunction] = STATE(84),
    [sym_fconst] = STATE(84),
    [sym_fvariable] = STATE(84),
    [sym_waveform] = STATE(84),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(84),
    [sym_library] = STATE(84),
    [sym__number] = STATE(84),
    [sym_id] = STATE(84),
    [sym_negate_id] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(125),
    [sym_cut] = ACTIONS(125),
    [sym_mem] = ACTIONS(125),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(125),
    [sym_real] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [51] = {
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
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym_waveform] = STATE(69),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
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
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(129),
    [sym_cut] = ACTIONS(129),
    [sym_mem] = ACTIONS(129),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(129),
    [sym_real] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [52] = {
    [sym__infix_expression] = STATE(79),
    [sym_infix] = STATE(79),
    [sym_partial] = STATE(79),
    [sym_prefix] = STATE(79),
    [sym_prim1] = STATE(79),
    [sym_prim2] = STATE(79),
    [sym_prim3] = STATE(79),
    [sym_prim4] = STATE(79),
    [sym_prim5] = STATE(79),
    [sym_function_call] = STATE(79),
    [sym_modifier] = STATE(79),
    [sym_access] = STATE(79),
    [sym__primitive] = STATE(79),
    [sym_lambda] = STATE(79),
    [sym_modulation] = STATE(79),
    [sym_pattern] = STATE(79),
    [sym_iteration] = STATE(79),
    [sym_substitution] = STATE(79),
    [sym_ffunction] = STATE(79),
    [sym_fconst] = STATE(79),
    [sym_fvariable] = STATE(79),
    [sym_waveform] = STATE(79),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(79),
    [sym_library] = STATE(79),
    [sym__number] = STATE(79),
    [sym_id] = STATE(79),
    [sym_negate_id] = STATE(79),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(133),
    [sym_cut] = ACTIONS(133),
    [sym_mem] = ACTIONS(133),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [53] = {
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
    [sym_ffunction] = STATE(68),
    [sym_fconst] = STATE(68),
    [sym_fvariable] = STATE(68),
    [sym_waveform] = STATE(68),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(68),
    [sym_library] = STATE(68),
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
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(137),
    [sym_cut] = ACTIONS(137),
    [sym_mem] = ACTIONS(137),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [54] = {
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
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym_waveform] = STATE(83),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(141),
    [sym_cut] = ACTIONS(141),
    [sym_mem] = ACTIONS(141),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [55] = {
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
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(90),
    [sym_library] = STATE(90),
    [sym__number] = STATE(90),
    [sym_id] = STATE(90),
    [sym_negate_id] = STATE(90),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(145),
    [sym_cut] = ACTIONS(145),
    [sym_mem] = ACTIONS(145),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [56] = {
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
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(149),
    [sym_cut] = ACTIONS(149),
    [sym_mem] = ACTIONS(149),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [57] = {
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
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(88),
    [sym_library] = STATE(88),
    [sym__number] = STATE(88),
    [sym_id] = STATE(88),
    [sym_negate_id] = STATE(88),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(153),
    [sym_cut] = ACTIONS(153),
    [sym_mem] = ACTIONS(153),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [58] = {
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
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
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
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(69),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(157),
    [sym_cut] = ACTIONS(157),
    [sym_mem] = ACTIONS(157),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(157),
    [sym_real] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [59] = {
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
    [sym_ffunction] = STATE(71),
    [sym_fconst] = STATE(71),
    [sym_fvariable] = STATE(71),
    [sym_waveform] = STATE(71),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(71),
    [sym_library] = STATE(71),
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
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(161),
    [sym_cut] = ACTIONS(161),
    [sym_mem] = ACTIONS(161),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(161),
    [sym_real] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [60] = {
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
    [sym_substitution] = STATE(67),
    [sym_ffunction] = STATE(67),
    [sym_fconst] = STATE(67),
    [sym_fvariable] = STATE(67),
    [sym_waveform] = STATE(67),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(67),
    [sym_library] = STATE(67),
    [sym__number] = STATE(67),
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
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(165),
    [sym_cut] = ACTIONS(165),
    [sym_mem] = ACTIONS(165),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(165),
    [sym_real] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [61] = {
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
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(169),
    [sym_cut] = ACTIONS(169),
    [sym_mem] = ACTIONS(169),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(169),
    [sym_real] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [62] = {
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
    [sym_ffunction] = STATE(70),
    [sym_fconst] = STATE(70),
    [sym_fvariable] = STATE(70),
    [sym_waveform] = STATE(70),
    [sym__infix] = STATE(123),
    [sym__prim1] = STATE(122),
    [sym__prim2] = STATE(121),
    [sym__prim3] = STATE(114),
    [sym__prim4] = STATE(93),
    [sym__prim5] = STATE(112),
    [sym_sub] = STATE(123),
    [sym_or] = STATE(123),
    [sym_component] = STATE(70),
    [sym_library] = STATE(70),
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
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_waveform] = ACTIONS(39),
    [sym_add] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_mult] = ACTIONS(45),
    [sym_div] = ACTIONS(45),
    [sym_mod] = ACTIONS(45),
    [sym_pow] = ACTIONS(45),
    [sym_and] = ACTIONS(45),
    [sym_xor] = ACTIONS(41),
    [sym_lshift] = ACTIONS(45),
    [sym_rshift] = ACTIONS(45),
    [sym_lt] = ACTIONS(41),
    [sym_le] = ACTIONS(45),
    [sym_gt] = ACTIONS(41),
    [sym_ge] = ACTIONS(45),
    [sym_eq] = ACTIONS(45),
    [sym_neq] = ACTIONS(45),
    [sym_delay] = ACTIONS(45),
    [sym_exp] = ACTIONS(47),
    [sym_log] = ACTIONS(47),
    [sym_log10] = ACTIONS(47),
    [sym_sqrt] = ACTIONS(47),
    [sym_abs] = ACTIONS(47),
    [sym_floor] = ACTIONS(47),
    [sym_ceil] = ACTIONS(47),
    [sym_rint] = ACTIONS(47),
    [sym_round] = ACTIONS(47),
    [sym_acos] = ACTIONS(47),
    [sym_asin] = ACTIONS(47),
    [sym_atan] = ACTIONS(47),
    [sym_cos] = ACTIONS(47),
    [sym_sin] = ACTIONS(47),
    [sym_tan] = ACTIONS(47),
    [sym_int_cast] = ACTIONS(47),
    [sym_float_cast] = ACTIONS(47),
    [sym_pow_fun] = ACTIONS(49),
    [sym_min] = ACTIONS(49),
    [sym_max] = ACTIONS(49),
    [sym_fmod] = ACTIONS(49),
    [sym_remainder] = ACTIONS(49),
    [sym_atan2] = ACTIONS(49),
    [sym_prefix_prim] = ACTIONS(49),
    [sym_attach] = ACTIONS(49),
    [sym_enable] = ACTIONS(49),
    [sym_control] = ACTIONS(49),
    [sym_wire] = ACTIONS(173),
    [sym_cut] = ACTIONS(173),
    [sym_mem] = ACTIONS(173),
    [anon_sym_component] = ACTIONS(53),
    [anon_sym_library] = ACTIONS(55),
    [sym_rdtable] = ACTIONS(57),
    [sym_rwtable] = ACTIONS(59),
    [sym_select2] = ACTIONS(57),
    [sym_select3] = ACTIONS(61),
    [sym_lowest] = ACTIONS(47),
    [sym_highest] = ACTIONS(47),
    [sym_assertbounds] = ACTIONS(57),
    [sym_int] = ACTIONS(173),
    [sym_real] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(65),
    [sym__id] = ACTIONS(67),
  },
  [63] = {
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
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym_waveform] = STATE(86),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(177),
    [sym_cut] = ACTIONS(177),
    [sym_mem] = ACTIONS(177),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(177),
    [sym_real] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [64] = {
    [sym__infix_expression] = STATE(82),
    [sym_infix] = STATE(82),
    [sym_partial] = STATE(82),
    [sym_prefix] = STATE(82),
    [sym_prim1] = STATE(82),
    [sym_prim2] = STATE(82),
    [sym_prim3] = STATE(82),
    [sym_prim4] = STATE(82),
    [sym_prim5] = STATE(82),
    [sym_function_call] = STATE(82),
    [sym_modifier] = STATE(82),
    [sym_access] = STATE(82),
    [sym__primitive] = STATE(82),
    [sym_lambda] = STATE(82),
    [sym_modulation] = STATE(82),
    [sym_pattern] = STATE(82),
    [sym_iteration] = STATE(82),
    [sym_substitution] = STATE(82),
    [sym_ffunction] = STATE(82),
    [sym_fconst] = STATE(82),
    [sym_fvariable] = STATE(82),
    [sym_waveform] = STATE(82),
    [sym__infix] = STATE(159),
    [sym__prim1] = STATE(160),
    [sym__prim2] = STATE(161),
    [sym__prim3] = STATE(164),
    [sym__prim4] = STATE(166),
    [sym__prim5] = STATE(168),
    [sym_sub] = STATE(159),
    [sym_or] = STATE(159),
    [sym_component] = STATE(82),
    [sym_library] = STATE(82),
    [sym__number] = STATE(82),
    [sym_id] = STATE(82),
    [sym_negate_id] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_environment] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [sym_par] = ACTIONS(85),
    [sym_seq] = ACTIONS(85),
    [sym_sum] = ACTIONS(85),
    [sym_prod] = ACTIONS(85),
    [anon_sym_ffunction] = ACTIONS(87),
    [anon_sym_fconstant] = ACTIONS(89),
    [anon_sym_fvariable] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_waveform] = ACTIONS(95),
    [sym_add] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_mult] = ACTIONS(101),
    [sym_div] = ACTIONS(101),
    [sym_mod] = ACTIONS(101),
    [sym_pow] = ACTIONS(101),
    [sym_and] = ACTIONS(101),
    [sym_xor] = ACTIONS(97),
    [sym_lshift] = ACTIONS(101),
    [sym_rshift] = ACTIONS(101),
    [sym_lt] = ACTIONS(97),
    [sym_le] = ACTIONS(101),
    [sym_gt] = ACTIONS(97),
    [sym_ge] = ACTIONS(101),
    [sym_eq] = ACTIONS(101),
    [sym_neq] = ACTIONS(101),
    [sym_delay] = ACTIONS(101),
    [sym_exp] = ACTIONS(103),
    [sym_log] = ACTIONS(103),
    [sym_log10] = ACTIONS(103),
    [sym_sqrt] = ACTIONS(103),
    [sym_abs] = ACTIONS(103),
    [sym_floor] = ACTIONS(103),
    [sym_ceil] = ACTIONS(103),
    [sym_rint] = ACTIONS(103),
    [sym_round] = ACTIONS(103),
    [sym_acos] = ACTIONS(103),
    [sym_asin] = ACTIONS(103),
    [sym_atan] = ACTIONS(103),
    [sym_cos] = ACTIONS(103),
    [sym_sin] = ACTIONS(103),
    [sym_tan] = ACTIONS(103),
    [sym_int_cast] = ACTIONS(103),
    [sym_float_cast] = ACTIONS(103),
    [sym_pow_fun] = ACTIONS(105),
    [sym_min] = ACTIONS(105),
    [sym_max] = ACTIONS(105),
    [sym_fmod] = ACTIONS(105),
    [sym_remainder] = ACTIONS(105),
    [sym_atan2] = ACTIONS(105),
    [sym_prefix_prim] = ACTIONS(105),
    [sym_attach] = ACTIONS(105),
    [sym_enable] = ACTIONS(105),
    [sym_control] = ACTIONS(105),
    [sym_wire] = ACTIONS(181),
    [sym_cut] = ACTIONS(181),
    [sym_mem] = ACTIONS(181),
    [anon_sym_component] = ACTIONS(109),
    [anon_sym_library] = ACTIONS(111),
    [sym_rdtable] = ACTIONS(113),
    [sym_rwtable] = ACTIONS(115),
    [sym_select2] = ACTIONS(113),
    [sym_select3] = ACTIONS(117),
    [sym_lowest] = ACTIONS(103),
    [sym_highest] = ACTIONS(103),
    [sym_assertbounds] = ACTIONS(113),
    [sym_int] = ACTIONS(181),
    [sym_real] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [sym__id] = ACTIONS(123),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_environment] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_case] = ACTIONS(187),
    [sym_par] = ACTIONS(187),
    [sym_seq] = ACTIONS(187),
    [sym_sum] = ACTIONS(187),
    [sym_prod] = ACTIONS(187),
    [anon_sym_ffunction] = ACTIONS(187),
    [anon_sym_fconstant] = ACTIONS(187),
    [anon_sym_fvariable] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_waveform] = ACTIONS(187),
    [sym_add] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [sym_mult] = ACTIONS(185),
    [sym_div] = ACTIONS(185),
    [sym_mod] = ACTIONS(185),
    [sym_pow] = ACTIONS(185),
    [sym_and] = ACTIONS(185),
    [sym_xor] = ACTIONS(187),
    [sym_lshift] = ACTIONS(185),
    [sym_rshift] = ACTIONS(185),
    [sym_lt] = ACTIONS(187),
    [sym_le] = ACTIONS(185),
    [sym_gt] = ACTIONS(187),
    [sym_ge] = ACTIONS(185),
    [sym_eq] = ACTIONS(185),
    [sym_neq] = ACTIONS(185),
    [sym_delay] = ACTIONS(185),
    [sym_exp] = ACTIONS(187),
    [sym_log] = ACTIONS(187),
    [sym_log10] = ACTIONS(187),
    [sym_sqrt] = ACTIONS(187),
    [sym_abs] = ACTIONS(187),
    [sym_floor] = ACTIONS(187),
    [sym_ceil] = ACTIONS(187),
    [sym_rint] = ACTIONS(187),
    [sym_round] = ACTIONS(187),
    [sym_acos] = ACTIONS(187),
    [sym_asin] = ACTIONS(187),
    [sym_atan] = ACTIONS(187),
    [sym_cos] = ACTIONS(187),
    [sym_sin] = ACTIONS(187),
    [sym_tan] = ACTIONS(187),
    [sym_int_cast] = ACTIONS(187),
    [sym_float_cast] = ACTIONS(187),
    [sym_pow_fun] = ACTIONS(187),
    [sym_min] = ACTIONS(187),
    [sym_max] = ACTIONS(187),
    [sym_fmod] = ACTIONS(187),
    [sym_remainder] = ACTIONS(187),
    [sym_atan2] = ACTIONS(187),
    [sym_prefix_prim] = ACTIONS(187),
    [sym_attach] = ACTIONS(187),
    [sym_enable] = ACTIONS(187),
    [sym_control] = ACTIONS(187),
    [sym_wire] = ACTIONS(187),
    [sym_cut] = ACTIONS(187),
    [sym_mem] = ACTIONS(187),
    [anon_sym_component] = ACTIONS(187),
    [anon_sym_library] = ACTIONS(187),
    [sym_rdtable] = ACTIONS(187),
    [sym_rwtable] = ACTIONS(187),
    [sym_select2] = ACTIONS(187),
    [sym_select3] = ACTIONS(187),
    [sym_lowest] = ACTIONS(187),
    [sym_highest] = ACTIONS(187),
    [sym_assertbounds] = ACTIONS(187),
    [sym_int] = ACTIONS(187),
    [sym_real] = ACTIONS(185),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [sym__id] = ACTIONS(187),
  },
  [66] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_substitutions,
    STATE(51), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 26,
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
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      sym_add,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      sym_pow,
    ACTIONS(213), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(51), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(209), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(193), 14,
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
  [120] = 11,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_pow,
    ACTIONS(213), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(51), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(209), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(193), 17,
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
  [180] = 10,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(211), 1,
      sym_pow,
    ACTIONS(213), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(51), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 24,
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
  [238] = 9,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(51), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 25,
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
  [294] = 17,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      sym_add,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      sym_pow,
    ACTIONS(213), 1,
      sym_delay,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_substitutions,
    ACTIONS(221), 2,
      sym_lt,
      sym_gt,
    STATE(51), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(223), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(209), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(215), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [366] = 5,
    ACTIONS(65), 1,
      anon_sym_COLON_COLON,
    ACTIONS(67), 1,
      sym__id,
    STATE(99), 1,
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
    ACTIONS(229), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_id_repeat1,
    ACTIONS(227), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(225), 29,
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
    ACTIONS(229), 1,
      anon_sym_COLON_COLON,
    STATE(76), 1,
      aux_sym_id_repeat1,
    ACTIONS(233), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(231), 29,
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
    ACTIONS(229), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
      aux_sym_id_repeat1,
    ACTIONS(227), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(225), 29,
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
    ACTIONS(229), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
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
  [584] = 4,
    ACTIONS(243), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
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
  [627] = 11,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_pow,
    ACTIONS(250), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(246), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(193), 13,
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
  [683] = 17,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      sym_add,
    ACTIONS(266), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(139), 1,
      sym_substitutions,
    ACTIONS(272), 2,
      sym_lt,
      sym_gt,
    STATE(54), 2,
      sym_sub,
      sym_or,
    STATE(140), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(274), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(254), 5,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(268), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [751] = 17,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_pow,
    ACTIONS(250), 1,
      sym_delay,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      sym_add,
    STATE(102), 1,
      sym_substitutions,
    ACTIONS(280), 2,
      sym_lt,
      sym_gt,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(282), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(254), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(246), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [819] = 8,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      sym_substitutions,
    STATE(54), 2,
      sym_sub,
      sym_or,
    STATE(140), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(193), 21,
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
  [869] = 11,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(139), 1,
      sym_substitutions,
    STATE(54), 2,
      sym_sub,
      sym_or,
    STATE(140), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(268), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(193), 12,
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
  [925] = 10,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(139), 1,
      sym_substitutions,
    STATE(54), 2,
      sym_sub,
      sym_or,
    STATE(140), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(193), 19,
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
  [979] = 9,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      sym_delay,
    STATE(139), 1,
      sym_substitutions,
    STATE(54), 2,
      sym_sub,
      sym_or,
    STATE(140), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(193), 20,
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
  [1031] = 14,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      sym_add,
    ACTIONS(266), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      sym_pow,
    ACTIONS(276), 1,
      sym_delay,
    STATE(139), 1,
      sym_substitutions,
    STATE(54), 2,
      sym_sub,
      sym_or,
    STATE(140), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(268), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(193), 10,
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
  [1093] = 8,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 22,
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
  [1143] = 14,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(248), 1,
      sym_pow,
    ACTIONS(250), 1,
      sym_delay,
    ACTIONS(278), 1,
      sym_add,
    STATE(102), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(246), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(193), 10,
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
  [1205] = 9,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 21,
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
  [1257] = 10,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_pow,
    ACTIONS(250), 1,
      sym_delay,
    STATE(102), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(103), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(199), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(193), 20,
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
  [1311] = 2,
    ACTIONS(241), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(239), 30,
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
  [1349] = 2,
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
  [1386] = 3,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
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
  [1425] = 2,
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
  [1462] = 2,
    ACTIONS(300), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(298), 29,
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
  [1499] = 2,
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
  [1536] = 2,
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
  [1573] = 2,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(310), 29,
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
  [1610] = 2,
    ACTIONS(316), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(314), 29,
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
  [1647] = 2,
    ACTIONS(320), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(318), 29,
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
  [1684] = 2,
    ACTIONS(324), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(322), 29,
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
  [1721] = 2,
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
  [1758] = 2,
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
  [1795] = 2,
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
  [1832] = 2,
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
  [1869] = 2,
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
  [1906] = 2,
    ACTIONS(348), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(346), 29,
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
  [1943] = 2,
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
  [1980] = 2,
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
  [2017] = 2,
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
  [2054] = 2,
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
  [2091] = 3,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
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
  [2130] = 2,
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
  [2167] = 3,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
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
  [2206] = 2,
    ACTIONS(376), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(374), 29,
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
  [2243] = 2,
    ACTIONS(380), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(378), 29,
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
  [2280] = 2,
    ACTIONS(384), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(382), 29,
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
  [2317] = 2,
    ACTIONS(388), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(386), 29,
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
  [2354] = 2,
    ACTIONS(392), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(390), 29,
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
  [2391] = 2,
    ACTIONS(396), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(394), 29,
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
  [2428] = 3,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
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
  [2467] = 3,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
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
  [2506] = 3,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
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
    ACTIONS(187), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 29,
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
  [2693] = 5,
    ACTIONS(65), 1,
      anon_sym_COLON_COLON,
    ACTIONS(67), 1,
      sym__id,
    STATE(99), 1,
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
  [2735] = 5,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(123), 1,
      sym__id,
    STATE(171), 1,
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
  [2777] = 4,
    ACTIONS(416), 1,
      anon_sym_COLON_COLON,
    STATE(132), 1,
      aux_sym_id_repeat1,
    ACTIONS(233), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(231), 24,
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
  [2816] = 4,
    ACTIONS(416), 1,
      anon_sym_COLON_COLON,
    STATE(133), 1,
      aux_sym_id_repeat1,
    ACTIONS(227), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(225), 24,
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
  [2855] = 4,
    ACTIONS(416), 1,
      anon_sym_COLON_COLON,
    STATE(134), 1,
      aux_sym_id_repeat1,
    ACTIONS(227), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(225), 24,
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
  [2894] = 4,
    ACTIONS(416), 1,
      anon_sym_COLON_COLON,
    STATE(134), 1,
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
  [2933] = 4,
    ACTIONS(418), 1,
      anon_sym_COLON_COLON,
    STATE(134), 1,
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
  [2972] = 2,
    ACTIONS(241), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(239), 25,
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
  [3006] = 2,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(310), 24,
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
  [3039] = 2,
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
  [3072] = 2,
    ACTIONS(300), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(298), 24,
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
  [3105] = 2,
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
  [3138] = 2,
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
  [3171] = 2,
    ACTIONS(380), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(378), 24,
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
  [3204] = 2,
    ACTIONS(384), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(382), 24,
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
  [3237] = 2,
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
  [3270] = 2,
    ACTIONS(324), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(322), 24,
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
  [3303] = 2,
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
  [3336] = 2,
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
  [3369] = 2,
    ACTIONS(396), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(394), 24,
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
  [3402] = 2,
    ACTIONS(392), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(390), 24,
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
  [3435] = 2,
    ACTIONS(388), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(386), 24,
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
  [3468] = 2,
    ACTIONS(376), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(374), 24,
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
  [3501] = 2,
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
  [3534] = 2,
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
  [3567] = 2,
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
  [3600] = 2,
    ACTIONS(320), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(318), 24,
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
  [3633] = 2,
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
  [3666] = 2,
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
  [3699] = 2,
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
  [3732] = 2,
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
  [3765] = 3,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
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
  [3800] = 3,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
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
  [3835] = 3,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
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
  [3870] = 2,
    ACTIONS(348), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(346), 24,
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
  [3903] = 2,
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
  [3936] = 3,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
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
  [3971] = 2,
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
  [4004] = 3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
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
  [4039] = 2,
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
  [4072] = 3,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
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
  [4107] = 2,
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
  [4140] = 2,
    ACTIONS(187), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(185), 24,
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
  [4173] = 2,
    ACTIONS(316), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(314), 24,
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
  [4206] = 14,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 1,
      anon_sym_declare,
    ACTIONS(438), 1,
      anon_sym_import,
    ACTIONS(441), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(447), 1,
      anon_sym_COLON_COLON,
    ACTIONS(450), 1,
      sym__id,
    ACTIONS(453), 1,
      sym_comment,
    STATE(265), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(209), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(400), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(401), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(444), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(172), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4260] = 14,
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
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 1,
      sym_comment,
    STATE(265), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(209), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(400), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(401), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(172), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4314] = 9,
    ACTIONS(465), 1,
      anon_sym_COLON_COLON,
    ACTIONS(468), 1,
      sym__id,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    ACTIONS(460), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(462), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4349] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4383] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4417] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(186), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4451] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(176), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4485] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(185), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4519] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4553] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(183), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4587] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(175), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4621] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4655] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(180), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4689] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4723] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    STATE(300), 1,
      sym_variants,
    STATE(326), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(360), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(473), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4757] = 4,
    ACTIONS(495), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(497), 1,
      sym__doc_char,
    STATE(188), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(499), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4780] = 4,
    ACTIONS(501), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(503), 1,
      sym__doc_char,
    STATE(189), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(505), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4803] = 4,
    ACTIONS(507), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(509), 1,
      sym__doc_char,
    STATE(189), 3,
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
  [4826] = 2,
    ACTIONS(515), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(517), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4842] = 2,
    ACTIONS(519), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(521), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4858] = 2,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(525), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4874] = 2,
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
  [4890] = 2,
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
  [4906] = 2,
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
  [4922] = 2,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(539), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4937] = 2,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(543), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4952] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(547), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4971] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(555), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4990] = 2,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(559), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5005] = 6,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(563), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [5028] = 6,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(569), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [5051] = 2,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(571), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5066] = 2,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(575), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5081] = 2,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(579), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5096] = 2,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(583), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5111] = 3,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
    STATE(212), 1,
      aux_sym_id_repeat1,
    ACTIONS(225), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5127] = 3,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
    STATE(211), 1,
      aux_sym_id_repeat1,
    ACTIONS(225), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5143] = 4,
    ACTIONS(593), 1,
      anon_sym_COLON_COLON,
    ACTIONS(589), 2,
      anon_sym_import,
      sym__id,
    STATE(210), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(591), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5161] = 4,
    ACTIONS(600), 1,
      anon_sym_COLON_COLON,
    ACTIONS(595), 2,
      anon_sym_import,
      sym__id,
    STATE(210), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(597), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5179] = 3,
    ACTIONS(602), 1,
      anon_sym_COLON_COLON,
    STATE(211), 1,
      aux_sym_id_repeat1,
    ACTIONS(239), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5195] = 3,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
    STATE(211), 1,
      aux_sym_id_repeat1,
    ACTIONS(235), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5211] = 3,
    ACTIONS(587), 1,
      anon_sym_COLON_COLON,
    STATE(208), 1,
      aux_sym_id_repeat1,
    ACTIONS(231), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5227] = 1,
    ACTIONS(239), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5238] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
  [5263] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [5288] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [5313] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(615), 1,
      anon_sym_SEMI,
  [5338] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(617), 1,
      anon_sym_SEMI,
  [5363] = 4,
    ACTIONS(595), 1,
      sym__id,
    ACTIONS(600), 1,
      anon_sym_COLON_COLON,
    STATE(220), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(619), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5380] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
  [5405] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
  [5430] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [5455] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(628), 1,
      anon_sym_SEMI,
  [5480] = 4,
    ACTIONS(589), 1,
      sym__id,
    ACTIONS(593), 1,
      anon_sym_COLON_COLON,
    STATE(220), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(630), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5497] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(632), 1,
      anon_sym_SEMI,
  [5522] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(634), 1,
      anon_sym_RBRACK,
  [5547] = 2,
    ACTIONS(519), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(521), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5560] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [5585] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
  [5610] = 8,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_TILDE,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(565), 1,
      anon_sym_LT_COLON,
    ACTIONS(567), 1,
      anon_sym_COLON_GT,
    ACTIONS(607), 1,
      anon_sym_with,
    ACTIONS(609), 1,
      anon_sym_letrec,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
  [5635] = 2,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(642), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5647] = 7,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    STATE(276), 1,
      aux_sym_arguments_repeat1,
  [5669] = 5,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(664), 1,
      anon_sym_LT_COLON,
    ACTIONS(666), 1,
      anon_sym_COLON_GT,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5686] = 6,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
  [5705] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(672), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5722] = 3,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(674), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5735] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(676), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5752] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(658), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5769] = 3,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(674), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5782] = 6,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      anon_sym_COMMA,
  [5801] = 5,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(664), 1,
      anon_sym_LT_COLON,
    ACTIONS(666), 1,
      anon_sym_COLON_GT,
    ACTIONS(676), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5818] = 5,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(664), 1,
      anon_sym_LT_COLON,
    ACTIONS(666), 1,
      anon_sym_COLON_GT,
    ACTIONS(682), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5835] = 5,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    ACTIONS(686), 1,
      sym_int_cast,
    ACTIONS(688), 1,
      sym_float_cast,
    ACTIONS(690), 1,
      sym_any_cast,
    STATE(382), 1,
      sym_parameter_types,
  [5851] = 4,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      anon_sym_where,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    STATE(252), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5865] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(698), 1,
      anon_sym_COMMA,
  [5881] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(700), 1,
      anon_sym_COMMA,
  [5897] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(318), 1,
      sym__func_name,
    STATE(336), 1,
      sym_id,
    STATE(358), 1,
      sym_function_names,
  [5913] = 3,
    ACTIONS(706), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(249), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5925] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [5941] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [5957] = 4,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    ACTIONS(713), 1,
      anon_sym_where,
    STATE(249), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5971] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [5987] = 5,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_TILDE,
    ACTIONS(654), 1,
      anon_sym_LT_COLON,
    ACTIONS(656), 1,
      anon_sym_COLON_GT,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [6003] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(272), 1,
      sym_id,
    STATE(434), 1,
      sym_parameters,
  [6016] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    STATE(258), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6027] = 4,
    ACTIONS(723), 1,
      sym_int_cast,
    ACTIONS(725), 1,
      sym_float_cast,
    STATE(248), 1,
      sym__type,
    STATE(417), 1,
      sym_signature,
  [6040] = 3,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    STATE(258), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6051] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(368), 1,
      sym_rules,
    STATE(256), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6062] = 4,
    ACTIONS(732), 1,
      sym_int,
    ACTIONS(734), 1,
      sym_real,
    STATE(301), 1,
      sym__number,
    STATE(369), 1,
      sym_values,
  [6075] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(336), 1,
      sym_id,
    STATE(338), 1,
      sym__func_name,
  [6088] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(272), 1,
      sym_id,
    STATE(421), 1,
      sym_parameters,
  [6101] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_rules,
    STATE(256), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6112] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    ACTIONS(736), 1,
      sym_string,
    STATE(351), 1,
      sym_id,
  [6125] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(738), 1,
      anon_sym_import,
    STATE(331), 1,
      sym_id,
  [6138] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(272), 1,
      sym_id,
    STATE(353), 1,
      sym_parameters,
  [6151] = 4,
    ACTIONS(723), 1,
      sym_int_cast,
    ACTIONS(725), 1,
      sym_float_cast,
    STATE(248), 1,
      sym__type,
    STATE(429), 1,
      sym_signature,
  [6164] = 4,
    ACTIONS(732), 1,
      sym_int,
    ACTIONS(734), 1,
      sym_real,
    STATE(301), 1,
      sym__number,
    STATE(399), 1,
      sym_values,
  [6177] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(336), 1,
      sym_id,
    STATE(357), 1,
      sym__func_name,
  [6190] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(272), 1,
      sym_id,
    STATE(427), 1,
      sym_parameters,
  [6203] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(322), 1,
      sym__func_name,
    STATE(336), 1,
      sym_id,
  [6216] = 3,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_parameters_repeat1,
  [6226] = 3,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_parameter_types_repeat1,
  [6236] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(324), 1,
      sym_id,
  [6246] = 1,
    ACTIONS(748), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [6252] = 3,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      aux_sym_arguments_repeat1,
  [6262] = 3,
    ACTIONS(65), 1,
      anon_sym_COLON_COLON,
    ACTIONS(752), 1,
      sym__id,
    STATE(125), 1,
      sym_id,
  [6272] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(428), 1,
      sym_id,
  [6282] = 3,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_parameter_types_repeat1,
  [6292] = 3,
    ACTIONS(723), 1,
      sym_int_cast,
    ACTIONS(725), 1,
      sym_float_cast,
    STATE(299), 1,
      sym__type,
  [6302] = 3,
    ACTIONS(723), 1,
      sym_int_cast,
    ACTIONS(725), 1,
      sym_float_cast,
    STATE(286), 1,
      sym__type,
  [6312] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(388), 1,
      sym_id,
  [6322] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_parameter_types_repeat1,
  [6332] = 3,
    ACTIONS(723), 1,
      sym_int_cast,
    ACTIONS(725), 1,
      sym_float_cast,
    STATE(287), 1,
      sym__type,
  [6342] = 2,
    STATE(418), 1,
      sym__include_file,
    ACTIONS(761), 2,
      sym_string,
      sym_fstring,
  [6350] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(415), 1,
      sym_id,
  [6360] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(414), 1,
      sym_id,
  [6370] = 2,
    ACTIONS(765), 1,
      anon_sym_COLON,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6378] = 3,
    ACTIONS(767), 1,
      sym_string,
    STATE(296), 1,
      sym_modulator,
    STATE(413), 1,
      sym_modulators,
  [6388] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(339), 1,
      sym_id,
  [6398] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_parameter_types_repeat1,
  [6408] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_parameter_types_repeat1,
  [6418] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_parameter_types_repeat1,
  [6428] = 3,
    ACTIONS(775), 1,
      sym_int_cast,
    ACTIONS(777), 1,
      sym_float_cast,
    ACTIONS(779), 1,
      sym_any_cast,
  [6438] = 2,
    STATE(384), 1,
      sym__include_file,
    ACTIONS(761), 2,
      sym_string,
      sym_fstring,
  [6446] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    STATE(311), 1,
      aux_sym_modulators_repeat1,
  [6456] = 2,
    STATE(383), 1,
      sym__include_file,
    ACTIONS(761), 2,
      sym_string,
      sym_fstring,
  [6464] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(264), 1,
      sym_id,
  [6474] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(355), 1,
      sym_id,
  [6484] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(331), 1,
      sym_id,
  [6494] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(314), 1,
      aux_sym_values_repeat1,
  [6504] = 2,
    STATE(385), 1,
      sym__include_file,
    ACTIONS(761), 2,
      sym_string,
      sym_fstring,
  [6512] = 2,
    STATE(405), 1,
      sym__include_file,
    ACTIONS(761), 2,
      sym_string,
      sym_fstring,
  [6520] = 3,
    ACTIONS(789), 1,
      sym_int,
    ACTIONS(791), 1,
      sym_real,
    STATE(323), 1,
      sym__number,
  [6530] = 3,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_parameters_repeat1,
  [6540] = 3,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_parameters_repeat1,
  [6550] = 3,
    ACTIONS(800), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      aux_sym_values_repeat1,
  [6560] = 3,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_DASH_GT,
    STATE(308), 1,
      aux_sym_modulators_repeat1,
  [6570] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_parameter_types_repeat1,
  [6580] = 3,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(812), 1,
      sym__id,
    STATE(143), 1,
      sym_id,
  [6590] = 3,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_DASH_GT,
    STATE(308), 1,
      aux_sym_modulators_repeat1,
  [6600] = 3,
    ACTIONS(767), 1,
      sym_string,
    STATE(296), 1,
      sym_modulator,
    STATE(420), 1,
      sym_modulators,
  [6610] = 2,
    STATE(342), 1,
      sym__include_file,
    ACTIONS(761), 2,
      sym_string,
      sym_fstring,
  [6618] = 3,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(307), 1,
      aux_sym_values_repeat1,
  [6628] = 3,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_arguments_repeat1,
  [6638] = 3,
    ACTIONS(723), 1,
      sym_int_cast,
    ACTIONS(725), 1,
      sym_float_cast,
    STATE(290), 1,
      sym__type,
  [6648] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(702), 1,
      sym__id,
    STATE(396), 1,
      sym_id,
  [6658] = 2,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym_PIPE,
  [6665] = 2,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_environment,
  [6672] = 2,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_environment,
  [6679] = 1,
    ACTIONS(808), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6684] = 2,
    ACTIONS(829), 1,
      anon_sym_LPAREN,
    ACTIONS(831), 1,
      anon_sym_PIPE,
  [6691] = 1,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6696] = 1,
    ACTIONS(833), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6701] = 1,
    ACTIONS(835), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6706] = 2,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(839), 1,
      anon_sym_LPAREN,
  [6713] = 1,
    ACTIONS(841), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6718] = 1,
    ACTIONS(754), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6723] = 1,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6728] = 2,
    ACTIONS(767), 1,
      sym_string,
    STATE(321), 1,
      sym_modulator,
  [6735] = 2,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
  [6742] = 1,
    ACTIONS(849), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6747] = 2,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_environment,
  [6754] = 2,
    ACTIONS(851), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_rec_environment,
  [6761] = 1,
    ACTIONS(853), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6766] = 1,
    ACTIONS(855), 2,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [6771] = 1,
    ACTIONS(857), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [6776] = 2,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      anon_sym_PIPE,
  [6783] = 1,
    ACTIONS(863), 1,
      anon_sym_COMMA,
  [6787] = 1,
    ACTIONS(865), 1,
      sym__id,
  [6791] = 1,
    ACTIONS(867), 1,
      sym_string,
  [6795] = 1,
    ACTIONS(869), 1,
      anon_sym_COMMA,
  [6799] = 1,
    ACTIONS(871), 1,
      anon_sym_EQ_GT,
  [6803] = 1,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
  [6807] = 1,
    ACTIONS(875), 1,
      sym_string,
  [6811] = 1,
    ACTIONS(877), 1,
      sym_string,
  [6815] = 1,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [6819] = 1,
    ACTIONS(881), 1,
      anon_sym_SEMI,
  [6823] = 1,
    ACTIONS(883), 1,
      anon_sym_EQ,
  [6827] = 1,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [6831] = 1,
    ACTIONS(887), 1,
      sym_string,
  [6835] = 1,
    ACTIONS(889), 1,
      anon_sym_SEMI,
  [6839] = 1,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
  [6843] = 1,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
  [6847] = 1,
    ACTIONS(895), 1,
      anon_sym_COMMA,
  [6851] = 1,
    ACTIONS(897), 1,
      sym__id,
  [6855] = 1,
    ACTIONS(899), 1,
      anon_sym_LPAREN,
  [6859] = 1,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
  [6863] = 1,
    ACTIONS(903), 1,
      sym__id,
  [6867] = 1,
    ACTIONS(905), 1,
      anon_sym_SEMI,
  [6871] = 1,
    ACTIONS(907), 1,
      sym__id,
  [6875] = 1,
    ACTIONS(909), 1,
      sym_string,
  [6879] = 1,
    ACTIONS(911), 1,
      anon_sym_COMMA,
  [6883] = 1,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
  [6887] = 1,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
  [6891] = 1,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
  [6895] = 1,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [6899] = 1,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
  [6903] = 1,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
  [6907] = 1,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
  [6911] = 1,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
  [6915] = 1,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
  [6919] = 1,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
  [6923] = 1,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
  [6927] = 1,
    ACTIONS(935), 1,
      anon_sym_DOT,
  [6931] = 1,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
  [6935] = 1,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [6939] = 1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
  [6943] = 1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [6947] = 1,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
  [6951] = 1,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
  [6955] = 1,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [6959] = 1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [6963] = 1,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
  [6967] = 1,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
  [6971] = 1,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
  [6975] = 1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [6979] = 1,
    ACTIONS(961), 1,
      anon_sym_EQ,
  [6983] = 1,
    ACTIONS(963), 1,
      sym__id,
  [6987] = 1,
    ACTIONS(965), 1,
      sym_string,
  [6991] = 1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
  [6995] = 1,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [6999] = 1,
    ACTIONS(971), 1,
      sym_string,
  [7003] = 1,
    ACTIONS(973), 1,
      sym_string,
  [7007] = 1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [7011] = 1,
    ACTIONS(977), 1,
      anon_sym_COMMA,
  [7015] = 1,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
  [7019] = 1,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
  [7023] = 1,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
  [7027] = 1,
    ACTIONS(985), 1,
      anon_sym_SEMI,
  [7031] = 1,
    ACTIONS(987), 1,
      anon_sym_SEMI,
  [7035] = 1,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
  [7039] = 1,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
  [7043] = 1,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
  [7047] = 1,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [7051] = 1,
    ACTIONS(997), 1,
      sym__id,
  [7055] = 1,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
  [7059] = 1,
    ACTIONS(1001), 1,
      sym_string,
  [7063] = 1,
    ACTIONS(1003), 1,
      anon_sym_LBRACE,
  [7067] = 1,
    ACTIONS(1005), 1,
      anon_sym_LBRACE,
  [7071] = 1,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
  [7075] = 1,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
  [7079] = 1,
    ACTIONS(1011), 1,
      anon_sym_DASH_GT,
  [7083] = 1,
    ACTIONS(1013), 1,
      anon_sym_COMMA,
  [7087] = 1,
    ACTIONS(1015), 1,
      anon_sym_COMMA,
  [7091] = 1,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
  [7095] = 1,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [7099] = 1,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
  [7103] = 1,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
  [7107] = 1,
    ACTIONS(1025), 1,
      anon_sym_DASH_GT,
  [7111] = 1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
  [7115] = 1,
    ACTIONS(1029), 1,
      anon_sym_DOT,
  [7119] = 1,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
  [7123] = 1,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
  [7127] = 1,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
  [7131] = 1,
    ACTIONS(1037), 1,
      anon_sym_SEMI,
  [7135] = 1,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
  [7139] = 1,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
  [7143] = 1,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
  [7147] = 1,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
  [7151] = 1,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
  [7155] = 1,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [7159] = 1,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [7163] = 1,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
  [7167] = 1,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
  [7171] = 1,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
  [7175] = 1,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(67)] = 0,
  [SMALL_STATE(68)] = 54,
  [SMALL_STATE(69)] = 120,
  [SMALL_STATE(70)] = 180,
  [SMALL_STATE(71)] = 238,
  [SMALL_STATE(72)] = 294,
  [SMALL_STATE(73)] = 366,
  [SMALL_STATE(74)] = 412,
  [SMALL_STATE(75)] = 455,
  [SMALL_STATE(76)] = 498,
  [SMALL_STATE(77)] = 541,
  [SMALL_STATE(78)] = 584,
  [SMALL_STATE(79)] = 627,
  [SMALL_STATE(80)] = 683,
  [SMALL_STATE(81)] = 751,
  [SMALL_STATE(82)] = 819,
  [SMALL_STATE(83)] = 869,
  [SMALL_STATE(84)] = 925,
  [SMALL_STATE(85)] = 979,
  [SMALL_STATE(86)] = 1031,
  [SMALL_STATE(87)] = 1093,
  [SMALL_STATE(88)] = 1143,
  [SMALL_STATE(89)] = 1205,
  [SMALL_STATE(90)] = 1257,
  [SMALL_STATE(91)] = 1311,
  [SMALL_STATE(92)] = 1349,
  [SMALL_STATE(93)] = 1386,
  [SMALL_STATE(94)] = 1425,
  [SMALL_STATE(95)] = 1462,
  [SMALL_STATE(96)] = 1499,
  [SMALL_STATE(97)] = 1536,
  [SMALL_STATE(98)] = 1573,
  [SMALL_STATE(99)] = 1610,
  [SMALL_STATE(100)] = 1647,
  [SMALL_STATE(101)] = 1684,
  [SMALL_STATE(102)] = 1721,
  [SMALL_STATE(103)] = 1758,
  [SMALL_STATE(104)] = 1795,
  [SMALL_STATE(105)] = 1832,
  [SMALL_STATE(106)] = 1869,
  [SMALL_STATE(107)] = 1906,
  [SMALL_STATE(108)] = 1943,
  [SMALL_STATE(109)] = 1980,
  [SMALL_STATE(110)] = 2017,
  [SMALL_STATE(111)] = 2054,
  [SMALL_STATE(112)] = 2091,
  [SMALL_STATE(113)] = 2130,
  [SMALL_STATE(114)] = 2167,
  [SMALL_STATE(115)] = 2206,
  [SMALL_STATE(116)] = 2243,
  [SMALL_STATE(117)] = 2280,
  [SMALL_STATE(118)] = 2317,
  [SMALL_STATE(119)] = 2354,
  [SMALL_STATE(120)] = 2391,
  [SMALL_STATE(121)] = 2428,
  [SMALL_STATE(122)] = 2467,
  [SMALL_STATE(123)] = 2506,
  [SMALL_STATE(124)] = 2545,
  [SMALL_STATE(125)] = 2582,
  [SMALL_STATE(126)] = 2619,
  [SMALL_STATE(127)] = 2656,
  [SMALL_STATE(128)] = 2693,
  [SMALL_STATE(129)] = 2735,
  [SMALL_STATE(130)] = 2777,
  [SMALL_STATE(131)] = 2816,
  [SMALL_STATE(132)] = 2855,
  [SMALL_STATE(133)] = 2894,
  [SMALL_STATE(134)] = 2933,
  [SMALL_STATE(135)] = 2972,
  [SMALL_STATE(136)] = 3006,
  [SMALL_STATE(137)] = 3039,
  [SMALL_STATE(138)] = 3072,
  [SMALL_STATE(139)] = 3105,
  [SMALL_STATE(140)] = 3138,
  [SMALL_STATE(141)] = 3171,
  [SMALL_STATE(142)] = 3204,
  [SMALL_STATE(143)] = 3237,
  [SMALL_STATE(144)] = 3270,
  [SMALL_STATE(145)] = 3303,
  [SMALL_STATE(146)] = 3336,
  [SMALL_STATE(147)] = 3369,
  [SMALL_STATE(148)] = 3402,
  [SMALL_STATE(149)] = 3435,
  [SMALL_STATE(150)] = 3468,
  [SMALL_STATE(151)] = 3501,
  [SMALL_STATE(152)] = 3534,
  [SMALL_STATE(153)] = 3567,
  [SMALL_STATE(154)] = 3600,
  [SMALL_STATE(155)] = 3633,
  [SMALL_STATE(156)] = 3666,
  [SMALL_STATE(157)] = 3699,
  [SMALL_STATE(158)] = 3732,
  [SMALL_STATE(159)] = 3765,
  [SMALL_STATE(160)] = 3800,
  [SMALL_STATE(161)] = 3835,
  [SMALL_STATE(162)] = 3870,
  [SMALL_STATE(163)] = 3903,
  [SMALL_STATE(164)] = 3936,
  [SMALL_STATE(165)] = 3971,
  [SMALL_STATE(166)] = 4004,
  [SMALL_STATE(167)] = 4039,
  [SMALL_STATE(168)] = 4072,
  [SMALL_STATE(169)] = 4107,
  [SMALL_STATE(170)] = 4140,
  [SMALL_STATE(171)] = 4173,
  [SMALL_STATE(172)] = 4206,
  [SMALL_STATE(173)] = 4260,
  [SMALL_STATE(174)] = 4314,
  [SMALL_STATE(175)] = 4349,
  [SMALL_STATE(176)] = 4383,
  [SMALL_STATE(177)] = 4417,
  [SMALL_STATE(178)] = 4451,
  [SMALL_STATE(179)] = 4485,
  [SMALL_STATE(180)] = 4519,
  [SMALL_STATE(181)] = 4553,
  [SMALL_STATE(182)] = 4587,
  [SMALL_STATE(183)] = 4621,
  [SMALL_STATE(184)] = 4655,
  [SMALL_STATE(185)] = 4689,
  [SMALL_STATE(186)] = 4723,
  [SMALL_STATE(187)] = 4757,
  [SMALL_STATE(188)] = 4780,
  [SMALL_STATE(189)] = 4803,
  [SMALL_STATE(190)] = 4826,
  [SMALL_STATE(191)] = 4842,
  [SMALL_STATE(192)] = 4858,
  [SMALL_STATE(193)] = 4874,
  [SMALL_STATE(194)] = 4890,
  [SMALL_STATE(195)] = 4906,
  [SMALL_STATE(196)] = 4922,
  [SMALL_STATE(197)] = 4937,
  [SMALL_STATE(198)] = 4952,
  [SMALL_STATE(199)] = 4971,
  [SMALL_STATE(200)] = 4990,
  [SMALL_STATE(201)] = 5005,
  [SMALL_STATE(202)] = 5028,
  [SMALL_STATE(203)] = 5051,
  [SMALL_STATE(204)] = 5066,
  [SMALL_STATE(205)] = 5081,
  [SMALL_STATE(206)] = 5096,
  [SMALL_STATE(207)] = 5111,
  [SMALL_STATE(208)] = 5127,
  [SMALL_STATE(209)] = 5143,
  [SMALL_STATE(210)] = 5161,
  [SMALL_STATE(211)] = 5179,
  [SMALL_STATE(212)] = 5195,
  [SMALL_STATE(213)] = 5211,
  [SMALL_STATE(214)] = 5227,
  [SMALL_STATE(215)] = 5238,
  [SMALL_STATE(216)] = 5263,
  [SMALL_STATE(217)] = 5288,
  [SMALL_STATE(218)] = 5313,
  [SMALL_STATE(219)] = 5338,
  [SMALL_STATE(220)] = 5363,
  [SMALL_STATE(221)] = 5380,
  [SMALL_STATE(222)] = 5405,
  [SMALL_STATE(223)] = 5430,
  [SMALL_STATE(224)] = 5455,
  [SMALL_STATE(225)] = 5480,
  [SMALL_STATE(226)] = 5497,
  [SMALL_STATE(227)] = 5522,
  [SMALL_STATE(228)] = 5547,
  [SMALL_STATE(229)] = 5560,
  [SMALL_STATE(230)] = 5585,
  [SMALL_STATE(231)] = 5610,
  [SMALL_STATE(232)] = 5635,
  [SMALL_STATE(233)] = 5647,
  [SMALL_STATE(234)] = 5669,
  [SMALL_STATE(235)] = 5686,
  [SMALL_STATE(236)] = 5705,
  [SMALL_STATE(237)] = 5722,
  [SMALL_STATE(238)] = 5735,
  [SMALL_STATE(239)] = 5752,
  [SMALL_STATE(240)] = 5769,
  [SMALL_STATE(241)] = 5782,
  [SMALL_STATE(242)] = 5801,
  [SMALL_STATE(243)] = 5818,
  [SMALL_STATE(244)] = 5835,
  [SMALL_STATE(245)] = 5851,
  [SMALL_STATE(246)] = 5865,
  [SMALL_STATE(247)] = 5881,
  [SMALL_STATE(248)] = 5897,
  [SMALL_STATE(249)] = 5913,
  [SMALL_STATE(250)] = 5925,
  [SMALL_STATE(251)] = 5941,
  [SMALL_STATE(252)] = 5957,
  [SMALL_STATE(253)] = 5971,
  [SMALL_STATE(254)] = 5987,
  [SMALL_STATE(255)] = 6003,
  [SMALL_STATE(256)] = 6016,
  [SMALL_STATE(257)] = 6027,
  [SMALL_STATE(258)] = 6040,
  [SMALL_STATE(259)] = 6051,
  [SMALL_STATE(260)] = 6062,
  [SMALL_STATE(261)] = 6075,
  [SMALL_STATE(262)] = 6088,
  [SMALL_STATE(263)] = 6101,
  [SMALL_STATE(264)] = 6112,
  [SMALL_STATE(265)] = 6125,
  [SMALL_STATE(266)] = 6138,
  [SMALL_STATE(267)] = 6151,
  [SMALL_STATE(268)] = 6164,
  [SMALL_STATE(269)] = 6177,
  [SMALL_STATE(270)] = 6190,
  [SMALL_STATE(271)] = 6203,
  [SMALL_STATE(272)] = 6216,
  [SMALL_STATE(273)] = 6226,
  [SMALL_STATE(274)] = 6236,
  [SMALL_STATE(275)] = 6246,
  [SMALL_STATE(276)] = 6252,
  [SMALL_STATE(277)] = 6262,
  [SMALL_STATE(278)] = 6272,
  [SMALL_STATE(279)] = 6282,
  [SMALL_STATE(280)] = 6292,
  [SMALL_STATE(281)] = 6302,
  [SMALL_STATE(282)] = 6312,
  [SMALL_STATE(283)] = 6322,
  [SMALL_STATE(284)] = 6332,
  [SMALL_STATE(285)] = 6342,
  [SMALL_STATE(286)] = 6350,
  [SMALL_STATE(287)] = 6360,
  [SMALL_STATE(288)] = 6370,
  [SMALL_STATE(289)] = 6378,
  [SMALL_STATE(290)] = 6388,
  [SMALL_STATE(291)] = 6398,
  [SMALL_STATE(292)] = 6408,
  [SMALL_STATE(293)] = 6418,
  [SMALL_STATE(294)] = 6428,
  [SMALL_STATE(295)] = 6438,
  [SMALL_STATE(296)] = 6446,
  [SMALL_STATE(297)] = 6456,
  [SMALL_STATE(298)] = 6464,
  [SMALL_STATE(299)] = 6474,
  [SMALL_STATE(300)] = 6484,
  [SMALL_STATE(301)] = 6494,
  [SMALL_STATE(302)] = 6504,
  [SMALL_STATE(303)] = 6512,
  [SMALL_STATE(304)] = 6520,
  [SMALL_STATE(305)] = 6530,
  [SMALL_STATE(306)] = 6540,
  [SMALL_STATE(307)] = 6550,
  [SMALL_STATE(308)] = 6560,
  [SMALL_STATE(309)] = 6570,
  [SMALL_STATE(310)] = 6580,
  [SMALL_STATE(311)] = 6590,
  [SMALL_STATE(312)] = 6600,
  [SMALL_STATE(313)] = 6610,
  [SMALL_STATE(314)] = 6618,
  [SMALL_STATE(315)] = 6628,
  [SMALL_STATE(316)] = 6638,
  [SMALL_STATE(317)] = 6648,
  [SMALL_STATE(318)] = 6658,
  [SMALL_STATE(319)] = 6665,
  [SMALL_STATE(320)] = 6672,
  [SMALL_STATE(321)] = 6679,
  [SMALL_STATE(322)] = 6684,
  [SMALL_STATE(323)] = 6691,
  [SMALL_STATE(324)] = 6696,
  [SMALL_STATE(325)] = 6701,
  [SMALL_STATE(326)] = 6706,
  [SMALL_STATE(327)] = 6713,
  [SMALL_STATE(328)] = 6718,
  [SMALL_STATE(329)] = 6723,
  [SMALL_STATE(330)] = 6728,
  [SMALL_STATE(331)] = 6735,
  [SMALL_STATE(332)] = 6742,
  [SMALL_STATE(333)] = 6747,
  [SMALL_STATE(334)] = 6754,
  [SMALL_STATE(335)] = 6761,
  [SMALL_STATE(336)] = 6766,
  [SMALL_STATE(337)] = 6771,
  [SMALL_STATE(338)] = 6776,
  [SMALL_STATE(339)] = 6783,
  [SMALL_STATE(340)] = 6787,
  [SMALL_STATE(341)] = 6791,
  [SMALL_STATE(342)] = 6795,
  [SMALL_STATE(343)] = 6799,
  [SMALL_STATE(344)] = 6803,
  [SMALL_STATE(345)] = 6807,
  [SMALL_STATE(346)] = 6811,
  [SMALL_STATE(347)] = 6815,
  [SMALL_STATE(348)] = 6819,
  [SMALL_STATE(349)] = 6823,
  [SMALL_STATE(350)] = 6827,
  [SMALL_STATE(351)] = 6831,
  [SMALL_STATE(352)] = 6835,
  [SMALL_STATE(353)] = 6839,
  [SMALL_STATE(354)] = 6843,
  [SMALL_STATE(355)] = 6847,
  [SMALL_STATE(356)] = 6851,
  [SMALL_STATE(357)] = 6855,
  [SMALL_STATE(358)] = 6859,
  [SMALL_STATE(359)] = 6863,
  [SMALL_STATE(360)] = 6867,
  [SMALL_STATE(361)] = 6871,
  [SMALL_STATE(362)] = 6875,
  [SMALL_STATE(363)] = 6879,
  [SMALL_STATE(364)] = 6883,
  [SMALL_STATE(365)] = 6887,
  [SMALL_STATE(366)] = 6891,
  [SMALL_STATE(367)] = 6895,
  [SMALL_STATE(368)] = 6899,
  [SMALL_STATE(369)] = 6903,
  [SMALL_STATE(370)] = 6907,
  [SMALL_STATE(371)] = 6911,
  [SMALL_STATE(372)] = 6915,
  [SMALL_STATE(373)] = 6919,
  [SMALL_STATE(374)] = 6923,
  [SMALL_STATE(375)] = 6927,
  [SMALL_STATE(376)] = 6931,
  [SMALL_STATE(377)] = 6935,
  [SMALL_STATE(378)] = 6939,
  [SMALL_STATE(379)] = 6943,
  [SMALL_STATE(380)] = 6947,
  [SMALL_STATE(381)] = 6951,
  [SMALL_STATE(382)] = 6955,
  [SMALL_STATE(383)] = 6959,
  [SMALL_STATE(384)] = 6963,
  [SMALL_STATE(385)] = 6967,
  [SMALL_STATE(386)] = 6971,
  [SMALL_STATE(387)] = 6975,
  [SMALL_STATE(388)] = 6979,
  [SMALL_STATE(389)] = 6983,
  [SMALL_STATE(390)] = 6987,
  [SMALL_STATE(391)] = 6991,
  [SMALL_STATE(392)] = 6995,
  [SMALL_STATE(393)] = 6999,
  [SMALL_STATE(394)] = 7003,
  [SMALL_STATE(395)] = 7007,
  [SMALL_STATE(396)] = 7011,
  [SMALL_STATE(397)] = 7015,
  [SMALL_STATE(398)] = 7019,
  [SMALL_STATE(399)] = 7023,
  [SMALL_STATE(400)] = 7027,
  [SMALL_STATE(401)] = 7031,
  [SMALL_STATE(402)] = 7035,
  [SMALL_STATE(403)] = 7039,
  [SMALL_STATE(404)] = 7043,
  [SMALL_STATE(405)] = 7047,
  [SMALL_STATE(406)] = 7051,
  [SMALL_STATE(407)] = 7055,
  [SMALL_STATE(408)] = 7059,
  [SMALL_STATE(409)] = 7063,
  [SMALL_STATE(410)] = 7067,
  [SMALL_STATE(411)] = 7071,
  [SMALL_STATE(412)] = 7075,
  [SMALL_STATE(413)] = 7079,
  [SMALL_STATE(414)] = 7083,
  [SMALL_STATE(415)] = 7087,
  [SMALL_STATE(416)] = 7091,
  [SMALL_STATE(417)] = 7095,
  [SMALL_STATE(418)] = 7099,
  [SMALL_STATE(419)] = 7103,
  [SMALL_STATE(420)] = 7107,
  [SMALL_STATE(421)] = 7111,
  [SMALL_STATE(422)] = 7115,
  [SMALL_STATE(423)] = 7119,
  [SMALL_STATE(424)] = 7123,
  [SMALL_STATE(425)] = 7127,
  [SMALL_STATE(426)] = 7131,
  [SMALL_STATE(427)] = 7135,
  [SMALL_STATE(428)] = 7139,
  [SMALL_STATE(429)] = 7143,
  [SMALL_STATE(430)] = 7147,
  [SMALL_STATE(431)] = 7151,
  [SMALL_STATE(432)] = 7155,
  [SMALL_STATE(433)] = 7159,
  [SMALL_STATE(434)] = 7163,
  [SMALL_STATE(435)] = 7167,
  [SMALL_STATE(436)] = 7171,
  [SMALL_STATE(437)] = 7175,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 15),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(361),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ffunction, 8, .production_id = 35),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ffunction, 8, .production_id = 35),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 30),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 30),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fconst, 7, .production_id = 31),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fconst, 7, .production_id = 31),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fvariable, 7, .production_id = 31),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fvariable, 7, .production_id = 31),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 32),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 32),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 34),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 34),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 20),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 20),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4, .production_id = 9),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library, 4, .production_id = 9),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 9),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 9),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_waveform, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_waveform, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 14),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 14),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(389),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(298),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(423),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(187),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(209),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(406),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(213),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(225),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(406),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(213),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(189),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(189),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 12),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 12),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(210),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(356),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 24),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 23),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(220),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 12),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 12),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 12),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 3, .production_id = 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(282),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(21),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 38),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2), SHIFT_REPEAT(294),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 29),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 1, .production_id = 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 29),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 28),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(274),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(304),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2), SHIFT_REPEAT(330),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 28),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(46),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 16),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 10),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_file, 1, .production_id = 26),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 37),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 36),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 11),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_name, 1, .production_id = 18),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 33),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 5),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 7),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4, .production_id = 27),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [989] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 5, .production_id = 27),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
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
