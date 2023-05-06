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
#define STATE_COUNT 501
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  sym_comment = 1,
  anon_sym_class = 2,
  anon_sym_def = 3,
  anon_sym_over = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_custom = 7,
  sym_uniform = 8,
  anon_sym_DOT = 9,
  anon_sym_connect = 10,
  anon_sym_timeSamples = 11,
  anon_sym_SEMI = 12,
  anon_sym_EQ = 13,
  sym_relationship_type = 14,
  anon_sym_variantSet = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK_RBRACK = 18,
  sym_None = 19,
  anon_sym_False = 20,
  anon_sym_True = 21,
  anon_sym_false = 22,
  anon_sym_true = 23,
  aux_sym_float_token1 = 24,
  aux_sym_float_token2 = 25,
  anon_sym_inf = 26,
  anon_sym_DASHinf = 27,
  aux_sym_float_token3 = 28,
  sym__identifier = 29,
  anon_sym_COLON = 30,
  sym_integer = 31,
  anon_sym_LBRACK = 32,
  anon_sym_COMMA = 33,
  anon_sym_RBRACK = 34,
  anon_sym_DQUOTE = 35,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 36,
  anon_sym_SQUOTE = 37,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 38,
  sym__double_string_content = 39,
  sym__single_string_content = 40,
  aux_sym__escape_sequence1_token1 = 41,
  sym__escape_sequence = 42,
  anon_sym_dictionary = 43,
  anon_sym_AT = 44,
  aux_sym_asset_path_token1 = 45,
  anon_sym_BSLASH = 46,
  aux_sym_asset_path_token2 = 47,
  anon_sym_LT = 48,
  aux_sym_prim_path_token1 = 49,
  anon_sym_GT = 50,
  anon_sym_add = 51,
  anon_sym_append = 52,
  anon_sym_delete = 53,
  anon_sym_prepend = 54,
  anon_sym_reorder = 55,
  anon_sym_inherits = 56,
  anon_sym_payload = 57,
  anon_sym_references = 58,
  anon_sym_specializes = 59,
  anon_sym_variantSets = 60,
  anon_sym_variants = 61,
  anon_sym_assetInfo = 62,
  anon_sym_identifier = 63,
  anon_sym_name = 64,
  anon_sym_payloadAssetDependencies = 65,
  anon_sym_version = 66,
  anon_sym_clips = 67,
  anon_sym_active = 68,
  anon_sym_assetPaths = 69,
  anon_sym_manifestAssetPath = 70,
  anon_sym_primPath = 71,
  anon_sym_templateAssetPath = 72,
  anon_sym_templateEndTime = 73,
  anon_sym_templateStartTime = 74,
  anon_sym_templateStride = 75,
  anon_sym_times = 76,
  anon_sym_customData = 77,
  anon_sym_apiSchemaAutoApplyTo = 78,
  anon_sym_apiSchemaOverridePropertyNames = 79,
  anon_sym_className = 80,
  anon_sym_extraPlugInfo = 81,
  anon_sym_isUsdShadeContainer = 82,
  anon_sym_libraryName = 83,
  anon_sym_providesUsdShadeConnectableAPIBehavior = 84,
  anon_sym_requiresUsdShadeEncapsulation = 85,
  anon_sym_skipCodeGeneration = 86,
  anon_sym_colorConfiguration = 87,
  anon_sym_colorManagementSystem = 88,
  anon_sym_customLayerData = 89,
  anon_sym_defaultPrim = 90,
  anon_sym_doc = 91,
  anon_sym_endTimeCode = 92,
  anon_sym_framesPerSecond = 93,
  anon_sym_owner = 94,
  anon_sym_startTimeCode = 95,
  anon_sym_subLayers = 96,
  anon_sym_instanceable = 97,
  sym_module = 98,
  sym__statement = 99,
  sym_prim_type = 100,
  sym_prim_definition = 101,
  sym_block = 102,
  sym__attribute_left_side = 103,
  sym_attribute_property = 104,
  sym_attribute_declaration = 105,
  sym_attribute_assignment = 106,
  sym_relationship_declaration = 107,
  sym_relationship_assignment = 108,
  sym_variant_set_definition = 109,
  sym_variant = 110,
  sym_metadata = 111,
  sym_metadata_assignment = 112,
  sym_attribute_type = 113,
  sym__base_value = 114,
  sym__metadata_value = 115,
  sym__attribute_value = 116,
  sym_dictionary = 117,
  sym_bool = 118,
  sym_float = 119,
  sym_identifier = 120,
  sym_qualified_identifier = 121,
  sym_list_proxy = 122,
  sym_list = 123,
  sym_tuple = 124,
  sym_string = 125,
  sym__double_quote_literal = 126,
  sym__double_multi_literal = 127,
  sym__single_quote_literal = 128,
  sym__single_multi_literal = 129,
  sym__escape_sequence1 = 130,
  sym__dictionary_type = 131,
  sym_arc_path = 132,
  sym_asset_path = 133,
  sym_prim_path = 134,
  sym_prim_paths = 135,
  sym_layer_offset = 136,
  sym_orderer = 137,
  sym_timeSamples = 138,
  sym__inner_attribute_assignment = 139,
  sym__inner_dictionary_assignment = 140,
  sym__special_names = 141,
  aux_sym_module_repeat1 = 142,
  aux_sym_block_repeat1 = 143,
  aux_sym_variant_set_definition_repeat1 = 144,
  aux_sym_metadata_repeat1 = 145,
  aux_sym_dictionary_repeat1 = 146,
  aux_sym_list_proxy_repeat1 = 147,
  aux_sym_list_repeat1 = 148,
  aux_sym_list_repeat2 = 149,
  aux_sym__double_quote_literal_repeat1 = 150,
  aux_sym__double_multi_literal_repeat1 = 151,
  aux_sym__single_quote_literal_repeat1 = 152,
  aux_sym__single_multi_literal_repeat1 = 153,
  aux_sym_asset_path_repeat1 = 154,
  aux_sym_prim_paths_repeat1 = 155,
  aux_sym_layer_offset_repeat1 = 156,
  aux_sym_timeSamples_repeat1 = 157,
  alias_sym_namespace_identifier = 158,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_class] = "class",
  [anon_sym_def] = "def",
  [anon_sym_over] = "over",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_custom] = "custom",
  [sym_uniform] = "uniform",
  [anon_sym_DOT] = ".",
  [anon_sym_connect] = "connect",
  [anon_sym_timeSamples] = "timeSamples",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_relationship_type] = "relationship_type",
  [anon_sym_variantSet] = "variantSet",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_None] = "None",
  [anon_sym_False] = "False",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [aux_sym_float_token3] = "float_token3",
  [sym__identifier] = "_identifier",
  [anon_sym_COLON] = ":",
  [sym_integer] = "integer",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [sym__double_string_content] = "_double_string_content",
  [sym__single_string_content] = "_single_string_content",
  [aux_sym__escape_sequence1_token1] = "_escape_sequence1_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_dictionary] = "attribute_type",
  [anon_sym_AT] = "@",
  [aux_sym_asset_path_token1] = "asset_path_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_asset_path_token2] = "asset_path_token2",
  [anon_sym_LT] = "<",
  [aux_sym_prim_path_token1] = "prim_path_token1",
  [anon_sym_GT] = ">",
  [anon_sym_add] = "add",
  [anon_sym_append] = "append",
  [anon_sym_delete] = "delete",
  [anon_sym_prepend] = "prepend",
  [anon_sym_reorder] = "reorder",
  [anon_sym_inherits] = "inherits",
  [anon_sym_payload] = "payload",
  [anon_sym_references] = "references",
  [anon_sym_specializes] = "specializes",
  [anon_sym_variantSets] = "variantSets",
  [anon_sym_variants] = "variants",
  [anon_sym_assetInfo] = "assetInfo",
  [anon_sym_identifier] = "identifier",
  [anon_sym_name] = "name",
  [anon_sym_payloadAssetDependencies] = "payloadAssetDependencies",
  [anon_sym_version] = "version",
  [anon_sym_clips] = "clips",
  [anon_sym_active] = "active",
  [anon_sym_assetPaths] = "assetPaths",
  [anon_sym_manifestAssetPath] = "manifestAssetPath",
  [anon_sym_primPath] = "primPath",
  [anon_sym_templateAssetPath] = "templateAssetPath",
  [anon_sym_templateEndTime] = "templateEndTime",
  [anon_sym_templateStartTime] = "templateStartTime",
  [anon_sym_templateStride] = "templateStride",
  [anon_sym_times] = "times",
  [anon_sym_customData] = "customData",
  [anon_sym_apiSchemaAutoApplyTo] = "apiSchemaAutoApplyTo",
  [anon_sym_apiSchemaOverridePropertyNames] = "apiSchemaOverridePropertyNames",
  [anon_sym_className] = "className",
  [anon_sym_extraPlugInfo] = "extraPlugInfo",
  [anon_sym_isUsdShadeContainer] = "isUsdShadeContainer",
  [anon_sym_libraryName] = "libraryName",
  [anon_sym_providesUsdShadeConnectableAPIBehavior] = "providesUsdShadeConnectableAPIBehavior",
  [anon_sym_requiresUsdShadeEncapsulation] = "requiresUsdShadeEncapsulation",
  [anon_sym_skipCodeGeneration] = "skipCodeGeneration",
  [anon_sym_colorConfiguration] = "colorConfiguration",
  [anon_sym_colorManagementSystem] = "colorManagementSystem",
  [anon_sym_customLayerData] = "customLayerData",
  [anon_sym_defaultPrim] = "defaultPrim",
  [anon_sym_doc] = "doc",
  [anon_sym_endTimeCode] = "endTimeCode",
  [anon_sym_framesPerSecond] = "framesPerSecond",
  [anon_sym_owner] = "owner",
  [anon_sym_startTimeCode] = "startTimeCode",
  [anon_sym_subLayers] = "subLayers",
  [anon_sym_instanceable] = "instanceable",
  [sym_module] = "module",
  [sym__statement] = "_statement",
  [sym_prim_type] = "prim_type",
  [sym_prim_definition] = "prim_definition",
  [sym_block] = "block",
  [sym__attribute_left_side] = "_attribute_left_side",
  [sym_attribute_property] = "attribute_property",
  [sym_attribute_declaration] = "attribute_declaration",
  [sym_attribute_assignment] = "attribute_assignment",
  [sym_relationship_declaration] = "relationship_declaration",
  [sym_relationship_assignment] = "relationship_assignment",
  [sym_variant_set_definition] = "variant_set_definition",
  [sym_variant] = "variant",
  [sym_metadata] = "metadata",
  [sym_metadata_assignment] = "metadata_assignment",
  [sym_attribute_type] = "attribute_type",
  [sym__base_value] = "_base_value",
  [sym__metadata_value] = "_metadata_value",
  [sym__attribute_value] = "_attribute_value",
  [sym_dictionary] = "dictionary",
  [sym_bool] = "bool",
  [sym_float] = "float",
  [sym_identifier] = "identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_list_proxy] = "list_proxy",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_string] = "string",
  [sym__double_quote_literal] = "_double_quote_literal",
  [sym__double_multi_literal] = "_double_multi_literal",
  [sym__single_quote_literal] = "_single_quote_literal",
  [sym__single_multi_literal] = "_single_multi_literal",
  [sym__escape_sequence1] = "_escape_sequence1",
  [sym__dictionary_type] = "_dictionary_type",
  [sym_arc_path] = "arc_path",
  [sym_asset_path] = "asset_path",
  [sym_prim_path] = "prim_path",
  [sym_prim_paths] = "prim_paths",
  [sym_layer_offset] = "layer_offset",
  [sym_orderer] = "orderer",
  [sym_timeSamples] = "timeSamples",
  [sym__inner_attribute_assignment] = "_inner_attribute_assignment",
  [sym__inner_dictionary_assignment] = "_inner_dictionary_assignment",
  [sym__special_names] = "identifier",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_variant_set_definition_repeat1] = "variant_set_definition_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_list_proxy_repeat1] = "list_proxy_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
  [aux_sym__double_quote_literal_repeat1] = "_double_quote_literal_repeat1",
  [aux_sym__double_multi_literal_repeat1] = "_double_multi_literal_repeat1",
  [aux_sym__single_quote_literal_repeat1] = "_single_quote_literal_repeat1",
  [aux_sym__single_multi_literal_repeat1] = "_single_multi_literal_repeat1",
  [aux_sym_asset_path_repeat1] = "asset_path_repeat1",
  [aux_sym_prim_paths_repeat1] = "prim_paths_repeat1",
  [aux_sym_layer_offset_repeat1] = "layer_offset_repeat1",
  [aux_sym_timeSamples_repeat1] = "timeSamples_repeat1",
  [alias_sym_namespace_identifier] = "namespace_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_custom] = sym_custom,
  [sym_uniform] = sym_uniform,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_timeSamples] = anon_sym_timeSamples,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_relationship_type] = sym_relationship_type,
  [anon_sym_variantSet] = anon_sym_variantSet,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [sym_None] = sym_None,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [sym__identifier] = sym__identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_integer] = sym_integer,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [sym__double_string_content] = sym__double_string_content,
  [sym__single_string_content] = sym__single_string_content,
  [aux_sym__escape_sequence1_token1] = aux_sym__escape_sequence1_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_dictionary] = sym_attribute_type,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_asset_path_token1] = aux_sym_asset_path_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_asset_path_token2] = aux_sym_asset_path_token2,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_prim_path_token1] = aux_sym_prim_path_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_reorder] = anon_sym_reorder,
  [anon_sym_inherits] = anon_sym_inherits,
  [anon_sym_payload] = anon_sym_payload,
  [anon_sym_references] = anon_sym_references,
  [anon_sym_specializes] = anon_sym_specializes,
  [anon_sym_variantSets] = anon_sym_variantSets,
  [anon_sym_variants] = anon_sym_variants,
  [anon_sym_assetInfo] = anon_sym_assetInfo,
  [anon_sym_identifier] = anon_sym_identifier,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_payloadAssetDependencies] = anon_sym_payloadAssetDependencies,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_clips] = anon_sym_clips,
  [anon_sym_active] = anon_sym_active,
  [anon_sym_assetPaths] = anon_sym_assetPaths,
  [anon_sym_manifestAssetPath] = anon_sym_manifestAssetPath,
  [anon_sym_primPath] = anon_sym_primPath,
  [anon_sym_templateAssetPath] = anon_sym_templateAssetPath,
  [anon_sym_templateEndTime] = anon_sym_templateEndTime,
  [anon_sym_templateStartTime] = anon_sym_templateStartTime,
  [anon_sym_templateStride] = anon_sym_templateStride,
  [anon_sym_times] = anon_sym_times,
  [anon_sym_customData] = anon_sym_customData,
  [anon_sym_apiSchemaAutoApplyTo] = anon_sym_apiSchemaAutoApplyTo,
  [anon_sym_apiSchemaOverridePropertyNames] = anon_sym_apiSchemaOverridePropertyNames,
  [anon_sym_className] = anon_sym_className,
  [anon_sym_extraPlugInfo] = anon_sym_extraPlugInfo,
  [anon_sym_isUsdShadeContainer] = anon_sym_isUsdShadeContainer,
  [anon_sym_libraryName] = anon_sym_libraryName,
  [anon_sym_providesUsdShadeConnectableAPIBehavior] = anon_sym_providesUsdShadeConnectableAPIBehavior,
  [anon_sym_requiresUsdShadeEncapsulation] = anon_sym_requiresUsdShadeEncapsulation,
  [anon_sym_skipCodeGeneration] = anon_sym_skipCodeGeneration,
  [anon_sym_colorConfiguration] = anon_sym_colorConfiguration,
  [anon_sym_colorManagementSystem] = anon_sym_colorManagementSystem,
  [anon_sym_customLayerData] = anon_sym_customLayerData,
  [anon_sym_defaultPrim] = anon_sym_defaultPrim,
  [anon_sym_doc] = anon_sym_doc,
  [anon_sym_endTimeCode] = anon_sym_endTimeCode,
  [anon_sym_framesPerSecond] = anon_sym_framesPerSecond,
  [anon_sym_owner] = anon_sym_owner,
  [anon_sym_startTimeCode] = anon_sym_startTimeCode,
  [anon_sym_subLayers] = anon_sym_subLayers,
  [anon_sym_instanceable] = anon_sym_instanceable,
  [sym_module] = sym_module,
  [sym__statement] = sym__statement,
  [sym_prim_type] = sym_prim_type,
  [sym_prim_definition] = sym_prim_definition,
  [sym_block] = sym_block,
  [sym__attribute_left_side] = sym__attribute_left_side,
  [sym_attribute_property] = sym_attribute_property,
  [sym_attribute_declaration] = sym_attribute_declaration,
  [sym_attribute_assignment] = sym_attribute_assignment,
  [sym_relationship_declaration] = sym_relationship_declaration,
  [sym_relationship_assignment] = sym_relationship_assignment,
  [sym_variant_set_definition] = sym_variant_set_definition,
  [sym_variant] = sym_variant,
  [sym_metadata] = sym_metadata,
  [sym_metadata_assignment] = sym_metadata_assignment,
  [sym_attribute_type] = sym_attribute_type,
  [sym__base_value] = sym__base_value,
  [sym__metadata_value] = sym__metadata_value,
  [sym__attribute_value] = sym__attribute_value,
  [sym_dictionary] = sym_dictionary,
  [sym_bool] = sym_bool,
  [sym_float] = sym_float,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_list_proxy] = sym_list_proxy,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_string] = sym_string,
  [sym__double_quote_literal] = sym__double_quote_literal,
  [sym__double_multi_literal] = sym__double_multi_literal,
  [sym__single_quote_literal] = sym__single_quote_literal,
  [sym__single_multi_literal] = sym__single_multi_literal,
  [sym__escape_sequence1] = sym__escape_sequence1,
  [sym__dictionary_type] = sym__dictionary_type,
  [sym_arc_path] = sym_arc_path,
  [sym_asset_path] = sym_asset_path,
  [sym_prim_path] = sym_prim_path,
  [sym_prim_paths] = sym_prim_paths,
  [sym_layer_offset] = sym_layer_offset,
  [sym_orderer] = sym_orderer,
  [sym_timeSamples] = sym_timeSamples,
  [sym__inner_attribute_assignment] = sym__inner_attribute_assignment,
  [sym__inner_dictionary_assignment] = sym__inner_dictionary_assignment,
  [sym__special_names] = sym_identifier,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_variant_set_definition_repeat1] = aux_sym_variant_set_definition_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_list_proxy_repeat1] = aux_sym_list_proxy_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_list_repeat2] = aux_sym_list_repeat2,
  [aux_sym__double_quote_literal_repeat1] = aux_sym__double_quote_literal_repeat1,
  [aux_sym__double_multi_literal_repeat1] = aux_sym__double_multi_literal_repeat1,
  [aux_sym__single_quote_literal_repeat1] = aux_sym__single_quote_literal_repeat1,
  [aux_sym__single_multi_literal_repeat1] = aux_sym__single_multi_literal_repeat1,
  [aux_sym_asset_path_repeat1] = aux_sym_asset_path_repeat1,
  [aux_sym_prim_paths_repeat1] = aux_sym_prim_paths_repeat1,
  [aux_sym_layer_offset_repeat1] = aux_sym_layer_offset_repeat1,
  [aux_sym_timeSamples_repeat1] = aux_sym_timeSamples_repeat1,
  [alias_sym_namespace_identifier] = alias_sym_namespace_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
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
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym_uniform] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeSamples] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_relationship_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_variantSet] = {
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
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_None] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__double_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__single_string_content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__escape_sequence1_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_asset_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_asset_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prim_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reorder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_references] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_specializes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variantSets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assetInfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payloadAssetDependencies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clips] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assetPaths] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_manifestAssetPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_templateAssetPath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_templateEndTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_templateStartTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_templateStride] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_times] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_customData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apiSchemaAutoApplyTo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apiSchemaOverridePropertyNames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_className] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extraPlugInfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isUsdShadeContainer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_libraryName] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_providesUsdShadeConnectableAPIBehavior] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requiresUsdShadeEncapsulation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skipCodeGeneration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colorConfiguration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_colorManagementSystem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_customLayerData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defaultPrim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endTimeCode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_framesPerSecond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_owner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startTimeCode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subLayers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instanceable] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_prim_type] = {
    .visible = true,
    .named = true,
  },
  [sym_prim_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_left_side] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute_property] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_set_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym__base_value] = {
    .visible = false,
    .named = true,
  },
  [sym__metadata_value] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_list_proxy] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__double_multi_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quote_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__single_multi_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence1] = {
    .visible = false,
    .named = true,
  },
  [sym__dictionary_type] = {
    .visible = false,
    .named = true,
  },
  [sym_arc_path] = {
    .visible = true,
    .named = true,
  },
  [sym_asset_path] = {
    .visible = true,
    .named = true,
  },
  [sym_prim_path] = {
    .visible = true,
    .named = true,
  },
  [sym_prim_paths] = {
    .visible = true,
    .named = true,
  },
  [sym_layer_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_orderer] = {
    .visible = true,
    .named = true,
  },
  [sym_timeSamples] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_attribute_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__inner_dictionary_assignment] = {
    .visible = false,
    .named = true,
  },
  [sym__special_names] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_set_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_proxy_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_multi_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_quote_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_multi_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_asset_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prim_paths_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_layer_offset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_timeSamples_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_namespace_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_right = 3,
  field_scope = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_scope] = "scope",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 4},
  [5] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
    {field_scope, 0},
  [3] =
    {field_left, 1, .inherited = true},
    {field_right, 1, .inherited = true},
  [5] =
    {field_left, 0, .inherited = true},
    {field_left, 1, .inherited = true},
    {field_right, 0, .inherited = true},
    {field_right, 1, .inherited = true},
  [9] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_namespace_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_identifier, 2,
    sym_identifier,
    alias_sym_namespace_identifier,
  sym_qualified_identifier, 2,
    sym_qualified_identifier,
    alias_sym_namespace_identifier,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 2,
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
  [29] = 29,
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 57,
  [62] = 60,
  [63] = 60,
  [64] = 60,
  [65] = 60,
  [66] = 57,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 69,
  [73] = 67,
  [74] = 68,
  [75] = 71,
  [76] = 69,
  [77] = 67,
  [78] = 71,
  [79] = 71,
  [80] = 68,
  [81] = 67,
  [82] = 69,
  [83] = 67,
  [84] = 68,
  [85] = 71,
  [86] = 69,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 98,
  [105] = 105,
  [106] = 106,
  [107] = 99,
  [108] = 100,
  [109] = 97,
  [110] = 95,
  [111] = 96,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 112,
  [121] = 105,
  [122] = 32,
  [123] = 123,
  [124] = 43,
  [125] = 116,
  [126] = 126,
  [127] = 127,
  [128] = 119,
  [129] = 20,
  [130] = 21,
  [131] = 131,
  [132] = 30,
  [133] = 40,
  [134] = 9,
  [135] = 37,
  [136] = 10,
  [137] = 113,
  [138] = 11,
  [139] = 117,
  [140] = 12,
  [141] = 114,
  [142] = 19,
  [143] = 24,
  [144] = 27,
  [145] = 13,
  [146] = 146,
  [147] = 118,
  [148] = 14,
  [149] = 26,
  [150] = 15,
  [151] = 16,
  [152] = 8,
  [153] = 153,
  [154] = 154,
  [155] = 17,
  [156] = 115,
  [157] = 15,
  [158] = 154,
  [159] = 21,
  [160] = 160,
  [161] = 20,
  [162] = 17,
  [163] = 9,
  [164] = 131,
  [165] = 24,
  [166] = 127,
  [167] = 167,
  [168] = 43,
  [169] = 8,
  [170] = 26,
  [171] = 126,
  [172] = 153,
  [173] = 173,
  [174] = 37,
  [175] = 175,
  [176] = 30,
  [177] = 32,
  [178] = 173,
  [179] = 123,
  [180] = 40,
  [181] = 16,
  [182] = 175,
  [183] = 14,
  [184] = 13,
  [185] = 19,
  [186] = 27,
  [187] = 12,
  [188] = 146,
  [189] = 11,
  [190] = 10,
  [191] = 191,
  [192] = 160,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 167,
  [197] = 103,
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 200,
  [205] = 205,
  [206] = 106,
  [207] = 207,
  [208] = 201,
  [209] = 205,
  [210] = 210,
  [211] = 195,
  [212] = 210,
  [213] = 191,
  [214] = 203,
  [215] = 215,
  [216] = 202,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 220,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 222,
  [226] = 226,
  [227] = 223,
  [228] = 224,
  [229] = 229,
  [230] = 27,
  [231] = 10,
  [232] = 30,
  [233] = 19,
  [234] = 123,
  [235] = 40,
  [236] = 236,
  [237] = 32,
  [238] = 11,
  [239] = 13,
  [240] = 14,
  [241] = 37,
  [242] = 15,
  [243] = 12,
  [244] = 21,
  [245] = 20,
  [246] = 16,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 247,
  [251] = 248,
  [252] = 43,
  [253] = 8,
  [254] = 26,
  [255] = 17,
  [256] = 24,
  [257] = 9,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 260,
  [264] = 261,
  [265] = 260,
  [266] = 262,
  [267] = 267,
  [268] = 261,
  [269] = 261,
  [270] = 260,
  [271] = 267,
  [272] = 261,
  [273] = 262,
  [274] = 274,
  [275] = 262,
  [276] = 260,
  [277] = 267,
  [278] = 278,
  [279] = 267,
  [280] = 280,
  [281] = 262,
  [282] = 267,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 286,
  [287] = 287,
  [288] = 286,
  [289] = 283,
  [290] = 290,
  [291] = 291,
  [292] = 287,
  [293] = 291,
  [294] = 291,
  [295] = 286,
  [296] = 287,
  [297] = 287,
  [298] = 291,
  [299] = 283,
  [300] = 286,
  [301] = 291,
  [302] = 302,
  [303] = 286,
  [304] = 283,
  [305] = 305,
  [306] = 306,
  [307] = 287,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 308,
  [315] = 312,
  [316] = 310,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 318,
  [325] = 325,
  [326] = 326,
  [327] = 320,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 331,
  [333] = 50,
  [334] = 320,
  [335] = 319,
  [336] = 318,
  [337] = 337,
  [338] = 338,
  [339] = 326,
  [340] = 318,
  [341] = 341,
  [342] = 318,
  [343] = 323,
  [344] = 344,
  [345] = 345,
  [346] = 330,
  [347] = 328,
  [348] = 320,
  [349] = 320,
  [350] = 345,
  [351] = 344,
  [352] = 321,
  [353] = 338,
  [354] = 354,
  [355] = 355,
  [356] = 15,
  [357] = 14,
  [358] = 13,
  [359] = 27,
  [360] = 19,
  [361] = 12,
  [362] = 11,
  [363] = 10,
  [364] = 9,
  [365] = 24,
  [366] = 17,
  [367] = 26,
  [368] = 43,
  [369] = 20,
  [370] = 21,
  [371] = 30,
  [372] = 40,
  [373] = 32,
  [374] = 37,
  [375] = 375,
  [376] = 376,
  [377] = 375,
  [378] = 378,
  [379] = 379,
  [380] = 376,
  [381] = 381,
  [382] = 8,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 384,
  [390] = 390,
  [391] = 47,
  [392] = 392,
  [393] = 355,
  [394] = 378,
  [395] = 381,
  [396] = 378,
  [397] = 390,
  [398] = 381,
  [399] = 381,
  [400] = 387,
  [401] = 385,
  [402] = 355,
  [403] = 390,
  [404] = 42,
  [405] = 387,
  [406] = 385,
  [407] = 383,
  [408] = 383,
  [409] = 409,
  [410] = 379,
  [411] = 123,
  [412] = 386,
  [413] = 413,
  [414] = 45,
  [415] = 379,
  [416] = 16,
  [417] = 417,
  [418] = 383,
  [419] = 385,
  [420] = 420,
  [421] = 387,
  [422] = 422,
  [423] = 355,
  [424] = 390,
  [425] = 381,
  [426] = 378,
  [427] = 427,
  [428] = 378,
  [429] = 429,
  [430] = 390,
  [431] = 392,
  [432] = 387,
  [433] = 385,
  [434] = 383,
  [435] = 379,
  [436] = 379,
  [437] = 437,
  [438] = 422,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 355,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 444,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 446,
  [454] = 445,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 455,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 460,
  [463] = 48,
  [464] = 461,
  [465] = 447,
  [466] = 451,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 471,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 478,
  [481] = 471,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 479,
  [486] = 486,
  [487] = 471,
  [488] = 488,
  [489] = 479,
  [490] = 478,
  [491] = 478,
  [492] = 478,
  [493] = 493,
  [494] = 494,
  [495] = 494,
  [496] = 479,
  [497] = 494,
  [498] = 494,
  [499] = 494,
  [500] = 471,
};

static inline bool sym__escape_sequence_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(521);
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '(') ADVANCE(547);
      if (lookahead == ')') ADVANCE(548);
      if (lookahead == ',') ADVANCE(1062);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(538);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(1059);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(1093);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '>') ADVANCE(1099);
      if (lookahead == '@') ADVANCE(1085);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == 'T') ADVANCE(385);
      if (lookahead == '[') ADVANCE(1061);
      if (lookahead == '\\') SKIP(517)
      if (lookahead == ']') ADVANCE(1063);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(1078);
      if (lookahead == '\r') ADVANCE(1078);
      if (lookahead == 'U') ADVANCE(1080);
      if (lookahead == 'u') ADVANCE(499);
      if (lookahead == 'x') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1079);
      if (sym__escape_sequence_character_set_1(lookahead)) ADVANCE(1081);
      if (lookahead != 0) ADVANCE(1078);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '(') ADVANCE(547);
      if (lookahead == ')') ADVANCE(548);
      if (lookahead == ',') ADVANCE(1062);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '<') ADVANCE(1093);
      if (lookahead == '@') ADVANCE(1085);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(356);
      if (lookahead == 'T') ADVANCE(385);
      if (lookahead == '[') ADVANCE(1061);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(1063);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '(') ADVANCE(547);
      if (lookahead == ')') ADVANCE(548);
      if (lookahead == ',') ADVANCE(1062);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(1059);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '<') ADVANCE(1093);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(1063);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'c') ADVANCE(838);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'e') ADVANCE(876);
      if (lookahead == 'f') ADVANCE(959);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead == 't') ADVANCE(726);
      if (lookahead == 'v') ADVANCE(627);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '(') ADVANCE(547);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(1059);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'c') ADVANCE(835);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead == 'o') ADVANCE(1043);
      if (lookahead == 'p') ADVANCE(944);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(868);
      if (lookahead == 'v') ADVANCE(657);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == ')') ADVANCE(548);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(1059);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'c') ADVANCE(838);
      if (lookahead == 'd') ADVANCE(725);
      if (lookahead == 'e') ADVANCE(876);
      if (lookahead == 'f') ADVANCE(959);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(717);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead == 't') ADVANCE(726);
      if (lookahead == 'v') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(1065);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1071);
      if (lookahead != 0) ADVANCE(1073);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(1066);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(1064);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1071);
      if (lookahead != 0) ADVANCE(1073);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'd') ADVANCE(812);
      if (lookahead == '}') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') SKIP(15)
      if (lookahead == 'c') ADVANCE(1036);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(868);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == 'u') ADVANCE(868);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '/') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(1090);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(1090);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1074);
      if (lookahead == '\'') ADVANCE(1068);
      if (lookahead == '/') ADVANCE(1076);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1077);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1074);
      if (lookahead == '\'') ADVANCE(1067);
      if (lookahead == '/') ADVANCE(1076);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1075);
      if (lookahead != 0) ADVANCE(1077);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '/') ADVANCE(1087);
      if (lookahead == '@') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(1089);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1086);
      if (lookahead != 0) ADVANCE(1088);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(523);
      if (lookahead == '/') ADVANCE(1097);
      if (lookahead == '\\') ADVANCE(1094);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(1098);
      END_STATE();
    case 34:
      if (lookahead == '\'') ADVANCE(1069);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(524);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(483);
      if (lookahead == 'O') ADVANCE(490);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(381);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(438);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == 'S') ADVANCE(453);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(221);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(371);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(363);
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(365);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(368);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(373);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(374);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(227);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 51:
      if (lookahead == 'G') ADVANCE(229);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(328);
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(344);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'P') ADVANCE(290);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 'P') ADVANCE(402);
      END_STATE();
    case 62:
      if (lookahead == 'P') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'P') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'P') ADVANCE(209);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(252);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(496);
      END_STATE();
    case 68:
      if (lookahead == 'S') ADVANCE(108);
      if (lookahead == 's') ADVANCE(1150);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(206);
      if (lookahead == 's') ADVANCE(1120);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(195);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(256);
      END_STATE();
    case 72:
      if (lookahead == 'S') ADVANCE(257);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(276);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(280);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 78:
      if (lookahead == 'U') ADVANCE(426);
      END_STATE();
    case 79:
      if (lookahead == 'U') ADVANCE(442);
      END_STATE();
    case 80:
      if (lookahead == 'U') ADVANCE(444);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(549);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(408);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(297);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(456);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(1176);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(471);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(1102);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(1112);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(1106);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(1180);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(1126);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(1104);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(1188);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(1146);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 235:
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 236:
      if (lookahead == 'f') ADVANCE(561);
      END_STATE();
    case 237:
      if (lookahead == 'f') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 238:
      if (lookahead == 'f') ADVANCE(562);
      END_STATE();
    case 239:
      if (lookahead == 'f') ADVANCE(352);
      END_STATE();
    case 240:
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 241:
      if (lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 242:
      if (lookahead == 'f') ADVANCE(265);
      END_STATE();
    case 243:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 244:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 245:
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'q') ADVANCE(481);
      END_STATE();
    case 246:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 247:
      if (lookahead == 'g') ADVANCE(485);
      END_STATE();
    case 248:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 249:
      if (lookahead == 'h') ADVANCE(1140);
      END_STATE();
    case 250:
      if (lookahead == 'h') ADVANCE(1138);
      END_STATE();
    case 251:
      if (lookahead == 'h') ADVANCE(1142);
      END_STATE();
    case 252:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 253:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 254:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 255:
      if (lookahead == 'h') ADVANCE(194);
      END_STATE();
    case 256:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 257:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 264:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 290:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 301:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 302:
      if (lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 303:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 304:
      if (lookahead == 'm') ADVANCE(1172);
      END_STATE();
    case 305:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 306:
      if (lookahead == 'm') ADVANCE(377);
      END_STATE();
    case 307:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 312:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 313:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 314:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(1130);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(1170);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(1168);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(1166);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(455);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(1122);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(1158);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(1153);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 376:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 377:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 378:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 379:
      if (lookahead == 'p') ADVANCE(416);
      END_STATE();
    case 380:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(1182);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(1108);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(1124);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(1164);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(439);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(1132);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(1110);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(1186);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(1136);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(1114);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(1116);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(1128);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(1155);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(415);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 479:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 480:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 481:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 482:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 483:
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 484:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 485:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 486:
      if (lookahead == 'v') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(340);
      END_STATE();
    case 487:
      if (lookahead == 'v') ADVANCE(267);
      END_STATE();
    case 488:
      if (lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 489:
      if (lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 490:
      if (lookahead == 'v') ADVANCE(214);
      END_STATE();
    case 491:
      if (lookahead == 'y') ADVANCE(56);
      END_STATE();
    case 492:
      if (lookahead == 'y') ADVANCE(1083);
      END_STATE();
    case 493:
      if (lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 494:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 495:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 496:
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 497:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 498:
      if (lookahead == 'z') ADVANCE(207);
      END_STATE();
    case 499:
      if (lookahead == '{') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 500:
      if (lookahead == '}') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(500);
      END_STATE();
    case 501:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 502:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 503:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      END_STATE();
    case 504:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 505:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 506:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 507:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      END_STATE();
    case 508:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(511);
      END_STATE();
    case 509:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1081);
      END_STATE();
    case 510:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(500);
      END_STATE();
    case 511:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(509);
      END_STATE();
    case 512:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 513:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      END_STATE();
    case 514:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 515:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 516:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 517:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(516)
      END_STATE();
    case 518:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') SKIP(520)
      END_STATE();
    case 519:
      if (eof) ADVANCE(521);
      if (lookahead == '\n') SKIP(520)
      if (lookahead == '\r') SKIP(518)
      END_STATE();
    case 520:
      if (eof) ADVANCE(521);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '(') ADVANCE(547);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(1059);
      if (lookahead == ';') ADVANCE(541);
      if (lookahead == '=') ADVANCE(542);
      if (lookahead == '\\') SKIP(519)
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'c') ADVANCE(835);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead == 'o') ADVANCE(1043);
      if (lookahead == 'p') ADVANCE(944);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(868);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(520)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1088);
      if (lookahead == '@' ||
          lookahead == '\\') ADVANCE(524);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1098);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(524);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_over);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_custom);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_custom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_uniform);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_uniform);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_timeSamples);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_relationship_type);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_relationship_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_variantSet);
      if (lookahead == 's') ADVANCE(1118);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_variantSet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_None);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '.') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(1041);
      if (lookahead == 'O') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(993);
      if (lookahead == 'E') ADVANCE(898);
      if (lookahead == 'S') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'B') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(907);
      if (lookahead == 'M') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(886);
      if (lookahead == 'P') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(762);
      if (lookahead == 's') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'r') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1051);
      if (lookahead == 'r') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(945);
      if (lookahead == 'e') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(982);
      if (lookahead == 'i') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'r') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1006);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == 'p') ADVANCE(802);
      if (lookahead == 's') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1006);
      if (lookahead == 'p') ADVANCE(803);
      if (lookahead == 's') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == 'p') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead == 'o') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == 'i') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(929);
      if (lookahead == 'i') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == 'l') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(620);
      if (lookahead == 'l') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'o') ADVANCE(940);
      if (lookahead == 'q') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'q') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(737);
      if (lookahead == 's') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'p') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(722);
      if (lookahead == 't') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'u') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead == 'x') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'z') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1058);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(24);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(34);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym__double_string_content);
      if (lookahead == '\n') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1070);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym__double_string_content);
      if (lookahead == '#') ADVANCE(1070);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1073);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym__double_string_content);
      if (lookahead == '/') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1073);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__double_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1073);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym__single_string_content);
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1074);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym__single_string_content);
      if (lookahead == '#') ADVANCE(1074);
      if (lookahead == '/') ADVANCE(1076);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1077);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym__single_string_content);
      if (lookahead == '/') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1077);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__single_string_content);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1077);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__escape_sequence1_token1);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__escape_sequence1_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1082);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__escape_sequence1_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(1081);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_dictionary);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_asset_path_token1);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '/') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(1089);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(1088);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_asset_path_token1);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '\\') ADVANCE(1088);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_asset_path_token1);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '\\') ADVANCE(1088);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_asset_path_token2);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_asset_path_token2);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '/') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(1090);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(1090);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_asset_path_token2);
      if (lookahead == '/') ADVANCE(524);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_prim_path_token1);
      if (lookahead == '\n') ADVANCE(1096);
      if (lookahead == '\r') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(1098);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_prim_path_token1);
      if (lookahead == '\n') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(1098);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_prim_path_token1);
      if (lookahead == '#') ADVANCE(523);
      if (lookahead == '/') ADVANCE(1097);
      if (lookahead == '\\') ADVANCE(1094);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(1098);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_prim_path_token1);
      if (lookahead == '/') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(1098);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_prim_path_token1);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(1098);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_add);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_reorder);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_reorder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_inherits);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_inherits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_payload);
      if (lookahead == 'A') ADVANCE(437);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_payload);
      if (lookahead == 'A') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_references);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_references);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_specializes);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_specializes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_variantSets);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_variantSets);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_variants);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_variants);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_assetInfo);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_assetInfo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_identifier);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_payloadAssetDependencies);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_payloadAssetDependencies);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_version);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_clips);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_clips);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_active);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_assetPaths);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_assetPaths);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_manifestAssetPath);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_manifestAssetPath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_primPath);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_primPath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_templateAssetPath);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_templateAssetPath);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_templateEndTime);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_templateEndTime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_templateStartTime);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_templateStartTime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_templateStride);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_templateStride);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_times);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_times);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_customData);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_apiSchemaAutoApplyTo);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_apiSchemaAutoApplyTo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_apiSchemaOverridePropertyNames);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_apiSchemaOverridePropertyNames);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_className);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_extraPlugInfo);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_extraPlugInfo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_isUsdShadeContainer);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_isUsdShadeContainer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_libraryName);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_libraryName);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_providesUsdShadeConnectableAPIBehavior);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_providesUsdShadeConnectableAPIBehavior);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_requiresUsdShadeEncapsulation);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_requiresUsdShadeEncapsulation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_skipCodeGeneration);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_skipCodeGeneration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_colorConfiguration);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_colorConfiguration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_colorManagementSystem);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_colorManagementSystem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_customLayerData);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_defaultPrim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_doc);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_doc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_endTimeCode);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_endTimeCode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_framesPerSecond);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_framesPerSecond);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_owner);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_owner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_startTimeCode);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_startTimeCode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_subLayers);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_subLayers);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_instanceable);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_instanceable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1058);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 520},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 18},
  [88] = {.lex_state = 520},
  [89] = {.lex_state = 520},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 520},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 520},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 520},
  [108] = {.lex_state = 520},
  [109] = {.lex_state = 520},
  [110] = {.lex_state = 520},
  [111] = {.lex_state = 520},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 20},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 520},
  [121] = {.lex_state = 520},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 520},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 20},
  [128] = {.lex_state = 520},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 20},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 20},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 520},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 520},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 520},
  [142] = {.lex_state = 20},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 20},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 520},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 20},
  [154] = {.lex_state = 20},
  [155] = {.lex_state = 20},
  [156] = {.lex_state = 520},
  [157] = {.lex_state = 520},
  [158] = {.lex_state = 520},
  [159] = {.lex_state = 520},
  [160] = {.lex_state = 20},
  [161] = {.lex_state = 520},
  [162] = {.lex_state = 520},
  [163] = {.lex_state = 520},
  [164] = {.lex_state = 520},
  [165] = {.lex_state = 520},
  [166] = {.lex_state = 520},
  [167] = {.lex_state = 20},
  [168] = {.lex_state = 520},
  [169] = {.lex_state = 520},
  [170] = {.lex_state = 520},
  [171] = {.lex_state = 520},
  [172] = {.lex_state = 520},
  [173] = {.lex_state = 520},
  [174] = {.lex_state = 520},
  [175] = {.lex_state = 20},
  [176] = {.lex_state = 520},
  [177] = {.lex_state = 520},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 520},
  [180] = {.lex_state = 520},
  [181] = {.lex_state = 520},
  [182] = {.lex_state = 520},
  [183] = {.lex_state = 520},
  [184] = {.lex_state = 520},
  [185] = {.lex_state = 520},
  [186] = {.lex_state = 520},
  [187] = {.lex_state = 520},
  [188] = {.lex_state = 520},
  [189] = {.lex_state = 520},
  [190] = {.lex_state = 520},
  [191] = {.lex_state = 520},
  [192] = {.lex_state = 520},
  [193] = {.lex_state = 520},
  [194] = {.lex_state = 20},
  [195] = {.lex_state = 520},
  [196] = {.lex_state = 520},
  [197] = {.lex_state = 520},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 520},
  [200] = {.lex_state = 20},
  [201] = {.lex_state = 520},
  [202] = {.lex_state = 520},
  [203] = {.lex_state = 20},
  [204] = {.lex_state = 520},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 520},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 520},
  [210] = {.lex_state = 520},
  [211] = {.lex_state = 20},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 520},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 21},
  [221] = {.lex_state = 21},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 26},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 26},
  [248] = {.lex_state = 26},
  [249] = {.lex_state = 18},
  [250] = {.lex_state = 26},
  [251] = {.lex_state = 26},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 18},
  [254] = {.lex_state = 18},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 18},
  [258] = {.lex_state = 23},
  [259] = {.lex_state = 30},
  [260] = {.lex_state = 30},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 30},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 30},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 30},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 23},
  [270] = {.lex_state = 30},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 23},
  [274] = {.lex_state = 18},
  [275] = {.lex_state = 23},
  [276] = {.lex_state = 30},
  [277] = {.lex_state = 30},
  [278] = {.lex_state = 18},
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 18},
  [281] = {.lex_state = 23},
  [282] = {.lex_state = 30},
  [283] = {.lex_state = 25},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 25},
  [286] = {.lex_state = 31},
  [287] = {.lex_state = 31},
  [288] = {.lex_state = 31},
  [289] = {.lex_state = 25},
  [290] = {.lex_state = 25},
  [291] = {.lex_state = 25},
  [292] = {.lex_state = 31},
  [293] = {.lex_state = 25},
  [294] = {.lex_state = 25},
  [295] = {.lex_state = 31},
  [296] = {.lex_state = 31},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 25},
  [299] = {.lex_state = 25},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 25},
  [302] = {.lex_state = 31},
  [303] = {.lex_state = 31},
  [304] = {.lex_state = 25},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 31},
  [308] = {.lex_state = 27},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 21},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 27},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 32},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 32},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 21},
  [324] = {.lex_state = 32},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 32},
  [328] = {.lex_state = 21},
  [329] = {.lex_state = 32},
  [330] = {.lex_state = 21},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 32},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 32},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 32},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 32},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 21},
  [345] = {.lex_state = 21},
  [346] = {.lex_state = 21},
  [347] = {.lex_state = 21},
  [348] = {.lex_state = 32},
  [349] = {.lex_state = 32},
  [350] = {.lex_state = 21},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 21},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 26},
  [357] = {.lex_state = 26},
  [358] = {.lex_state = 26},
  [359] = {.lex_state = 26},
  [360] = {.lex_state = 26},
  [361] = {.lex_state = 26},
  [362] = {.lex_state = 26},
  [363] = {.lex_state = 26},
  [364] = {.lex_state = 26},
  [365] = {.lex_state = 26},
  [366] = {.lex_state = 26},
  [367] = {.lex_state = 26},
  [368] = {.lex_state = 26},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 26},
  [371] = {.lex_state = 26},
  [372] = {.lex_state = 26},
  [373] = {.lex_state = 26},
  [374] = {.lex_state = 26},
  [375] = {.lex_state = 28},
  [376] = {.lex_state = 28},
  [377] = {.lex_state = 28},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 28},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 26},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 21},
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
  [404] = {.lex_state = 26},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 32},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 26},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 26},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 26},
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
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 26},
  [441] = {.lex_state = 26},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 21},
  [445] = {.lex_state = 21},
  [446] = {.lex_state = 21},
  [447] = {.lex_state = 21},
  [448] = {.lex_state = 21},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 21},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 21},
  [464] = {.lex_state = 21},
  [465] = {.lex_state = 21},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 29},
  [494] = {.lex_state = 33},
  [495] = {.lex_state = 33},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 33},
  [498] = {.lex_state = 33},
  [499] = {.lex_state = 33},
  [500] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_custom] = ACTIONS(1),
    [sym_uniform] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_timeSamples] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_relationship_type] = ACTIONS(1),
    [anon_sym_variantSet] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_None] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_dictionary] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_reorder] = ACTIONS(1),
    [anon_sym_inherits] = ACTIONS(1),
    [anon_sym_payload] = ACTIONS(1),
    [anon_sym_references] = ACTIONS(1),
    [anon_sym_specializes] = ACTIONS(1),
    [anon_sym_variantSets] = ACTIONS(1),
    [anon_sym_variants] = ACTIONS(1),
    [anon_sym_assetInfo] = ACTIONS(1),
    [anon_sym_identifier] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_payloadAssetDependencies] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_clips] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_assetPaths] = ACTIONS(1),
    [anon_sym_manifestAssetPath] = ACTIONS(1),
    [anon_sym_primPath] = ACTIONS(1),
    [anon_sym_templateAssetPath] = ACTIONS(1),
    [anon_sym_templateEndTime] = ACTIONS(1),
    [anon_sym_templateStartTime] = ACTIONS(1),
    [anon_sym_templateStride] = ACTIONS(1),
    [anon_sym_times] = ACTIONS(1),
    [anon_sym_apiSchemaAutoApplyTo] = ACTIONS(1),
    [anon_sym_apiSchemaOverridePropertyNames] = ACTIONS(1),
    [anon_sym_extraPlugInfo] = ACTIONS(1),
    [anon_sym_isUsdShadeContainer] = ACTIONS(1),
    [anon_sym_libraryName] = ACTIONS(1),
    [anon_sym_providesUsdShadeConnectableAPIBehavior] = ACTIONS(1),
    [anon_sym_requiresUsdShadeEncapsulation] = ACTIONS(1),
    [anon_sym_skipCodeGeneration] = ACTIONS(1),
    [anon_sym_colorConfiguration] = ACTIONS(1),
    [anon_sym_colorManagementSystem] = ACTIONS(1),
    [anon_sym_doc] = ACTIONS(1),
    [anon_sym_endTimeCode] = ACTIONS(1),
    [anon_sym_framesPerSecond] = ACTIONS(1),
    [anon_sym_owner] = ACTIONS(1),
    [anon_sym_startTimeCode] = ACTIONS(1),
    [anon_sym_subLayers] = ACTIONS(1),
    [anon_sym_instanceable] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(483),
    [sym__statement] = STATE(89),
    [sym_prim_type] = STATE(221),
    [sym_prim_definition] = STATE(89),
    [sym__attribute_left_side] = STATE(120),
    [sym_attribute_declaration] = STATE(89),
    [sym_attribute_assignment] = STATE(89),
    [sym_relationship_declaration] = STATE(89),
    [sym_relationship_assignment] = STATE(89),
    [sym_metadata] = STATE(89),
    [sym_attribute_type] = STATE(350),
    [sym_orderer] = STATE(308),
    [aux_sym_module_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_over] = ACTIONS(9),
    [sym_custom] = ACTIONS(11),
    [sym_uniform] = ACTIONS(13),
    [sym_relationship_type] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [sym__identifier] = ACTIONS(19),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_append] = ACTIONS(21),
    [anon_sym_delete] = ACTIONS(21),
    [anon_sym_prepend] = ACTIONS(21),
    [anon_sym_reorder] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(49), 1,
      sym_orderer,
    STATE(477), 2,
      sym_identifier,
      sym__special_names,
    STATE(5), 3,
      sym_metadata_assignment,
      sym_string,
      aux_sym_metadata_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(35), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [91] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(49), 1,
      sym_orderer,
    STATE(477), 2,
      sym_identifier,
      sym__special_names,
    STATE(3), 3,
      sym_metadata_assignment,
      sym_string,
      aux_sym_metadata_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(56), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    ACTIONS(59), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [182] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_orderer,
    STATE(477), 2,
      sym_identifier,
      sym__special_names,
    STATE(3), 3,
      sym_metadata_assignment,
      sym_string,
      aux_sym_metadata_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(35), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [273] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_orderer,
    STATE(477), 2,
      sym_identifier,
      sym__special_names,
    STATE(3), 3,
      sym_metadata_assignment,
      sym_string,
      aux_sym_metadata_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(35), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [364] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_orderer,
    STATE(477), 2,
      sym_identifier,
      sym__special_names,
    STATE(4), 3,
      sym_metadata_assignment,
      sym_string,
      aux_sym_metadata_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(35), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_LT,
    STATE(18), 1,
      sym_prim_path,
    STATE(25), 1,
      sym_layer_offset,
    ACTIONS(70), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(72), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(78), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(86), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(90), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(94), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(98), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(102), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(106), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 8,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(110), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LT,
    ACTIONS(114), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1189] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_layer_offset,
    ACTIONS(116), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(118), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(122), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LT,
    ACTIONS(126), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LT,
    ACTIONS(130), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_layer_offset,
    ACTIONS(70), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(72), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(134), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(138), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(118), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(142), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(146), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(150), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(154), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(158), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(162), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(166), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2152] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(472), 3,
      sym_identifier,
      sym_string,
      sym__special_names,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2226] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(470), 3,
      sym_identifier,
      sym_string,
      sym__special_names,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(170), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(174), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(178), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(182), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(186), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(190), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(194), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(198), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(202), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(202), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(206), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(210), 50,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [3032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(216), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(214), 45,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [3090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(218), 45,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [3145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(469), 2,
      sym_identifier,
      sym__special_names,
    ACTIONS(37), 42,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 43,
      sym__identifier,
      anon_sym_inherits,
      anon_sym_payload,
      anon_sym_references,
      anon_sym_specializes,
      anon_sym_variantSets,
      anon_sym_variants,
      anon_sym_assetInfo,
      anon_sym_identifier,
      anon_sym_name,
      anon_sym_payloadAssetDependencies,
      anon_sym_version,
      anon_sym_clips,
      anon_sym_active,
      anon_sym_assetPaths,
      anon_sym_manifestAssetPath,
      anon_sym_primPath,
      anon_sym_templateAssetPath,
      anon_sym_templateEndTime,
      anon_sym_templateStartTime,
      anon_sym_templateStride,
      anon_sym_times,
      anon_sym_customData,
      anon_sym_apiSchemaAutoApplyTo,
      anon_sym_apiSchemaOverridePropertyNames,
      anon_sym_className,
      anon_sym_extraPlugInfo,
      anon_sym_isUsdShadeContainer,
      anon_sym_libraryName,
      anon_sym_providesUsdShadeConnectableAPIBehavior,
      anon_sym_requiresUsdShadeEncapsulation,
      anon_sym_skipCodeGeneration,
      anon_sym_colorConfiguration,
      anon_sym_colorManagementSystem,
      anon_sym_customLayerData,
      anon_sym_defaultPrim,
      anon_sym_doc,
      anon_sym_endTimeCode,
      anon_sym_framesPerSecond,
      anon_sym_owner,
      anon_sym_startTimeCode,
      anon_sym_subLayers,
      anon_sym_instanceable,
  [3249] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_None,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_AT,
    STATE(7), 1,
      sym_asset_path,
    STATE(22), 1,
      sym_prim_path,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(46), 10,
      sym__base_value,
      sym__metadata_value,
      sym_dictionary,
      sym_bool,
      sym_float,
      sym_list_proxy,
      sym_list,
      sym_tuple,
      sym_string,
      sym_arc_path,
  [3325] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(242), 1,
      sym_None,
    ACTIONS(244), 1,
      sym_integer,
    STATE(7), 1,
      sym_asset_path,
    STATE(22), 1,
      sym_prim_path,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(41), 10,
      sym__base_value,
      sym__metadata_value,
      sym_dictionary,
      sym_bool,
      sym_float,
      sym_list_proxy,
      sym_list,
      sym_tuple,
      sym_string,
      sym_arc_path,
  [3401] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      sym_None,
    ACTIONS(256), 1,
      aux_sym_float_token2,
    ACTIONS(258), 1,
      sym_integer,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(270), 1,
      anon_sym_AT,
    ACTIONS(272), 1,
      anon_sym_LT,
    ACTIONS(252), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(254), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(152), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(113), 10,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_list,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
      sym_timeSamples,
  [3471] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      sym_None,
    ACTIONS(284), 1,
      aux_sym_float_token2,
    ACTIONS(286), 1,
      sym_integer,
    ACTIONS(288), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(298), 1,
      anon_sym_AT,
    ACTIONS(300), 1,
      anon_sym_LT,
    ACTIONS(280), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(282), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(169), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(137), 10,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_list,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
      sym_timeSamples,
  [3541] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(302), 1,
      sym_None,
    ACTIONS(304), 1,
      sym_integer,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym_prim_path,
    STATE(305), 1,
      sym_asset_path,
    STATE(388), 1,
      sym_arc_path,
    STATE(396), 1,
      sym_tuple,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(395), 5,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_string,
  [3618] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      sym_None,
    ACTIONS(318), 1,
      aux_sym_float_token2,
    ACTIONS(320), 1,
      sym_integer,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      anon_sym_LT,
    ACTIONS(314), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(316), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(382), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(440), 9,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_list,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [3684] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      sym_None,
    ACTIONS(338), 1,
      sym_integer,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      sym_tuple,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(381), 7,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [3754] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      sym_None,
    ACTIONS(346), 1,
      sym_integer,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(428), 1,
      sym_tuple,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(399), 7,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [3824] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym_None,
    ACTIONS(360), 1,
      aux_sym_float_token2,
    ACTIONS(362), 1,
      sym_integer,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(374), 1,
      anon_sym_AT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(356), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(358), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(253), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(249), 9,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_list,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [3890] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      sym_None,
    ACTIONS(382), 1,
      sym_integer,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(423), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [3958] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(386), 1,
      sym_None,
    ACTIONS(388), 1,
      sym_integer,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      sym_tuple,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(425), 7,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4028] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      sym_None,
    ACTIONS(398), 1,
      sym_integer,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(393), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4096] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(404), 1,
      sym_None,
    ACTIONS(406), 1,
      sym_integer,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(443), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4164] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      sym_None,
    ACTIONS(414), 1,
      sym_integer,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(355), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4232] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      sym_None,
    ACTIONS(422), 1,
      sym_integer,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(402), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4300] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym_None,
    ACTIONS(428), 1,
      sym_integer,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      sym_tuple,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(398), 7,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4370] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4435] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4500] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4565] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4630] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4695] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4760] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4825] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4890] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [4955] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5020] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5085] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5150] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5215] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5280] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5345] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5410] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5475] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5540] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5605] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5670] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(434), 1,
      sym_None,
    ACTIONS(436), 1,
      sym_integer,
    ACTIONS(230), 4,
      anon_sym_False,
      anon_sym_True,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
    STATE(420), 8,
      sym__base_value,
      sym__attribute_value,
      sym_bool,
      sym_float,
      sym_tuple,
      sym_string,
      sym_asset_path,
      sym_prim_path,
  [5732] = 14,
    ACTIONS(478), 1,
      ts_builtin_sym_end,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_custom,
    ACTIONS(489), 1,
      sym_uniform,
    ACTIONS(492), 1,
      sym_relationship_type,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      sym__identifier,
    STATE(120), 1,
      sym__attribute_left_side,
    STATE(221), 1,
      sym_prim_type,
    STATE(308), 1,
      sym_orderer,
    STATE(350), 1,
      sym_attribute_type,
    ACTIONS(483), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(501), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(88), 8,
      sym__statement,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_metadata,
      aux_sym_module_repeat1,
  [5788] = 14,
    ACTIONS(11), 1,
      sym_custom,
    ACTIONS(13), 1,
      sym_uniform,
    ACTIONS(15), 1,
      sym_relationship_type,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(506), 1,
      sym_comment,
    STATE(120), 1,
      sym__attribute_left_side,
    STATE(221), 1,
      sym_prim_type,
    STATE(308), 1,
      sym_orderer,
    STATE(350), 1,
      sym_attribute_type,
    ACTIONS(9), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(21), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(88), 8,
      sym__statement,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_metadata,
      aux_sym_module_repeat1,
  [5844] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      sym_custom,
    ACTIONS(516), 1,
      sym_uniform,
    ACTIONS(519), 1,
      sym_relationship_type,
    ACTIONS(522), 1,
      anon_sym_variantSet,
    ACTIONS(525), 1,
      sym__identifier,
    STATE(112), 1,
      sym__attribute_left_side,
    STATE(220), 1,
      sym_prim_type,
    STATE(314), 1,
      sym_orderer,
    STATE(345), 1,
      sym_attribute_type,
    ACTIONS(508), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(528), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(90), 7,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_variant_set_definition,
      aux_sym_block_repeat1,
  [5899] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    ACTIONS(533), 1,
      sym_custom,
    ACTIONS(535), 1,
      sym_uniform,
    ACTIONS(537), 1,
      sym_relationship_type,
    ACTIONS(539), 1,
      anon_sym_variantSet,
    STATE(112), 1,
      sym__attribute_left_side,
    STATE(220), 1,
      sym_prim_type,
    STATE(314), 1,
      sym_orderer,
    STATE(345), 1,
      sym_attribute_type,
    ACTIONS(9), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(21), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(94), 7,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_variant_set_definition,
      aux_sym_block_repeat1,
  [5954] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_custom,
    ACTIONS(535), 1,
      sym_uniform,
    ACTIONS(537), 1,
      sym_relationship_type,
    ACTIONS(539), 1,
      anon_sym_variantSet,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym__attribute_left_side,
    STATE(220), 1,
      sym_prim_type,
    STATE(314), 1,
      sym_orderer,
    STATE(345), 1,
      sym_attribute_type,
    ACTIONS(9), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(21), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(93), 7,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_variant_set_definition,
      aux_sym_block_repeat1,
  [6009] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_custom,
    ACTIONS(535), 1,
      sym_uniform,
    ACTIONS(537), 1,
      sym_relationship_type,
    ACTIONS(539), 1,
      anon_sym_variantSet,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym__attribute_left_side,
    STATE(220), 1,
      sym_prim_type,
    STATE(314), 1,
      sym_orderer,
    STATE(345), 1,
      sym_attribute_type,
    ACTIONS(9), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(21), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(90), 7,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_variant_set_definition,
      aux_sym_block_repeat1,
  [6064] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(533), 1,
      sym_custom,
    ACTIONS(535), 1,
      sym_uniform,
    ACTIONS(537), 1,
      sym_relationship_type,
    ACTIONS(539), 1,
      anon_sym_variantSet,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym__attribute_left_side,
    STATE(220), 1,
      sym_prim_type,
    STATE(314), 1,
      sym_orderer,
    STATE(345), 1,
      sym_attribute_type,
    ACTIONS(9), 3,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
    ACTIONS(21), 5,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
    STATE(90), 7,
      sym_prim_definition,
      sym_attribute_declaration,
      sym_attribute_assignment,
      sym_relationship_declaration,
      sym_relationship_assignment,
      sym_variant_set_definition,
      aux_sym_block_repeat1,
  [6119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 8,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(547), 15,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_DOT,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(553), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(551), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON,
    ACTIONS(559), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(565), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(563), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6239] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(573), 1,
      anon_sym_DOT,
    ACTIONS(571), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(569), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_DOT,
    ACTIONS(577), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(575), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON,
    ACTIONS(581), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6328] = 2,
    ACTIONS(583), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON,
    ACTIONS(581), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(585), 15,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6378] = 4,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(565), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(563), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6406] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      anon_sym_EQ,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_metadata,
    ACTIONS(593), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(601), 15,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6466] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(605), 1,
      anon_sym_DOT,
    ACTIONS(571), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(569), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6494] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(607), 1,
      anon_sym_DOT,
    ACTIONS(577), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(575), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6522] = 2,
    ACTIONS(561), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON,
    ACTIONS(559), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6546] = 2,
    ACTIONS(549), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COLON,
    ACTIONS(547), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6570] = 4,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(609), 1,
      anon_sym_DOT,
    ACTIONS(553), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(551), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6598] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    ACTIONS(617), 1,
      anon_sym_EQ,
    STATE(175), 1,
      sym_metadata,
    ACTIONS(611), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_metadata,
    ACTIONS(619), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(625), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(629), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(563), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(551), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 4,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(633), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6788] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_metadata,
    ACTIONS(619), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6819] = 5,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_metadata,
    ACTIONS(613), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(611), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6848] = 5,
    ACTIONS(591), 1,
      anon_sym_COLON,
    ACTIONS(641), 1,
      anon_sym_EQ,
    STATE(214), 1,
      sym_metadata,
    ACTIONS(595), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(593), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(166), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(182), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(202), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6949] = 2,
    ACTIONS(565), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(563), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(643), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [6995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_metadata,
    ACTIONS(647), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7023] = 4,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_metadata,
    ACTIONS(621), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(619), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(126), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(130), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(653), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(158), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(190), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(82), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(178), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(86), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7241] = 4,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_metadata,
    ACTIONS(621), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(619), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(90), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7291] = 2,
    ACTIONS(553), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(551), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(94), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7337] = 2,
    ACTIONS(627), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(625), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(122), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(138), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(146), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(98), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(657), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7479] = 2,
    ACTIONS(635), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(633), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(102), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(142), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(106), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(110), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(78), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(661), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_metadata,
    ACTIONS(665), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(114), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7697] = 2,
    ACTIONS(631), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
    ACTIONS(629), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7719] = 2,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(106), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7740] = 3,
    STATE(191), 1,
      sym_metadata,
    ACTIONS(667), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(665), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7763] = 2,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(130), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(669), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7807] = 2,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(126), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7828] = 2,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(114), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7849] = 2,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(82), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7870] = 2,
    ACTIONS(655), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(653), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7891] = 2,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(138), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7912] = 3,
    STATE(195), 1,
      sym_metadata,
    ACTIONS(649), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(647), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(673), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7958] = 2,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(202), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [7979] = 2,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(78), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8000] = 2,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(142), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8021] = 2,
    ACTIONS(645), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(643), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8042] = 2,
    ACTIONS(663), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(661), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8063] = 3,
    ACTIONS(681), 1,
      anon_sym_SEMI,
    ACTIONS(677), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(679), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8086] = 2,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(178), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(683), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8132] = 2,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(158), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8153] = 2,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(166), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(679), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8199] = 2,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(182), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8220] = 2,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(190), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8241] = 2,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(110), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8262] = 3,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    ACTIONS(685), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(683), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8285] = 2,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(102), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8306] = 2,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(98), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8327] = 2,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(122), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8348] = 2,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(146), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8369] = 2,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(94), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8390] = 2,
    ACTIONS(659), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(657), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8411] = 2,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(90), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8432] = 2,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_SEMI,
      anon_sym_LPAREN,
    ACTIONS(86), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8453] = 2,
    ACTIONS(693), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(695), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8473] = 2,
    ACTIONS(671), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(669), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8493] = 2,
    ACTIONS(697), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(699), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8535] = 2,
    ACTIONS(667), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(665), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8555] = 2,
    ACTIONS(675), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(673), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8575] = 2,
    ACTIONS(587), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(585), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8617] = 2,
    ACTIONS(703), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(701), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8659] = 2,
    ACTIONS(685), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(683), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8679] = 2,
    ACTIONS(709), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(711), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(713), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8721] = 2,
    ACTIONS(707), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(705), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    ACTIONS(679), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8763] = 2,
    ACTIONS(603), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(601), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8827] = 2,
    ACTIONS(677), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(679), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8847] = 2,
    ACTIONS(721), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(723), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    ACTIONS(695), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8933] = 2,
    ACTIONS(715), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LPAREN,
    ACTIONS(713), 12,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(725), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 13,
      anon_sym_class,
      anon_sym_def,
      anon_sym_over,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      anon_sym_variantSet,
      sym__identifier,
      anon_sym_add,
      anon_sym_append,
      anon_sym_delete,
      anon_sym_prepend,
      anon_sym_reorder,
  [8997] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      sym_string,
    STATE(218), 2,
      sym_variant,
      aux_sym_variant_set_definition_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9029] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    ACTIONS(736), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(742), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(341), 1,
      sym_string,
    STATE(218), 2,
      sym_variant,
      aux_sym_variant_set_definition_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9061] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      sym_string,
    STATE(217), 2,
      sym_variant,
      aux_sym_variant_set_definition_repeat1,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9093] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(747), 1,
      sym__identifier,
    STATE(223), 1,
      sym_identifier,
    STATE(353), 1,
      sym_string,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9124] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(747), 1,
      sym__identifier,
    STATE(227), 1,
      sym_identifier,
    STATE(338), 1,
      sym_string,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      sym_integer,
    STATE(229), 1,
      aux_sym_timeSamples_repeat1,
    STATE(474), 1,
      sym_float,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [9180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(339), 1,
      sym_string,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9205] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(751), 1,
      sym_integer,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      aux_sym_timeSamples_repeat1,
    STATE(474), 1,
      sym_float,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [9230] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(751), 1,
      sym_integer,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_timeSamples_repeat1,
    STATE(474), 1,
      sym_float,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [9255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(488), 1,
      sym_string,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9280] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(326), 1,
      sym_string,
    STATE(8), 4,
      sym__double_quote_literal,
      sym__double_multi_literal,
      sym__single_quote_literal,
      sym__single_multi_literal,
  [9305] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(751), 1,
      sym_integer,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_timeSamples_repeat1,
    STATE(474), 1,
      sym_float,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [9330] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(764), 1,
      aux_sym_float_token2,
    ACTIONS(767), 1,
      sym_integer,
    STATE(229), 1,
      aux_sym_timeSamples_repeat1,
    STATE(474), 1,
      sym_float,
    ACTIONS(761), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [9355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(144), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(84), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(156), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(120), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(188), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      sym__identifier,
    ACTIONS(775), 1,
      anon_sym_dictionary,
    STATE(33), 1,
      sym__dictionary_type,
    STATE(34), 1,
      sym_attribute_type,
    STATE(236), 3,
      sym__inner_attribute_assignment,
      sym__inner_dictionary_assignment,
      aux_sym_dictionary_repeat1,
  [9475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(164), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(88), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(96), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(100), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(176), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(104), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(92), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(128), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(124), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(108), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9635] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(782), 1,
      anon_sym_dictionary,
    STATE(33), 1,
      sym__dictionary_type,
    STATE(34), 1,
      sym_attribute_type,
    STATE(251), 3,
      sym__inner_attribute_assignment,
      sym__inner_dictionary_assignment,
      aux_sym_dictionary_repeat1,
  [9659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(782), 1,
      anon_sym_dictionary,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__dictionary_type,
    STATE(34), 1,
      sym_attribute_type,
    STATE(236), 3,
      sym__inner_attribute_assignment,
      sym__inner_dictionary_assignment,
      aux_sym_dictionary_repeat1,
  [9683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(788), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(786), 5,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [9701] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(782), 1,
      anon_sym_dictionary,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__dictionary_type,
    STATE(34), 1,
      sym_attribute_type,
    STATE(248), 3,
      sym__inner_attribute_assignment,
      sym__inner_dictionary_assignment,
      aux_sym_dictionary_repeat1,
  [9725] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      sym__identifier,
    ACTIONS(782), 1,
      anon_sym_dictionary,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym__dictionary_type,
    STATE(34), 1,
      sym_attribute_type,
    STATE(236), 3,
      sym__inner_attribute_assignment,
      sym__inner_dictionary_assignment,
      aux_sym_dictionary_repeat1,
  [9749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(200), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(76), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(112), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(136), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(80), 6,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
      anon_sym_COMMA,
  [9845] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(803), 1,
      sym__double_string_content,
    STATE(258), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(798), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9864] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(811), 1,
      sym__single_string_content,
    STATE(259), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(806), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9883] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(818), 1,
      sym__single_string_content,
    STATE(282), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(814), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9902] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(824), 1,
      sym__double_string_content,
    STATE(262), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(820), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9921] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(830), 1,
      sym__double_string_content,
    STATE(258), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(826), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9940] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(836), 1,
      sym__single_string_content,
    STATE(279), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(832), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9959] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(842), 1,
      sym__double_string_content,
    STATE(266), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(838), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9978] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(848), 1,
      sym__single_string_content,
    STATE(267), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(844), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [9997] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__double_string_content,
    ACTIONS(850), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(258), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(826), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10016] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(856), 1,
      sym__single_string_content,
    STATE(259), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(852), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10035] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(862), 1,
      sym__double_string_content,
    STATE(281), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(858), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10054] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(868), 1,
      sym__double_string_content,
    STATE(275), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(864), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10073] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(874), 1,
      sym__single_string_content,
    STATE(277), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(870), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10092] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__single_string_content,
    ACTIONS(876), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(259), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(852), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10111] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(882), 1,
      sym__double_string_content,
    STATE(273), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(878), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10130] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__double_string_content,
    ACTIONS(884), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(258), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(826), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 2,
      aux_sym_float_token2,
      sym_integer,
    ACTIONS(886), 5,
      anon_sym_RBRACE,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [10164] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__double_string_content,
    ACTIONS(890), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(258), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(826), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10183] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(896), 1,
      sym__single_string_content,
    STATE(271), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(892), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10202] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__single_string_content,
    ACTIONS(898), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(259), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(852), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(900), 1,
      sym_integer,
    STATE(468), 1,
      sym_float,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [10240] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__single_string_content,
    ACTIONS(902), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(259), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(852), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_float_token2,
    ACTIONS(904), 1,
      sym_integer,
    STATE(442), 1,
      sym_float,
    ACTIONS(232), 4,
      aux_sym_float_token1,
      anon_sym_inf,
      anon_sym_DASHinf,
      aux_sym_float_token3,
  [10278] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__double_string_content,
    ACTIONS(906), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(258), 2,
      sym__escape_sequence1,
      aux_sym__double_multi_literal_repeat1,
    ACTIONS(826), 3,
      anon_sym_DQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10297] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__single_string_content,
    ACTIONS(908), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(259), 2,
      sym__escape_sequence1,
      aux_sym__single_multi_literal_repeat1,
    ACTIONS(852), 3,
      anon_sym_SQUOTE,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
  [10316] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
    ACTIONS(912), 1,
      sym__double_string_content,
    ACTIONS(914), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(290), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10334] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_asset_path,
    STATE(337), 1,
      sym_prim_path,
    STATE(459), 1,
      sym_arc_path,
  [10356] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym__double_string_content,
    ACTIONS(918), 1,
      anon_sym_DQUOTE,
    ACTIONS(914), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(290), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10374] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_SQUOTE,
    ACTIONS(922), 1,
      sym__single_string_content,
    ACTIONS(924), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(302), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10392] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_SQUOTE,
    ACTIONS(928), 1,
      sym__single_string_content,
    ACTIONS(930), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(286), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10410] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__single_string_content,
    ACTIONS(932), 1,
      anon_sym_SQUOTE,
    ACTIONS(924), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(302), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10428] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym__double_string_content,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    ACTIONS(914), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(290), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10446] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      sym__double_string_content,
    ACTIONS(941), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(290), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10464] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_DQUOTE,
    ACTIONS(946), 1,
      sym__double_string_content,
    ACTIONS(948), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(285), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10482] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      sym__single_string_content,
    ACTIONS(954), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(295), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10500] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
    ACTIONS(958), 1,
      sym__double_string_content,
    ACTIONS(960), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(283), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10518] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_DQUOTE,
    ACTIONS(964), 1,
      sym__double_string_content,
    ACTIONS(966), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(299), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10536] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__single_string_content,
    ACTIONS(968), 1,
      anon_sym_SQUOTE,
    ACTIONS(924), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(302), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10554] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_SQUOTE,
    ACTIONS(972), 1,
      sym__single_string_content,
    ACTIONS(974), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(288), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10572] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_SQUOTE,
    ACTIONS(978), 1,
      sym__single_string_content,
    ACTIONS(980), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(300), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10590] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    ACTIONS(984), 1,
      sym__double_string_content,
    ACTIONS(986), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(289), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10608] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym__double_string_content,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    ACTIONS(914), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(290), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10626] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__single_string_content,
    ACTIONS(990), 1,
      anon_sym_SQUOTE,
    ACTIONS(924), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(302), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10644] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_DQUOTE,
    ACTIONS(994), 1,
      sym__double_string_content,
    ACTIONS(996), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(304), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10662] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_SQUOTE,
    ACTIONS(1000), 1,
      sym__single_string_content,
    ACTIONS(1003), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(302), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10680] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__single_string_content,
    ACTIONS(1006), 1,
      anon_sym_SQUOTE,
    ACTIONS(924), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(302), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10698] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym__double_string_content,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    ACTIONS(914), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(290), 2,
      sym__escape_sequence1,
      aux_sym__double_quote_literal_repeat1,
  [10716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_LT,
    STATE(18), 1,
      sym_prim_path,
    STATE(25), 1,
      sym_layer_offset,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10736] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_AT,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_asset_path,
    STATE(337), 1,
      sym_prim_path,
    STATE(459), 1,
      sym_arc_path,
  [10758] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_SQUOTE,
    ACTIONS(1014), 1,
      sym__single_string_content,
    ACTIONS(1016), 2,
      aux_sym__escape_sequence1_token1,
      sym__escape_sequence,
    STATE(303), 2,
      sym__escape_sequence1,
      aux_sym__single_quote_literal_repeat1,
  [10776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(1018), 1,
      sym_custom,
    ACTIONS(1020), 1,
      sym_uniform,
    ACTIONS(1022), 1,
      sym_relationship_type,
    STATE(328), 1,
      sym_attribute_type,
  [10795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_AT,
    STATE(7), 1,
      sym_asset_path,
    STATE(337), 1,
      sym_prim_path,
    STATE(459), 1,
      sym_arc_path,
  [10814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT,
    ACTIONS(1024), 1,
      sym_None,
    ACTIONS(1026), 1,
      anon_sym_LBRACK,
    STATE(154), 2,
      sym_prim_path,
      sym_prim_paths,
  [10831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1028), 3,
      sym__identifier,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [10844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LT,
    ACTIONS(1026), 1,
      anon_sym_LBRACK,
    ACTIONS(1032), 1,
      sym_None,
    STATE(127), 2,
      sym_prim_path,
      sym_prim_paths,
  [10861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1036), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1034), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [10874] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(1038), 1,
      sym_custom,
    ACTIONS(1040), 1,
      sym_uniform,
    ACTIONS(1042), 1,
      sym_relationship_type,
    STATE(347), 1,
      sym_attribute_type,
  [10893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LT,
    ACTIONS(1044), 1,
      sym_None,
    ACTIONS(1046), 1,
      anon_sym_LBRACK,
    STATE(166), 2,
      sym_prim_path,
      sym_prim_paths,
  [10910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LT,
    ACTIONS(1046), 1,
      anon_sym_LBRACK,
    ACTIONS(1048), 1,
      sym_None,
    STATE(158), 2,
      sym_prim_path,
      sym_prim_paths,
  [10927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(1050), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [10940] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1054), 1,
      anon_sym_AT,
    ACTIONS(1056), 1,
      aux_sym_asset_path_token1,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    STATE(320), 1,
      aux_sym_asset_path_repeat1,
  [10956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(1060), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_prim_paths_repeat1,
    STATE(429), 1,
      sym_prim_path,
  [10972] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1062), 1,
      anon_sym_AT,
    ACTIONS(1064), 1,
      aux_sym_asset_path_token1,
    STATE(329), 1,
      aux_sym_asset_path_repeat1,
  [10988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(98), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
    ACTIONS(1068), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [11016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    STATE(121), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11030] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1077), 1,
      anon_sym_AT,
    ACTIONS(1079), 1,
      aux_sym_asset_path_token1,
    STATE(327), 1,
      aux_sym_asset_path_repeat1,
  [11046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_RBRACK,
    ACTIONS(1083), 1,
      anon_sym_LT,
    STATE(325), 1,
      aux_sym_prim_paths_repeat1,
    STATE(429), 1,
      sym_prim_path,
  [11062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_block,
    STATE(460), 1,
      sym_metadata,
  [11078] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym_asset_path_token1,
    ACTIONS(1088), 1,
      anon_sym_AT,
    STATE(329), 1,
      aux_sym_asset_path_repeat1,
  [11094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    STATE(108), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11108] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_AT,
    ACTIONS(1092), 1,
      aux_sym_asset_path_token1,
    ACTIONS(1095), 1,
      anon_sym_BSLASH,
    STATE(329), 1,
      aux_sym_asset_path_repeat1,
  [11124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(96), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(1098), 1,
      anon_sym_RBRACK,
    STATE(325), 1,
      aux_sym_prim_paths_repeat1,
    STATE(429), 1,
      sym_prim_path,
  [11154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(1100), 1,
      anon_sym_RBRACK,
    STATE(325), 1,
      aux_sym_prim_paths_repeat1,
    STATE(429), 1,
      sym_prim_path,
  [11170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      sym_custom,
      sym_uniform,
      sym_relationship_type,
      sym__identifier,
  [11180] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym_asset_path_token1,
    ACTIONS(1102), 1,
      anon_sym_AT,
    STATE(329), 1,
      aux_sym_asset_path_repeat1,
  [11196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(1104), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_prim_paths_repeat1,
    STATE(429), 1,
      sym_prim_path,
  [11212] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1106), 1,
      anon_sym_AT,
    ACTIONS(1108), 1,
      aux_sym_asset_path_token1,
    STATE(334), 1,
      aux_sym_asset_path_repeat1,
  [11228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_layer_offset,
    ACTIONS(70), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_block,
    STATE(458), 1,
      sym_metadata,
  [11258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_block,
    STATE(462), 1,
      sym_metadata,
  [11274] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1112), 1,
      anon_sym_AT,
    ACTIONS(1114), 1,
      aux_sym_asset_path_token1,
    STATE(349), 1,
      aux_sym_asset_path_repeat1,
  [11290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(313), 1,
      sym_block,
    STATE(456), 1,
      sym_metadata,
  [11306] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1116), 1,
      anon_sym_AT,
    ACTIONS(1118), 1,
      aux_sym_asset_path_token1,
    STATE(348), 1,
      aux_sym_asset_path_repeat1,
  [11322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(105), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(466), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(99), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    STATE(111), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(100), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11392] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym_asset_path_token1,
    ACTIONS(1120), 1,
      anon_sym_AT,
    STATE(329), 1,
      aux_sym_asset_path_repeat1,
  [11408] = 5,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1058), 1,
      anon_sym_BSLASH,
    ACTIONS(1064), 1,
      aux_sym_asset_path_token1,
    ACTIONS(1122), 1,
      anon_sym_AT,
    STATE(329), 1,
      aux_sym_asset_path_repeat1,
  [11424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    STATE(107), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1066), 1,
      anon_sym_COLON,
    STATE(451), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    ACTIONS(1075), 1,
      anon_sym_COLON,
    STATE(104), 2,
      sym_identifier,
      sym_qualified_identifier,
  [11466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LPAREN,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_block,
    STATE(455), 1,
      sym_metadata,
  [11482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      sym_identifier,
  [11495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
    ACTIONS(1128), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      aux_sym_list_repeat2,
  [11508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(122), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(1130), 1,
      sym_uniform,
    STATE(346), 1,
      sym_attribute_type,
  [11730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(1040), 1,
      sym_uniform,
    STATE(347), 1,
      sym_attribute_type,
  [11743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(1132), 1,
      sym_uniform,
    STATE(330), 1,
      sym_attribute_type,
  [11756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
    STATE(408), 1,
      aux_sym_list_repeat1,
  [11769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [11782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__identifier,
    ACTIONS(1020), 1,
      sym_uniform,
    STATE(328), 1,
      sym_attribute_type,
  [11795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      aux_sym_list_repeat2,
  [11808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 2,
      sym__identifier,
      anon_sym_dictionary,
  [11819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_list_repeat1,
  [11832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_attribute_property,
    ACTIONS(1142), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [11843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [11856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym_attribute_property,
    ACTIONS(1142), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [11867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [11880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_list_proxy_repeat1,
  [11893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(139), 1,
      sym_attribute_property,
    ACTIONS(1150), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [11904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [11917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1154), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(216), 2,
      sym__identifier,
      anon_sym_COLON,
  [11928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(115), 1,
      sym_attribute_property,
    ACTIONS(1142), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [11939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      aux_sym_list_repeat2,
  [11952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_list_repeat1,
  [11965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(405), 1,
      aux_sym_list_repeat2,
  [11978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_list_repeat1,
  [11991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_RBRACK,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_list_repeat2,
  [12017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      aux_sym_list_repeat2,
  [12030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_list_repeat2,
  [12069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 2,
      sym__identifier,
      anon_sym_dictionary,
  [12093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_list_repeat1,
  [12132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_list_repeat1,
  [12145] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1090), 3,
      anon_sym_AT,
      aux_sym_asset_path_token1,
      anon_sym_BSLASH,
  [12154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 2,
      sym__identifier,
      anon_sym_dictionary,
  [12178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(125), 1,
      sym_attribute_property,
    ACTIONS(1150), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [12189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_layer_offset_repeat1,
  [12202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__identifier,
      anon_sym_dictionary,
  [12213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 2,
      sym__identifier,
      anon_sym_dictionary,
  [12237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_list_proxy_repeat1,
  [12250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_list_repeat1,
  [12263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(114), 1,
      sym_attribute_property,
    ACTIONS(1142), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [12309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      aux_sym_list_repeat2,
  [12322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
    STATE(432), 1,
      aux_sym_list_repeat2,
  [12348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      aux_sym_list_repeat1,
  [12361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_layer_offset_repeat1,
  [12374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RBRACK,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_list_repeat1,
  [12387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    ACTIONS(1223), 2,
      anon_sym_RBRACK,
      anon_sym_LT,
  [12398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(156), 1,
      sym_attribute_property,
    ACTIONS(1150), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [12422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_list_repeat2,
  [12435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      aux_sym_list_repeat1,
  [12461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      sym_tuple,
  [12487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      aux_sym_list_repeat1,
  [12500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(141), 1,
      sym_attribute_property,
    ACTIONS(1150), 2,
      anon_sym_connect,
      anon_sym_timeSamples,
  [12511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1239), 1,
      anon_sym_RBRACK,
    STATE(439), 1,
      aux_sym_list_proxy_repeat1,
  [12524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_RBRACE,
    ACTIONS(1243), 2,
      sym__identifier,
      anon_sym_dictionary,
  [12535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 1,
      anon_sym_RBRACE,
    ACTIONS(1247), 2,
      sym__identifier,
      anon_sym_dictionary,
  [12546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_SEMI,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      aux_sym_layer_offset_repeat1,
  [12559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_list_repeat2,
  [12572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
  [12582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__identifier,
    STATE(328), 1,
      sym_attribute_type,
  [12592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__identifier,
    STATE(346), 1,
      sym_attribute_type,
  [12602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym__identifier,
    STATE(102), 1,
      sym_identifier,
  [12612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    STATE(473), 1,
      sym_identifier,
  [12622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    STATE(97), 1,
      sym_identifier,
  [12632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(457), 1,
      sym_tuple,
  [12642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(1257), 1,
      anon_sym_EQ,
  [12652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE,
    STATE(441), 1,
      sym_dictionary,
  [12662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__identifier,
    STATE(330), 1,
      sym_attribute_type,
  [12672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__identifier,
    STATE(347), 1,
      sym_attribute_type,
  [12682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_block,
  [12692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(317), 1,
      sym_block,
  [12702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_block,
  [12720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_block,
  [12738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__identifier,
    STATE(321), 1,
      sym_attribute_type,
  [12748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_block,
  [12758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__identifier,
      anon_sym_COLON,
  [12766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      sym__identifier,
    STATE(352), 1,
      sym_attribute_type,
  [12776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__identifier,
    STATE(101), 1,
      sym_identifier,
  [12786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(1261), 1,
      anon_sym_EQ,
  [12796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 2,
      anon_sym_RBRACK,
      anon_sym_LT,
  [12804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1263), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [12812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1265), 1,
      anon_sym_EQ,
  [12819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1267), 1,
      anon_sym_EQ,
  [12826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_RPAREN,
  [12833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1269), 1,
      anon_sym_EQ,
  [12840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1271), 1,
      anon_sym_EQ,
  [12847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_COLON,
  [12854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_RPAREN,
  [12861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1275), 1,
      anon_sym_EQ,
  [12868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1277), 1,
      anon_sym_EQ,
  [12875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_GT,
  [12882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
  [12889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_GT,
  [12896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      anon_sym_RPAREN,
  [12903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 1,
      anon_sym_RBRACK,
  [12910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1285), 1,
      ts_builtin_sym_end,
  [12917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 1,
      anon_sym_EQ,
  [12924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      anon_sym_RBRACK,
  [12931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 1,
      anon_sym_LBRACE,
  [12938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
  [12945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_EQ,
  [12952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1176), 1,
      anon_sym_RBRACK,
  [12959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1293), 1,
      anon_sym_GT,
  [12966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_GT,
  [12973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1297), 1,
      anon_sym_GT,
  [12980] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1299), 1,
      aux_sym_asset_path_token2,
  [12987] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1301), 1,
      aux_sym_prim_path_token1,
  [12994] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1303), 1,
      aux_sym_prim_path_token1,
  [13001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      anon_sym_RBRACK,
  [13008] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1305), 1,
      aux_sym_prim_path_token1,
  [13015] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1307), 1,
      aux_sym_prim_path_token1,
  [13022] = 2,
    ACTIONS(796), 1,
      sym_comment,
    ACTIONS(1309), 1,
      aux_sym_prim_path_token1,
  [13029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 455,
  [SMALL_STATE(8)] = 530,
  [SMALL_STATE(9)] = 596,
  [SMALL_STATE(10)] = 662,
  [SMALL_STATE(11)] = 728,
  [SMALL_STATE(12)] = 794,
  [SMALL_STATE(13)] = 860,
  [SMALL_STATE(14)] = 926,
  [SMALL_STATE(15)] = 992,
  [SMALL_STATE(16)] = 1058,
  [SMALL_STATE(17)] = 1124,
  [SMALL_STATE(18)] = 1189,
  [SMALL_STATE(19)] = 1258,
  [SMALL_STATE(20)] = 1323,
  [SMALL_STATE(21)] = 1388,
  [SMALL_STATE(22)] = 1453,
  [SMALL_STATE(23)] = 1522,
  [SMALL_STATE(24)] = 1585,
  [SMALL_STATE(25)] = 1648,
  [SMALL_STATE(26)] = 1711,
  [SMALL_STATE(27)] = 1774,
  [SMALL_STATE(28)] = 1837,
  [SMALL_STATE(29)] = 1900,
  [SMALL_STATE(30)] = 1963,
  [SMALL_STATE(31)] = 2026,
  [SMALL_STATE(32)] = 2089,
  [SMALL_STATE(33)] = 2152,
  [SMALL_STATE(34)] = 2226,
  [SMALL_STATE(35)] = 2300,
  [SMALL_STATE(36)] = 2361,
  [SMALL_STATE(37)] = 2422,
  [SMALL_STATE(38)] = 2483,
  [SMALL_STATE(39)] = 2544,
  [SMALL_STATE(40)] = 2605,
  [SMALL_STATE(41)] = 2666,
  [SMALL_STATE(42)] = 2727,
  [SMALL_STATE(43)] = 2788,
  [SMALL_STATE(44)] = 2849,
  [SMALL_STATE(45)] = 2910,
  [SMALL_STATE(46)] = 2971,
  [SMALL_STATE(47)] = 3032,
  [SMALL_STATE(48)] = 3090,
  [SMALL_STATE(49)] = 3145,
  [SMALL_STATE(50)] = 3200,
  [SMALL_STATE(51)] = 3249,
  [SMALL_STATE(52)] = 3325,
  [SMALL_STATE(53)] = 3401,
  [SMALL_STATE(54)] = 3471,
  [SMALL_STATE(55)] = 3541,
  [SMALL_STATE(56)] = 3618,
  [SMALL_STATE(57)] = 3684,
  [SMALL_STATE(58)] = 3754,
  [SMALL_STATE(59)] = 3824,
  [SMALL_STATE(60)] = 3890,
  [SMALL_STATE(61)] = 3958,
  [SMALL_STATE(62)] = 4028,
  [SMALL_STATE(63)] = 4096,
  [SMALL_STATE(64)] = 4164,
  [SMALL_STATE(65)] = 4232,
  [SMALL_STATE(66)] = 4300,
  [SMALL_STATE(67)] = 4370,
  [SMALL_STATE(68)] = 4435,
  [SMALL_STATE(69)] = 4500,
  [SMALL_STATE(70)] = 4565,
  [SMALL_STATE(71)] = 4630,
  [SMALL_STATE(72)] = 4695,
  [SMALL_STATE(73)] = 4760,
  [SMALL_STATE(74)] = 4825,
  [SMALL_STATE(75)] = 4890,
  [SMALL_STATE(76)] = 4955,
  [SMALL_STATE(77)] = 5020,
  [SMALL_STATE(78)] = 5085,
  [SMALL_STATE(79)] = 5150,
  [SMALL_STATE(80)] = 5215,
  [SMALL_STATE(81)] = 5280,
  [SMALL_STATE(82)] = 5345,
  [SMALL_STATE(83)] = 5410,
  [SMALL_STATE(84)] = 5475,
  [SMALL_STATE(85)] = 5540,
  [SMALL_STATE(86)] = 5605,
  [SMALL_STATE(87)] = 5670,
  [SMALL_STATE(88)] = 5732,
  [SMALL_STATE(89)] = 5788,
  [SMALL_STATE(90)] = 5844,
  [SMALL_STATE(91)] = 5899,
  [SMALL_STATE(92)] = 5954,
  [SMALL_STATE(93)] = 6009,
  [SMALL_STATE(94)] = 6064,
  [SMALL_STATE(95)] = 6119,
  [SMALL_STATE(96)] = 6150,
  [SMALL_STATE(97)] = 6181,
  [SMALL_STATE(98)] = 6208,
  [SMALL_STATE(99)] = 6239,
  [SMALL_STATE(100)] = 6270,
  [SMALL_STATE(101)] = 6301,
  [SMALL_STATE(102)] = 6328,
  [SMALL_STATE(103)] = 6352,
  [SMALL_STATE(104)] = 6378,
  [SMALL_STATE(105)] = 6406,
  [SMALL_STATE(106)] = 6440,
  [SMALL_STATE(107)] = 6466,
  [SMALL_STATE(108)] = 6494,
  [SMALL_STATE(109)] = 6522,
  [SMALL_STATE(110)] = 6546,
  [SMALL_STATE(111)] = 6570,
  [SMALL_STATE(112)] = 6598,
  [SMALL_STATE(113)] = 6632,
  [SMALL_STATE(114)] = 6663,
  [SMALL_STATE(115)] = 6688,
  [SMALL_STATE(116)] = 6713,
  [SMALL_STATE(117)] = 6738,
  [SMALL_STATE(118)] = 6763,
  [SMALL_STATE(119)] = 6788,
  [SMALL_STATE(120)] = 6819,
  [SMALL_STATE(121)] = 6848,
  [SMALL_STATE(122)] = 6877,
  [SMALL_STATE(123)] = 6901,
  [SMALL_STATE(124)] = 6925,
  [SMALL_STATE(125)] = 6949,
  [SMALL_STATE(126)] = 6971,
  [SMALL_STATE(127)] = 6995,
  [SMALL_STATE(128)] = 7023,
  [SMALL_STATE(129)] = 7049,
  [SMALL_STATE(130)] = 7073,
  [SMALL_STATE(131)] = 7097,
  [SMALL_STATE(132)] = 7121,
  [SMALL_STATE(133)] = 7145,
  [SMALL_STATE(134)] = 7169,
  [SMALL_STATE(135)] = 7193,
  [SMALL_STATE(136)] = 7217,
  [SMALL_STATE(137)] = 7241,
  [SMALL_STATE(138)] = 7267,
  [SMALL_STATE(139)] = 7291,
  [SMALL_STATE(140)] = 7313,
  [SMALL_STATE(141)] = 7337,
  [SMALL_STATE(142)] = 7359,
  [SMALL_STATE(143)] = 7383,
  [SMALL_STATE(144)] = 7407,
  [SMALL_STATE(145)] = 7431,
  [SMALL_STATE(146)] = 7455,
  [SMALL_STATE(147)] = 7479,
  [SMALL_STATE(148)] = 7501,
  [SMALL_STATE(149)] = 7525,
  [SMALL_STATE(150)] = 7549,
  [SMALL_STATE(151)] = 7573,
  [SMALL_STATE(152)] = 7597,
  [SMALL_STATE(153)] = 7621,
  [SMALL_STATE(154)] = 7645,
  [SMALL_STATE(155)] = 7673,
  [SMALL_STATE(156)] = 7697,
  [SMALL_STATE(157)] = 7719,
  [SMALL_STATE(158)] = 7740,
  [SMALL_STATE(159)] = 7763,
  [SMALL_STATE(160)] = 7784,
  [SMALL_STATE(161)] = 7807,
  [SMALL_STATE(162)] = 7828,
  [SMALL_STATE(163)] = 7849,
  [SMALL_STATE(164)] = 7870,
  [SMALL_STATE(165)] = 7891,
  [SMALL_STATE(166)] = 7912,
  [SMALL_STATE(167)] = 7935,
  [SMALL_STATE(168)] = 7958,
  [SMALL_STATE(169)] = 7979,
  [SMALL_STATE(170)] = 8000,
  [SMALL_STATE(171)] = 8021,
  [SMALL_STATE(172)] = 8042,
  [SMALL_STATE(173)] = 8063,
  [SMALL_STATE(174)] = 8086,
  [SMALL_STATE(175)] = 8107,
  [SMALL_STATE(176)] = 8132,
  [SMALL_STATE(177)] = 8153,
  [SMALL_STATE(178)] = 8174,
  [SMALL_STATE(179)] = 8199,
  [SMALL_STATE(180)] = 8220,
  [SMALL_STATE(181)] = 8241,
  [SMALL_STATE(182)] = 8262,
  [SMALL_STATE(183)] = 8285,
  [SMALL_STATE(184)] = 8306,
  [SMALL_STATE(185)] = 8327,
  [SMALL_STATE(186)] = 8348,
  [SMALL_STATE(187)] = 8369,
  [SMALL_STATE(188)] = 8390,
  [SMALL_STATE(189)] = 8411,
  [SMALL_STATE(190)] = 8432,
  [SMALL_STATE(191)] = 8453,
  [SMALL_STATE(192)] = 8473,
  [SMALL_STATE(193)] = 8493,
  [SMALL_STATE(194)] = 8513,
  [SMALL_STATE(195)] = 8535,
  [SMALL_STATE(196)] = 8555,
  [SMALL_STATE(197)] = 8575,
  [SMALL_STATE(198)] = 8595,
  [SMALL_STATE(199)] = 8617,
  [SMALL_STATE(200)] = 8637,
  [SMALL_STATE(201)] = 8659,
  [SMALL_STATE(202)] = 8679,
  [SMALL_STATE(203)] = 8699,
  [SMALL_STATE(204)] = 8721,
  [SMALL_STATE(205)] = 8741,
  [SMALL_STATE(206)] = 8763,
  [SMALL_STATE(207)] = 8783,
  [SMALL_STATE(208)] = 8805,
  [SMALL_STATE(209)] = 8827,
  [SMALL_STATE(210)] = 8847,
  [SMALL_STATE(211)] = 8867,
  [SMALL_STATE(212)] = 8889,
  [SMALL_STATE(213)] = 8911,
  [SMALL_STATE(214)] = 8933,
  [SMALL_STATE(215)] = 8953,
  [SMALL_STATE(216)] = 8975,
  [SMALL_STATE(217)] = 8997,
  [SMALL_STATE(218)] = 9029,
  [SMALL_STATE(219)] = 9061,
  [SMALL_STATE(220)] = 9093,
  [SMALL_STATE(221)] = 9124,
  [SMALL_STATE(222)] = 9155,
  [SMALL_STATE(223)] = 9180,
  [SMALL_STATE(224)] = 9205,
  [SMALL_STATE(225)] = 9230,
  [SMALL_STATE(226)] = 9255,
  [SMALL_STATE(227)] = 9280,
  [SMALL_STATE(228)] = 9305,
  [SMALL_STATE(229)] = 9330,
  [SMALL_STATE(230)] = 9355,
  [SMALL_STATE(231)] = 9371,
  [SMALL_STATE(232)] = 9387,
  [SMALL_STATE(233)] = 9403,
  [SMALL_STATE(234)] = 9419,
  [SMALL_STATE(235)] = 9435,
  [SMALL_STATE(236)] = 9451,
  [SMALL_STATE(237)] = 9475,
  [SMALL_STATE(238)] = 9491,
  [SMALL_STATE(239)] = 9507,
  [SMALL_STATE(240)] = 9523,
  [SMALL_STATE(241)] = 9539,
  [SMALL_STATE(242)] = 9555,
  [SMALL_STATE(243)] = 9571,
  [SMALL_STATE(244)] = 9587,
  [SMALL_STATE(245)] = 9603,
  [SMALL_STATE(246)] = 9619,
  [SMALL_STATE(247)] = 9635,
  [SMALL_STATE(248)] = 9659,
  [SMALL_STATE(249)] = 9683,
  [SMALL_STATE(250)] = 9701,
  [SMALL_STATE(251)] = 9725,
  [SMALL_STATE(252)] = 9749,
  [SMALL_STATE(253)] = 9765,
  [SMALL_STATE(254)] = 9781,
  [SMALL_STATE(255)] = 9797,
  [SMALL_STATE(256)] = 9813,
  [SMALL_STATE(257)] = 9829,
  [SMALL_STATE(258)] = 9845,
  [SMALL_STATE(259)] = 9864,
  [SMALL_STATE(260)] = 9883,
  [SMALL_STATE(261)] = 9902,
  [SMALL_STATE(262)] = 9921,
  [SMALL_STATE(263)] = 9940,
  [SMALL_STATE(264)] = 9959,
  [SMALL_STATE(265)] = 9978,
  [SMALL_STATE(266)] = 9997,
  [SMALL_STATE(267)] = 10016,
  [SMALL_STATE(268)] = 10035,
  [SMALL_STATE(269)] = 10054,
  [SMALL_STATE(270)] = 10073,
  [SMALL_STATE(271)] = 10092,
  [SMALL_STATE(272)] = 10111,
  [SMALL_STATE(273)] = 10130,
  [SMALL_STATE(274)] = 10149,
  [SMALL_STATE(275)] = 10164,
  [SMALL_STATE(276)] = 10183,
  [SMALL_STATE(277)] = 10202,
  [SMALL_STATE(278)] = 10221,
  [SMALL_STATE(279)] = 10240,
  [SMALL_STATE(280)] = 10259,
  [SMALL_STATE(281)] = 10278,
  [SMALL_STATE(282)] = 10297,
  [SMALL_STATE(283)] = 10316,
  [SMALL_STATE(284)] = 10334,
  [SMALL_STATE(285)] = 10356,
  [SMALL_STATE(286)] = 10374,
  [SMALL_STATE(287)] = 10392,
  [SMALL_STATE(288)] = 10410,
  [SMALL_STATE(289)] = 10428,
  [SMALL_STATE(290)] = 10446,
  [SMALL_STATE(291)] = 10464,
  [SMALL_STATE(292)] = 10482,
  [SMALL_STATE(293)] = 10500,
  [SMALL_STATE(294)] = 10518,
  [SMALL_STATE(295)] = 10536,
  [SMALL_STATE(296)] = 10554,
  [SMALL_STATE(297)] = 10572,
  [SMALL_STATE(298)] = 10590,
  [SMALL_STATE(299)] = 10608,
  [SMALL_STATE(300)] = 10626,
  [SMALL_STATE(301)] = 10644,
  [SMALL_STATE(302)] = 10662,
  [SMALL_STATE(303)] = 10680,
  [SMALL_STATE(304)] = 10698,
  [SMALL_STATE(305)] = 10716,
  [SMALL_STATE(306)] = 10736,
  [SMALL_STATE(307)] = 10758,
  [SMALL_STATE(308)] = 10776,
  [SMALL_STATE(309)] = 10795,
  [SMALL_STATE(310)] = 10814,
  [SMALL_STATE(311)] = 10831,
  [SMALL_STATE(312)] = 10844,
  [SMALL_STATE(313)] = 10861,
  [SMALL_STATE(314)] = 10874,
  [SMALL_STATE(315)] = 10893,
  [SMALL_STATE(316)] = 10910,
  [SMALL_STATE(317)] = 10927,
  [SMALL_STATE(318)] = 10940,
  [SMALL_STATE(319)] = 10956,
  [SMALL_STATE(320)] = 10972,
  [SMALL_STATE(321)] = 10988,
  [SMALL_STATE(322)] = 11002,
  [SMALL_STATE(323)] = 11016,
  [SMALL_STATE(324)] = 11030,
  [SMALL_STATE(325)] = 11046,
  [SMALL_STATE(326)] = 11062,
  [SMALL_STATE(327)] = 11078,
  [SMALL_STATE(328)] = 11094,
  [SMALL_STATE(329)] = 11108,
  [SMALL_STATE(330)] = 11124,
  [SMALL_STATE(331)] = 11138,
  [SMALL_STATE(332)] = 11154,
  [SMALL_STATE(333)] = 11170,
  [SMALL_STATE(334)] = 11180,
  [SMALL_STATE(335)] = 11196,
  [SMALL_STATE(336)] = 11212,
  [SMALL_STATE(337)] = 11228,
  [SMALL_STATE(338)] = 11242,
  [SMALL_STATE(339)] = 11258,
  [SMALL_STATE(340)] = 11274,
  [SMALL_STATE(341)] = 11290,
  [SMALL_STATE(342)] = 11306,
  [SMALL_STATE(343)] = 11322,
  [SMALL_STATE(344)] = 11336,
  [SMALL_STATE(345)] = 11350,
  [SMALL_STATE(346)] = 11364,
  [SMALL_STATE(347)] = 11378,
  [SMALL_STATE(348)] = 11392,
  [SMALL_STATE(349)] = 11408,
  [SMALL_STATE(350)] = 11424,
  [SMALL_STATE(351)] = 11438,
  [SMALL_STATE(352)] = 11452,
  [SMALL_STATE(353)] = 11466,
  [SMALL_STATE(354)] = 11482,
  [SMALL_STATE(355)] = 11495,
  [SMALL_STATE(356)] = 11508,
  [SMALL_STATE(357)] = 11519,
  [SMALL_STATE(358)] = 11530,
  [SMALL_STATE(359)] = 11541,
  [SMALL_STATE(360)] = 11552,
  [SMALL_STATE(361)] = 11563,
  [SMALL_STATE(362)] = 11574,
  [SMALL_STATE(363)] = 11585,
  [SMALL_STATE(364)] = 11596,
  [SMALL_STATE(365)] = 11607,
  [SMALL_STATE(366)] = 11618,
  [SMALL_STATE(367)] = 11629,
  [SMALL_STATE(368)] = 11640,
  [SMALL_STATE(369)] = 11651,
  [SMALL_STATE(370)] = 11662,
  [SMALL_STATE(371)] = 11673,
  [SMALL_STATE(372)] = 11684,
  [SMALL_STATE(373)] = 11695,
  [SMALL_STATE(374)] = 11706,
  [SMALL_STATE(375)] = 11717,
  [SMALL_STATE(376)] = 11730,
  [SMALL_STATE(377)] = 11743,
  [SMALL_STATE(378)] = 11756,
  [SMALL_STATE(379)] = 11769,
  [SMALL_STATE(380)] = 11782,
  [SMALL_STATE(381)] = 11795,
  [SMALL_STATE(382)] = 11808,
  [SMALL_STATE(383)] = 11819,
  [SMALL_STATE(384)] = 11832,
  [SMALL_STATE(385)] = 11843,
  [SMALL_STATE(386)] = 11856,
  [SMALL_STATE(387)] = 11867,
  [SMALL_STATE(388)] = 11880,
  [SMALL_STATE(389)] = 11893,
  [SMALL_STATE(390)] = 11904,
  [SMALL_STATE(391)] = 11917,
  [SMALL_STATE(392)] = 11928,
  [SMALL_STATE(393)] = 11939,
  [SMALL_STATE(394)] = 11952,
  [SMALL_STATE(395)] = 11965,
  [SMALL_STATE(396)] = 11978,
  [SMALL_STATE(397)] = 11991,
  [SMALL_STATE(398)] = 12004,
  [SMALL_STATE(399)] = 12017,
  [SMALL_STATE(400)] = 12030,
  [SMALL_STATE(401)] = 12043,
  [SMALL_STATE(402)] = 12056,
  [SMALL_STATE(403)] = 12069,
  [SMALL_STATE(404)] = 12082,
  [SMALL_STATE(405)] = 12093,
  [SMALL_STATE(406)] = 12106,
  [SMALL_STATE(407)] = 12119,
  [SMALL_STATE(408)] = 12132,
  [SMALL_STATE(409)] = 12145,
  [SMALL_STATE(410)] = 12154,
  [SMALL_STATE(411)] = 12167,
  [SMALL_STATE(412)] = 12178,
  [SMALL_STATE(413)] = 12189,
  [SMALL_STATE(414)] = 12202,
  [SMALL_STATE(415)] = 12213,
  [SMALL_STATE(416)] = 12226,
  [SMALL_STATE(417)] = 12237,
  [SMALL_STATE(418)] = 12250,
  [SMALL_STATE(419)] = 12263,
  [SMALL_STATE(420)] = 12276,
  [SMALL_STATE(421)] = 12285,
  [SMALL_STATE(422)] = 12298,
  [SMALL_STATE(423)] = 12309,
  [SMALL_STATE(424)] = 12322,
  [SMALL_STATE(425)] = 12335,
  [SMALL_STATE(426)] = 12348,
  [SMALL_STATE(427)] = 12361,
  [SMALL_STATE(428)] = 12374,
  [SMALL_STATE(429)] = 12387,
  [SMALL_STATE(430)] = 12398,
  [SMALL_STATE(431)] = 12411,
  [SMALL_STATE(432)] = 12422,
  [SMALL_STATE(433)] = 12435,
  [SMALL_STATE(434)] = 12448,
  [SMALL_STATE(435)] = 12461,
  [SMALL_STATE(436)] = 12474,
  [SMALL_STATE(437)] = 12487,
  [SMALL_STATE(438)] = 12500,
  [SMALL_STATE(439)] = 12511,
  [SMALL_STATE(440)] = 12524,
  [SMALL_STATE(441)] = 12535,
  [SMALL_STATE(442)] = 12546,
  [SMALL_STATE(443)] = 12559,
  [SMALL_STATE(444)] = 12572,
  [SMALL_STATE(445)] = 12582,
  [SMALL_STATE(446)] = 12592,
  [SMALL_STATE(447)] = 12602,
  [SMALL_STATE(448)] = 12612,
  [SMALL_STATE(449)] = 12622,
  [SMALL_STATE(450)] = 12632,
  [SMALL_STATE(451)] = 12642,
  [SMALL_STATE(452)] = 12652,
  [SMALL_STATE(453)] = 12662,
  [SMALL_STATE(454)] = 12672,
  [SMALL_STATE(455)] = 12682,
  [SMALL_STATE(456)] = 12692,
  [SMALL_STATE(457)] = 12702,
  [SMALL_STATE(458)] = 12710,
  [SMALL_STATE(459)] = 12720,
  [SMALL_STATE(460)] = 12728,
  [SMALL_STATE(461)] = 12738,
  [SMALL_STATE(462)] = 12748,
  [SMALL_STATE(463)] = 12758,
  [SMALL_STATE(464)] = 12766,
  [SMALL_STATE(465)] = 12776,
  [SMALL_STATE(466)] = 12786,
  [SMALL_STATE(467)] = 12796,
  [SMALL_STATE(468)] = 12804,
  [SMALL_STATE(469)] = 12812,
  [SMALL_STATE(470)] = 12819,
  [SMALL_STATE(471)] = 12826,
  [SMALL_STATE(472)] = 12833,
  [SMALL_STATE(473)] = 12840,
  [SMALL_STATE(474)] = 12847,
  [SMALL_STATE(475)] = 12854,
  [SMALL_STATE(476)] = 12861,
  [SMALL_STATE(477)] = 12868,
  [SMALL_STATE(478)] = 12875,
  [SMALL_STATE(479)] = 12882,
  [SMALL_STATE(480)] = 12889,
  [SMALL_STATE(481)] = 12896,
  [SMALL_STATE(482)] = 12903,
  [SMALL_STATE(483)] = 12910,
  [SMALL_STATE(484)] = 12917,
  [SMALL_STATE(485)] = 12924,
  [SMALL_STATE(486)] = 12931,
  [SMALL_STATE(487)] = 12938,
  [SMALL_STATE(488)] = 12945,
  [SMALL_STATE(489)] = 12952,
  [SMALL_STATE(490)] = 12959,
  [SMALL_STATE(491)] = 12966,
  [SMALL_STATE(492)] = 12973,
  [SMALL_STATE(493)] = 12980,
  [SMALL_STATE(494)] = 12987,
  [SMALL_STATE(495)] = 12994,
  [SMALL_STATE(496)] = 13001,
  [SMALL_STATE(497)] = 13008,
  [SMALL_STATE(498)] = 13015,
  [SMALL_STATE(499)] = 13022,
  [SMALL_STATE(500)] = 13029,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(95),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(293),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(268),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(296),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(263),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(50),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(476),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arc_path, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arc_path, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_multi_literal, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_multi_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_literal, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_literal, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_multi_literal, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_multi_literal, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_literal, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_literal, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_multi_literal, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_multi_literal, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_literal, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_literal, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_multi_literal, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_multi_literal, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_literal, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_literal, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asset_path, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asset_path, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arc_path, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arc_path, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asset_path, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_asset_path, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_path, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_path, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_offset, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_offset, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_offset, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_offset, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arc_path, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arc_path, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layer_offset, 6),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layer_offset, 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_proxy, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_proxy, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_proxy, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_proxy, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_proxy, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_proxy, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_assignment, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_assignment, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_assignment, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_assignment, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_type, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_type, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_type, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_orderer, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(88),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(311),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(380),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(445),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(323),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(2),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(391),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(333),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [508] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(311),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(376),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(454),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(343),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(226),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(391),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(333),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_left_side, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_left_side, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3, .production_id = 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3, .production_id = 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_left_side, 5),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_left_side, 5),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_left_side, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_left_side, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_left_side, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_left_side, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_declaration, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_assignment, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_assignment, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_left_side, 7),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_left_side, 7),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_left_side, 6),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_left_side, 6),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_property, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_property, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeSamples, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeSamples, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_assignment, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_assignment, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timeSamples, 3, .production_id = 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeSamples, 3, .production_id = 3),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_assignment, 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_assignment, 5),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_paths, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_paths, 3),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_paths, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_paths, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_assignment, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_assignment, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_declaration, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_assignment, 6),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_assignment, 6),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_definition, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_definition, 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_declaration, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_declaration, 3),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_definition, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_definition, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_definition, 5),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_definition, 5),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_set_definition, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_set_definition, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_assignment, 5),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_assignment, 5),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant_set_definition, 6),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_set_definition, 6),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_set_definition_repeat1, 2),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variant_set_definition_repeat1, 2), SHIFT_REPEAT(293),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_set_definition_repeat1, 2), SHIFT_REPEAT(268),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variant_set_definition_repeat1, 2), SHIFT_REPEAT(296),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_set_definition_repeat1, 2), SHIFT_REPEAT(263),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeSamples_repeat1, 2, .production_id = 4),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_timeSamples_repeat1, 2, .production_id = 4), SHIFT_REPEAT(19),
  [764] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_timeSamples_repeat1, 2, .production_id = 4), SHIFT_REPEAT(19),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_timeSamples_repeat1, 2, .production_id = 4), SHIFT_REPEAT(474),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [772] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(47),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(33),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeSamples_repeat1, 3, .production_id = 5),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_timeSamples_repeat1, 3, .production_id = 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_multi_literal_repeat1, 2), SHIFT_REPEAT(258),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_multi_literal_repeat1, 2),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_multi_literal_repeat1, 2), SHIFT_REPEAT(258),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_multi_literal_repeat1, 2), SHIFT_REPEAT(259),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_multi_literal_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_multi_literal_repeat1, 2), SHIFT_REPEAT(259),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_timeSamples_repeat1, 4, .production_id = 5),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_timeSamples_repeat1, 4, .production_id = 5),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_literal_repeat1, 2),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_literal_repeat1, 2), SHIFT_REPEAT(290),
  [941] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_literal_repeat1, 2), SHIFT_REPEAT(290),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quote_literal_repeat1, 2),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quote_literal_repeat1, 2), SHIFT_REPEAT(302),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quote_literal_repeat1, 2), SHIFT_REPEAT(302),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_type, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim_type, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 2),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 3),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(87),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prim_paths_repeat1, 2),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prim_paths_repeat1, 2), SHIFT_REPEAT(495),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_asset_path_repeat1, 2),
  [1092] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asset_path_repeat1, 2), SHIFT_REPEAT(329),
  [1095] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_asset_path_repeat1, 2), SHIFT_REPEAT(493),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_layer_offset_repeat1, 2), SHIFT_REPEAT(448),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layer_offset_repeat1, 2),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prim_paths_repeat1, 1),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(450),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_proxy_repeat1, 2), SHIFT_REPEAT(309),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_proxy_repeat1, 2),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_attribute_assignment, 4),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_attribute_assignment, 4),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inner_dictionary_assignment, 4),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inner_dictionary_assignment, 4),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layer_offset_repeat1, 4),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_names, 1),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_usd(void) {
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
