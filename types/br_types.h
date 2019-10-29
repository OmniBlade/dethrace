#ifndef BR_TYPES_H
#define BR_TYPES_H

typedef long br_int_32;
typedef unsigned long br_uint_32;
typedef short br_int_16;
typedef unsigned short br_uint_16;
typedef signed char br_int_8;
typedef unsigned char br_uint_8;
typedef unsigned int br_size_t;
typedef int br_boolean;
typedef float br_float;
typedef struct br_filesystem br_filesystem;
typedef struct br_allocator br_allocator;
typedef struct br_resource_class br_resource_class;
typedef struct br_diaghandler br_diaghandler;
typedef struct br_errorhandler br_errorhandler;
typedef br_uint_32 br_error;
typedef long br_fixed_ls;
typedef short br_fixed_lsf;
typedef unsigned long br_fixed_lu;
typedef unsigned short br_fixed_luf;
typedef short br_fixed_ss;
typedef char br_fixed_ssf;
typedef unsigned short br_fixed_su;
typedef unsigned char br_fixed_suf;
typedef float br_scalar;
typedef float br_fraction;
typedef float br_ufraction;
typedef br_fixed_ls br_scalar_x;
typedef br_fixed_lsf br_fraction_x;
typedef br_fixed_luf br_ufraction_x;
typedef float br_scalar_f;
typedef float br_fraction_f;
typedef float br_ufraction_f;
typedef unsigned long br_colour;
typedef struct br_colour_range br_colour_range;
typedef struct br_matrix23 br_matrix23;
typedef struct br_matrix23_f br_matrix23_f;
typedef struct br_matrix23_x br_matrix23_x;
typedef struct br_matrix34 br_matrix34;
typedef struct br_matrix34_f br_matrix34_f;
typedef struct br_matrix34_x br_matrix34_x;
typedef struct br_matrix4 br_matrix4;
typedef struct br_matrix4_f br_matrix4_f;
typedef struct br_matrix4_x br_matrix4_x;
typedef struct br_vector2 br_vector2;
typedef struct br_vector3 br_vector3;
typedef struct br_vector4 br_vector4;
typedef struct br_vector2_x br_vector2_x;
typedef struct br_vector3_x br_vector3_x;
typedef struct br_vector4_x br_vector4_x;
typedef struct br_vector2_f br_vector2_f;
typedef struct br_vector3_f br_vector3_f;
typedef struct br_vector4_f br_vector4_f;
typedef struct br_vector2_i br_vector2_i;
typedef struct br_vector3_i br_vector3_i;
typedef struct br_vector4_i br_vector4_i;
typedef struct br_fvector2 br_fvector2;
typedef struct br_fvector3 br_fvector3;
typedef struct br_fvector4 br_fvector4;
typedef struct br_fvector2_f br_fvector2_f;
typedef struct br_fvector3_f br_fvector3_f;
typedef struct br_fvector4_f br_fvector4_f;
typedef struct br_fvector2_x br_fvector2_x;
typedef struct br_fvector3_x br_fvector3_x;
typedef struct br_fvector4_x br_fvector4_x;
typedef struct br_bounds2 br_bounds2;
typedef struct br_bounds3 br_bounds3;
typedef struct br_bounds4 br_bounds4;
typedef struct br_bounds2_f br_bounds2_f;
typedef struct br_bounds3_f br_bounds3_f;
typedef struct br_bounds4_f br_bounds4_f;
typedef struct br_bounds2_x br_bounds2_x;
typedef struct br_bounds3_x br_bounds3_x;
typedef struct br_bounds4_x br_bounds4_x;
typedef struct br_bounds2_i br_bounds2_i;
typedef struct br_bounds3_i br_bounds3_i;
typedef struct br_bounds4_i br_bounds4_i;
typedef br_bounds3 br_bounds;
typedef br_bounds2_i br_bounds2i;
typedef br_bounds3_i br_bounds3i;
typedef br_bounds4_i br_bounds4i;
typedef br_fixed_luf br_angle;
typedef struct br_euler br_euler;
typedef struct br_quat br_quat;
typedef struct br_transform br_transform;
typedef struct br_pixelmap br_pixelmap;
typedef struct br_point br_point;
typedef struct br_rectangle br_rectangle;
typedef struct br_font br_font;
typedef struct br_object br_object;
typedef struct br_value_tag br_value;
typedef struct br_token_value br_token_value;
typedef struct br_pool_block br_pool_block;
typedef struct br_pool br_pool;
typedef struct br_primitive br_primitive;
typedef struct br_order_table br_order_table;
typedef struct br_primitive_heap br_primitive_heap;
typedef struct br_associative_array_tag br_associative_array;
typedef struct br_device br_device;
typedef struct br_outfcty_desc br_outfcty_desc;
typedef struct br_renderer_facility br_renderer_facility;
typedef struct br_device_pixelmap br_device_pixelmap;
typedef struct br_primitive_library br_primitive_library;
typedef struct br_geometry br_geometry;
typedef struct br_renderer br_renderer;
typedef struct br_material br_material;
typedef struct br_vertex br_vertex;
typedef struct br_face br_face;
typedef struct br_primitive_list br_primitive_list;
typedef struct br_vertex_single br_vertex_single;
typedef struct br_vertex_double br_vertex_double;
typedef struct br_point_prim br_point_prim;
typedef struct br_line br_line;
typedef struct br_triangle br_triangle;
typedef struct br_quad br_quad;
typedef struct br_strip_face_data br_strip_face_data;
typedef struct br_tri_strip br_tri_strip;
typedef br_tri_strip br_tri_fan;
typedef br_tri_strip br_quad_strip;
typedef struct br_actor br_actor;
typedef struct br_model br_model;
typedef struct br_camera br_camera;
typedef struct br_light br_light;
typedef struct br_fmt_results br_fmt_results;
typedef struct br_fmt_options br_fmt_options;
typedef struct br_3ds_options br_3ds_options;

typedef enum br_filesystem_attributes {
  BR_FS_ATTR_READABLE = 1,
  BR_FS_ATTR_WRITEABLE = 2,
  BR_FS_ATTR_HAS_TEXT = 4,
  BR_FS_ATTR_HAS_BINARY = 8,
  BR_FS_ATTR_HAS_ADVANCE = 16
} br_filesystem_attributes;


typedef enum br_filesystem_identify {
  BR_FS_MODE_BINARY = 0,
  BR_FS_MODE_TEXT = 1,
  BR_FS_MODE_UNKNOWN = 2
} br_filesystem_identify;


typedef enum br_memory_classes {
  BR_MEMORY_SCRATCH = 1,
  BR_MEMORY_PIXELMAP = 2,
  BR_MEMORY_PIXELS = 3,
  BR_MEMORY_VERTICES = 4,
  BR_MEMORY_FACES = 5,
  BR_MEMORY_GROUPS = 6,
  BR_MEMORY_MODEL = 7,
  BR_MEMORY_MATERIAL = 8,
  BR_MEMORY_MATERIAL_INDEX = 9,
  BR_MEMORY_ACTOR = 10,
  BR_MEMORY_PREPARED_VERTICES = 11,
  BR_MEMORY_PREPARED_FACES = 12,
  BR_MEMORY_LIGHT = 13,
  BR_MEMORY_CAMERA = 14,
  BR_MEMORY_BOUNDS = 15,
  BR_MEMORY_CLIP_PLANE = 16,
  BR_MEMORY_STRING = 17,
  BR_MEMORY_REGISTRY = 18,
  BR_MEMORY_TRANSFORM = 19,
  BR_MEMORY_RESOURCE_CLASS = 20,
  BR_MEMORY_FILE = 21,
  BR_MEMORY_ANCHOR = 22,
  BR_MEMORY_POOL = 23,
  BR_MEMORY_RENDER_MATERIAL = 24,
  BR_MEMORY_DATAFILE = 25,
  BR_MEMORY_IMAGE = 26,
  BR_MEMORY_IMAGE_ARENA = 27,
  BR_MEMORY_IMAGE_SECTIONS = 28,
  BR_MEMORY_IMAGE_NAMES = 29,
  BR_MEMORY_EXCEPTION_HANDLER = 30,
  BR_MEMORY_RENDER_DATA = 31,
  BR_MEMORY_TOKEN = 32,
  BR_MEMORY_TOKEN_MAP = 33,
  BR_MEMORY_OBJECT = 34,
  BR_MEMORY_OBJECT_DATA = 35,
  BR_MEMORY_DRIVER = 36,
  BR_MEMORY_LEXER = 37,
  BR_MEMORY_OBJECT_LIST = 38,
  BR_MEMORY_OBJECT_LIST_ENTRY = 39,
  BR_MEMORY_ENABLED_ACTORS = 40,
  BR_MEMORY_FMT_RESULTS = 41,
  BR_MEMORY_PREPARED_MODEL = 42,
  BR_MEMORY_ORDER_TABLE = 43,
  BR_MEMORY_TOKEN_VALUE = 44,
  BR_MEMORY_TOKEN_TEMPLATE = 45,
  BR_MEMORY_FREE = 127,
  BR_MEMORY_APPLICATION = 128,
  BR_MEMORY_MAX = 256
} br_memory_classes;


typedef enum br_pixelmap_allocate_flags {
  BR_PMAF_NORMAL = 0,
  BR_PMAF_INVERTED = 1,
  BR_PMAF_NO_PIXELS = 2
} br_pixelmap_allocate_flags;


typedef enum br_pixelmap_channel_mask {
  BR_PMCHAN_INDEX = 1,
  BR_PMCHAN_RGB = 2,
  BR_PMCHAN_DEPTH = 4,
  BR_PMCHAN_ALPHA = 8,
  BR_PMCHAN_YUV = 16,
  BR_PMCHAN_VECTOR = 32
} br_pixelmap_channel_mask;


typedef enum br_pmmatch_type {
  BR_PMMATCH_OFFSCREEN = 0,
  BR_PMMATCH_DEPTH_16 = 1,
  BR_PMMATCH_DEPTH = 2,
  BR_PMMATCH_HIDDEN = 3,
  BR_PMMATCH_HIDDEN_BUFFER = 4,
  BR_PMMATCH_NO_RENDER = 5,
  BR_PMMATCH_DEPTH_8 = 6,
  BR_PMMATCH_DEPTH_32 = 7,
  BR_PMMATCH_DEPTH_15 = 8,
  BR_PMMATCH_DEPTH_31 = 9,
  BR_PMMATCH_DEPTH_FP15 = 10,
  BR_PMMATCH_DEPTH_FP16 = 11,
  BR_PMMATCH_MAX = 12
} br_pmmatch_type;


typedef enum br_pixelmap_copy_function {
  BR_PMCOPY_NORMAL = 0,
  BR_PMCOPY_SRC_KEYED = 1,
  BR_PMCOPY_DST_KEYED = 2
} br_pixelmap_copy_function;


typedef enum br_clip_result {
  BR_CLIP_REJECT = 0,
  BR_CLIP_PARTIAL = 1,
  BR_CLIP_ACCEPT = 2
} br_clip_result;


typedef enum br_token {
  BRT_ABGR_1_5_5_5 = 319,
  BRT_ABGR_4_4_4_4 = 335,
  BRT_ABGR_8_8_8_8 = 331,
  BRT_ACCEPT = 276,
  BRT_AINDEX_4_4 = 345,
  BRT_AINDEX_8_8 = 344,
  BRT_ALPHA = 85,
  BRT_ALWAYS = 163,
  BRT_AMBIENT_F = 193,
  BRT_AMBIENT_X = 192,
  BRT_ANGLE = 13,
  BRT_ANTIALIASING_T = 298,
  BRT_ANTIALIASING_TL = 299,
  BRT_ARGB_1_5_5_5 = 318,
  BRT_ARGB_4_4_4_4 = 334,
  BRT_ARGB_8_8_8_8 = 330,
  BRT_ATTENUATION_C_F = 222,
  BRT_ATTENUATION_C_X = 221,
  BRT_ATTENUATION_L_F = 220,
  BRT_ATTENUATION_L_X = 219,
  BRT_ATTENUATION_Q_F = 224,
  BRT_ATTENUATION_Q_X = 223,
  BRT_A_4 = 450,
  BRT_A_8 = 341,
  BRT_BEST_QUALITY = 380,
  BRT_BEST_SPEED = 291,
  BRT_BGRA_4_4_4_4 = 336,
  BRT_BGRA_8_8_8_8 = 332,
  BRT_BGRX_8_8_8_8 = 328,
  BRT_BGR_2_3_2 = 323,
  BRT_BGR_5_6_5 = 321,
  BRT_BGR_8_8_8 = 325,
  BRT_BLENDER_PROGRAM_P = 458,
  BRT_BLEND_B = 133,
  BRT_BLEND_CONSTANT = 445,
  BRT_BLEND_DIMMED = 444,
  BRT_BLEND_MODE_T = 440,
  BRT_BLEND_MODE_TL = 441,
  BRT_BLEND_STANDARD = 442,
  BRT_BLEND_SUMMED = 443,
  BRT_BLUE = 83,
  BRT_BOOLEAN = 2,
  BRT_BOTTOM_TOP = 67,
  BRT_BOUNDS = 122,
  BRT_BOUNDS_B = 255,
  BRT_BRENDER_DEVICES_STR = 422,
  BRT_BRENDER_DRIVERS_STR = 420,
  BRT_BRENDER_PATH_STR = 419,
  BRT_BRENDER_VERSION_U32 = 356,
  BRT_BUCKET_SORT = 257,
  BRT_BUFFER_STORED = 45,
  BRT_BUMP_O = 170,
  BRT_BUMP_TVL = 401,
  BRT_CACHED_B = 286,
  BRT_CACHED_SIZE_U32 = 287,
  BRT_CACHED_TOTAL_U32 = 288,
  BRT_CAN_SHARE_B = 110,
  BRT_CLAMP = 308,
  BRT_CLIP = 121,
  BRT_CLIPPING_B = 254,
  BRT_CLIP_MAX_I32 = 105,
  BRT_CLONE = 102,
  BRT_CLUT_MAX_I32 = 90,
  BRT_CLUT_O = 68,
  BRT_COLOUR_B = 135,
  BRT_COLOUR_BUFFER_O = 249,
  BRT_COLOUR_I32 = 189,
  BRT_COLOUR_MAP_O = 165,
  BRT_COLOUR_MAP_TVL = 396,
  BRT_COLOUR_RGB = 14,
  BRT_COLOUR_SOURCE_T = 180,
  BRT_COLOUR_T = 136,
  BRT_COLOUR_TL = 297,
  BRT_COLOUR_WRITE_B = 132,
  BRT_CONSTANT_STRING = 32,
  BRT_COPY_BITS_F = 371,
  BRT_COPY_BITS_X = 370,
  BRT_COPY_DESTINATION_TVL = 361,
  BRT_COPY_F = 363,
  BRT_COPY_SOURCE_TVL = 360,
  BRT_COPY_X = 362,
  BRT_CREATOR_CSTR = 56,
  BRT_CULL = 116,
  BRT_CULL_B = 251,
  BRT_DDI_VERSION_U32 = 357,
  BRT_DECAL_B = 128,
  BRT_DEFAULT = 138,
  BRT_DEFAULT_BASE_I32 = 282,
  BRT_DEFAULT_DEVICE_STR = 421,
  BRT_DEFAULT_RANGE_I32 = 283,
  BRT_DEPTH = 84,
  BRT_DEPTH_BUFFER_O = 250,
  BRT_DEPTH_TEST_T = 155,
  BRT_DEPTH_TEST_TL = 304,
  BRT_DEPTH_WRITE_B = 131,
  BRT_DESTINATION_O = 114,
  BRT_DEVICE = 37,
  BRT_DEVICE_CLUT = 41,
  BRT_DEVICE_PIXELMAP = 40,
  BRT_DIBSECTION = 410,
  BRT_DIFFUSE_F = 195,
  BRT_DIFFUSE_X = 194,
  BRT_DIRECT = 208,
  BRT_DIRECT3D_HAL = 416,
  BRT_DIRECT3D_RAMP = 414,
  BRT_DIRECT3D_RENDER_METHOD_T = 413,
  BRT_DIRECT3D_RGB = 415,
  BRT_DIRECTDRAW = 411,
  BRT_DIRECTDRAW_DEVICENAME_CSTR = 412,
  BRT_DIRECTION_V3_F = 213,
  BRT_DIRECTION_V3_X = 214,
  BRT_DIRECT_F = 378,
  BRT_DIRECT_X = 377,
  BRT_DITHER = 431,
  BRT_DITHER_B = 457,
  BRT_DITHER_COLOUR_B = 129,
  BRT_DITHER_COLOUR_T = 293,
  BRT_DITHER_COLOUR_TL = 294,
  BRT_DITHER_MAP_B = 130,
  BRT_DITHER_MAP_T = 295,
  BRT_DITHER_MAP_TL = 296,
  BRT_DONT_CARE = 246,
  BRT_D_15 = 446,
  BRT_D_16 = 338,
  BRT_D_24 = 339,
  BRT_D_31 = 447,
  BRT_D_32 = 340,
  BRT_D_FP15 = 448,
  BRT_D_FP16 = 449,
  BRT_ENABLE = 119,
  BRT_ENVIRONMENT_INFINITE = 184,
  BRT_ENVIRONMENT_LOCAL = 183,
  BRT_EQUAL = 158,
  BRT_EVEN_ODD = 63,
  BRT_FACILITY = 38,
  BRT_FACILITY_O = 281,
  BRT_FIXED = 11,
  BRT_FLOAT = 12,
  BRT_FOG_MAX_F = 153,
  BRT_FOG_MAX_X = 154,
  BRT_FOG_MIN_F = 151,
  BRT_FOG_MIN_X = 152,
  BRT_FOG_RGB = 150,
  BRT_FOG_T = 149,
  BRT_FOG_TL = 303,
  BRT_FONT_NORMAL_O = 98,
  BRT_FONT_NORMAL_P = 97,
  BRT_FORCE_FRONT_B = 179,
  BRT_FORMAT_T = 113,
  BRT_GEOMETRY = 46,
  BRT_GEOMETRY_LIGHTING = 51,
  BRT_GEOMETRY_MAP = 185,
  BRT_GEOMETRY_PRIMITIVES = 48,
  BRT_GEOMETRY_STORED = 47,
  BRT_GEOMETRY_V1_BUCKETS = 50,
  BRT_GEOMETRY_V1_MODEL = 49,
  BRT_GEOMETRY_X = 186,
  BRT_GEOMETRY_Y = 187,
  BRT_GEOMETRY_Z = 188,
  BRT_GREATER = 156,
  BRT_GREATER_OR_EQUAL = 157,
  BRT_GREEN = 82,
  BRT_HANDLE = 354,
  BRT_HEIGHT_I32 = 72,
  BRT_HEIGHT_MAX_I32 = 74,
  BRT_HEIGHT_MIN_I32 = 73,
  BRT_HEIGHT_OPTIMUM_I32 = 392,
  BRT_HEIGHT_T = 389,
  BRT_HEIGHT_TL = 390,
  BRT_HIDDEN = 100,
  BRT_HIDDEN_BUFFER = 278,
  BRT_HIDDEN_SURFACE = 123,
  BRT_HOST_MEMORY_U32 = 93,
  BRT_IDENTIFIER_CSTR = 54,
  BRT_INDEX = 80,
  BRT_INDEXA_4_4 = 343,
  BRT_INDEXA_8_8 = 342,
  BRT_INDEXED_B = 86,
  BRT_INDEX_1 = 312,
  BRT_INDEX_2 = 313,
  BRT_INDEX_4 = 314,
  BRT_INDEX_8 = 315,
  BRT_INDEX_BASE_I32 = 139,
  BRT_INDEX_BLEND_O = 167,
  BRT_INDEX_BLEND_TVL = 398,
  BRT_INDEX_FOG_O = 394,
  BRT_INDEX_FOG_TVL = 402,
  BRT_INDEX_LIGHT_O = 169,
  BRT_INDEX_LIGHT_TVL = 400,
  BRT_INDEX_RANGE_I32 = 140,
  BRT_INDEX_SHADE_O = 166,
  BRT_INDEX_SHADE_TVL = 397,
  BRT_INI_STR = 418,
  BRT_INTEL = 423,
  BRT_INTEL_386 = 427,
  BRT_INTEL_486 = 428,
  BRT_INTEL_PENTIUM = 429,
  BRT_INTEL_PENTIUM_PRO = 430,
  BRT_INTERLACE_B = 456,
  BRT_INT_16 = 7,
  BRT_INT_32 = 9,
  BRT_INT_8 = 5,
  BRT_KEY_IS_TRANSPARENT = 353,
  BRT_LEFT_RIGHT = 64,
  BRT_LENGTH_PRESERVING = 237,
  BRT_LESS = 161,
  BRT_LESS_OR_EQUAL = 160,
  BRT_LIGHT = 120,
  BRT_LIGHTING_B = 178,
  BRT_LIGHT_MAX_I32 = 104,
  BRT_LIGHT_VERTICES = 273,
  BRT_LINE = 266,
  BRT_LINEAR = 147,
  BRT_LPDIRECTDRAWSURFACE_P = 432,
  BRT_MAPPING_SOURCE_T = 182,
  BRT_MAP_ANTIALIASING_T = 141,
  BRT_MAP_ANTIALIASING_TL = 300,
  BRT_MAP_HEIGHT_LIMIT_T = 310,
  BRT_MAP_HEIGHT_LIMIT_TL = 311,
  BRT_MAP_INTERPOLATION_MAG_T = 383,
  BRT_MAP_INTERPOLATION_MAG_TL = 384,
  BRT_MAP_INTERPOLATION_MIN_T = 385,
  BRT_MAP_INTERPOLATION_MIN_TL = 386,
  BRT_MAP_INTERPOLATION_T = 145,
  BRT_MAP_INTERPOLATION_TL = 301,
  BRT_MAP_MATRIX_M23_F = 200,
  BRT_MAP_MATRIX_M23_X = 201,
  BRT_MAP_WIDTH_LIMIT_T = 305,
  BRT_MAP_WIDTH_LIMIT_TL = 306,
  BRT_MATCH_TVL = 359,
  BRT_MATRIX = 118,
  BRT_MATRIX23_FIXED = 25,
  BRT_MATRIX23_FLOAT = 28,
  BRT_MATRIX34_FIXED = 26,
  BRT_MATRIX34_FLOAT = 29,
  BRT_MATRIX4_FIXED = 27,
  BRT_MATRIX4_FLOAT = 30,
  BRT_MAX_V2_F = 233,
  BRT_MAX_V2_I = 231,
  BRT_MAX_V2_X = 232,
  BRT_MEMORY_MAPPED_B = 87,
  BRT_MIN_V2_F = 230,
  BRT_MIN_V2_I = 228,
  BRT_MIN_V2_X = 229,
  BRT_MIP = 142,
  BRT_MIPS = 425,
  BRT_MIP_INTERPOLATION_T = 148,
  BRT_MIP_INTERPOLATION_TL = 302,
  BRT_MIP_PER_PIXEL = 143,
  BRT_MIP_PER_PRIMITIVE = 144,
  BRT_MIRROR = 309,
  BRT_MODEL = 177,
  BRT_MODEL_TO_SCREEN_M4_F = 247,
  BRT_MODEL_TO_SCREEN_M4_X = 248,
  BRT_MODEL_TO_VIEW_HINT_T = 236,
  BRT_MODEL_TO_VIEW_M34_F = 234,
  BRT_MODEL_TO_VIEW_M34_X = 235,
  BRT_MODE_U32 = 94,
  BRT_MODULATE_B = 134,
  BRT_MOTOROLA = 426,
  BRT_NEAREST = 146,
  BRT_NEVER = 162,
  BRT_NONE = 1,
  BRT_NOT_EQUAL = 159,
  BRT_NO_RENDER = 379,
  BRT_OBJECT = 15,
  BRT_OBJECT_CONTAINER = 36,
  BRT_OBJECT_LIST = 33,
  BRT_ODD_EVEN = 62,
  BRT_OFFSCREEN = 101,
  BRT_ONE_SIDED = 173,
  BRT_OPACITY_F = 191,
  BRT_OPACITY_SOURCE_T = 181,
  BRT_OPACITY_X = 190,
  BRT_ORIGIN_V2_I = 96,
  BRT_OUTPUT = 125,
  BRT_OUTPUT_FACILITY = 39,
  BRT_OUTPUT_FACILITY_O = 95,
  BRT_PARALLEL = 242,
  BRT_PARTIAL = 275,
  BRT_PARTS_TL = 107,
  BRT_PARTS_U32 = 112,
  BRT_PERSPECTIVE = 241,
  BRT_PERSPECTIVE_B = 127,
  BRT_PERSPECTIVE_T = 289,
  BRT_PERSPECTIVE_TL = 290,
  BRT_PIXELMAP_MAX_I32 = 89,
  BRT_PIXEL_BITS_I32 = 76,
  BRT_PIXEL_CHANNELS_I32 = 78,
  BRT_PIXEL_CHANNELS_TL = 79,
  BRT_PIXEL_GET_F = 374,
  BRT_PIXEL_GET_X = 373,
  BRT_PIXEL_SET_F = 376,
  BRT_PIXEL_SET_X = 375,
  BRT_PIXEL_TYPE_U8 = 75,
  BRT_PLANE = 225,
  BRT_PLANE_V4_F = 226,
  BRT_PLANE_V4_X = 227,
  BRT_POINT = 209,
  BRT_POINTER = 3,
  BRT_POINTER_LIST = 35,
  BRT_POSITION_V3_F = 211,
  BRT_POSITION_V3_X = 212,
  BRT_POWERPC = 424,
  BRT_POWER_OF_2 = 351,
  BRT_PREFER_SHARE_B = 111,
  BRT_PRIMITIVE = 124,
  BRT_PRIMITIVES = 270,
  BRT_PRIMITIVE_BLOCK_P = 393,
  BRT_PRIMITIVE_CUSTOM_P = 206,
  BRT_PRIMITIVE_FILTER_P = 207,
  BRT_PRIMITIVE_LIBRARY = 52,
  BRT_PRIMITIVE_LIBRARY_O = 88,
  BRT_PRIMITIVE_LIBRARY_P = 115,
  BRT_PRIMITIVE_STATE = 53,
  BRT_PRIVATE = 349,
  BRT_PRODUCT_CSTR = 57,
  BRT_PRODUCT_VERSION_CSTR = 58,
  BRT_QUAD = 268,
  BRT_QUAD_STRIP = 455,
  BRT_RED = 81,
  BRT_REGISTRY_STR = 417,
  BRT_REJECT = 277,
  BRT_RENDERER = 43,
  BRT_RENDERER_FACILITY = 42,
  BRT_RENDERER_FACILITY_O = 108,
  BRT_RENDERER_MAX_I32 = 106,
  BRT_RENDERER_O = 103,
  BRT_RENDERER_STATE_STORED = 44,
  BRT_RENDER_B = 256,
  BRT_RGB = 137,
  BRT_RGBA_4_4_4_4 = 337,
  BRT_RGBA_8_8_8_8 = 333,
  BRT_RGBX_8_8_8_8 = 329,
  BRT_RGB_2_3_2 = 322,
  BRT_RGB_5_6_5 = 320,
  BRT_RGB_8_8_8 = 324,
  BRT_RIGHT_LEFT = 65,
  BRT_SCREEN_DOOR_O = 168,
  BRT_SCREEN_DOOR_TVL = 399,
  BRT_SHARED_B = 109,
  BRT_SMOOTH_B = 126,
  BRT_SPACE_T = 175,
  BRT_SPECULAR_F = 197,
  BRT_SPECULAR_POWER_F = 199,
  BRT_SPECULAR_POWER_X = 198,
  BRT_SPECULAR_X = 196,
  BRT_SPOT = 210,
  BRT_SPOT_INNER_F = 218,
  BRT_SPOT_INNER_X = 217,
  BRT_SPOT_OUTER_F = 216,
  BRT_SPOT_OUTER_X = 215,
  BRT_SPRITE = 265,
  BRT_SQUARE = 350,
  BRT_STATE_RESTORE = 269,
  BRT_STEREO_B = 59,
  BRT_STEREO_T = 60,
  BRT_STEREO_TL = 61,
  BRT_STORED_STATE_O = 264,
  BRT_STRETCHDIBITS = 409,
  BRT_STRETCH_COPY_DESTINATION_TVL = 365,
  BRT_STRETCH_COPY_F = 369,
  BRT_STRETCH_COPY_SOURCE_TVL = 364,
  BRT_STRETCH_COPY_T = 366,
  BRT_STRETCH_COPY_TL = 367,
  BRT_STRETCH_COPY_X = 368,
  BRT_STRING = 31,
  BRT_SUBDIVIDE = 381,
  BRT_SUBDIVIDE_TOLERANCE_I32 = 382,
  BRT_SURFACE = 117,
  BRT_SURFACE_B = 253,
  BRT_SURFACE_C_CUSTOM_P = 202,
  BRT_SURFACE_C_FILTER_P = 203,
  BRT_SURFACE_V_CUSTOM_P = 204,
  BRT_SURFACE_V_FILTER_P = 205,
  BRT_SYCHRONISE_I32 = 372,
  BRT_TEXTURE_MEMORY_U32 = 92,
  BRT_TEXTURE_O = 164,
  BRT_TEXTURE_TVL = 395,
  BRT_TITLE_CSTR = 358,
  BRT_TOKEN = 4,
  BRT_TOKEN_LIST = 34,
  BRT_TOKEN_VALUE_LIST = 355,
  BRT_TOP_BOTTOM = 66,
  BRT_TRANSFORM_B = 252,
  BRT_TRIANGLE = 267,
  BRT_TRI_FAN = 454,
  BRT_TRI_STRIP = 453,
  BRT_TWO_SIDED = 174,
  BRT_TYPE_T = 172,
  BRT_UINT_16 = 8,
  BRT_UINT_32 = 10,
  BRT_UINT_8 = 6,
  BRT_UNKNOWN = 171,
  BRT_USE_NO_3D_B = 279,
  BRT_USE_NO_DEPTH_B = 280,
  BRT_USE_T = 99,
  BRT_V1BUCKETS = 272,
  BRT_V1INSERT_ARG1_P = 261,
  BRT_V1INSERT_ARG2_P = 262,
  BRT_V1INSERT_ARG3_P = 263,
  BRT_V1INSERT_FUNCTION_P = 260,
  BRT_V1MODEL = 271,
  BRT_V1ORDER_TABLE_P = 258,
  BRT_V1PRIMITIVE_HEAP_P = 259,
  BRT_VECTOR2_FIXED = 19,
  BRT_VECTOR2_FLOAT = 22,
  BRT_VECTOR2_INTEGER = 16,
  BRT_VECTOR3_FIXED = 20,
  BRT_VECTOR3_FLOAT = 23,
  BRT_VECTOR3_INTEGER = 17,
  BRT_VECTOR4_FIXED = 21,
  BRT_VECTOR4_FLOAT = 24,
  BRT_VECTOR4_INTEGER = 18,
  BRT_VERSION_U32 = 55,
  BRT_VERTEX_DBL = 452,
  BRT_VERTEX_SGL = 451,
  BRT_VERTICAL_BLANK = 274,
  BRT_VIDEO_MEMORY_U32 = 91,
  BRT_VIEW = 176,
  BRT_VIEW_TO_ENVIRONMENT_HINT_T = 245,
  BRT_VIEW_TO_ENVIRONMENT_M34_F = 243,
  BRT_VIEW_TO_ENVIRONMENT_M34_X = 244,
  BRT_VIEW_TO_SCREEN_HINT_T = 240,
  BRT_VIEW_TO_SCREEN_M4_F = 238,
  BRT_VIEW_TO_SCREEN_M4_X = 239,
  BRT_WIDTH_I32 = 69,
  BRT_WIDTH_MAX_I32 = 71,
  BRT_WIDTH_MIN_I32 = 70,
  BRT_WIDTH_OPTIMUM_I32 = 391,
  BRT_WIDTH_T = 387,
  BRT_WIDTH_TL = 388,
  BRT_WINDOW_BUFFER_METHOD_T = 407,
  BRT_WINDOW_FULLSCREEN_B = 406,
  BRT_WINDOW_HANDLE_H = 405,
  BRT_WINDOW_NAME_CSTR = 403,
  BRT_WINDOW_PROCEDURE_P = 404,
  BRT_WING = 408,
  BRT_WORD_BYTES_I32 = 77,
  BRT_WRAP = 307,
  BRT_WRITABLE_BASE_I32 = 284,
  BRT_WRITABLE_RANGE_I32 = 285,
  BRT_XBGR_1_5_5_5 = 317,
  BRT_XBGR_8_8_8_8 = 327,
  BRT_XRGB_1_5_5_5 = 316,
  BRT_XRGB_8_8_8_8 = 326,
  BRT_XYZ_16_16_16 = 347,
  BRT_XYZ_8_8_8 = 346,
  BRT_YUV_16 = 348,
  BRT_ZERO_IS_TRANSPARENT = 352,
  BRT_ZTRANSPARENCY_B = 439,
  BRT_Z_WRITE_ALWAYS = 436,
  BRT_Z_WRITE_CONDITIONAL = 438,
  BRT_Z_WRITE_CONDITIONAL_NO_Z = 437,
  BRT_Z_WRITE_NEVER = 435,
  BRT_Z_WRITE_T = 433,
  BRT_Z_WRITE_TL = 434,
  _BRT_MAX = 134217727
} br_token;


typedef enum br_apply_map_types {
  BR_APPLYMAP_PLANE = 0,
  BR_APPLYMAP_SPHERE = 1,
  BR_APPLYMAP_CYLINDER = 2,
  BR_APPLYMAP_DISC = 3,
  BR_APPLYMAP_NONE = 4
} br_apply_map_types;


typedef enum br_fitmap_axis {
  BR_FITMAP_PLUS_X = 0,
  BR_FITMAP_PLUS_Y = 1,
  BR_FITMAP_PLUS_Z = 2,
  BR_FITMAP_MINUS_X = 3,
  BR_FITMAP_MINUS_Y = 4,
  BR_FITMAP_MINUS_Z = 5
} br_fitmap_axis;

typedef void br_putline_cbfn(char*, void*);
typedef int br_mode_test_cbfn(br_uint_8*, br_size_t);
typedef br_uint_32 brfile_attributes_cbfn();
typedef void* brfile_open_read_cbfn(char*, br_size_t, br_mode_test_cbfn*, int*);
typedef void* brfile_open_write_cbfn(char*, int);
typedef void brfile_close_cbfn(void*);
typedef int brfile_eof_cbfn(void*);
typedef int brfile_getchr_cbfn(void*);
typedef void brfile_putchr_cbfn(int, void*);
typedef br_size_t brfile_read_cbfn(void*, br_size_t, unsigned int, void*);
typedef br_size_t brfile_write_cbfn(void*, br_size_t, unsigned int, void*);
typedef br_size_t brfile_getline_cbfn(char*, br_size_t, void*);
typedef void brfile_putline_cbfn(char*, void*);
typedef void brfile_advance_cbfn(br_size_t, void*);
typedef void* brmem_allocate_cbfn(br_size_t, br_uint_8);
typedef void brmem_free_cbfn(void*);
typedef br_size_t brmem_inquire_cbfn(br_uint_8);
typedef br_uint_32 brmem_align_cbfn(br_uint_8);
typedef void br_resourcefree_cbfn(void*, br_uint_8, br_size_t);
typedef void br_diag_warning_cbfn(char*);
typedef void br_diag_failure_cbfn(char*);
typedef br_resource_class* br_resclass_find_cbfn(char*);
typedef br_uint_32 br_resclass_enum_cbfn(br_resource_class*);
typedef int br_qsort_cbfn(void*, void*);
typedef br_uint_32 br_resenum_cbfn(void*, void*);
typedef br_device* br_device_begin_fn(char*);
typedef br_boolean br_device_enum_cbfn(char*, br_uint_32, char*, char*, char*, char*, void*);
typedef br_boolean br_outfcty_enum_cbfn(char*, br_outfcty_desc*, void*, struct div_t {
    intquot;
    intrem;
  });
typedef void br_model_custom_cbfn(br_actor*, br_model*, br_material*, void*);
typedef int br_fmt_report_cbfn(char*);
typedef void br_renderbounds_cbfn(br_actor*, br_model*, br_material*, void*, br_uint_8, br_matrix4*);
typedef void br_primitive_cbfn(br_primitive*, br_actor*, br_model*, br_material*, br_order_table*, br_scalar*);
typedef br_material* br_material_find_cbfn(char*);
typedef br_uint_32 br_material_enum_cbfn(br_material*);
typedef br_model* br_model_find_cbfn(char*);
typedef br_uint_32 br_model_enum_cbfn(br_model*);
typedef br_pixelmap* br_map_find_cbfn(char*);
typedef br_uint_32 br_map_enum_cbfn(br_pixelmap*);
typedef br_pixelmap* br_table_find_cbfn(char*);
typedef br_uint_32 br_table_enum_cbfn(br_pixelmap*);
typedef br_uint_32 br_actor_enum_cbfn(br_actor*);
typedef int br_pick2d_cbfn(br_actor*, br_model*, br_material*, br_vector3*, br_vector3*, br_scalar, br_scalar);
typedef int br_pick3d_cbfn(br_actor*, br_model*, br_material*, br_matrix34*, br_bounds*);
typedef int br_modelpick2d_cbfn(br_model*, br_material*, br_vector3*, br_vector3*, br_scalar, int, int, int, br_vector3*);
struct br_filesystem {
  char *identifier;
  brfile_attributes_cbfn *attributes;
  brfile_open_read_cbfn *open_read;
  brfile_open_write_cbfn *open_write;
  brfile_close_cbfn *close;
  brfile_eof_cbfn *eof;
  brfile_getchr_cbfn *getchr;
  brfile_putchr_cbfn *putchr;
  brfile_read_cbfn *read;
  brfile_write_cbfn *write;
  brfile_getline_cbfn *getline;
  brfile_putline_cbfn *putline;
  brfile_advance_cbfn *advance;
};
struct br_allocator {
  char *identifier;
  brmem_allocate_cbfn *allocate;
  brmem_free_cbfn *free;
  brmem_inquire_cbfn *inquire;
  brmem_align_cbfn *align;
};
struct br_resource_class {
  br_uint_32reserved;
  char *identifier;
  br_uint_8res_class;
  br_resourcefree_cbfn *free_cb;
  br_uint_32alignment;
};
struct br_diaghandler {
  char *identifier;
  br_diag_warning_cbfn *warning;
  br_diag_failure_cbfn *failure;
};
struct br_errorhandler {
  char *identifier;
  br_diag_warning_cbfn *message;
  br_diag_failure_cbfn *error;
};
struct br_colour_range {
  br_colourlow;
  br_colourhigh;
};
struct br_matrix23 {
  br_scalarm[3][2];
};
struct br_matrix23_f {
  br_floatm[3][2];
};
struct br_matrix23_x {
  br_fixed_lsm[3][2];
};
struct br_matrix34 {
  br_scalarm[4][3];
};
struct br_matrix34_f {
  br_floatm[4][3];
};
struct br_matrix34_x {
  br_fixed_lsm[4][3];
};
struct br_matrix4 {
  br_scalarm[4][4];
};
struct br_matrix4_f {
  br_floatm[4][4];
};
struct br_matrix4_x {
  br_fixed_lsm[4][4];
};
struct br_vector2 {
  br_scalarv[2];
};
struct br_vector3 {
  br_scalarv[3];
};
struct br_vector4 {
  br_scalarv[4];
};
struct br_vector2_x {
  br_fixed_lsv[2];
};
struct br_vector3_x {
  br_fixed_lsv[3];
};
struct br_vector4_x {
  br_fixed_lsv[4];
};
struct br_vector2_f {
  br_floatv[2];
};
struct br_vector3_f {
  br_floatv[3];
};
struct br_vector4_f {
  br_floatv[4];
};
struct br_vector2_i {
  br_int_32v[2];
};
struct br_vector3_i {
  br_int_32v[3];
};
struct br_vector4_i {
  br_int_32v[4];
};
struct br_fvector2 {
  br_fractionv[2];
};
struct br_fvector3 {
  br_fractionv[3];
};
struct br_fvector4 {
  br_fractionv[4];
};
struct br_fvector2_f {
  br_fraction_fv[2];
};
struct br_fvector3_f {
  br_fraction_fv[3];
};
struct br_fvector4_f {
  br_fractionv[4];
};
struct br_fvector2_x {
  br_fraction_xv[2];
};
struct br_fvector3_x {
  br_fraction_xv[3];
};
struct br_fvector4_x {
  br_fraction_xv[4];
};
struct br_bounds2 {
  br_vector2min;
  br_vector2max;
};
struct br_bounds3 {
  br_vector3min;
  br_vector3max;
};
struct br_bounds4 {
  br_vector4min;
  br_vector4max;
};
struct br_bounds2_f {
  br_vector2_fmin;
  br_vector2_fmax;
};
struct br_bounds3_f {
  br_vector3_fmin;
  br_vector3_fmax;
};
struct br_bounds4_f {
  br_vector4_fmin;
  br_vector4_fmax;
};
struct br_bounds2_x {
  br_vector2_xmin;
  br_vector2_xmax;
};
struct br_bounds3_x {
  br_vector3_xmin;
  br_vector3_xmax;
};
struct br_bounds4_x {
  br_vector4_xmin;
  br_vector4_xmax;
};
struct br_bounds2_i {
  br_vector2_imin;
  br_vector2_imax;
};
struct br_bounds3_i {
  br_vector3_imin;
  br_vector3_imax;
};
struct br_bounds4_i {
  br_vector4_imin;
  br_vector4_imax;
};
struct br_euler {
  br_anglea;
  br_angleb;
  br_anglec;
  br_uint_8order;
};
struct br_quat {
  br_scalarx;
  br_scalary;
  br_scalarz;
  br_scalarw;
};
struct br_transform {
  br_uint_16type;
  struct {
    br_matrix34mat;
    struct {
      br_eulere;
      br_scalar_pad[7];
      br_vector3t;
    };
    struct {
      br_quatq;
      br_scalar_pad[5];
      br_vector3t;
    };
    struct {
      br_vector3look;
      br_vector3up;
      br_scalar_pad[3];
      br_vector3t;
    };
    struct {
      br_scalar_pad[9];
      br_vector3t;
    };
  };
};
struct br_pixelmap {
  br_uint_32_reserved;
  char *identifier;
  void *pixels;
  br_uint_32pixels_qualifier;
  br_pixelmap *map;
  br_colour_rangesrc_key;
  br_colour_rangedst_key;
  br_uint_32key;
  br_int_16row_bytes;
  br_int_16mip_offset;
  br_uint_8type;
  br_uint_8flags;
  br_uint_16copy_function;
  br_uint_16base_x;
  br_uint_16base_y;
  br_uint_16width;
  br_uint_16height;
  br_int_16origin_x;
  br_int_16origin_y;
  void *user;
  void *stored;
};
struct br_point {
  br_int_32x;
  br_int_32y;
};
struct br_rectangle {
  br_int_32x;
  br_int_32y;
  br_int_32w;
  br_int_32h;
};
struct br_font {
  br_uint_32flags;
  br_uint_16glyph_x;
  br_uint_16glyph_y;
  br_int_16spacing_x;
  br_int_16spacing_y;
  br_int_8 *width;
  br_uint_16 *encoding;
  br_uint_8 *glyphs;
};
struct br_object {
};
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_token_value {
  br_tokent;
  br_valuev;
};
struct br_pool_block {
  br_pool_block *next;
};
struct br_pool {
  br_pool_block *free;
  br_uint_32block_size;
  br_uint_32chunk_size;
  intmem_type;
};
struct br_primitive {
  br_primitive *next;
  br_uint_32type;
  void *stored;
  void *v[3];
};
struct br_order_table {
  br_primitive **table;
  br_uint_16size;
  br_order_table *next;
  br_scalarmin_z;
  br_scalarmax_z;
  br_scalarsort_z;
  br_scalarscale;
  br_uint_32flags;
  br_uint_16type;
  br_uint_16visits;
};
struct br_primitive_heap {
  br_uint_8 *base;
  br_size_tsize;
  br_uint_8 *current;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
struct br_device {
};
struct br_outfcty_desc {
  br_int_32width;
  br_int_32width_min;
  br_int_32width_max;
  br_int_32height;
  br_int_32height_min;
  br_int_32height_max;
  br_uint_8pmtype;
  br_int_32pmbits;
  br_booleanindexed;
  br_booleanfullscreen;
};
struct br_renderer_facility {
};
struct br_device_pixelmap {
};
struct br_primitive_library {
};
struct br_geometry {
};
struct br_renderer {
};
struct br_material {
  br_uint_32_reserved;
  char *identifier;
  br_colourcolour;
  br_uint_8opacity;
  br_ufractionka;
  br_ufractionkd;
  br_ufractionks;
  br_scalarpower;
  br_uint_32flags;
  br_matrix23map_transform;
  br_uint_8index_base;
  br_uint_8index_range;
  br_pixelmap *colour_map;
  br_pixelmap *screendoor;
  br_pixelmap *index_shade;
  br_pixelmap *index_blend;
  br_pixelmap *index_fog;
  br_token_value *extra_surf;
  br_token_value *extra_prim;
  br_scalarfog_min;
  br_scalarfog_max;
  br_colourfog_colour;
  br_uint_32flags_ext;
  br_pixelmap *colour_map_1;
  br_matrix23map_transform_1;
  br_int_8mip_modifier;
  br_uint_8min_mip;
  br_uint_8max_mip;
  br_uint_8alpha_mode;
  br_uint_8zbuffer_mode;
  br_uint_8zbuffer_compare;
  br_int_32subdivide_tolerance;
  void *user;
  void *stored;
};
struct br_vertex {
  br_vector3p;
  br_vector2map;
  br_uint_8index;
  br_uint_8red;
  br_uint_8grn;
  br_uint_8blu;
  br_uint_16_pad0;
  br_fvector3n;
};
struct br_face {
  br_uint_16vertices[3];
  br_uint_16smoothing;
  br_material *material;
  br_uint_8index;
  br_uint_8red;
  br_uint_8grn;
  br_uint_8blu;
  br_uint_8flags;
  br_uint_8_pad0;
  br_uint_32_pad1;
  br_fvector3n;
  br_scalard;
};
struct br_primitive_list {
  br_primitive_list *next;
  br_uint_32prim_type;
  br_uint_16nprims;
  br_uint_16nspares;
  void *prim;
  void *spare;
};
struct br_vertex_single {
  br_vector3p;
  br_vector2map;
  br_uint_8alpha;
  br_uint_8red;
  br_uint_8grn;
  br_uint_8blu;
  br_uint_16_pad0;
  br_fvector3n;
};
struct br_vertex_double {
  br_vector3p;
  br_vector2map0;
  br_uint_8alpha0;
  br_uint_8red0;
  br_uint_8grn0;
  br_uint_8blu0;
  br_vector2map1;
  br_uint_8alpha1;
  br_uint_8red1;
  br_uint_8grn1;
  br_uint_8blu1;
  br_fvector3n;
};
struct br_point_prim {
  br_uint_16vertices[1];
  br_material *material;
};
struct br_line {
  br_uint_16vertices[2];
  br_material *material;
  br_uint_8alpha0;
  br_uint_8red0;
  br_uint_8grn0;
  br_uint_8blu0;
  br_uint_8alpha1;
  br_uint_8red1;
  br_uint_8grn1;
  br_uint_8blu1;
};
struct br_triangle {
  br_uint_16vertices[3];
  br_uint_16smoothing;
  br_material *material;
  br_uint_8alpha0;
  br_uint_8red0;
  br_uint_8grn0;
  br_uint_8blu0;
  br_uint_8alpha1;
  br_uint_8red1;
  br_uint_8grn1;
  br_uint_8blu1;
  br_uint_8flags;
  br_fvector3n;
  br_scalard;
};
struct br_quad {
  br_uint_16vertices[4];
  br_uint_16smoothing;
  br_material *material;
  br_uint_8alpha0;
  br_uint_8red0;
  br_uint_8grn0;
  br_uint_8blu0;
  br_uint_8alpha1;
  br_uint_8red1;
  br_uint_8grn1;
  br_uint_8blu1;
  br_uint_8flags;
  br_fvector3n;
  br_scalard;
};
struct br_strip_face_data {
  br_uint_16smoothing;
  br_uint_8alpha0;
  br_uint_8red0;
  br_uint_8grn0;
  br_uint_8blu0;
  br_uint_8alpha1;
  br_uint_8red1;
  br_uint_8grn1;
  br_uint_8blu1;
  br_uint_8flags;
  br_fvector3n;
  br_scalard;
};
struct br_tri_strip {
  br_uint_16nvertices;
  br_uint_16 *vertices;
  br_material *material;
  br_strip_face_data *face_data;
};
struct br_actor {
  br_actor *next;
  br_actor **prev;
  br_actor *children;
  br_actor *parent;
  br_uint_16depth;
  br_uint_8type;
  char *identifier;
  br_model *model;
  br_material *material;
  br_uint_8render_style;
  void *render_data;
  br_transformt;
  void *type_data;
  void *user;
};
struct br_model {
  br_uint_32_reserved;
  char *identifier;
  br_vertex *vertices;
  br_face *faces;
  br_uint_16nvertices;
  br_uint_16nfaces;
  br_vector3pivot;
  br_uint_16flags;
  br_model_custom_cbfn *custom;
  void *user;
  br_anglecrease_angle;
  br_scalarradius;
  br_boundsbounds;
  void *prepared;
  void *stored;
  br_uint_16nprimitive_lists;
  br_primitive_list *primitive_list;
};
struct br_camera {
  char *identifier;
  br_uint_8type;
  br_anglefield_of_view;
  br_scalarhither_z;
  br_scalaryon_z;
  br_scalaraspect;
  br_scalarwidth;
  br_scalarheight;
  br_scalardistance;
  void *user;
};
struct br_light {
  char *identifier;
  br_uint_8type;
  br_colourcolour;
  br_scalarattenuation_c;
  br_scalarattenuation_l;
  br_scalarattenuation_q;
  br_anglecone_outer;
  br_anglecone_inner;
  void *user;
};
struct br_fmt_results {
  br_actor **actors;
  br_model **models;
  br_light **lights;
  br_camera **cameras;
  br_vector4 **clip_planes;
  br_bounds3 **bounds;
  br_bounds3 **bounds_correct;
  br_material **materials;
  br_pixelmap **pixelmaps;
  br_uint_32nactors;
  br_uint_32nmodels;
  br_uint_32nlights;
  br_uint_32ncameras;
  br_uint_32nclip_planes;
  br_uint_32nbounds;
  br_uint_32nbounds_correct;
  br_uint_32nmaterials;
  br_uint_32npixelmaps;
};
struct br_fmt_options {
  br_uint_32convert_flags;
};
struct br_3ds_options {
  br_uint_32flags;
  br_scalarhither;
  br_scalaryon;
  br_scalarscale;
  br_fmt_report_cbfn *report;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
typedef struct br_node br_node;
typedef struct br_list br_list;
typedef struct br_simple_node br_simple_node;
typedef struct br_simple_list br_simple_list;
typedef struct br_registry_entry br_registry_entry;
typedef struct br_registery br_registry;
typedef struct br_active_light br_active_light;
typedef struct br_active_clip_plane br_active_clip_plane;
typedef struct br_framework_state br_framework_state;
typedef void* br_find_failed_cbfn(char*);
typedef br_uint_32 br_enum_cbfn(void*, void*);
typedef void br_surface_fn(br_vertex*, br_fvector3*, br_scalar*);
typedef br_uint_32 br_face_surface_fn(br_vertex*, br_face*);
typedef void br_light_sub_fn(br_vector3*, br_fvector3*, br_active_light*, br_scalar*);
typedef void br_model_update_cbfn(br_model*);
typedef void br_material_update_cbfn(br_material*);
typedef void br_table_update_cbfn(br_pixelmap*);
typedef void br_map_update_cbfn(br_pixelmap*);
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
struct br_node {
  br_node *next;
  br_node *prev;
};
struct br_list {
  br_node *head;
  br_node *_null;
  br_node *tail;
};
struct br_simple_node {
  br_simple_node *next;
  br_simple_node **prev;
};
struct br_simple_list {
  br_simple_node *head;
};
struct br_registry_entry {
  br_nodenode;
  char **item;
};
struct br_registery {
  br_listlist;
  intcount;
  br_find_failed_cbfn *find_failed_hook;
};
struct br_active_light {
  br_scalarintensity;
  br_vector3view_position;
  br_vector3view_direction;
  br_vector3position;
  br_vector3direction;
  br_vector3half;
  br_scalarspot_cosine_outer;
  br_scalarspot_cosine_inner;
  void (*light_sub_function)(br_vector3*, br_fvector3*, br_active_light*, br_scalar*);
  inttype;
  br_light *light;
};
struct br_active_clip_plane {
  br_vector4screen_plane;
};
struct br_framework_state {
  br_surface_fn *surface_fn;
  br_surface_fn *surface_fn_after_map;
  br_surface_fn *surface_fn_after_copy;
  br_face_surface_fn *face_surface_fn;
  br_matrix23map_transform;
  br_scalarindex_base;
  br_scalarindex_range;
  br_matrix4model_to_screen;
  br_matrix4view_to_screen;
  br_matrix34model_to_view;
  br_matrix34view_to_model;
  br_matrix34model_to_environment;
  struct {
    br_matrix34m;
    br_actor *a;
  };
  intvtos_type;
  br_vector3eye_m;
  br_vector3eye_m_normalised;
  br_material *material;
  br_active_lightactive_lights_model[16];
  br_active_lightactive_lights_view[16];
  br_uint_16nactive_lights_model;
  br_uint_16nactive_lights_view;
  intlight_is_1md;
  br_vector3eye_l;
  br_active_clip_planeactive_clip_planes[6];
  br_uint_16nactive_clip_planes;
  br_actor *enabled_lights[16];
  br_actor *enabled_clip_planes[6];
  br_actor *enabled_environment;
  br_pixelmap *output;
  br_scalarvp_width;
  br_scalarvp_height;
  br_scalarvp_ox;
  br_scalarvp_oy;
  intrendering;
  br_registryreg_models;
  br_registryreg_materials;
  br_registryreg_textures;
  br_registryreg_tables;
  br_registryreg_resource_classes;
  br_resource_class *resource_class_index[256];
  br_model_update_cbfn *model_update;
  br_material_update_cbfn *material_update;
  br_table_update_cbfn *table_update;
  br_map_update_cbfn *map_update;
  br_filesystem *fsys;
  br_allocator *mem;
  br_errorhandler *err;
  intopen_mode;
  void *res;
  br_model *default_model;
  br_material *default_material;
  fw_fn_tablefn_table;
  void *scratch_ptr;
  br_size_tscratch_size;
  br_size_tscratch_last;
  intscratch_inuse;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
typedef struct br_registery br_registry;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
struct br_registery {
  br_listlist;
  intcount;
  br_find_failed_cbfn *find_failed_hook;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef br_error br_exception;
typedef void br_resident_fn();
typedef struct br_tv_template_entry br_tv_template_entry;
typedef struct br_tv_template br_tv_template;
typedef struct br_object_container br_object_container;
typedef struct br_object_container_dispatch br_object_container_dispatch;
typedef struct br_device_dispatch br_device_dispatch;
typedef struct br_object_dispatch br_object_dispatch;
typedef struct br_value_tag br_value;
struct br_tv_template_entry {
  br_tokentoken;
  char *name;
  br_int_32offset;
  br_int_16flags;
  br_int_16conv;
  br_int_32conv_arg;
  br_int_32mask;
};
struct br_tv_template {
  intn_entries;
  br_tv_template_entry *entries;
  br_int_32map_base;
  br_int_32n_map_entries;
  br_tv_template_entry **map_query_entry;
  br_tv_template_entry **map_set_entry;
  br_booleannames_resolved;
  void *res;
};
struct br_object_container {
  br_object_container_dispatch *dispatch;
};
struct br_object_container_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
  void* (*_listQuery)(br_object_container*);
  void* (*_tokensMatchBegin)(br_object_container*, br_token, br_token_value*);
  br_boolean (*_tokensMatch)(br_object_container*, br_object*);
  void (*_tokensMatchEnd)(br_object_container*);
  br_error (*_addFront)(br_object_container*, br_object*);
  br_error (*_removeFront)(br_object_container*, br_object**);
  br_error (*_remove)(br_object_container*, br_object*);
  br_error (*_find)(br_object_container*, br_object**, br_token, char*);
  br_error (*_findMany)(br_object_container*, br_object**, br_int_32, br_int_32*, br_token, char*);
  br_error (*_count)(br_object_container*, br_int_32*, br_token, char*);
};
struct br_device_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
  void* (*_listQuery)(br_object_container*);
  void* (*_tokensMatchBegin)(br_object_container*, br_token, br_token_value*);
  br_boolean (*_tokensMatch)(br_object_container*, br_object*);
  void (*_tokensMatchEnd)(br_object_container*);
  br_error (*_addFront)(br_object_container*, br_object*);
  br_error (*_removeFront)(br_object_container*, br_object**);
  br_error (*_remove)(br_object_container*, br_object*);
  br_error (*_find)(br_object_container*, br_object**, br_token, char*);
  br_error (*_findMany)(br_object_container*, br_object**, br_int_32, br_int_32*, br_token, char*);
  br_error (*_count)(br_object_container*, br_int_32*, br_token, char*);
};
struct br_object_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
};
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
typedef struct br_geometry_stored br_geometry_stored;
typedef struct br_renderer_state_stored_dispatch br_renderer_state_stored_dispatch;
typedef struct br_renderer_state_stored br_renderer_state_stored;
typedef struct br_buffer_stored br_buffer_stored;
typedef struct br_device_pixelmap_dispatch br_device_pixelmap_dispatch;
typedef struct br_buffer_stored_dispatch br_buffer_stored_dispatch;
typedef struct brp_vertex brp_vertex;
typedef struct br_renderer_dispatch br_renderer_dispatch;
typedef struct br_geometry_stored_dispatch br_geometry_stored_dispatch;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_geometry_stored {
  br_geometry_stored_dispatch *dispatch;
};
struct br_renderer_state_stored_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
};
struct br_renderer_state_stored {
  br_renderer_state_stored_dispatch *dispatch;
};
struct br_buffer_stored {
  br_buffer_stored_dispatch *dispatch;
};
struct br_device_pixelmap_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
  br_error (*_validSource)(br_device_pixelmap*, br_boolean*, br_object*);
  br_error (*_resize)(br_device_pixelmap*, br_int_32);
  br_error (*_match)(br_device_pixelmap*, br_device_pixelmap**, br_token_value*);
  br_error (*_allocateSub)(br_device_pixelmap*, br_device_pixelmap**, br_rectangle*);
  br_error (*_copy)(br_device_pixelmap*, br_device_pixelmap*);
  br_error (*_copyTo)(br_device_pixelmap*, br_device_pixelmap*);
  br_error (*_copyFrom)(br_device_pixelmap*, br_device_pixelmap*);
  br_error (*_fill)(br_device_pixelmap*);
  br_error (*_doubleBuffer)(br_device_pixelmap*, br_device_pixelmap*);
  br_error (*_copyDirty)(br_device_pixelmap*, br_device_pixelmap*, br_rectangle*);
  br_error (*_copyToDirty)(br_device_pixelmap*, br_device_pixelmap*, br_rectangle*);
  br_error (*_copyFromDirty)(br_device_pixelmap*, br_device_pixelmap*, br_rectangle*);
  br_error (*_fillDirty)(br_device_pixelmap*, br_uint_32, br_rectangle*);
  br_error (*_doubleBufferDirty)(br_device_pixelmap*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangle)(br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangle2)(br_device_pixelmap*, br_rectangle*, br_uint_32);
  br_error (*_rectangleCopy)(br_device_pixelmap*, br_point*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangleCopyTo)(br_device_pixelmap*, br_point*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangleCopyFrom)(br_device_pixelmap*, br_point*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangleStretchCopy)(br_device_pixelmap*, br_rectangle*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangleStretchCopyTo)(br_device_pixelmap*, br_rectangle*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangleStretchCopyFrom)(br_device_pixelmap*, br_rectangle*, br_device_pixelmap*, br_rectangle*);
  br_error (*_rectangleFill)(br_device_pixelmap*, br_rectangle*);
  br_error (*_pixelSet)(br_device_pixelmap*, br_point*);
  br_error (*_line)(br_device_pixelmap*, br_point*, br_point*);
  br_error (*_copyBits)(br_device_pixelmap*, br_point*, br_uint_8*, br_uint_16);
  br_error (*_text)(br_device_pixelmap*, br_point*, br_font*, char*);
  br_error (*_textBounds)(br_device_pixelmap*, br_rectangle*, br_font*);
  br_error (*_rowSize)(br_device_pixelmap*, br_size_t*);
  br_error (*_rowSet)(br_device_pixelmap*, void*);
  br_error (*_rowQuery)(br_device_pixelmap*, void*);
  br_error (*_pixelQuery)(br_device_pixelmap*, br_uint_32*, br_point*);
  br_error (*_pixelAddressQuery)(br_device_pixelmap*, void**, br_uint_32*, br_point*);
  br_error (*_pixelAddressSet)(br_device_pixelmap*, void*);
  br_error (*_originSet)(br_device_pixelmap*, br_point*);
  br_error (*_flush)(br_device_pixelmap*);
  br_error (*_synchronise)(br_device_pixelmap*, br_token);
  br_error (*_directLock)(br_device_pixelmap*);
  br_error (*_directUnlock)(br_device_pixelmap*);
};
struct br_buffer_stored_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
  br_error (*_update)(br_buffer_stored*, br_device_pixelmap*, br_token_value*);
};
struct brp_vertex {
};
struct br_renderer_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
  void* (*_listQuery)(br_object_container*);
  void* (*_tokensMatchBegin)(br_object_container*, br_token, br_token_value*);
  br_boolean (*_tokensMatch)(br_object_container*, br_object*);
  void (*_tokensMatchEnd)(br_object_container*);
  br_error (*_addFront)(br_object_container*, br_object*);
  br_error (*_removeFront)(br_object_container*, br_object**);
  br_error (*_remove)(br_object_container*, br_object*);
  br_error (*_find)(br_object_container*, br_object**, br_token, char*);
  br_error (*_findMany)(br_object_container*, br_object**, br_int_32, br_int_32*, br_token, char*);
  br_error (*_count)(br_object_container*, br_int_32*, br_token, char*);
  br_error (*_validDestination)(br_renderer*, br_boolean*, br_object*);
  br_error (*_stateStoredNew)(br_renderer*, br_renderer_state_stored**, br_uint_32);
  br_error (*_stateStoredAvail)(br_renderer*, br_int_32*, br_uint_32);
  br_error (*_bufferStoredNew)(br_renderer*, br_buffer_stored**, br_token, br_device_pixelmap*, br_token_value*);
  br_error (*_bufferStoredAvail)(br_renderer*, br_int_32*, br_token, br_token_value*);
  br_error (*_partSet)(br_renderer*, br_token, br_int_32, br_token);
  br_error (*_partSetMany)(br_renderer*, br_token, br_int_32, br_token_value*);
  br_error (*_partQuery)(br_renderer*, br_token, br_int_32, br_uint_32*);
  br_error (*_partQueryBuffer)(br_renderer*, br_token, br_int_32, br_uint_32*, br_uint_32*, br_size_t);
  br_error (*_partQueryMany)(br_renderer*, br_token, br_int_32, br_token_value*, void*);
  br_error (*_partQueryManySize)(br_renderer*, br_token, br_int_32, br_size_t*);
  br_error (*_partQueryAll)(br_renderer*, br_token, br_int_32, br_token_value*);
  br_error (*_partQueryAllSize)(br_renderer*, br_token, br_int_32);
  br_error (*_partIndexQuery)(br_renderer*, br_token, br_int_32*);
  br_error (*_modelMulF)(br_renderer*, br_matrix34_f*);
  br_error (*_modelMulX)(br_renderer*, br_matrix34_x*);
  br_error (*_modelPopPushMulF)(br_renderer*, br_matrix34_f*);
  br_error (*_modelPopPushMulX)(br_renderer*, br_matrix34_x*);
  br_error (*_modelInvert)(br_renderer*);
  br_error (*_statePush)(br_renderer*);
  br_error (*_statePop)(br_renderer*);
  br_error (*_stateSave)(br_renderer*, br_renderer_state_stored*);
  br_error (*_stateRestore)(br_renderer*, br_renderer_state_stored*);
  br_error (*_stateMask)(br_renderer*, br_uint_32*, br_token*);
  br_error (*_stateDefault)(br_renderer*);
  br_error (*_boundsTestF)(br_renderer*, br_token*, br_bounds3_f*);
  br_error (*_boundsTestX)(br_renderer*, br_token*, br_bounds3_x*);
  br_error (*_coverageTestF)(br_renderer*, br_float*, br_bounds3_f*);
  br_error (*_coverageTestX)(br_renderer*, br_fixed_ls*, br_bounds3_x*);
  br_error (*_viewDistanceF)(br_renderer*, br_float*);
  br_error (*_viewDistanceX)(br_renderer*, br_fixed_ls*);
  br_error (*_commandModeSet)(br_renderer*, br_token);
  br_error (*_commandModeQuery)(br_renderer*, br_token*);
  br_error (*_commandModeDefault)(br_renderer*);
  br_error (*_commandModePush)(br_renderer*);
  br_error (*_commandModePop)(br_renderer*);
  br_error (*_flush)(br_renderer*);
  br_error (*_synchronise)(br_renderer*, br_token);
  br_error (*_testRender)(br_renderer*, br_token, brp_vertex*, brp_vertex*, brp_vertex*);
  br_error (*_partQueryCapability)(br_renderer*, br_token, br_int_32, br_token_value*);
  br_error (*_stateQueryPerformance)(br_renderer*, br_fixed_lu*);
};
struct br_geometry_stored_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*);
  br_error (*_queryAll)(br_object*, br_token_value*);
  br_error (*_queryAllSize)(br_object*, br_size_t*);
  br_error (*_render)(br_geometry_stored*, br_renderer*);
  br_error (*_renderOnScreen)(br_geometry_stored*, br_renderer*);
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef br_datafile br_datafile;
typedef struct br_file_struct_member br_file_struct_member;
typedef struct br_file_struct br_file_struct;
typedef struct br_file_primitives br_file_primitives;
typedef struct br_chunks_table_entry br_chunks_table_entry;
typedef struct br_chunks_table br_chunks_table;
typedef struct br_file_enum_member br_file_enum_member;
typedef struct br_file_enum br_file_enum;
typedef struct br_value_tag br_value;
struct br_file_struct_member {
  br_uint_16type;
  br_uint_32offset;
  char *name;
  void *extra;
};
struct br_file_struct {
  char *name;
  br_uint_32nmembers;
  br_file_struct_member *members;
  intmem_size;
};
struct br_file_primitives {
  char *identifier;
  int (*skip)(br_datafile*, br_uint_32);
  int (*chunk_write)(br_datafile*, br_uint_32, br_uint_32);
  int (*chunk_read)(br_datafile*, br_uint_32*);
  void (*count_write)(br_datafile*, br_uint_32);
  br_uint_32 (*count_read)(br_datafile*);
  int (*count_size)(br_datafile*);
  br_uint_32 (*struct_write)(br_datafile*, br_file_struct*, void*, char);
  br_uint_32 (*struct_read)(br_datafile*, br_file_struct*, void*, char);
  int (*struct_size)(br_datafile*, br_file_struct*, void*, char);
  int (*block_write)(br_datafile*, void*, int, int, int, int);
  void* (*block_read)(br_datafile*, void*, int*, int, int);
  int (*block_size)(br_datafile*, void*, int, int, int, int);
  int (*name_write)(br_datafile*, char*);
  char* (*name_read)(br_datafile*, char*);
  int (*name_size)(br_datafile*, char*);
};
struct br_chunks_table_entry {
  br_uint_32id;
  br_uint_8has_count;
  int (*handler)(br_datafile*, br_uint_32);
};
struct br_chunks_table {
  intnentries;
  br_chunks_table_entry *entries;
};
struct br_file_enum_member {
  intvalue;
  char *name;
};
struct br_file_enum {
  br_uint_32nmembers;
  br_file_enum_member *members;
};
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
typedef struct br_device_clut br_device_clut;
typedef struct br_device_clut_dispatch br_device_clut_dispatch;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_device_clut {
  br_device_clut_dispatch *dispatch;
};
struct br_device_clut_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_fixed_lsf);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_fixed_lsf);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
  br_error (*_entrySet)(br_device_clut*, br_int_32);
  br_error (*_entryQuery)(br_device_clut*, br_colour*);
  br_error (*_entrySetMany)(br_device_clut*, br_int_32, br_int_32);
  br_error (*_entryQueryMany)(br_device_clut*, br_colour*, br_int_32);
};
typedef struct br_image br_image;
typedef struct br_image_section br_image_section;
typedef struct br_registery br_registry;
typedef struct br_value_tag br_value;
typedef struct br_open_device br_open_device;
typedef struct br_associative_array_tag br_associative_array;
struct br_image {
  br_nodenode;
  char *identifier;
  br_int_32type;
  br_int_32ref_count;
  br_uint_32ordinal_base;
  br_uint_32n_functions;
  void **functions;
  br_uint_32n_names;
  char **names;
  br_uint_16 *name_ordinals;
  br_uint_16n_imports;
  br_image **imports;
  br_uint_16n_sections;
  br_image_section *sections;
  void *type_pointer;
};
struct br_image_section {
  char *name;
  void *base;
  br_size_tmem_offset;
  br_size_tmem_size;
  br_uint_32data_offset;
  br_uint_32data_size;
};
struct br_registery {
  br_listlist;
  intcount;
  br_find_failed_cbfn *find_failed_hook;
};
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_open_device {
  br_device *dev;
  br_image *image;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
typedef struct br_geometry_dispatch br_geometry_dispatch;
typedef struct br_geometry_lighting br_geometry_lighting;
typedef struct br_geometry_lighting_dispatch br_geometry_lighting_dispatch;
typedef struct br_v1db_enable br_v1db_enable;
typedef struct br_registery br_registry;
typedef struct br_v1db_state br_v1db_state;
typedef struct br_renderer_facility_dispatch br_renderer_facility_dispatch;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_geometry_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_fixed_lsf);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_fixed_lsf);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
};
struct br_geometry_lighting {
  br_geometry_lighting_dispatch *dispatch;
};
struct br_geometry_lighting_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_fixed_lsf);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_fixed_lsf);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
  br_error (*_renderF)(br_geometry_lighting*, br_renderer*, br_vector3_f*, br_vector3_f*, br_colour*, br_colour*, br_uint_16*, int, int);
  br_error (*_renderX)(br_geometry_lighting*, br_renderer*, br_vector3_x*, br_vector3_x*, br_colour*, br_colour*, br_uint_16*, int, int);
};
struct br_v1db_enable {
  br_int_32max;
  br_int_32count;
  br_int_32type;
  char *name;
  br_actor **enabled;
};
struct br_registery {
  br_listlist;
  intcount;
  br_find_failed_cbfn *find_failed_hook;
};
struct br_v1db_state {
  br_booleanactive;
  br_booleanzs_active;
  br_booleanzb_active;
  br_int_32rendering;
  br_renderer *renderer;
  br_renderer *query_renderer;
  br_geometry *format_model;
  br_geometry *format_buckets;
  br_geometry_lighting *format_lighting;
  br_matrix4model_to_screen;
  br_matrix34model_to_view;
  br_booleanmodel_to_screen_valid;
  br_uint_32ttype;
  br_actor *render_root;
  struct {
    br_matrix34m;
    br_actor *a;
    br_uint_8transform_type;
  };
  br_v1db_enableenabled_lights;
  br_v1db_enableenabled_clip_planes;
  br_v1db_enableenabled_horizon_planes;
  br_int_32max_light;
  br_int_32max_clip;
  br_actor *enabled_environment;
  br_registryreg_models;
  br_registryreg_materials;
  br_registryreg_textures;
  br_registryreg_tables;
  void *res;
  br_model *default_model;
  br_material *default_material;
  void *default_render_data;
  br_order_table *default_order_table;
  br_order_table *primary_order_table;
  br_order_table *order_table_list;
  br_primitive_heapheap;
  br_primitive_cbfn *primitive_call;
  br_renderbounds_cbfn *bounds_call;
  br_vector2origin;
  br_scalarvp_ox;
  br_scalarvp_oy;
  br_scalarvp_width;
  br_scalarvp_height;
  br_pixelmap *colour_buffer;
};
struct br_renderer_facility_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_fixed_lsf);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_fixed_lsf);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
  void* (*_listQuery)(br_object_container*);
  void* (*_tokensMatchBegin)(br_object_container*, br_token);
  br_boolean (*_tokensMatch)(br_object_container*, br_object*);
  void (*_tokensMatchEnd)(br_object_container*);
  br_error (*_addFront)(br_object_container*);
  br_error (*_removeFront)(br_object_container*, br_object**);
  br_error (*_remove)(br_object_container*);
  br_error (*_find)(br_object_container*, br_object**, br_token, char*);
  br_error (*_findMany)(br_object_container*, br_object**, br_int_32, br_int_32*, br_token);
  br_error (*_count)(br_object_container*, br_int_32*, br_token, char*);
  br_error (*_validDestination)(br_renderer_facility*, br_boolean*, br_object*);
  br_error (*_rendererNew)(br_renderer_facility*, br_renderer**, br_token_value*);
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
typedef struct br_output_facility br_output_facility;
typedef struct br_output_facility_dispatch br_output_facility_dispatch;
typedef struct br_primitive_state br_primitive_state;
typedef struct brp_block brp_block;
typedef struct br_primitive_state_dispatch br_primitive_state_dispatch;
typedef struct br_primitive_library_dispatch br_primitive_library_dispatch;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_output_facility {
  br_output_facility_dispatch *dispatch;
};
struct br_output_facility_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_resourcefree_cbfn);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_resourcefree_cbfn);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
  void* (*_listQuery)(br_object_container*);
  void* (*_tokensMatchBegin)(br_object_container*, br_token);
  br_boolean (*_tokensMatch)(br_object_container*, br_object*);
  void (*_tokensMatchEnd)(br_object_container*);
  br_error (*_addFront)(br_object_container*);
  br_error (*_removeFront)(br_object_container*, br_object**);
  br_error (*_remove)(br_object_container*);
  br_error (*_find)(br_object_container*, br_object**, br_token, char*);
  br_error (*_findMany)(br_object_container*, br_object**, br_int_32, br_int_32*, br_token);
  br_error (*_count)(br_object_container*, br_int_32*, br_token, char*);
  br_error (*_validSource)(br_output_facility*, br_boolean*, br_object*);
  br_error (*_pixelmapNew)(br_output_facility*, br_device_pixelmap**, br_token_value*);
  br_error (*_clutNew)(br_output_facility*, br_device_clut**, br_token_value*);
  br_error (*_queryCapability)(br_output_facility*, br_token_value*, br_token_value*);
};
struct br_primitive_state {
  br_primitive_state_dispatch *dispatch;
};
struct brp_block {
};
struct br_primitive_state_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_resourcefree_cbfn);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_resourcefree_cbfn);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
  br_error (*_partSet)(br_primitive_state*, br_token, br_int_32);
  br_error (*_partSetMany)(br_primitive_state*, br_token, br_int_32, br_token_value*);
  br_error (*_partQuery)(br_primitive_state*, br_token, br_int_32);
  br_error (*_partQueryBuffer)(br_primitive_state*, br_token, br_int_32, br_uint_32*, br_uint_32*);
  br_error (*_partQueryMany)(br_primitive_state*, br_token, br_int_32, br_token_value*, void*);
  br_error (*_partQueryManySize)(br_primitive_state*, br_token, br_int_32, br_size_t*);
  br_error (*_partQueryAll)(br_primitive_state*, br_token, br_int_32);
  br_error (*_partQueryAllSize)(br_primitive_state*, br_token, br_int_32);
  br_error (*_partIndexQuery)(br_primitive_state*, br_token);
  br_error (*_stateDefault)(br_primitive_state*);
  br_error (*_stateCopy)(br_primitive_state*, br_primitive_state*);
  br_error (*_renderBegin)(br_primitive_state*, brp_block**, br_boolean*, br_boolean*, br_boolean);
  br_error (*_renderEnd)(br_primitive_state*, brp_block*);
  br_error (*_rangesQueryF)(br_primitive_state*, br_float*, br_float*);
  br_error (*_rangesQueryX)(br_primitive_state*, br_fixed_ls*, br_fixed_ls*);
  br_error (*_partQueryCapability)(br_primitive_state*, br_token, br_int_32);
  br_error (*_stateQueryPerformance)(br_primitive_state*, br_fixed_lu*);
};
struct br_primitive_library_dispatch {
  void (*__reserved0)(br_object*);
  void (*__reserved1)(br_object*);
  void (*__reserved2)(br_object*);
  void (*__reserved3)(br_object*);
  void (*_free)(br_object*);
  char* (*_identifier)(br_object*);
  br_token (*_type)(br_object*);
  br_boolean (*_isType)(br_object*, br_token);
  br_device* (*_device)(br_object*);
  br_int_32 (*_space)(br_object*);
  br_tv_template* (*_templateQuery)(br_object*);
  br_error (*_query)(br_object*, br_uint_32*, br_token, char);
  br_error (*_queryBuffer)(br_object*, br_uint_32*, void*, br_size_t, br_token, char);
  br_error (*_queryMany)(br_object*, br_token_value*, void*, br_size_t, br_int_32*, char, br_resourcefree_cbfn);
  br_error (*_queryManySize)(br_object*, br_size_t*, br_token_value*, char, br_resourcefree_cbfn);
  br_error (*_queryAll)(br_object*, br_token_value*, br_size_t, char);
  br_error (*_queryAllSize)(br_object*, br_size_t*, char);
  void* (*_listQuery)(br_object_container*);
  void* (*_tokensMatchBegin)(br_object_container*, br_token);
  br_boolean (*_tokensMatch)(br_object_container*, br_object*);
  void (*_tokensMatchEnd)(br_object_container*);
  br_error (*_addFront)(br_object_container*);
  br_error (*_removeFront)(br_object_container*, br_object**);
  br_error (*_remove)(br_object_container*);
  br_error (*_find)(br_object_container*, br_object**, br_token, char*);
  br_error (*_findMany)(br_object_container*, br_object**, br_int_32, br_int_32*, br_token);
  br_error (*_count)(br_object_container*, br_int_32*, br_token, char*);
  br_error (*_stateNew)(br_primitive_library*, br_primitive_state**);
  br_error (*_bufferStoredNew)(br_primitive_library*, br_buffer_stored**, br_token, br_device_pixelmap*);
  br_error (*_bufferStoredAvail)(br_primitive_library*, br_int_32*, br_token);
  br_error (*_flush)(br_primitive_library*);
  br_error (*_synchronise)(br_primitive_library*, br_token);
  br_error (*_mask)(br_primitive_library*, br_uint_32*, br_token*);
};
typedef struct br_registery br_registry;
struct br_registery {
  br_listlist;
  intcount;
  br_find_failed_cbfn *find_failed_hook;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_file br_file;
struct br_file {
  void *raw_file;
  br_booleanwriting;
  intmode;
  charname[1];
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_lexer_source br_lexer_source;
typedef struct br_lexer_token br_lexer_token;
typedef struct br_lexer_keyword br_lexer_keyword;
typedef struct br_lexer br_lexer;

typedef enum br_lexer_token_id {
  T_EOF = 0,
  T_ERROR = 1,
  T_IDENT = 2,
  T_STRING = 3,
  T_INTEGER = 4,
  T_REAL = 5,
  T_EXCLAM = 33,
  T_DQUOTE = 34,
  T_HASH = 35,
  T_DOLLAR = 36,
  T_PERCENT = 37,
  T_AMPERSAND = 38,
  T_RQUOTE = 39,
  T_LPAREN = 40,
  T_RPAREN = 41,
  T_ASTERISK = 42,
  T_PLUS = 43,
  T_COMMA = 44,
  T_DASH = 45,
  T_PERIOD = 46,
  T_SLASH = 47,
  T_COLON = 58,
  T_SEMICOLON = 59,
  T_LANGLE = 60,
  T_EQUAL = 61,
  T_RANGLE = 62,
  T_QUERY = 63,
  T_COMAT = 64,
  T_LSQUARE = 91,
  T_BSLASH = 92,
  T_RSQUARE = 93,
  T_CARET = 94,
  T_UNDERBAR = 95,
  T_LQUOTE = 96,
  T_LBRACE = 123,
  T_VBAR = 124,
  T_RBRACE = 125,
  T_TILDE = 126,
  T_KEYWORD = 128
} br_lexer_token_id;

typedef void br_lexer_getchar_cbfn(br_lexer_source*);
typedef void br_lexer_error_cbfn(br_lexer*, char*);
struct br_lexer_source {
  br_lexer_source *prev;
  char *name;
  br_int_32line;
  br_int_32next;
  br_lexer_getchar_cbfn *getchar;
  void *ptr;
};
struct br_lexer_token {
  br_lexer_token_idid;
  struct {
    br_int_32integer;
    floatreal;
    char *string;
  };
};
struct br_lexer_keyword {
  char *name;
  br_int_32id;
};
struct br_lexer {
  br_lexer_source *source;
  br_lexer_tokencurrent;
  br_lexer_keyword *keywords;
  br_int_32nkeywords;
  chareol_comment;
  void (*advance)(br_lexer*);
  br_putline_cbfn *putline;
  void *putline_arg;
  char *string_buffer;
  br_int_32string_buffer_size;
  br_lexer_error_cbfn *error;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
typedef struct br_tv_custom br_tv_custom;
typedef br_error br_tv_custom_query_cbfn(br_uint_32*, void**, br_size_t*, void*, br_tv_template_entry*, br_uint_8*);
typedef br_error br_tv_custom_set_cbfn(void*, br_uint_32*, br_tv_template_entry*);
typedef br_size_t br_tv_custom_extra_size_cbfn(void*, br_tv_template_entry*);
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_tv_custom {
  br_tv_custom_query_cbfn *query;
  br_tv_custom_set_cbfn *set;
  br_tv_custom_extra_size_cbfn *extra_size;
};
typedef struct br_token_entry br_token_entry;
struct br_token_entry {
  br_nodenode;
  char *identifier;
  br_int_32type;
  br_tokentoken;
  br_int_32base_length;
};
typedef struct br_exception_handler br_exception_handler;
struct br_exception_handler {
  br_exception_handler *prev;
  jmp_bufcontext;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
typedef struct br_pixelmap_state br_pixelmap_state;
struct br_pixelmap_state {
  void *res;
  br_tv_template *device_pixelmap_template;
  br_tv_template *pixelmap_match_template;
};
typedef struct br_value_tag br_value;
typedef struct br_associative_array_tag br_associative_array;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};
struct br_associative_array_tag {
  br_token_value *tv;
  br_uint_16num_elements;
  br_uint_16max_elements;
};
typedef struct br_value_tag br_value;
struct br_value_tag {
  br_uint_32u32;
  br_booleanb;
  void *p;
  br_tokent;
  br_int_8i8;
  br_uint_8u8;
  br_int_16i16;
  br_uint_16u16;
  br_int_32i32;
  br_fixed_lsx;
  br_floatf;
  br_scalars;
  br_anglea;
  br_colourrgb;
  br_object *o;
  br_vector2_i *v2_i;
  br_vector3_i *v3_i;
  br_vector4_i *v4_i;
  br_vector2_x *v2_x;
  br_vector3_x *v3_x;
  br_vector4_x *v4_x;
  br_vector2_f *v2_f;
  br_vector3_f *v3_f;
  br_vector4_f *v4_f;
  br_matrix23_x *m23_x;
  br_matrix34_x *m34_x;
  br_matrix4_x *m4_x;
  br_matrix23_f *m23_f;
  br_matrix34_f *m34_f;
  br_matrix4_f *m4_f;
  char *str;
  char *cstr;
  br_object **hl;
  br_token *tl;
  void **pl;
  br_token_value *tvl;
};

#endif