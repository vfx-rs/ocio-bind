#include <OpenColorIO/OpenColorTransforms.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OpenColorIO {

namespace v1 {

namespace OpenColorIO = ::OpenColorIO::v1;

struct Transform {
    using BoundType = OpenColorIO::Transform;

    ~Transform();

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

} CPPMM_OPAQUEPTR; // struct Transform

struct AllocationTransform {
    using BoundType = OpenColorIO::AllocationTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::AllocationTransform> Create();

    OpenColorIO::Allocation getAllocation() const;

    void setAllocation(OpenColorIO::Allocation allocation);

    int getNumVars() const;

    void getVars(float* vars) const;

    void setVars(int numvars, const float* vars);

} CPPMM_OPAQUEBYTES; // struct AllocationTransform

struct CDLTransform {
    using BoundType = OpenColorIO::CDLTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::CDLTransform> Create();

    static OCIO_SHARED_PTR<OpenColorIO::CDLTransform>
    CreateFromFile(const char* src, const char* cccid);

    bool
    equals(const OCIO_SHARED_PTR<const OpenColorIO::CDLTransform>& other) const;

    const char* getXML() const;

    void setXML(const char* xml);

    void setSlope(const float* rgb);

    void getSlope(float* rgb) const;

    void setOffset(const float* rgb);

    void getOffset(float* rgb) const;

    void setPower(const float* rgb);

    void getPower(float* rgb) const;

    void setSOP(const float* vec9);

    void getSOP(float* vec9) const;

    void setSat(float sat);

    float getSat() const;

    void getSatLumaCoefs(float* rgb) const;

    void setID(const char* id);

    const char* getID() const;

    void setDescription(const char* desc);

    const char* getDescription() const;

} CPPMM_OPAQUEBYTES; // struct CDLTransform

struct ColorSpaceTransform {
    using BoundType = OpenColorIO::ColorSpaceTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::ColorSpaceTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* src);

    const char* getDst() const;

    void setDst(const char* dst);

} CPPMM_OPAQUEBYTES; // struct ColorSpaceTransform

struct DisplayTransform {
    using BoundType = OpenColorIO::DisplayTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::DisplayTransform> Create();

    void setInputColorSpaceName(const char* name);

    const char* getInputColorSpaceName() const;

    void setLinearCC(const OCIO_SHARED_PTR<const OpenColorIO::Transform>& cc);

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getLinearCC() const;

    void
    setColorTimingCC(const OCIO_SHARED_PTR<const OpenColorIO::Transform>& cc);

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getColorTimingCC() const;

    void setChannelView(
        const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform);

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getChannelView() const;

    void setDisplay(const char* display);

    const char* getDisplay() const;

    void setView(const char* view);

    const char* getView() const;

    void setDisplayCC(const OCIO_SHARED_PTR<const OpenColorIO::Transform>& cc);

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getDisplayCC() const;

    void setLooksOverride(const char* looks);

    const char* getLooksOverride() const;

    void setLooksOverrideEnabled(bool enabled);

    bool getLooksOverrideEnabled() const;

} CPPMM_OPAQUEBYTES; // struct DisplayTransform

struct ExponentTransform {
    using BoundType = OpenColorIO::ExponentTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::ExponentTransform> Create();

    void setValue(const float* vec4);

    void getValue(float* vec4) const;

} CPPMM_OPAQUEBYTES; // struct ExponentTransform

struct FileTransform {
    using BoundType = OpenColorIO::FileTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::FileTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* src);

    const char* getCCCId() const;

    void setCCCId(const char* id);

    OpenColorIO::Interpolation getInterpolation() const;

    void setInterpolation(OpenColorIO::Interpolation interp);

    static int getNumFormats();

    static const char* getFormatNameByIndex(int index);

    static const char* getFormatExtensionByIndex(int index);

} CPPMM_OPAQUEBYTES; // struct FileTransform

struct GroupTransform {
    using BoundType = OpenColorIO::GroupTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::GroupTransform> Create();

    OCIO_SHARED_PTR<const OpenColorIO::Transform> getTransform(int index) const;

    int size() const;

    void
    push_back(const OCIO_SHARED_PTR<const OpenColorIO::Transform>& transform);

    void clear();

    bool empty() const;

} CPPMM_OPAQUEBYTES; // struct GroupTransform

struct LogTransform {
    using BoundType = OpenColorIO::LogTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::LogTransform> Create();

    void setBase(float val);

    float getBase() const;

} CPPMM_OPAQUEBYTES; // struct LogTransform

struct LookTransform {
    using BoundType = OpenColorIO::LookTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::LookTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* src);

    const char* getDst() const;

    void setDst(const char* dst);

    void setLooks(const char* looks);

    const char* getLooks() const;

} CPPMM_OPAQUEBYTES; // struct LookTransform

struct MatrixTransform {
    using BoundType = OpenColorIO::MatrixTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::MatrixTransform> Create();

    bool equals(const OpenColorIO::MatrixTransform& other) const;

    void setValue(const float* m44, const float* offset4);

    void getValue(float* m44, float* offset4) const;

    void setMatrix(const float* m44);

    void getMatrix(float* m44) const;

    void setOffset(const float* offset4);

    void getOffset(float* offset4) const;

    static void Fit(float* m44, float* offset4, const float* oldmin4,
                    const float* oldmax4, const float* newmin4,
                    const float* newmax4);

    static void Identity(float* m44, float* offset4);

    static void Sat(float* m44, float* offset4, float sat,
                    const float* lumaCoef3);

    static void Scale(float* m44, float* offset4, const float* scale4);

    static void View(float* m44, float* offset4, int* channelHot4,
                     const float* lumaCoef3);

} CPPMM_OPAQUEBYTES; // struct MatrixTransform

struct TruelightTransform {
    using BoundType = OpenColorIO::TruelightTransform;

    OCIO_SHARED_PTR<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    static OCIO_SHARED_PTR<OpenColorIO::TruelightTransform> Create();

    void setConfigRoot(const char* configroot);

    const char* getConfigRoot() const;

    void setProfile(const char* profile);

    const char* getProfile() const;

    void setCamera(const char* camera);

    const char* getCamera() const;

    void setInputDisplay(const char* display);

    const char* getInputDisplay() const;

    void setRecorder(const char* recorder);

    const char* getRecorder() const;

    void setPrint(const char* print);

    const char* getPrint() const;

    void setLamp(const char* lamp);

    const char* getLamp() const;

    void setOutputCamera(const char* camera);

    const char* getOutputCamera() const;

    void setDisplay(const char* display);

    const char* getDisplay() const;

    void setCubeInput(const char* type);

    const char* getCubeInput() const;

} CPPMM_OPAQUEBYTES; // struct TruelightTransform

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Transform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::AllocationTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::CDLTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ColorSpaceTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::DisplayTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ExponentTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::FileTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GroupTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LogTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LookTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::MatrixTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::TruelightTransform&) CPPMM_IGNORE;

} // namespace v1

} // namespace OpenColorIO

} // namespace cppmm_bind
