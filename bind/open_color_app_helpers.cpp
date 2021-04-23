#include <OpenColorIO/OpenColorAppHelpers.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OCIO_NAMESPACE {

namespace OpenColorIO = ::OCIO_NAMESPACE;

struct ColorSpaceMenuHelper {
    using BoundType = OpenColorIO::ColorSpaceMenuHelper;

    static std::shared_ptr<OpenColorIO::ColorSpaceMenuHelper>
    Create(std::shared_ptr<const OpenColorIO::ColorSpaceMenuParameters>
               parameters);

    unsigned long getNumColorSpaces() const;

    const char* getName(unsigned long idx) const;

    const char* getUIName(unsigned long idx) const;

    unsigned long getIndexFromName(const char* name) const;

    unsigned long getIndexFromUIName(const char* name) const;

    const char* getDescription(unsigned long idx) const;

    const char* getFamily(unsigned long idx) const;

    unsigned long getNumHierarchyLevels(unsigned long idx) const;

    const char* getHierarchyLevel(unsigned long idx, unsigned long i) const;

    const char* getNameFromUIName(const char* uiName) const;

    const char* getUINameFromName(const char* name) const;

    ColorSpaceMenuHelper(const OpenColorIO::ColorSpaceMenuHelper&);

    OpenColorIO::ColorSpaceMenuHelper&
    operator=(const OpenColorIO::ColorSpaceMenuHelper&);

    ~ColorSpaceMenuHelper();

} CPPMM_OPAQUEPTR; // struct ColorSpaceMenuHelper

struct ColorSpaceMenuParameters {
    using BoundType = OpenColorIO::ColorSpaceMenuParameters;

    static std::shared_ptr<OpenColorIO::ColorSpaceMenuParameters>
    Create(std::shared_ptr<const OpenColorIO::Config> config);

    void setConfig(std::shared_ptr<const OpenColorIO::Config> config);

    std::shared_ptr<const OpenColorIO::Config> getConfig() const;

    void setRole(const char* role);

    const char* getRole() const;

    void setIncludeColorSpaces(bool include);

    bool getIncludeColorSpaces() const;

    OpenColorIO::SearchReferenceSpaceType getSearchReferenceSpaceType() const;

    void setSearchReferenceSpaceType(
        OpenColorIO::SearchReferenceSpaceType colorSpaceType);

    void setIncludeNamedTransforms(bool include);

    bool getIncludeNamedTransforms() const;

    void setAppCategories(const char* appCategories);

    const char* getAppCategories() const;

    void setEncodings(const char* encodings);

    const char* getEncodings() const;

    void setUserCategories(const char* userCategories);

    const char* getUserCategories() const;

    void setIncludeRoles(bool include);

    bool getIncludeRoles() const;

    void addColorSpace(const char* name);

    unsigned long getNumAddedColorSpaces() const;

    const char* getAddedColorSpace(unsigned long index) const;

    void clearAddedColorSpaces();

    ~ColorSpaceMenuParameters();

    OpenColorIO::ColorSpaceMenuParameters&
    operator=(const OpenColorIO::ColorSpaceMenuParameters&);

} CPPMM_OPAQUEPTR; // struct ColorSpaceMenuParameters

struct MixingColorSpaceManager {
    using BoundType = OpenColorIO::MixingColorSpaceManager;

    static std::shared_ptr<OpenColorIO::MixingColorSpaceManager>
    Create(std::shared_ptr<const OpenColorIO::Config>& config);

    unsigned long getNumMixingSpaces() const;

    const char* getMixingSpaceUIName(unsigned long idx) const;

    unsigned long getSelectedMixingSpaceIdx() const;

    void setSelectedMixingSpaceIdx(unsigned long idx);

    void setSelectedMixingSpace(const char* mixingSpace);

    bool isPerceptuallyUniform() const;

    unsigned long getNumMixingEncodings() const;

    const char* getMixingEncodingName(unsigned long idx) const;

    unsigned long getSelectedMixingEncodingIdx() const;

    void setSelectedMixingEncodingIdx(unsigned long idx);

    void setSelectedMixingEncoding(const char* mixingEncoding);

    void refresh(std::shared_ptr<const OpenColorIO::Config> config);

    std::shared_ptr<const OpenColorIO::Processor>
    getProcessor(const char* workingName, const char* displayName,
                 const char* viewName,
                 OpenColorIO::TransformDirection direction) const;

    OpenColorIO::MixingSlider& getSlider();

    OpenColorIO::MixingSlider& getSlider(float sliderMixingMinEdge,
                                         float sliderMixingMaxEdge);

    MixingColorSpaceManager(const OpenColorIO::MixingColorSpaceManager&);

    OpenColorIO::MixingColorSpaceManager&
    operator=(const OpenColorIO::MixingColorSpaceManager&);

    ~MixingColorSpaceManager();

} CPPMM_OPAQUEPTR; // struct MixingColorSpaceManager

struct LegacyViewingPipeline {
    using BoundType = OpenColorIO::LegacyViewingPipeline;

    static std::shared_ptr<OpenColorIO::LegacyViewingPipeline> Create();

    std::shared_ptr<const OpenColorIO::DisplayViewTransform>
    getDisplayViewTransform() const;

    void setDisplayViewTransform(
        const std::shared_ptr<const OpenColorIO::DisplayViewTransform>& dt);

    std::shared_ptr<const OpenColorIO::Transform> getLinearCC() const;

    void setLinearCC(const std::shared_ptr<const OpenColorIO::Transform>& cc);

    std::shared_ptr<const OpenColorIO::Transform> getColorTimingCC() const;

    void
    setColorTimingCC(const std::shared_ptr<const OpenColorIO::Transform>& cc);

    std::shared_ptr<const OpenColorIO::Transform> getChannelView() const;

    void setChannelView(
        const std::shared_ptr<const OpenColorIO::Transform>& transform);

    std::shared_ptr<const OpenColorIO::Transform> getDisplayCC() const;

    void setDisplayCC(const std::shared_ptr<const OpenColorIO::Transform>& cc);

    void setLooksOverrideEnabled(bool enable);

    bool getLooksOverrideEnabled() const;

    void setLooksOverride(const char* looks);

    const char* getLooksOverride() const;

    std::shared_ptr<const OpenColorIO::Processor> getProcessor(
        const std::shared_ptr<const OpenColorIO::Config>& config,
        const std::shared_ptr<const OpenColorIO::Context>& context) const;

    std::shared_ptr<const OpenColorIO::Processor> getProcessor(
        const std::shared_ptr<const OpenColorIO::Config>& config) const;

    LegacyViewingPipeline(const OpenColorIO::LegacyViewingPipeline&);

    OpenColorIO::LegacyViewingPipeline&
    operator=(const OpenColorIO::LegacyViewingPipeline&);

    ~LegacyViewingPipeline();

} CPPMM_OPAQUEPTR; // struct LegacyViewingPipeline

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ColorSpaceMenuParameters&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::ColorSpaceMenuHelper&) CPPMM_IGNORE;

namespace ColorSpaceHelpers {

void AddColorSpace(std::shared_ptr<OpenColorIO::Config>& config,
                   const char* name, const char* transformFilePath,
                   const char* categories,
                   const char* connectionColorSpaceName);

} // namespace ColorSpaceHelpers

namespace DisplayViewHelpers {

std::shared_ptr<const OpenColorIO::Processor> GetProcessor(
    const std::shared_ptr<const OpenColorIO::Config>& config,
    const std::shared_ptr<const OpenColorIO::Context>& context,
    const char* workingName, const char* displayName, const char* viewName,
    const std::shared_ptr<const OpenColorIO::MatrixTransform>& channelView,
    OpenColorIO::TransformDirection direction);

std::shared_ptr<const OpenColorIO::Processor> GetProcessor(
    const std::shared_ptr<const OpenColorIO::Config>& config,
    const char* workingName, const char* displayName, const char* viewName,
    const std::shared_ptr<const OpenColorIO::MatrixTransform>& channelView,
    OpenColorIO::TransformDirection direction);

std::shared_ptr<const OpenColorIO::Processor>
GetIdentityProcessor(const std::shared_ptr<const OpenColorIO::Config>& config);

void AddDisplayView(std::shared_ptr<OpenColorIO::Config>& config,
                    const char* displayName, const char* viewName,
                    const char* lookDefinition, const char* colorSpaceName,
                    const char* colorSpaceFamily,
                    const char* colorSpaceDescription, const char* categories,
                    const char* transformFilePath,
                    const char* connectionColorSpaceName);

void RemoveDisplayView(std::shared_ptr<OpenColorIO::Config>& config,
                       const char* displayName, const char* viewName);

} // namespace DisplayViewHelpers

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::LegacyViewingPipeline&) CPPMM_IGNORE;

struct MixingSlider {
    using BoundType = OpenColorIO::MixingSlider;

    void setSliderMinEdge(float sliderMixingMinEdge);

    float getSliderMinEdge() const;

    void setSliderMaxEdge(float sliderMixingMaxEdge);

    float getSliderMaxEdge() const;

    float sliderToMixing(float sliderUnits) const;

    float mixingToSlider(float mixingUnits) const;

    MixingSlider(const OpenColorIO::MixingSlider&);

    OpenColorIO::MixingSlider& operator=(const OpenColorIO::MixingSlider&);

    ~MixingSlider();

} CPPMM_OPAQUEPTR; // struct MixingSlider

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::MixingSlider&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OpenColorIO::MixingColorSpaceManager&) CPPMM_IGNORE;

} // namespace OCIO_NAMESPACE

} // namespace cppmm_bind
