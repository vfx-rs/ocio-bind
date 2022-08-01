#include <OpenColorIO/OpenColorTransforms.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OCIO_NAMESPACE {

namespace OpenColorIO = ::OCIO_NAMESPACE;

struct GradingBSplineCurve {
    using BoundType = OpenColorIO::GradingBSplineCurve;

    static std::shared_ptr<OpenColorIO::GradingBSplineCurve>
    Create(size_t size);

    static std::shared_ptr<OpenColorIO::GradingBSplineCurve>
    Create(std::initializer_list<OpenColorIO::GradingControlPoint> values) CPPMM_IGNORE;

    std::shared_ptr<OpenColorIO::GradingBSplineCurve>
    createEditableCopy() const;

    size_t getNumControlPoints() const;

    void setNumControlPoints(size_t size);

    const OpenColorIO::GradingControlPoint&
    getControlPoint(size_t index) const;

    OpenColorIO::GradingControlPoint& getControlPoint(size_t index);

    float getSlope(size_t index) const;

    void setSlope(size_t index, float slope);

    bool slopesAreDefault() const;

    void validate() const;

    GradingBSplineCurve(const OpenColorIO::GradingBSplineCurve&) = delete;
    OpenColorIO::GradingBSplineCurve&
    operator=(const OpenColorIO::GradingBSplineCurve&) = delete;

    ~GradingBSplineCurve();

} CPPMM_OPAQUEPTR; // struct GradingBSplineCurve

struct GradingRGBCurve {
    using BoundType = OpenColorIO::GradingRGBCurve;

    static std::shared_ptr<OpenColorIO::GradingRGBCurve>
    Create(OpenColorIO::GradingStyle style);

    static std::shared_ptr<OpenColorIO::GradingRGBCurve>
    Create(const std::shared_ptr<const OpenColorIO::GradingRGBCurve>& rhs);

    static std::shared_ptr<OpenColorIO::GradingRGBCurve> Create(
        const std::shared_ptr<const OpenColorIO::GradingBSplineCurve>& red,
        const std::shared_ptr<const OpenColorIO::GradingBSplineCurve>& green,
        const std::shared_ptr<const OpenColorIO::GradingBSplineCurve>& blue,
        const std::shared_ptr<const OpenColorIO::GradingBSplineCurve>& master);

    std::shared_ptr<OpenColorIO::GradingRGBCurve> createEditableCopy() const;

    void validate() const;

    bool isIdentity() const;

    std::shared_ptr<const OpenColorIO::GradingBSplineCurve>
    getCurve(OpenColorIO::RGBCurveType c) const;

    std::shared_ptr<OpenColorIO::GradingBSplineCurve>
    getCurve(OpenColorIO::RGBCurveType c);

    ~GradingRGBCurve();

    OpenColorIO::GradingRGBCurve&
    operator=(const OpenColorIO::GradingRGBCurve&) = delete;

} CPPMM_OPAQUEPTR; // struct GradingRGBCurve

struct Transform {
    using BoundType = OpenColorIO::Transform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    Transform(const OpenColorIO::Transform&) = delete;
    OpenColorIO::Transform& operator=(const OpenColorIO::Transform&) = delete;

    ~Transform();

} CPPMM_OPAQUEPTR; // struct Transform

struct AllocationTransform {
    using BoundType = OpenColorIO::AllocationTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::AllocationTransform> Create();

    OpenColorIO::Allocation getAllocation() const;

    void setAllocation(OpenColorIO::Allocation allocation);

    int getNumVars() const;

    void getVars(float* vars) const;

    void setVars(int numvars, const float* vars);

    OpenColorIO::AllocationTransform&
    operator=(const OpenColorIO::AllocationTransform&) = delete;

    ~AllocationTransform();

} CPPMM_OPAQUEBYTES; // struct AllocationTransform

struct BuiltinTransform {
    using BoundType = OpenColorIO::BuiltinTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::BuiltinTransform> Create();

    const char* getStyle() const;

    void setStyle(const char* style);

    const char* getDescription() const;

    ~BuiltinTransform();

} CPPMM_OPAQUEPTR; // struct BuiltinTransform

struct CDLTransform {
    using BoundType = OpenColorIO::CDLTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::CDLTransform> Create();

    static std::shared_ptr<OpenColorIO::CDLTransform>
    CreateFromFile(const char* src, const char* cccid);

    static std::shared_ptr<OpenColorIO::GroupTransform>
    CreateGroupFromFile(const char* src);

    OpenColorIO::FormatMetadata& getFormatMetadata();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    bool equals(const OpenColorIO::CDLTransform& other) const;

    OpenColorIO::CDLStyle getStyle() const;

    void setStyle(OpenColorIO::CDLStyle style);

    void getSlope(double* rgb) const;

    void setSlope(const double* rgb);

    void getOffset(double* rgb) const;

    void setOffset(const double* rgb);

    void getPower(double* rgb) const;

    void setPower(const double* rgb);

    void getSOP(double* vec9) const;

    void setSOP(const double* vec9);

    double getSat() const;

    void setSat(double sat);

    void getSatLumaCoefs(double* rgb) const;

    const char* getID() const;

    void setID(const char* id);

    const char* getFirstSOPDescription() const;

    void setFirstSOPDescription(const char* description);

    CDLTransform(const OpenColorIO::CDLTransform&) = delete;
    OpenColorIO::CDLTransform& operator=(const OpenColorIO::CDLTransform&) = delete;

    ~CDLTransform();

} CPPMM_OPAQUEPTR; // struct CDLTransform

struct ColorSpaceTransform {
    using BoundType = OpenColorIO::ColorSpaceTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::ColorSpaceTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* src);

    const char* getDst() const;

    void setDst(const char* dst);

    bool getDataBypass() const;

    void setDataBypass(bool enabled);

    OpenColorIO::ColorSpaceTransform&
    operator=(const OpenColorIO::ColorSpaceTransform&) = delete;

    ~ColorSpaceTransform();

} CPPMM_OPAQUEBYTES; // struct ColorSpaceTransform

struct DisplayViewTransform {
    using BoundType = OpenColorIO::DisplayViewTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::DisplayViewTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* name);

    const char* getDisplay() const;

    void setDisplay(const char* display);

    const char* getView() const;

    void setView(const char* view);

    bool getLooksBypass() const;

    void setLooksBypass(bool bypass);

    bool getDataBypass() const;

    void setDataBypass(bool bypass);

    ~DisplayViewTransform();

} CPPMM_OPAQUEBYTES; // struct DisplayViewTransform

struct DynamicProperty {
    using BoundType = OpenColorIO::DynamicProperty;

    OpenColorIO::DynamicPropertyType getType() const;

    OpenColorIO::DynamicProperty&
    operator=(const OpenColorIO::DynamicProperty&) = delete;
    DynamicProperty(const OpenColorIO::DynamicProperty&) = delete;

    ~DynamicProperty();

} CPPMM_OPAQUEPTR; // struct DynamicProperty

struct DynamicPropertyDouble {
    using BoundType = OpenColorIO::DynamicPropertyDouble;

    double getValue() const;

    void setValue(double value);

    DynamicPropertyDouble(const OpenColorIO::DynamicPropertyDouble&)= delete;

    OpenColorIO::DynamicPropertyDouble&
    operator=(const OpenColorIO::DynamicPropertyDouble&) = delete;

    ~DynamicPropertyDouble();

} CPPMM_OPAQUEPTR; // struct DynamicPropertyDouble

struct DynamicPropertyGradingPrimary {
    using BoundType = OpenColorIO::DynamicPropertyGradingPrimary;

    const OpenColorIO::GradingPrimary& getValue() const;

    void setValue(const OpenColorIO::GradingPrimary& value);

    DynamicPropertyGradingPrimary(
        const OpenColorIO::DynamicPropertyGradingPrimary&) = delete;

    OpenColorIO::DynamicPropertyGradingPrimary&
    operator=(const OpenColorIO::DynamicPropertyGradingPrimary&) = delete;

    ~DynamicPropertyGradingPrimary();

} CPPMM_OPAQUEPTR; // struct DynamicPropertyGradingPrimary

struct DynamicPropertyGradingRGBCurve {
    using BoundType = OpenColorIO::DynamicPropertyGradingRGBCurve;

    const std::shared_ptr<const OpenColorIO::GradingRGBCurve>& getValue() const;

    void
    setValue(const std::shared_ptr<const OpenColorIO::GradingRGBCurve>& value);

    DynamicPropertyGradingRGBCurve(
        const OpenColorIO::DynamicPropertyGradingRGBCurve&) = delete;

    OpenColorIO::DynamicPropertyGradingRGBCurve&
    operator=(const OpenColorIO::DynamicPropertyGradingRGBCurve&) = delete;

    ~DynamicPropertyGradingRGBCurve();

} CPPMM_OPAQUEPTR; // struct DynamicPropertyGradingRGBCurve

struct DynamicPropertyGradingTone {
    using BoundType = OpenColorIO::DynamicPropertyGradingTone;

    const OpenColorIO::GradingTone& getValue() const;

    void setValue(const OpenColorIO::GradingTone& value);

    DynamicPropertyGradingTone(const OpenColorIO::DynamicPropertyGradingTone&) = delete;

    OpenColorIO::DynamicPropertyGradingTone&
    operator=(const OpenColorIO::DynamicPropertyGradingTone&) = delete;

    ~DynamicPropertyGradingTone();

} CPPMM_OPAQUEPTR; // struct DynamicPropertyGradingTone

struct ExponentTransform {
    using BoundType = OpenColorIO::ExponentTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::ExponentTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::ExponentTransform& other) const;

    void getValue(double (&vec4)[4]) const;

    void setValue(const double (&vec4)[4]);

    OpenColorIO::NegativeStyle getNegativeStyle() const;

    void setNegativeStyle(OpenColorIO::NegativeStyle style);

    ExponentTransform(const OpenColorIO::ExponentTransform&) = delete;

    OpenColorIO::ExponentTransform&
    operator=(const OpenColorIO::ExponentTransform&) = delete;

    ~ExponentTransform();

} CPPMM_OPAQUEPTR; // struct ExponentTransform

struct ExponentWithLinearTransform {
    using BoundType = OpenColorIO::ExponentWithLinearTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::ExponentWithLinearTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::ExponentWithLinearTransform& other) const;

    void getGamma(double (&values)[4]) const;

    void setGamma(const double (&values)[4]);

    void getOffset(double (&values)[4]) const;

    void setOffset(const double (&values)[4]);

    OpenColorIO::NegativeStyle getNegativeStyle() const;

    void setNegativeStyle(OpenColorIO::NegativeStyle style);

    ExponentWithLinearTransform(
        const OpenColorIO::ExponentWithLinearTransform&) = delete;

    OpenColorIO::ExponentWithLinearTransform&
    operator=(const OpenColorIO::ExponentWithLinearTransform&) = delete;

    ~ExponentWithLinearTransform();

} CPPMM_OPAQUEPTR; // struct ExponentWithLinearTransform

struct ExposureContrastTransform {
    using BoundType = OpenColorIO::ExposureContrastTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::ExposureContrastTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::ExposureContrastTransform& other) const;

    OpenColorIO::ExposureContrastStyle getStyle() const;

    void setStyle(OpenColorIO::ExposureContrastStyle style);

    double getExposure() const;

    void setExposure(double exposure);

    bool isExposureDynamic() const;

    void makeExposureDynamic();

    void makeExposureNonDynamic();

    double getContrast() const;

    void setContrast(double contrast);

    bool isContrastDynamic() const;

    void makeContrastDynamic();

    void makeContrastNonDynamic();

    double getGamma() const;

    void setGamma(double gamma);

    bool isGammaDynamic() const;

    void makeGammaDynamic();

    void makeGammaNonDynamic();

    double getPivot() const;

    void setPivot(double pivot);

    double getLogExposureStep() const;

    void setLogExposureStep(double logExposureStep);

    double getLogMidGray() const;

    void setLogMidGray(double logMidGray);

    ~ExposureContrastTransform();

} CPPMM_OPAQUEPTR; // struct ExposureContrastTransform

struct FileTransform {
    using BoundType = OpenColorIO::FileTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::FileTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* src);

    const char* getCCCId() const;

    void setCCCId(const char* id);

    OpenColorIO::CDLStyle getCDLStyle() const;

    void setCDLStyle(OpenColorIO::CDLStyle);

    OpenColorIO::Interpolation getInterpolation() const;

    void setInterpolation(OpenColorIO::Interpolation interp);

    static int GetNumFormats();

    static const char* GetFormatNameByIndex(int index);

    static const char* GetFormatExtensionByIndex(int index);

    OpenColorIO::FileTransform& operator=(const OpenColorIO::FileTransform&) = delete;

    ~FileTransform();

} CPPMM_OPAQUEBYTES; // struct FileTransform

struct FixedFunctionTransform {
    using BoundType = OpenColorIO::FixedFunctionTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::FixedFunctionTransform>
    Create(OpenColorIO::FixedFunctionStyle style);

    static std::shared_ptr<OpenColorIO::FixedFunctionTransform>
    Create(OpenColorIO::FixedFunctionStyle style, const double* params,
           size_t num);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::FixedFunctionTransform& other) const;

    OpenColorIO::FixedFunctionStyle getStyle() const;

    void setStyle(OpenColorIO::FixedFunctionStyle style);

    size_t getNumParams() const;

    void getParams(double* params) const;

    void setParams(const double* params, size_t num);

    FixedFunctionTransform(const OpenColorIO::FixedFunctionTransform&) = delete;

    OpenColorIO::FixedFunctionTransform&
    operator=(const OpenColorIO::FixedFunctionTransform&) = delete;

    ~FixedFunctionTransform();

} CPPMM_OPAQUEPTR; // struct FixedFunctionTransform

struct GradingPrimaryTransform {
    using BoundType = OpenColorIO::GradingPrimaryTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::GradingPrimaryTransform>
    Create(OpenColorIO::GradingStyle style);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::GradingPrimaryTransform& other) const;

    OpenColorIO::GradingStyle getStyle() const;

    void setStyle(OpenColorIO::GradingStyle style);

    const OpenColorIO::GradingPrimary& getValue() const;

    void setValue(const OpenColorIO::GradingPrimary& values);

    bool isDynamic() const;

    void makeDynamic();

    void makeNonDynamic();

    GradingPrimaryTransform(const OpenColorIO::GradingPrimaryTransform&) = delete;

    OpenColorIO::GradingPrimaryTransform&
    operator=(const OpenColorIO::GradingPrimaryTransform&) = delete;

    ~GradingPrimaryTransform();

} CPPMM_OPAQUEPTR; // struct GradingPrimaryTransform

struct GradingRGBCurveTransform {
    using BoundType = OpenColorIO::GradingRGBCurveTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::GradingRGBCurveTransform>
    Create(OpenColorIO::GradingStyle style);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::GradingRGBCurveTransform& other) const;

    OpenColorIO::GradingStyle getStyle() const;

    void setStyle(OpenColorIO::GradingStyle style);

    const std::shared_ptr<const OpenColorIO::GradingRGBCurve> getValue() const;

    void
    setValue(const std::shared_ptr<const OpenColorIO::GradingRGBCurve>& values);

    float getSlope(OpenColorIO::RGBCurveType c, size_t index) const;

    void setSlope(OpenColorIO::RGBCurveType c, size_t index,
                  float slope);

    bool slopesAreDefault(OpenColorIO::RGBCurveType c) const;

    bool getBypassLinToLog() const;

    void setBypassLinToLog(bool bypass);

    bool isDynamic() const;

    void makeDynamic();

    void makeNonDynamic();

    GradingRGBCurveTransform(const OpenColorIO::GradingRGBCurveTransform&) = delete;

    OpenColorIO::GradingRGBCurveTransform&
    operator=(const OpenColorIO::GradingRGBCurveTransform&) = delete;

    ~GradingRGBCurveTransform();

} CPPMM_OPAQUEPTR; // struct GradingRGBCurveTransform

struct GradingToneTransform {
    using BoundType = OpenColorIO::GradingToneTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::GradingToneTransform>
    Create(OpenColorIO::GradingStyle style);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::GradingToneTransform& other) const;

    OpenColorIO::GradingStyle getStyle() const;

    void setStyle(OpenColorIO::GradingStyle style);

    const OpenColorIO::GradingTone& getValue() const;

    void setValue(const OpenColorIO::GradingTone& values);

    bool isDynamic() const;

    void makeDynamic();

    void makeNonDynamic();

    GradingToneTransform(const OpenColorIO::GradingToneTransform&) = delete;

    OpenColorIO::GradingToneTransform&
    operator=(const OpenColorIO::GradingToneTransform&) = delete;

    ~GradingToneTransform();

} CPPMM_OPAQUEPTR; // struct GradingToneTransform

struct GroupTransform {
    using BoundType = OpenColorIO::GroupTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::GroupTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    std::shared_ptr<const OpenColorIO::Transform> getTransform(int index) const;

    std::shared_ptr<OpenColorIO::Transform>& getTransform(int index);

    int getNumTransforms() const;

    void appendTransform(std::shared_ptr<OpenColorIO::Transform> transform);

    void prependTransform(std::shared_ptr<OpenColorIO::Transform> transform);

    void write(const std::shared_ptr<const OpenColorIO::Config>& config,
               const char* formatName,
               std::basic_ostream<char, std::char_traits<char>>& os) const;

    static int GetNumWriteFormats();

    static const char* GetFormatNameByIndex(int index);

    static const char* GetFormatExtensionByIndex(int index);

    GroupTransform(const OpenColorIO::GroupTransform&) = delete;

    OpenColorIO::GroupTransform& operator=(const OpenColorIO::GroupTransform&) = delete;

    ~GroupTransform();

} CPPMM_OPAQUEPTR; // struct GroupTransform

struct LogAffineTransform {
    using BoundType = OpenColorIO::LogAffineTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::LogAffineTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::LogAffineTransform& other) const;

    double getBase() const;

    void setBase(double base);

    void getLogSideSlopeValue(double (&values)[3]) const;

    void setLogSideSlopeValue(const double (&values)[3]);

    void getLogSideOffsetValue(double (&values)[3]) const;

    void setLogSideOffsetValue(const double (&values)[3]);

    void getLinSideSlopeValue(double (&values)[3]) const;

    void setLinSideSlopeValue(const double (&values)[3]);

    void getLinSideOffsetValue(double (&values)[3]) const;

    void setLinSideOffsetValue(const double (&values)[3]);

    LogAffineTransform(const OpenColorIO::LogAffineTransform&) = delete;

    OpenColorIO::LogAffineTransform&
    operator=(const OpenColorIO::LogAffineTransform&) = delete;

    ~LogAffineTransform();

} CPPMM_OPAQUEPTR; // struct LogAffineTransform

struct LogCameraTransform {
    using BoundType = OpenColorIO::LogCameraTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::LogCameraTransform>
    Create(const double (&linSideBreakValues)[3]);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::LogCameraTransform& other) const;

    double getBase() const;

    void setBase(double base);

    void getLogSideSlopeValue(double (&values)[3]) const;

    void setLogSideSlopeValue(const double (&values)[3]);

    void getLogSideOffsetValue(double (&values)[3]) const;

    void setLogSideOffsetValue(const double (&values)[3]);

    void getLinSideSlopeValue(double (&values)[3]) const;

    void setLinSideSlopeValue(const double (&values)[3]);

    void getLinSideOffsetValue(double (&values)[3]) const;

    void setLinSideOffsetValue(const double (&values)[3]);

    void getLinSideBreakValue(double (&values)[3]) const;

    void setLinSideBreakValue(const double (&values)[3]);

    bool getLinearSlopeValue(double (&values)[3]) const;

    void setLinearSlopeValue(const double (&values)[3]);

    void unsetLinearSlopeValue();

    LogCameraTransform(const OpenColorIO::LogCameraTransform&) = delete;

    OpenColorIO::LogCameraTransform&
    operator=(const OpenColorIO::LogCameraTransform&) = delete;

    ~LogCameraTransform();

} CPPMM_OPAQUEPTR; // struct LogCameraTransform

struct LookTransform {
    using BoundType = OpenColorIO::LookTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::LookTransform> Create();

    const char* getSrc() const;

    void setSrc(const char* src);

    const char* getDst() const;

    void setDst(const char* dst);

    const char* getLooks() const;

    void setLooks(const char* looks);

    bool getSkipColorSpaceConversion() const;

    void setSkipColorSpaceConversion(bool skip);

    static const char* GetLooksResultColorSpace(
        const std::shared_ptr<const OpenColorIO::Config>& config,
        const std::shared_ptr<const OpenColorIO::Context>& context,
        const char* looks);

    OpenColorIO::LookTransform& operator=(const OpenColorIO::LookTransform&) = delete;

    ~LookTransform();

} CPPMM_OPAQUEBYTES; // struct LookTransform

struct LogTransform {
    using BoundType = OpenColorIO::LogTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::LogTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::LogTransform& other) const;

    double getBase() const;

    void setBase(double val);

    LogTransform(const OpenColorIO::LogTransform&) = delete;

    OpenColorIO::LogTransform& operator=(const OpenColorIO::LogTransform&) = delete;

    ~LogTransform();

} CPPMM_OPAQUEPTR; // struct LogTransform

struct Lut1DTransform {
    using BoundType = OpenColorIO::Lut1DTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::Lut1DTransform> Create();

    static std::shared_ptr<OpenColorIO::Lut1DTransform>
    Create(unsigned long length, bool isHalfDomain);

    OpenColorIO::BitDepth getFileOutputBitDepth() const;

    void setFileOutputBitDepth(OpenColorIO::BitDepth bitDepth);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::Lut1DTransform& other) const;

    unsigned long getLength() const;

    void setLength(unsigned long length);

    void getValue(unsigned long index, float& r, float& g, float& b) const;

    void setValue(unsigned long index, float r, float g, float b);

    bool getInputHalfDomain() const;

    void setInputHalfDomain(bool isHalfDomain);

    bool getOutputRawHalfs() const;

    void setOutputRawHalfs(bool isRawHalfs);

    OpenColorIO::Lut1DHueAdjust getHueAdjust() const;

    void setHueAdjust(OpenColorIO::Lut1DHueAdjust algo);

    OpenColorIO::Interpolation getInterpolation() const;

    void setInterpolation(OpenColorIO::Interpolation algo);

    Lut1DTransform(const OpenColorIO::Lut1DTransform&) = delete;

    OpenColorIO::Lut1DTransform& operator=(const OpenColorIO::Lut1DTransform&) = delete;

    ~Lut1DTransform();

} CPPMM_OPAQUEPTR; // struct Lut1DTransform

struct Lut3DTransform {
    using BoundType = OpenColorIO::Lut3DTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::Lut3DTransform> Create();

    static std::shared_ptr<OpenColorIO::Lut3DTransform>
    Create(unsigned long gridSize);

    OpenColorIO::BitDepth getFileOutputBitDepth() const;

    void setFileOutputBitDepth(OpenColorIO::BitDepth bitDepth);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::Lut3DTransform& other) const;

    unsigned long getGridSize() const;

    void setGridSize(unsigned long gridSize);

    void getValue(unsigned long indexR, unsigned long indexG,
                  unsigned long indexB, float& r, float& g, float& b) const;

    void setValue(unsigned long indexR, unsigned long indexG,
                  unsigned long indexB, float r, float g, float b);

    OpenColorIO::Interpolation getInterpolation() const;

    void setInterpolation(OpenColorIO::Interpolation algo);

    Lut3DTransform(const OpenColorIO::Lut3DTransform&) = delete;

    OpenColorIO::Lut3DTransform& operator=(const OpenColorIO::Lut3DTransform&) = delete;

    ~Lut3DTransform();

} CPPMM_OPAQUEPTR; // struct Lut3DTransform

struct MatrixTransform {
    using BoundType = OpenColorIO::MatrixTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::MatrixTransform> Create();

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::MatrixTransform& other) const;

    void getMatrix(double* m44) const;

    void setMatrix(const double* m44);

    void getOffset(double* offset4) const;

    void setOffset(const double* offset4);

    OpenColorIO::BitDepth getFileInputBitDepth() const;

    void setFileInputBitDepth(OpenColorIO::BitDepth bitDepth);

    OpenColorIO::BitDepth getFileOutputBitDepth() const;

    void setFileOutputBitDepth(OpenColorIO::BitDepth bitDepth);

    static void Fit(double* m44, double* offset4, const double* oldmin4,
                    const double* oldmax4, const double* newmin4,
                    const double* newmax4);

    static void Identity(double* m44, double* offset4);

    static void Sat(double* m44, double* offset4, double sat,
                    const double* lumaCoef3);

    static void Scale(double* m44, double* offset4, const double* scale4);

    static void View(double* m44, double* offset4, int* channelHot4,
                     const double* lumaCoef3);

    MatrixTransform(const OpenColorIO::MatrixTransform&) = delete;

    OpenColorIO::MatrixTransform&
    operator=(const OpenColorIO::MatrixTransform&) = delete;

    ~MatrixTransform();

} CPPMM_OPAQUEPTR; // struct MatrixTransform

struct RangeTransform {
    using BoundType = OpenColorIO::RangeTransform;

    std::shared_ptr<OpenColorIO::Transform> createEditableCopy() const;

    OpenColorIO::TransformDirection getDirection() const;

    void setDirection(OpenColorIO::TransformDirection dir);

    OpenColorIO::TransformType getTransformType() const;

    void validate() const;

    static std::shared_ptr<OpenColorIO::RangeTransform> Create();

    OpenColorIO::RangeStyle getStyle() const;

    void setStyle(OpenColorIO::RangeStyle style);

    const OpenColorIO::FormatMetadata& getFormatMetadata() const;

    OpenColorIO::FormatMetadata& getFormatMetadata();

    bool equals(const OpenColorIO::RangeTransform& other) const;

    OpenColorIO::BitDepth getFileInputBitDepth() const;

    void setFileInputBitDepth(OpenColorIO::BitDepth bitDepth);

    OpenColorIO::BitDepth getFileOutputBitDepth() const;

    void setFileOutputBitDepth(OpenColorIO::BitDepth bitDepth);

    double getMinInValue() const;

    void setMinInValue(double val);

    bool hasMinInValue() const;

    void unsetMinInValue();

    void setMaxInValue(double val);

    double getMaxInValue() const;

    bool hasMaxInValue() const;

    void unsetMaxInValue();

    void setMinOutValue(double val);

    double getMinOutValue() const;

    bool hasMinOutValue() const;

    void unsetMinOutValue();

    void setMaxOutValue(double val);

    double getMaxOutValue() const;

    bool hasMaxOutValue() const;

    void unsetMaxOutValue();

    RangeTransform(const OpenColorIO::RangeTransform&) = delete;

    OpenColorIO::RangeTransform& operator=(const OpenColorIO::RangeTransform&) = delete;

    ~RangeTransform();

} CPPMM_OPAQUEPTR; // struct RangeTransform

struct FormatMetadata {
    using BoundType = OpenColorIO::FormatMetadata;

    const char* getElementName() const;

    void setElementName(const char*);

    const char* getElementValue() const;

    void setElementValue(const char*);

    int getNumAttributes() const;

    const char* getAttributeName(int i) const;

    const char* getAttributeValue(int i) const;

    const char* getAttributeValue(const char* name) const;

    void addAttribute(const char* name, const char* value);

    int getNumChildrenElements() const;

    const OpenColorIO::FormatMetadata& getChildElement(int i) const;

    OpenColorIO::FormatMetadata& getChildElement(int i);

    void addChildElement(const char* name, const char* value);

    void clear();

    OpenColorIO::FormatMetadata&
    operator=(const OpenColorIO::FormatMetadata& rhs) = delete;

    const char* getName() const;

    void setName(const char* name);

    const char* getID() const;

    void setID(const char* id);

    FormatMetadata(const OpenColorIO::FormatMetadata& rhs) = delete;

    ~FormatMetadata();

} CPPMM_OPAQUEPTR; // struct FormatMetadata

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::FormatMetadata&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Transform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::AllocationTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::BuiltinTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::CDLTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ColorSpaceTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::DisplayViewTransform&) CPPMM_IGNORE;

struct GradingRGBM {
    using BoundType = OpenColorIO::GradingRGBM;

    GradingRGBM();

    GradingRGBM(const OpenColorIO::GradingRGBM&);

    GradingRGBM(double red, double green, double blue, double master);

    GradingRGBM(const double (&rgbm)[4]);

    ~GradingRGBM();

} CPPMM_OPAQUEBYTES; // struct GradingRGBM

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingRGBM&) CPPMM_IGNORE;

struct GradingPrimary {
    using BoundType = OpenColorIO::GradingPrimary;

    GradingPrimary(const OpenColorIO::GradingPrimary&) = delete;

    GradingPrimary(OpenColorIO::GradingStyle style);

    void validate(OpenColorIO::GradingStyle style) const;

    static double NoClampBlack();

    static double NoClampWhite();

} CPPMM_OPAQUEBYTES; // struct GradingPrimary

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingPrimary&) CPPMM_IGNORE;

struct GradingControlPoint {
    using BoundType = OpenColorIO::GradingControlPoint;

    GradingControlPoint();

    GradingControlPoint(const OpenColorIO::GradingControlPoint&);

    GradingControlPoint(float x, float y);

} CPPMM_OPAQUEBYTES; // struct GradingControlPoint

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingControlPoint&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingBSplineCurve&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingRGBCurve&) CPPMM_IGNORE;

struct GradingRGBMSW {
    using BoundType = OpenColorIO::GradingRGBMSW;

    GradingRGBMSW();

    GradingRGBMSW(const OpenColorIO::GradingRGBMSW&);

    GradingRGBMSW(double red, double green, double blue, double master,
                  double start, double width);

    GradingRGBMSW(const double (&rgbmsw)[6]);

    GradingRGBMSW(double start, double width);

    ~GradingRGBMSW();

} CPPMM_OPAQUEBYTES; // struct GradingRGBMSW

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingRGBMSW&) CPPMM_IGNORE;

struct GradingTone {
    using BoundType = OpenColorIO::GradingTone;

    GradingTone(const OpenColorIO::GradingTone&) = delete;

    GradingTone(OpenColorIO::GradingStyle style);

    void validate() const;

} CPPMM_OPAQUEBYTES; // struct GradingTone

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingTone&) CPPMM_IGNORE;

namespace DynamicPropertyValue {

std::shared_ptr<OpenColorIO::DynamicPropertyDouble>
AsDouble(std::shared_ptr<OpenColorIO::DynamicProperty>& prop);

std::shared_ptr<OpenColorIO::DynamicPropertyGradingPrimary>
AsGradingPrimary(std::shared_ptr<OpenColorIO::DynamicProperty>& prop);

std::shared_ptr<OpenColorIO::DynamicPropertyGradingRGBCurve>
AsGradingRGBCurve(std::shared_ptr<OpenColorIO::DynamicProperty>& prop);

std::shared_ptr<OpenColorIO::DynamicPropertyGradingTone>
AsGradingTone(std::shared_ptr<OpenColorIO::DynamicProperty>& prop);

} // namespace DynamicPropertyValue

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ExponentTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ExponentWithLinearTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ExposureContrastTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::FileTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::FixedFunctionTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingPrimaryTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingRGBCurveTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GradingToneTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::GroupTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LogAffineTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LogCameraTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LogTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LookTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Lut1DTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::Lut3DTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::MatrixTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::RangeTransform&) CPPMM_IGNORE;

} // namespace OCIO_NAMESPACE

} // namespace cppmm_bind
