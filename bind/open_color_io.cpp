#include <OpenColorIO/OpenColorIO.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OpenColorIO {

namespace v1 {

namespace OpenColorIO = ::OpenColorIO::v1;

struct Config {
    using BoundType = OpenColorIO::Config;

    static OCIO_SHARED_PTR<OpenColorIO::Config> Create();

    static OCIO_SHARED_PTR<const OpenColorIO::Config> CreateFromEnv();

    static OCIO_SHARED_PTR<const OpenColorIO::Config>
    CreateFromFile(const char* filename);

    static OCIO_SHARED_PTR<const OpenColorIO::Config> CreateFromStream(
        std::basic_istream<char, std::char_traits<char>>& istream) CPPMM_IGNORE;

    OCIO_SHARED_PTR<OpenColorIO::Config> createEditableCopy() const;

    void sanityCheck() const;

    const char* getDescription() const;

    void setDescription(const char* description);

    void serialize(std::basic_ostream<char, std::char_traits<char>>& os) const
        CPPMM_IGNORE;

    const char* getCacheID() const;

    const char* getCacheID(
        const OCIO_SHARED_PTR<const OpenColorIO::Context>& context) const;

    OCIO_SHARED_PTR<const OpenColorIO::Context> getCurrentContext() const;

    void addEnvironmentVar(const char* name, const char* defaultValue);

    int getNumEnvironmentVars() const;

    const char* getEnvironmentVarNameByIndex(int index) const;

    const char* getEnvironmentVarDefault(const char* name) const;

    void clearEnvironmentVars();

    void setEnvironmentMode(OpenColorIO::EnvironmentMode mode);

    OpenColorIO::EnvironmentMode getEnvironmentMode() const;

    void loadEnvironment();

    const char* getSearchPath() const;

    void setSearchPath(const char* path);

    const char* getWorkingDir() const;

    void setWorkingDir(const char* dirname);

    int getNumColorSpaces() const;

    const char* getColorSpaceNameByIndex(int index) const;

    OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>
    getColorSpace(const char* name) const;

    int getIndexForColorSpace(const char* name) const;

    void
    addColorSpace(const OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>& cs);

    void clearColorSpaces();

    const char* parseColorSpaceFromString(const char* str) const;

    bool isStrictParsingEnabled() const;

    void setStrictParsingEnabled(bool enabled);

    void setRole(const char* role, const char* colorSpaceName);

    int getNumRoles() const;

    bool hasRole(const char* role) const;

    const char* getRoleName(int index) const;

    const char* getDefaultDisplay() const;

    int getNumDisplays() const;

    const char* getDisplay(int index) const;

    const char* getDefaultView(const char* display) const;

    int getNumViews(const char* display) const;

    const char* getView(const char* display, int index) const;

    const char* getDisplayColorSpaceName(const char* display,
                                         const char* view) const;

    const char* getDisplayLooks(const char* display, const char* view) const;

    void addDisplay(const char* display, const char* view,
                    const char* colorSpaceName, const char* looks);

    void clearDisplays();

    void setActiveDisplays(const char* displays);

    const char* getActiveDisplays() const;

    void setActiveViews(const char* views);

    const char* getActiveViews() const;

    void getDefaultLumaCoefs(float* rgb) const;

    void setDefaultLumaCoefs(const float* rgb);

    OCIO_SHARED_PTR<const OpenColorIO::Look> getLook(const char* name) const;

    int getNumLooks() const;

    const char* getLookNameByIndex(int index) const;

    void addLook(const OCIO_SHARED_PTR<const OpenColorIO::Look>& look);

    void clearLooks();

    OCIO_SHARED_PTR<const OpenColorIO::Processor> getProcessor(
        const OCIO_SHARED_PTR<const OpenColorIO::Context>& context,
        const OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>& srcColorSpace,
        const OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>& dstColorSpace)
        const;

    OCIO_SHARED_PTR<const OpenColorIO::Processor> getProcessor(
        const OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>& srcColorSpace,
        const OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>& dstColorSpace)
        const;

    OCIO_SHARED_PTR<const OpenColorIO::Processor>
    getProcessor(const char* srcName, const char* dstName) const;

    OCIO_SHARED_PTR<const OpenColorIO::Processor>
    getProcessor(const OCIO_SHARED_PTR<const OpenColorIO::Context>& context,
                 const char* srcName, const char* dstName) const;

    OCIO_SHARED_PTR<const OpenColorIO::Processor> getProcessor(
        const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform) const;

    OCIO_SHARED_PTR<const OpenColorIO::Processor>
    getProcessor(const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform,
                 OpenColorIO::TransformDirection direction) const;

    OCIO_SHARED_PTR<const OpenColorIO::Processor>
    getProcessor(const OCIO_SHARED_PTR<const OpenColorIO::Context>& context,
                 const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform,
                 OpenColorIO::TransformDirection direction) const;

} CPPMM_OPAQUEBYTES; // struct Config

struct ColorSpace {
    using BoundType = OpenColorIO::ColorSpace;

    static OCIO_SHARED_PTR<OpenColorIO::ColorSpace> Create();

    OCIO_SHARED_PTR<OpenColorIO::ColorSpace> createEditableCopy() const;

    const char* getName() const;

    void setName(const char* name);

    const char* getFamily() const;

    void setFamily(const char* family);

    const char* getEqualityGroup() const;

    void setEqualityGroup(const char* equalityGroup);

    const char* getDescription() const;

    void setDescription(const char* description);

    OpenColorIO::BitDepth getBitDepth() const;

    void setBitDepth(OpenColorIO::BitDepth bitDepth);

    bool isData() const;

    void setIsData(bool isData);

    OpenColorIO::Allocation getAllocation() const;

    void setAllocation(OpenColorIO::Allocation allocation);

    int getAllocationNumVars() const;

    void getAllocationVars(float* vars) const;

    void setAllocationVars(int numvars, const float* vars);

    OCIO_SHARED_PTR<const OpenColorIO::Transform>
    getTransform(OpenColorIO::ColorSpaceDirection dir) const;

    void
    setTransform(const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform,
                 OpenColorIO::ColorSpaceDirection dir);

} CPPMM_OPAQUEBYTES; // struct ColorSpace

struct Look {
    using BoundType = OpenColorIO::Look;

    static OCIO_SHARED_PTR<OpenColorIO::Look> Create();

    OCIO_SHARED_PTR<OpenColorIO::Look> createEditableCopy() const;

    const char* getName() const;

    void setName(const char* name);

    const char* getProcessSpace() const;

    void setProcessSpace(const char* processSpace);

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getTransform() const;

    void setTransform(
        const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform);

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getInverseTransform() const;

    void setInverseTransform(
        const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform);

    const char* getDescription() const;

    void setDescription(const char* description);

} CPPMM_OPAQUEBYTES; // struct Look

struct Context {
    using BoundType = OpenColorIO::Context;

    static OCIO_SHARED_PTR<OpenColorIO::Context> Create();

    OCIO_SHARED_PTR<OpenColorIO::Context> createEditableCopy() const;

    const char* getCacheID() const;

    void setSearchPath(const char* path);

    const char* getSearchPath() const;

    void setWorkingDir(const char* dirname);

    const char* getWorkingDir() const;

    void setStringVar(const char* name, const char* value);

    const char* getStringVar(const char* name) const;

    int getNumStringVars() const;

    const char* getStringVarNameByIndex(int index) const;

    void clearStringVars();

    void setEnvironmentMode(OpenColorIO::EnvironmentMode mode);

    OpenColorIO::EnvironmentMode getEnvironmentMode() const;

    void loadEnvironment();

    const char* resolveStringVar(const char* val) const;

    const char* resolveFileLocation(const char* filename) const;

} CPPMM_OPAQUEBYTES; // struct Context

struct Processor {
    using BoundType = OpenColorIO::Processor;

    static OCIO_SHARED_PTR<OpenColorIO::Processor> Create();

    bool isNoOp() const;

    bool hasChannelCrosstalk() const;

    OCIO_SHARED_PTR<const OpenColorIO::ProcessorMetadata> getMetadata() const;

    void apply(OpenColorIO::ImageDesc& img) const;

    void applyRGB(float* pixel) const;

    void applyRGBA(float* pixel) const;

    const char* getCpuCacheID() const;

    const char*
    getGpuShaderText(const OpenColorIO::GpuShaderDesc& shaderDesc) const;

    const char*
    getGpuShaderTextCacheID(const OpenColorIO::GpuShaderDesc& shaderDesc) const;

    void getGpuLut3D(float* lut3d,
                     const OpenColorIO::GpuShaderDesc& shaderDesc) const;

    const char*
    getGpuLut3DCacheID(const OpenColorIO::GpuShaderDesc& shaderDesc) const;

} CPPMM_OPAQUEBYTES; // struct Processor

struct ProcessorMetadata {
    using BoundType = OpenColorIO::ProcessorMetadata;

    static OCIO_SHARED_PTR<OpenColorIO::ProcessorMetadata> Create();

    int getNumFiles() const;

    const char* getFile(int index) const;

    int getNumLooks() const;

    const char* getLook(int index) const;

    void addFile(const char* fname);

    void addLook(const char* look);

} CPPMM_OPAQUEBYTES; // struct ProcessorMetadata

struct Baker {
    using BoundType = OpenColorIO::Baker;

    static OCIO_SHARED_PTR<OpenColorIO::Baker> Create();

    OCIO_SHARED_PTR<OpenColorIO::Baker> createEditableCopy() const;

    void setConfig(const OCIO_SHARED_PTR<const OpenColorIO::Config>& config);

    OCIO_SHARED_PTR<const OpenColorIO::Config> getConfig() const;

    void setFormat(const char* formatName);

    const char* getFormat() const;

    void setType(const char* type);

    const char* getType() const;

    void setMetadata(const char* metadata);

    const char* getMetadata() const;

    void setInputSpace(const char* inputSpace);

    const char* getInputSpace() const;

    void setShaperSpace(const char* shaperSpace);

    const char* getShaperSpace() const;

    void setLooks(const char* looks);

    const char* getLooks() const;

    void setTargetSpace(const char* targetSpace);

    const char* getTargetSpace() const;

    void setShaperSize(int shapersize);

    int getShaperSize() const;

    void setCubeSize(int cubesize);

    int getCubeSize() const;

    void bake(std::basic_ostream<char, std::char_traits<char>>& os) const
        CPPMM_IGNORE;

    static int getNumFormats();

    static const char* getFormatNameByIndex(int index);

    static const char* getFormatExtensionByIndex(int index);

} CPPMM_OPAQUEBYTES; // struct Baker

struct ImageDesc {
    using BoundType = OpenColorIO::ImageDesc;

    ~ImageDesc();

} CPPMM_OPAQUEBYTES; // struct ImageDesc

struct GpuShaderDesc {
    using BoundType = OpenColorIO::GpuShaderDesc;

    GpuShaderDesc();

    ~GpuShaderDesc();

    void setLanguage(OpenColorIO::GpuLanguage lang);

    OpenColorIO::GpuLanguage getLanguage() const;

    void setFunctionName(const char* name);

    const char* getFunctionName() const;

    void setLut3DEdgeLen(int len);

    int getLut3DEdgeLen() const;

    const char* getCacheID() const;

} CPPMM_OPAQUEBYTES; // struct GpuShaderDesc

struct Exception {
    using BoundType = OpenColorIO::Exception;

    const char* what() const;

    Exception(const char*);

    Exception(const OpenColorIO::Exception&);

    OpenColorIO::Exception& operator=(const OpenColorIO::Exception&);

    ~Exception();

} CPPMM_OPAQUEBYTES; // struct Exception

struct ExceptionMissingFile {
    using BoundType = OpenColorIO::ExceptionMissingFile;

    const char* what() const;

    ExceptionMissingFile(const char*);

    ExceptionMissingFile(const OpenColorIO::ExceptionMissingFile&);

    OpenColorIO::ExceptionMissingFile&
    operator=(const OpenColorIO::ExceptionMissingFile&);

    ~ExceptionMissingFile();

} CPPMM_OPAQUEBYTES; // struct ExceptionMissingFile

void ClearAllCaches();

const char* GetVersion();

int GetVersionHex();

OpenColorIO::LoggingLevel GetLoggingLevel();

void SetLoggingLevel(OpenColorIO::LoggingLevel level);

OCIO_SHARED_PTR<const OpenColorIO::Config> GetCurrentConfig();

void SetCurrentConfig(const OCIO_SHARED_PTR<const OpenColorIO::Config>& config);

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Config&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ColorSpace&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Look&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ImageDesc&) CPPMM_IGNORE;

struct PackedImageDesc {
    using BoundType = OpenColorIO::PackedImageDesc;

    PackedImageDesc(float* data, long width, long height, long numChannels,
                    long chanStrideBytes, long xStrideBytes, long yStrideBytes);

    ~PackedImageDesc();

    float* getData() const;

    long getWidth() const;

    long getHeight() const;

    long getNumChannels() const;

    long getChanStrideBytes() const;

    long getXStrideBytes() const;

    long getYStrideBytes() const;

} CPPMM_OPAQUEBYTES; // struct PackedImageDesc

struct PlanarImageDesc {
    using BoundType = OpenColorIO::PlanarImageDesc;

    PlanarImageDesc(float* rData, float* gData, float* bData, float* aData,
                    long width, long height, long yStrideBytes);

    ~PlanarImageDesc();

    float* getRData() const;

    float* getGData() const;

    float* getBData() const;

    float* getAData() const;

    long getWidth() const;

    long getHeight() const;

    long getYStrideBytes() const;

} CPPMM_OPAQUEBYTES; // struct PlanarImageDesc

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Context&) CPPMM_IGNORE;

} // namespace v1

} // namespace OpenColorIO

} // namespace cppmm_bind
