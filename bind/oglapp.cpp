#include <OpenColorIO/oglapphelpers/oglapp.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OCIO_NAMESPACE {

namespace OpenColorIO = ::OCIO_NAMESPACE;

/*
struct OglApp {
    using BoundType = OpenColorIO::OglApp;

    OglApp();

    OglApp(const OpenColorIO::OglApp&);

    OpenColorIO::OglApp& operator=(const OpenColorIO::OglApp&);

    OglApp(int winWidth, int winHeight);

    ~OglApp();

    void setYMirror();

    void setPrintShader(bool print);

    void initImage(int imageWidth, int imageHeight,
                   OpenColorIO::OglApp::Components comp,
                   const float* imageBuffer);

    void updateImage(const float* imageBuffer);

    void createGLBuffers();

    void setShader(std::shared_ptr<OpenColorIO::GpuShaderDesc>& shaderDesc);

    void reshape(int width, int height);

    void redisplay();

    void readImage(float* imageBuffer);

    void printGLInfo() const;

    static std::shared_ptr<OpenColorIO::OglApp>
    CreateOglApp(const char* winTitle, int winWidth, int winHeight);

    enum Components {
        COMPONENTS_RGB = 0,
        COMPONENTS_RGBA = 1,
    };
} CPPMM_OPAQUEPTR; // struct OglApp

struct ScreenApp {
    using BoundType = OpenColorIO::ScreenApp;

    void setYMirror();

    void setPrintShader(bool print);

    void initImage(int imageWidth, int imageHeight,
                   OpenColorIO::OglApp::Components comp,
                   const float* imageBuffer);

    void updateImage(const float* imageBuffer);

    void createGLBuffers();

    void setShader(std::shared_ptr<OpenColorIO::GpuShaderDesc>& shaderDesc);

    void reshape(int width, int height);

    void redisplay();

    void readImage(float* imageBuffer);

    void printGLInfo() const;

    static std::shared_ptr<OpenColorIO::OglApp>
    CreateOglApp(const char* winTitle, int winWidth, int winHeight);

    ScreenApp();

    ScreenApp(const OpenColorIO::ScreenApp&);

    OpenColorIO::ScreenApp& operator=(const OpenColorIO::ScreenApp&);

    ScreenApp(const char* winTitle, int winWidth, int winHeight);

    ~ScreenApp();

} CPPMM_OPAQUEPTR; // struct ScreenApp
*/

} // namespace OCIO_NAMESPACE

} // namespace cppmm_bind
