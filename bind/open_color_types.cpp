#include <OpenColorIO/OpenColorTypes.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OCIO_NAMESPACE {

namespace OpenColorIO = ::OCIO_NAMESPACE;

// TODO - do we want to try and handle this? Would mean a gigantic matrix
// template <typename T, typename U>
// OCIO_SHARED_PTR<T> DynamicPtrCast(const OCIO_SHARED_PTR<U>& ptr);

enum LoggingLevel {
    LOGGING_LEVEL_NONE = 0,
    LOGGING_LEVEL_WARNING = 1,
    LOGGING_LEVEL_INFO = 2,
    LOGGING_LEVEL_DEBUG = 3,
    LOGGING_LEVEL_UNKNOWN = 255,
    LOGGING_LEVEL_DEFAULT = 2,
};

enum ReferenceSpaceType {
    REFERENCE_SPACE_SCENE = 0,
    REFERENCE_SPACE_DISPLAY = 1,
};

enum SearchReferenceSpaceType {
    SEARCH_REFERENCE_SPACE_SCENE = 0,
    SEARCH_REFERENCE_SPACE_DISPLAY = 1,
    SEARCH_REFERENCE_SPACE_ALL = 2,
};

enum ColorSpaceVisibility {
    COLORSPACE_ACTIVE = 0,
    COLORSPACE_INACTIVE = 1,
    COLORSPACE_ALL = 2,
};

enum NamedTransformVisibility {
    NAMEDTRANSFORM_ACTIVE = 0,
    NAMEDTRANSFORM_INACTIVE = 1,
    NAMEDTRANSFORM_ALL = 2,
};

enum ViewType {
    VIEW_SHARED = 0,
    VIEW_DISPLAY_DEFINED = 1,
};

enum ColorSpaceDirection {
    COLORSPACE_DIR_TO_REFERENCE = 0,
    COLORSPACE_DIR_FROM_REFERENCE = 1,
};

enum ViewTransformDirection {
    VIEWTRANSFORM_DIR_TO_REFERENCE = 0,
    VIEWTRANSFORM_DIR_FROM_REFERENCE = 1,
};

enum TransformDirection {
    TRANSFORM_DIR_FORWARD = 0,
    TRANSFORM_DIR_INVERSE = 1,
};

enum TransformType {
    TRANSFORM_TYPE_ALLOCATION = 0,
    TRANSFORM_TYPE_BUILTIN = 1,
    TRANSFORM_TYPE_CDL = 2,
    TRANSFORM_TYPE_COLORSPACE = 3,
    TRANSFORM_TYPE_DISPLAY_VIEW = 4,
    TRANSFORM_TYPE_EXPONENT = 5,
    TRANSFORM_TYPE_EXPONENT_WITH_LINEAR = 6,
    TRANSFORM_TYPE_EXPOSURE_CONTRAST = 7,
    TRANSFORM_TYPE_FILE = 8,
    TRANSFORM_TYPE_FIXED_FUNCTION = 9,
    TRANSFORM_TYPE_GRADING_PRIMARY = 10,
    TRANSFORM_TYPE_GRADING_RGB_CURVE = 11,
    TRANSFORM_TYPE_GRADING_TONE = 12,
    TRANSFORM_TYPE_GROUP = 13,
    TRANSFORM_TYPE_LOG_AFFINE = 14,
    TRANSFORM_TYPE_LOG_CAMERA = 15,
    TRANSFORM_TYPE_LOG = 16,
    TRANSFORM_TYPE_LOOK = 17,
    TRANSFORM_TYPE_LUT1D = 18,
    TRANSFORM_TYPE_LUT3D = 19,
    TRANSFORM_TYPE_MATRIX = 20,
    TRANSFORM_TYPE_RANGE = 21,
};

enum Interpolation {
    INTERP_UNKNOWN = 0,
    INTERP_NEAREST = 1,
    INTERP_LINEAR = 2,
    INTERP_TETRAHEDRAL = 3,
    INTERP_CUBIC = 4,
    INTERP_DEFAULT = 254,
    INTERP_BEST = 255,
};

enum BitDepth {
    BIT_DEPTH_UNKNOWN = 0,
    BIT_DEPTH_UINT8 = 1,
    BIT_DEPTH_UINT10 = 2,
    BIT_DEPTH_UINT12 = 3,
    BIT_DEPTH_UINT14 = 4,
    BIT_DEPTH_UINT16 = 5,
    BIT_DEPTH_UINT32 = 6,
    BIT_DEPTH_F16 = 7,
    BIT_DEPTH_F32 = 8,
};

enum Lut1DHueAdjust {
    HUE_NONE = 0,
    HUE_DW3 = 1,
    HUE_WYPN = 2,
};

enum ChannelOrdering {
    CHANNEL_ORDERING_RGBA = 0,
    CHANNEL_ORDERING_BGRA = 1,
    CHANNEL_ORDERING_ABGR = 2,
    CHANNEL_ORDERING_RGB = 3,
    CHANNEL_ORDERING_BGR = 4,
};

enum Allocation {
    ALLOCATION_UNKNOWN = 0,
    ALLOCATION_UNIFORM = 1,
    ALLOCATION_LG2 = 2,
};

enum GpuLanguage {
    GPU_LANGUAGE_CG = 0,
    GPU_LANGUAGE_GLSL_1_2 = 1,
    GPU_LANGUAGE_GLSL_1_3 = 2,
    GPU_LANGUAGE_GLSL_4_0 = 3,
    GPU_LANGUAGE_HLSL_DX11 = 4,
};

enum EnvironmentMode {
    ENV_ENVIRONMENT_UNKNOWN = 0,
    ENV_ENVIRONMENT_LOAD_PREDEFINED = 1,
    ENV_ENVIRONMENT_LOAD_ALL = 2,
};

enum RangeStyle {
    RANGE_NO_CLAMP = 0,
    RANGE_CLAMP = 1,
};

enum FixedFunctionStyle {
    FIXED_FUNCTION_ACES_RED_MOD_03 = 0,
    FIXED_FUNCTION_ACES_RED_MOD_10 = 1,
    FIXED_FUNCTION_ACES_GLOW_03 = 2,
    FIXED_FUNCTION_ACES_GLOW_10 = 3,
    FIXED_FUNCTION_ACES_DARK_TO_DIM_10 = 4,
    FIXED_FUNCTION_REC2100_SURROUND = 5,
    FIXED_FUNCTION_RGB_TO_HSV = 6,
    FIXED_FUNCTION_XYZ_TO_xyY = 7,
    FIXED_FUNCTION_XYZ_TO_uvY = 8,
    FIXED_FUNCTION_XYZ_TO_LUV = 9,
    FIXED_FUNCTION_ACES_GAMUTMAP_02 = 10,
    FIXED_FUNCTION_ACES_GAMUTMAP_07 = 11,
    FIXED_FUNCTION_ACES_GAMUTMAP_13 = 12,
};

enum ExposureContrastStyle {
    EXPOSURE_CONTRAST_LINEAR = 0,
    EXPOSURE_CONTRAST_VIDEO = 1,
    EXPOSURE_CONTRAST_LOGARITHMIC = 2,
};

enum CDLStyle {
    CDL_ASC = 0,
    CDL_NO_CLAMP = 1,
    CDL_TRANSFORM_DEFAULT = 1,
};

enum NegativeStyle {
    NEGATIVE_CLAMP = 0,
    NEGATIVE_MIRROR = 1,
    NEGATIVE_PASS_THRU = 2,
    NEGATIVE_LINEAR = 3,
};

enum GradingStyle {
    GRADING_LOG = 0,
    GRADING_LIN = 1,
    GRADING_VIDEO = 2,
};

enum DynamicPropertyType {
    DYNAMIC_PROPERTY_EXPOSURE = 0,
    DYNAMIC_PROPERTY_CONTRAST = 1,
    DYNAMIC_PROPERTY_GAMMA = 2,
    DYNAMIC_PROPERTY_GRADING_PRIMARY = 3,
    DYNAMIC_PROPERTY_GRADING_RGBCURVE = 4,
    DYNAMIC_PROPERTY_GRADING_TONE = 5,
};

enum RGBCurveType {
    RGB_RED = 0,
    RGB_GREEN = 1,
    RGB_BLUE = 2,
    RGB_MASTER = 3,
    RGB_NUM_CURVES = 4,
};

enum UniformDataType {
    UNIFORM_DOUBLE = 0,
    UNIFORM_BOOL = 1,
    UNIFORM_FLOAT3 = 2,
    UNIFORM_VECTOR_FLOAT = 3,
    UNIFORM_VECTOR_INT = 4,
    UNIFORM_UNKNOWN = 5,
};

enum OptimizationFlags {
    OPTIMIZATION_NONE = 0,
    OPTIMIZATION_IDENTITY = 1,
    OPTIMIZATION_IDENTITY_GAMMA = 2,
    OPTIMIZATION_PAIR_IDENTITY_CDL = 64,
    OPTIMIZATION_PAIR_IDENTITY_EXPOSURE_CONTRAST = 128,
    OPTIMIZATION_PAIR_IDENTITY_FIXED_FUNCTION = 256,
    OPTIMIZATION_PAIR_IDENTITY_GAMMA = 512,
    OPTIMIZATION_PAIR_IDENTITY_LUT1D = 1024,
    OPTIMIZATION_PAIR_IDENTITY_LUT3D = 2048,
    OPTIMIZATION_PAIR_IDENTITY_LOG = 4096,
    OPTIMIZATION_PAIR_IDENTITY_GRADING = 8192,
    OPTIMIZATION_COMP_EXPONENT = 262144,
    OPTIMIZATION_COMP_GAMMA = 524288,
    OPTIMIZATION_COMP_MATRIX = 1048576,
    OPTIMIZATION_COMP_LUT1D = 2097152,
    OPTIMIZATION_COMP_LUT3D = 4194304,
    OPTIMIZATION_COMP_RANGE = 8388608,
    OPTIMIZATION_COMP_SEPARABLE_PREFIX = 16777216,
    OPTIMIZATION_LUT_INV_FAST = 33554432,
    OPTIMIZATION_FAST_LOG_EXP_POW = 67108864,
    OPTIMIZATION_SIMPLIFY_OPS = 134217728,
    OPTIMIZATION_NO_DYNAMIC_PROPERTIES = 268435456,
    OPTIMIZATION_ALL = 4294967295,
    OPTIMIZATION_LOSSLESS = 144457667,
    OPTIMIZATION_VERY_GOOD = 263995331,
    OPTIMIZATION_GOOD = 268189635,
    OPTIMIZATION_DRAFT = 4294967295,
    OPTIMIZATION_DEFAULT = 263995331,
};

enum ProcessorCacheFlags {
    PROCESSOR_CACHE_OFF = 0,
    PROCESSOR_CACHE_ENABLED = 1,
    PROCESSOR_CACHE_SHARE_DYN_PROPERTIES = 2,
    PROCESSOR_CACHE_DEFAULT = 3,
};

const char* BoolToString(bool val);

bool BoolFromString(const char* s);

const char* LoggingLevelToString(OpenColorIO::LoggingLevel level);

OpenColorIO::LoggingLevel LoggingLevelFromString(const char* s);

const char* TransformDirectionToString(OpenColorIO::TransformDirection dir);

OpenColorIO::TransformDirection TransformDirectionFromString(const char* s);

OpenColorIO::TransformDirection
GetInverseTransformDirection(OpenColorIO::TransformDirection dir);

OpenColorIO::TransformDirection
CombineTransformDirections(OpenColorIO::TransformDirection d1,
                           OpenColorIO::TransformDirection d2);

const char* BitDepthToString(OpenColorIO::BitDepth bitDepth);

OpenColorIO::BitDepth BitDepthFromString(const char* s);

bool BitDepthIsFloat(OpenColorIO::BitDepth bitDepth);

int BitDepthToInt(OpenColorIO::BitDepth bitDepth);

const char* AllocationToString(OpenColorIO::Allocation allocation);

OpenColorIO::Allocation AllocationFromString(const char* s);

const char* InterpolationToString(OpenColorIO::Interpolation interp);

OpenColorIO::Interpolation InterpolationFromString(const char* s);

const char* GpuLanguageToString(OpenColorIO::GpuLanguage language);

OpenColorIO::GpuLanguage GpuLanguageFromString(const char* s);

const char* EnvironmentModeToString(OpenColorIO::EnvironmentMode mode);

OpenColorIO::EnvironmentMode EnvironmentModeFromString(const char* s);

const char* CDLStyleToString(OpenColorIO::CDLStyle style);

OpenColorIO::CDLStyle CDLStyleFromString(const char* style);

const char* RangeStyleToString(OpenColorIO::RangeStyle style);

OpenColorIO::RangeStyle RangeStyleFromString(const char* style);

const char* FixedFunctionStyleToString(OpenColorIO::FixedFunctionStyle style);

OpenColorIO::FixedFunctionStyle FixedFunctionStyleFromString(const char* style);

const char* GradingStyleToString(OpenColorIO::GradingStyle style);

OpenColorIO::GradingStyle GradingStyleFromString(const char* s);

const char*
ExposureContrastStyleToString(OpenColorIO::ExposureContrastStyle style);

OpenColorIO::ExposureContrastStyle
ExposureContrastStyleFromString(const char* style);

const char* NegativeStyleToString(OpenColorIO::NegativeStyle style);

OpenColorIO::NegativeStyle NegativeStyleFromString(const char* style);

} // namespace OCIO_NAMESPACE

} // namespace cppmm_bind
