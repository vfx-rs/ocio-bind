#include <OpenColorIO/oglapphelpers/glsl.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OCIO_NAMESPACE {

namespace OpenColorIO = ::OCIO_NAMESPACE;

struct OpenGLBuilder {
    using BoundType = OpenColorIO::OpenGLBuilder;

    static std::shared_ptr<OpenColorIO::OpenGLBuilder>
    Create(const std::shared_ptr<OpenColorIO::GpuShaderDesc>& gpuShader);

    ~OpenGLBuilder();

    void setVerbose(bool verbose);

    bool isVerbose() const;

    void allocateAllTextures(unsigned int startIndex);

    void useAllTextures();

    void useAllUniforms();

    unsigned int buildProgram(const std::string& clientShaderProgram);

    void useProgram();

    unsigned int getProgramHandle();

    static unsigned int GetTextureMaxWidth();

} CPPMM_OPAQUEBYTES; // struct OpenGLBuilder

} // namespace OCIO_NAMESPACE

} // namespace cppmm_bind
