#include <OpenColorIO/OpenColorTypes.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OpenColorIO {

namespace v1 {

namespace OpenColorIO = ::OpenColorIO::v1;

template <typename T, typename U>
OCIO_SHARED_PTR<T> DynamicPtrCast(const OCIO_SHARED_PTR<U>& ptr);

enum LoggingLevel {
    LOGGING_LEVEL_NONE = 0,
    LOGGING_LEVEL_WARNING = 1,
    LOGGING_LEVEL_INFO = 2,
    LOGGING_LEVEL_DEBUG = 3,
    LOGGING_LEVEL_UNKNOWN = 255,
};

enum ColorSpaceDirection {
    COLORSPACE_DIR_UNKNOWN = 0,
    COLORSPACE_DIR_TO_REFERENCE = 1,
    COLORSPACE_DIR_FROM_REFERENCE = 2,
};

enum TransformDirection {
    TRANSFORM_DIR_UNKNOWN = 0,
    TRANSFORM_DIR_FORWARD = 1,
    TRANSFORM_DIR_INVERSE = 2,
};

enum Interpolation {
    INTERP_UNKNOWN = 0,
    INTERP_NEAREST = 1,
    INTERP_LINEAR = 2,
    INTERP_TETRAHEDRAL = 3,
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

enum Allocation {
    ALLOCATION_UNKNOWN = 0,
    ALLOCATION_UNIFORM = 1,
    ALLOCATION_LG2 = 2,
};

enum GpuLanguage {
    GPU_LANGUAGE_UNKNOWN = 0,
    GPU_LANGUAGE_CG = 1,
    GPU_LANGUAGE_GLSL_1_0 = 2,
    GPU_LANGUAGE_GLSL_1_3 = 3,
};

enum EnvironmentMode {
    ENV_ENVIRONMENT_UNKNOWN = 0,
    ENV_ENVIRONMENT_LOAD_PREDEFINED = 1,
    ENV_ENVIRONMENT_LOAD_ALL = 2,
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

const char* ColorSpaceDirectionToString(OpenColorIO::ColorSpaceDirection dir);

OpenColorIO::ColorSpaceDirection ColorSpaceDirectionFromString(const char* s);

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

} // namespace v1

} // namespace OpenColorIO

} // namespace cppmm_bind
