#include <OpenColorIO/OpenColorIO.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OCIO_NAMESPACE {

namespace OCIO = ::OCIO_NAMESPACE;

struct Config {
    using BoundType = OCIO::Config;

    static std::shared_ptr<OCIO::Config> Create();

    static std::shared_ptr<const OCIO::Config> CreateRaw();

    static std::shared_ptr<const OCIO::Config> CreateFromEnv();

    static std::shared_ptr<const OCIO::Config>
    CreateFromFile(const char* filename);

    static std::shared_ptr<const OCIO::Config>
    CreateFromStream(std::basic_istream<char, std::char_traits<char>>& istream);

    std::shared_ptr<OCIO::Config> createEditableCopy() const;

    unsigned int getMajorVersion() const;

    void setMajorVersion(unsigned int major);

    unsigned int getMinorVersion() const;

    void setMinorVersion(unsigned int minor);

    void setVersion(unsigned int major, unsigned int minor);

    void upgradeToLatestVersion();

    void validate() const;

    const char* getName() const;

    void setName(const char* name);

    char getFamilySeparator() const;

    static char GetDefaultFamilySeparator();

    void setFamilySeparator(char separator);

    const char* getDescription() const;

    void setDescription(const char* description);

    void serialize(std::basic_ostream<char, std::char_traits<char>>& os) const;

    const char* getCacheID() const;

    const char*
    getCacheID(const std::shared_ptr<const OCIO::Context>& context) const;

    std::shared_ptr<const OCIO::Context> getCurrentContext() const;

    void addEnvironmentVar(const char* name, const char* defaultValue);

    int getNumEnvironmentVars() const;

    const char* getEnvironmentVarNameByIndex(int index) const;

    const char* getEnvironmentVarDefault(const char* name) const;

    void clearEnvironmentVars();

    void setEnvironmentMode(OCIO::EnvironmentMode mode);

    OCIO::EnvironmentMode getEnvironmentMode() const;

    void loadEnvironment();

    const char* getSearchPath() const;

    void setSearchPath(const char* path);

    int getNumSearchPaths() const;

    const char* getSearchPath(int index) const;

    void clearSearchPaths();

    void addSearchPath(const char* path);

    const char* getWorkingDir() const;

    void setWorkingDir(const char* dirname);

    std::shared_ptr<OCIO::ColorSpaceSet>
    getColorSpaces(const char* category) const;

    int getNumColorSpaces(OCIO::SearchReferenceSpaceType searchReferenceType,
                          OCIO::ColorSpaceVisibility visibility) const;

    const char*
    getColorSpaceNameByIndex(OCIO::SearchReferenceSpaceType searchReferenceType,
                             OCIO::ColorSpaceVisibility visibility,
                             int index) const;

    int getNumColorSpaces() const;

    const char* getColorSpaceNameByIndex(int index) const;

    int getIndexForColorSpace(const char* name) const;

    std::shared_ptr<const OCIO::ColorSpace>
    getColorSpace(const char* name) const;

    const char* getCanonicalName(const char* name) const;

    void addColorSpace(const std::shared_ptr<const OCIO::ColorSpace>& cs);

    void removeColorSpace(const char* name);

    bool isColorSpaceUsed(const char* name) const;

    void clearColorSpaces();

    void setInactiveColorSpaces(const char* inactiveColorSpaces);

    const char* getInactiveColorSpaces() const;

    void setRole(const char* role, const char* colorSpaceName);

    int getNumRoles() const;

    bool hasRole(const char* role) const;

    const char* getRoleName(int index) const;

    const char* getRoleColorSpace(int index) const;

    void addSharedView(const char* view, const char* viewTransformName,
                       const char* colorSpaceName, const char* looks,
                       const char* ruleName, const char* description);

    void removeSharedView(const char* view);

    const char* getDefaultDisplay() const;

    int getNumDisplays() const;

    const char* getDisplay(int index) const;

    const char* getDefaultView(const char* display) const;

    int getNumViews(const char* display) const;

    const char* getView(const char* display, int index) const;

    int getNumViews(const char* display, const char* colorspaceName) const;

    const char* getView(const char* display, const char* colorspaceName,
                        int index) const;

    const char* getDisplayViewTransformName(const char* display,
                                            const char* view) const;

    const char* getDisplayViewColorSpaceName(const char* display,
                                             const char* view) const;

    const char* getDisplayViewLooks(const char* display,
                                    const char* view) const;

    const char* getDisplayViewRule(const char* display, const char* view) const;

    const char* getDisplayViewDescription(const char* display,
                                          const char* view) const;

    void addDisplayView(const char* display, const char* view,
                        const char* colorSpaceName, const char* looks);

    void addDisplayView(const char* display, const char* view,
                        const char* viewTransformName,
                        const char* colorSpaceName, const char* looks,
                        const char* ruleName, const char* description);

    void addDisplaySharedView(const char* display, const char* sharedView);

    void removeDisplayView(const char* display, const char* view);

    void clearDisplays();

    void addVirtualDisplayView(const char* view, const char* viewTransformName,
                               const char* colorSpaceName, const char* looks,
                               const char* ruleName, const char* description);

    void addVirtualDisplaySharedView(const char* sharedView);

    int getVirtualDisplayNumViews(OCIO::ViewType type) const;

    const char* getVirtualDisplayView(OCIO::ViewType type, int index) const;

    const char* getVirtualDisplayViewTransformName(const char* view) const;

    const char* getVirtualDisplayViewColorSpaceName(const char* view) const;

    const char* getVirtualDisplayViewLooks(const char* view) const;

    const char* getVirtualDisplayViewRule(const char* view) const;

    const char* getVirtualDisplayViewDescription(const char* view) const;

    void removeVirtualDisplayView(const char* view);

    void clearVirtualDisplay();

    int instantiateDisplayFromMonitorName(const char* monitorName);

    int instantiateDisplayFromICCProfile(const char* ICCProfileFilepath);

    void setActiveDisplays(const char* displays);

    const char* getActiveDisplays() const;

    void setActiveViews(const char* views);

    const char* getActiveViews() const;

    int getNumDisplaysAll() const;

    const char* getDisplayAll(int index) const;

    int getDisplayAllByName(const char*) const;

    bool isDisplayTemporary(int index) const;

    int getNumViews(OCIO::ViewType type, const char* display) const;

    const char* getView(OCIO::ViewType type, const char* display,
                        int index) const;

    std::shared_ptr<const OCIO::ViewingRules> getViewingRules() const;

    void
    setViewingRules(std::shared_ptr<const OCIO::ViewingRules> viewingRules);

    void getDefaultLumaCoefs(double* rgb) const;

    void setDefaultLumaCoefs(const double* rgb);

    std::shared_ptr<const OCIO::Look> getLook(const char* name) const;

    int getNumLooks() const;

    const char* getLookNameByIndex(int index) const;

    void addLook(const std::shared_ptr<const OCIO::Look>& look);

    void clearLooks();

    int getNumViewTransforms() const;

    std::shared_ptr<const OCIO::ViewTransform>
    getViewTransform(const char* name) const;

    const char* getViewTransformNameByIndex(int i) const;

    void addViewTransform(
        const std::shared_ptr<const OCIO::ViewTransform>& viewTransform);

    std::shared_ptr<const OCIO::ViewTransform>
    getDefaultSceneToDisplayViewTransform() const;

    const char* getDefaultViewTransformName() const;

    void setDefaultViewTransformName(const char* defaultName);

    void clearViewTransforms();

    int getNumNamedTransforms(OCIO::NamedTransformVisibility visibility) const;

    const char*
    getNamedTransformNameByIndex(OCIO::NamedTransformVisibility visibility,
                                 int index) const;

    int getNumNamedTransforms() const;

    const char* getNamedTransformNameByIndex(int index) const;

    int getIndexForNamedTransform(const char* name) const;

    std::shared_ptr<const OCIO::NamedTransform>
    getNamedTransform(const char* name) const;

    void addNamedTransform(
        const std::shared_ptr<const OCIO::NamedTransform>& namedTransform);

    void clearNamedTransforms();

    std::shared_ptr<const OCIO::FileRules> getFileRules() const;

    void setFileRules(std::shared_ptr<const OCIO::FileRules> fileRules);

    const char* getColorSpaceFromFilepath(const char* filePath) const;

    const char* getColorSpaceFromFilepath(const char* filePath,
                                          unsigned long& ruleIndex) const;

    bool filepathOnlyMatchesDefaultRule(const char* filePath) const;

    const char* parseColorSpaceFromString(const char* str) const;

    bool isStrictParsingEnabled() const;

    void setStrictParsingEnabled(bool enabled);

    std::shared_ptr<const OCIO::Processor> getProcessor(
        const std::shared_ptr<const OCIO::Context>& context,
        const std::shared_ptr<const OCIO::ColorSpace>& srcColorSpace,
        const std::shared_ptr<const OCIO::ColorSpace>& dstColorSpace) const;

    std::shared_ptr<const OCIO::Processor> getProcessor(
        const std::shared_ptr<const OCIO::ColorSpace>& srcColorSpace,
        const std::shared_ptr<const OCIO::ColorSpace>& dstColorSpace) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const char* srcColorSpaceName,
                 const char* dstColorSpaceName) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const std::shared_ptr<const OCIO::Context>& context,
                 const char* srcColorSpaceName,
                 const char* dstColorSpaceName) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const char* srcColorSpaceName, const char* display,
                 const char* view, OCIO::TransformDirection direction) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const std::shared_ptr<const OCIO::Context>& context,
                 const char* srcColorSpaceName, const char* display,
                 const char* view, OCIO::TransformDirection direction) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const std::shared_ptr<const OCIO::Transform>& transform) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const std::shared_ptr<const OCIO::Transform>& transform,
                 OCIO::TransformDirection direction) const;

    std::shared_ptr<const OCIO::Processor>
    getProcessor(const std::shared_ptr<const OCIO::Context>& context,
                 const std::shared_ptr<const OCIO::Transform>& transform,
                 OCIO::TransformDirection direction) const;

    static std::shared_ptr<const OCIO::Processor> GetProcessorFromConfigs(
        const std::shared_ptr<const OCIO::Config>& srcConfig,
        const char* srcColorSpaceName,
        const std::shared_ptr<const OCIO::Config>& dstConfig,
        const char* dstColorSpaceName);

    static std::shared_ptr<const OCIO::Processor> GetProcessorFromConfigs(
        const std::shared_ptr<const OCIO::Context>& srcContext,
        const std::shared_ptr<const OCIO::Config>& srcConfig,
        const char* srcColorSpaceName,
        const std::shared_ptr<const OCIO::Context>& dstContext,
        const std::shared_ptr<const OCIO::Config>& dstConfig,
        const char* dstColorSpaceName);

    static std::shared_ptr<const OCIO::Processor> GetProcessorFromConfigs(
        const std::shared_ptr<const OCIO::Config>& srcConfig,
        const char* srcColorSpaceName, const char* srcInterchangeName,
        const std::shared_ptr<const OCIO::Config>& dstConfig,
        const char* dstColorSpaceName, const char* dstInterchangeName);

    static std::shared_ptr<const OCIO::Processor> GetProcessorFromConfigs(
        const std::shared_ptr<const OCIO::Context>& srcContext,
        const std::shared_ptr<const OCIO::Config>& srcConfig,
        const char* srcColorSpaceName, const char* srcInterchangeName,
        const std::shared_ptr<const OCIO::Context>& dstContext,
        const std::shared_ptr<const OCIO::Config>& dstConfig,
        const char* dstColorSpaceName, const char* dstInterchangeName);

    Config(const OCIO::Config&);

    OCIO::Config& operator=(const OCIO::Config&);

    ~Config();

    void setProcessorCacheFlags(OCIO::ProcessorCacheFlags flags);

} CPPMM_OPAQUEBYTES; // struct Config

struct FileRules {
    using BoundType = OCIO::FileRules;

    static std::shared_ptr<OCIO::FileRules> Create();

    std::shared_ptr<OCIO::FileRules> createEditableCopy() const;

    unsigned long getNumEntries() const;

    unsigned long getIndexForRule(const char* ruleName) const;

    const char* getName(unsigned long ruleIndex) const;

    const char* getPattern(unsigned long ruleIndex) const;

    void setPattern(unsigned long ruleIndex, const char* pattern);

    const char* getExtension(unsigned long ruleIndex) const;

    void setExtension(unsigned long ruleIndex, const char* extension);

    const char* getRegex(unsigned long ruleIndex) const;

    void setRegex(unsigned long ruleIndex, const char* regex);

    const char* getColorSpace(unsigned long ruleIndex) const;

    void setColorSpace(unsigned long ruleIndex, const char* colorSpace);

    unsigned long getNumCustomKeys(unsigned long ruleIndex) const;

    const char* getCustomKeyName(unsigned long ruleIndex,
                                 unsigned long key) const;

    const char* getCustomKeyValue(unsigned long ruleIndex,
                                  unsigned long key) const;

    void setCustomKey(unsigned long ruleIndex, const char* key,
                      const char* value);

    void insertRule(unsigned long ruleIndex, const char* name,
                    const char* colorSpace, const char* pattern,
                    const char* extension);

    void insertRule(unsigned long ruleIndex, const char* name,
                    const char* colorSpace, const char* regex);

    void insertPathSearchRule(unsigned long ruleIndex);

    void setDefaultRuleColorSpace(const char* colorSpace);

    void removeRule(unsigned long ruleIndex);

    void increaseRulePriority(unsigned long ruleIndex);

    void decreaseRulePriority(unsigned long ruleIndex);

    bool isDefault() const;

    FileRules(const OCIO::FileRules&);

    OCIO::FileRules& operator=(const OCIO::FileRules&);

    ~FileRules();

} CPPMM_OPAQUEBYTES; // struct FileRules

struct ViewingRules {
    using BoundType = OCIO::ViewingRules;

    static std::shared_ptr<OCIO::ViewingRules> Create();

    std::shared_ptr<OCIO::ViewingRules> createEditableCopy() const;

    unsigned long getNumEntries() const;

    unsigned long getIndexForRule(const char* ruleName) const;

    const char* getName(unsigned long ruleIndex) const;

    unsigned long getNumColorSpaces(unsigned long ruleIndex) const;

    const char* getColorSpace(unsigned long ruleIndex,
                              unsigned long colorSpaceIndex) const;

    void addColorSpace(unsigned long ruleIndex, const char* colorSpace);

    void removeColorSpace(unsigned long ruleIndex,
                          unsigned long colorSpaceIndex);

    unsigned long getNumEncodings(unsigned long ruleIndex) const;

    const char* getEncoding(unsigned long ruleIndex,
                            unsigned long encodingIndex) const;

    void addEncoding(unsigned long ruleIndex, const char* encoding);

    void removeEncoding(unsigned long ruleIndex, unsigned long encodingIndex);

    unsigned long getNumCustomKeys(unsigned long ruleIndex) const;

    const char* getCustomKeyName(unsigned long ruleIndex,
                                 unsigned long keyIndex) const;

    const char* getCustomKeyValue(unsigned long ruleIndex,
                                  unsigned long keyIndex) const;

    void setCustomKey(unsigned long ruleIndex, const char* key,
                      const char* value);

    void insertRule(unsigned long ruleIndex, const char* ruleName);

    void removeRule(unsigned long ruleIndex);

    ViewingRules(const OCIO::ViewingRules&);

    OCIO::ViewingRules& operator=(const OCIO::ViewingRules&);

    ~ViewingRules();

} CPPMM_OPAQUEBYTES; // struct ViewingRules

struct ColorSpace {
    using BoundType = OCIO::ColorSpace;

    static std::shared_ptr<OCIO::ColorSpace> Create();

    static std::shared_ptr<OCIO::ColorSpace>
    Create(OCIO::ReferenceSpaceType referenceSpace);

    std::shared_ptr<OCIO::ColorSpace> createEditableCopy() const;

    const char* getName() const;

    void setName(const char* name);

    unsigned long getNumAliases() const;

    const char* getAlias(unsigned long idx) const;

    void addAlias(const char* alias);

    void removeAlias(const char* alias);

    void clearAliases();

    const char* getFamily() const;

    void setFamily(const char* family);

    const char* getEqualityGroup() const;

    void setEqualityGroup(const char* equalityGroup);

    const char* getDescription() const;

    void setDescription(const char* description);

    OCIO::BitDepth getBitDepth() const;

    void setBitDepth(OCIO::BitDepth bitDepth);

    OCIO::ReferenceSpaceType getReferenceSpaceType() const;

    bool hasCategory(const char* category) const;

    void addCategory(const char* category);

    void removeCategory(const char* category);

    int getNumCategories() const;

    const char* getCategory(int index) const;

    void clearCategories();

    const char* getEncoding() const;

    void setEncoding(const char* encoding);

    bool isData() const;

    void setIsData(bool isData);

    OCIO::Allocation getAllocation() const;

    void setAllocation(OCIO::Allocation allocation);

    int getAllocationNumVars() const;

    void getAllocationVars(float* vars) const;

    void setAllocationVars(int numvars, const float* vars);

    std::shared_ptr<const OCIO::Transform>
    getTransform(OCIO::ColorSpaceDirection dir) const;

    void setTransform(const std::shared_ptr<const OCIO::Transform>& transform,
                      OCIO::ColorSpaceDirection dir);

    ColorSpace(const OCIO::ColorSpace&);

    OCIO::ColorSpace& operator=(const OCIO::ColorSpace&);

    ~ColorSpace();

} CPPMM_OPAQUEBYTES; // struct ColorSpace

struct ColorSpaceSet {
    using BoundType = OCIO::ColorSpaceSet;

    static std::shared_ptr<OCIO::ColorSpaceSet> Create();

    std::shared_ptr<OCIO::ColorSpaceSet> createEditableCopy() const;

    bool operator==(const OCIO::ColorSpaceSet& css) const;

    bool operator!=(const OCIO::ColorSpaceSet& css) const;

    int getNumColorSpaces() const;

    const char* getColorSpaceNameByIndex(int index) const;

    std::shared_ptr<const OCIO::ColorSpace>
    getColorSpaceByIndex(int index) const;

    std::shared_ptr<const OCIO::ColorSpace>
    getColorSpace(const char* name) const;

    int getColorSpaceIndex(const char* name) const;

    bool hasColorSpace(const char* name) const;

    void addColorSpace(const std::shared_ptr<const OCIO::ColorSpace>& cs);

    void addColorSpaces(const std::shared_ptr<const OCIO::ColorSpaceSet>& cs);

    void removeColorSpace(const char* name);

    void
    removeColorSpaces(const std::shared_ptr<const OCIO::ColorSpaceSet>& cs);

    void clearColorSpaces();

    ~ColorSpaceSet();

} CPPMM_OPAQUEBYTES; // struct ColorSpaceSet

struct Look {
    using BoundType = OCIO::Look;

    static std::shared_ptr<OCIO::Look> Create();

    std::shared_ptr<OCIO::Look> createEditableCopy() const;

    const char* getName() const;

    void setName(const char* name);

    const char* getProcessSpace() const;

    void setProcessSpace(const char* processSpace);

    std::shared_ptr<const OCIO::Transform> getTransform() const;

    void setTransform(const std::shared_ptr<const OCIO::Transform>& transform);

    std::shared_ptr<const OCIO::Transform> getInverseTransform() const;

    void setInverseTransform(
        const std::shared_ptr<const OCIO::Transform>& transform);

    const char* getDescription() const;

    void setDescription(const char* description);

    Look(const OCIO::Look&);

    OCIO::Look& operator=(const OCIO::Look&);

    ~Look();

} CPPMM_OPAQUEBYTES; // struct Look

struct NamedTransform {
    using BoundType = OCIO::NamedTransform;

    static std::shared_ptr<OCIO::NamedTransform> Create();

    std::shared_ptr<OCIO::NamedTransform> createEditableCopy() const;

    const char* getName() const;

    void setName(const char* name);

    unsigned long getNumAliases() const;

    const char* getAlias(unsigned long idx) const;

    void addAlias(const char* alias);

    void removeAlias(const char* alias);

    void clearAliases();

    const char* getFamily() const;

    void setFamily(const char* family);

    const char* getDescription() const;

    void setDescription(const char* description);

    bool hasCategory(const char* category) const;

    void addCategory(const char* category);

    void removeCategory(const char* category);

    int getNumCategories() const;

    const char* getCategory(int index) const;

    void clearCategories();

    const char* getEncoding() const;

    void setEncoding(const char* encoding);

    std::shared_ptr<const OCIO::Transform>
    getTransform(OCIO::TransformDirection dir) const;

    void setTransform(const std::shared_ptr<const OCIO::Transform>& transform,
                      OCIO::TransformDirection dir);

    NamedTransform(const OCIO::NamedTransform&);

    OCIO::NamedTransform& operator=(const OCIO::NamedTransform&);

    ~NamedTransform();

} CPPMM_OPAQUEPTR; // struct NamedTransform

struct ViewTransform {
    using BoundType = OCIO::ViewTransform;

    static std::shared_ptr<OCIO::ViewTransform>
    Create(OCIO::ReferenceSpaceType referenceSpace);

    std::shared_ptr<OCIO::ViewTransform> createEditableCopy() const;

    const char* getName() const;

    void setName(const char* name);

    const char* getFamily() const;

    void setFamily(const char* family);

    const char* getDescription() const;

    void setDescription(const char* description);

    bool hasCategory(const char* category) const;

    void addCategory(const char* category);

    void removeCategory(const char* category);

    int getNumCategories() const;

    const char* getCategory(int index) const;

    void clearCategories();

    OCIO::ReferenceSpaceType getReferenceSpaceType() const;

    std::shared_ptr<const OCIO::Transform>
    getTransform(OCIO::ViewTransformDirection dir) const;

    void setTransform(const std::shared_ptr<const OCIO::Transform>& transform,
                      OCIO::ViewTransformDirection dir);

    ViewTransform(const OCIO::ViewTransform&);

    OCIO::ViewTransform& operator=(const OCIO::ViewTransform&);

    ~ViewTransform();

} CPPMM_OPAQUEBYTES; // struct ViewTransform

struct Context {
    using BoundType = OCIO::Context;

    static std::shared_ptr<OCIO::Context> Create();

    std::shared_ptr<OCIO::Context> createEditableCopy() const;

    const char* getCacheID() const;

    void setSearchPath(const char* path);

    const char* getSearchPath() const;

    int getNumSearchPaths() const;

    const char* getSearchPath(int index) const;

    void clearSearchPaths();

    void addSearchPath(const char* path);

    void setWorkingDir(const char* dirname);

    const char* getWorkingDir() const;

    void setStringVar(const char* name, const char* value);

    const char* getStringVar(const char* name) const;

    int getNumStringVars() const;

    const char* getStringVarNameByIndex(int index) const;

    const char* getStringVarByIndex(int index) const;

    void clearStringVars();

    void addStringVars(const std::shared_ptr<const OCIO::Context>& ctx);

    void setEnvironmentMode(OCIO::EnvironmentMode mode);

    OCIO::EnvironmentMode getEnvironmentMode() const;

    void loadEnvironment();

    const char* resolveStringVar(const char* string) const;

    const char*
    resolveStringVar(const char* string,
                     std::shared_ptr<OCIO::Context>& usedContextVars) const;

    const char* resolveFileLocation(const char* filename) const;

    const char*
    resolveFileLocation(const char* filename,
                        std::shared_ptr<OCIO::Context>& usedContextVars) const;

    Context(const OCIO::Context&);

    OCIO::Context& operator=(const OCIO::Context&);

    ~Context();

} CPPMM_OPAQUEBYTES; // struct Context

struct Processor {
    using BoundType = OCIO::Processor;

    bool isNoOp() const;

    bool hasChannelCrosstalk() const;

    const char* getCacheID() const;

    std::shared_ptr<const OCIO::ProcessorMetadata> getProcessorMetadata() const;

    const OCIO::FormatMetadata& getFormatMetadata() const;

    int getNumTransforms() const;

    const OCIO::FormatMetadata& getTransformFormatMetadata(int index) const;

    std::shared_ptr<OCIO::GroupTransform> createGroupTransform() const;

    std::shared_ptr<OCIO::DynamicProperty>
    getDynamicProperty(OCIO::DynamicPropertyType type) const;

    bool hasDynamicProperty(OCIO::DynamicPropertyType type) const;

    bool isDynamic() const;

    std::shared_ptr<const OCIO::Processor>
    getOptimizedProcessor(OCIO::OptimizationFlags oFlags) const;

    std::shared_ptr<const OCIO::Processor>
    getOptimizedProcessor(OCIO::BitDepth inBD, OCIO::BitDepth outBD,
                          OCIO::OptimizationFlags oFlags) const;

    std::shared_ptr<const OCIO::GPUProcessor> getDefaultGPUProcessor() const;

    std::shared_ptr<const OCIO::GPUProcessor>
    getOptimizedGPUProcessor(OCIO::OptimizationFlags oFlags) const;

    std::shared_ptr<const OCIO::CPUProcessor> getDefaultCPUProcessor() const;

    std::shared_ptr<const OCIO::CPUProcessor>
    getOptimizedCPUProcessor(OCIO::OptimizationFlags oFlags) const;

    std::shared_ptr<const OCIO::CPUProcessor>
    getOptimizedCPUProcessor(OCIO::BitDepth inBitDepth,
                             OCIO::BitDepth outBitDepth,
                             OCIO::OptimizationFlags oFlags) const;

    Processor(const OCIO::Processor&);

    OCIO::Processor& operator=(const OCIO::Processor&);

    ~Processor();

} CPPMM_OPAQUEBYTES; // struct Processor

struct CPUProcessor {
    using BoundType = OCIO::CPUProcessor;

    bool isNoOp() const;

    bool isIdentity() const;

    bool hasChannelCrosstalk() const;

    const char* getCacheID() const;

    OCIO::BitDepth getInputBitDepth() const;

    OCIO::BitDepth getOutputBitDepth() const;

    std::shared_ptr<OCIO::DynamicProperty>
    getDynamicProperty(OCIO::DynamicPropertyType type) const;

    void apply(OCIO::ImageDesc& imgDesc) const;

    void apply(const OCIO::ImageDesc& srcImgDesc,
               OCIO::ImageDesc& dstImgDesc) const;

    void applyRGB(float* pixel) const;

    void applyRGBA(float* pixel) const;

    CPUProcessor(const OCIO::CPUProcessor&);

    OCIO::CPUProcessor& operator=(const OCIO::CPUProcessor&);

    ~CPUProcessor();

} CPPMM_OPAQUEBYTES; // struct CPUProcessor

struct GPUProcessor {
    using BoundType = OCIO::GPUProcessor;

    bool isNoOp() const;

    bool hasChannelCrosstalk() const;

    const char* getCacheID() const;

    void extractGpuShaderInfo(
        std::shared_ptr<OCIO::GpuShaderDesc>& shaderDesc) const;

    void extractGpuShaderInfo(
        std::shared_ptr<OCIO::GpuShaderCreator>& shaderCreator) const;

    GPUProcessor(const OCIO::GPUProcessor&);

    OCIO::GPUProcessor& operator=(const OCIO::GPUProcessor&);

    ~GPUProcessor();

} CPPMM_OPAQUEBYTES; // struct GPUProcessor

struct ProcessorMetadata {
    using BoundType = OCIO::ProcessorMetadata;

    static std::shared_ptr<OCIO::ProcessorMetadata> Create();

    int getNumFiles() const;

    const char* getFile(int index) const;

    int getNumLooks() const;

    const char* getLook(int index) const;

    void addFile(const char* fname);

    void addLook(const char* look);

    ProcessorMetadata(const OCIO::ProcessorMetadata&);

    OCIO::ProcessorMetadata& operator=(const OCIO::ProcessorMetadata&);

    ~ProcessorMetadata();

} CPPMM_OPAQUEBYTES; // struct ProcessorMetadata

struct Baker {
    using BoundType = OCIO::Baker;

    static std::shared_ptr<OCIO::Baker> Create();

    std::shared_ptr<OCIO::Baker> createEditableCopy() const;

    std::shared_ptr<const OCIO::Config> getConfig() const;

    void setConfig(const std::shared_ptr<const OCIO::Config>& config);

    const char* getFormat() const;

    void setFormat(const char* formatName);

    const OCIO::FormatMetadata& getFormatMetadata() const;

    OCIO::FormatMetadata& getFormatMetadata();

    const char* getInputSpace() const;

    void setInputSpace(const char* inputSpace);

    const char* getShaperSpace() const;

    void setShaperSpace(const char* shaperSpace);

    const char* getLooks() const;

    void setLooks(const char* looks);

    const char* getTargetSpace() const;

    void setTargetSpace(const char* targetSpace);

    int getShaperSize() const;

    void setShaperSize(int shapersize);

    int getCubeSize() const;

    void setCubeSize(int cubesize);

    void bake(std::basic_ostream<char, std::char_traits<char>>& os) const;

    static int getNumFormats();

    static const char* getFormatNameByIndex(int index);

    static const char* getFormatExtensionByIndex(int index);

    Baker(const OCIO::Baker&);

    OCIO::Baker& operator=(const OCIO::Baker&);

    ~Baker();

} CPPMM_OPAQUEBYTES; // struct Baker

struct ImageDesc {
    using BoundType = OCIO::ImageDesc;

    ImageDesc();

    ~ImageDesc();

    void* getRData() const;

    void* getGData() const;

    void* getBData() const;

    void* getAData() const;

    OCIO::BitDepth getBitDepth() const;

    long getWidth() const;

    long getHeight() const;

    long getXStrideBytes() const;

    long getYStrideBytes() const;

    bool isRGBAPacked() const;

    bool isFloat() const;

} CPPMM_OPAQUEPTR; // struct ImageDesc

struct Exception {
    using BoundType = OCIO::Exception;

    const char* what() const;

    Exception();

    Exception(const char*);

    Exception(const OCIO::Exception&);

    OCIO::Exception& operator=(const OCIO::Exception&);

    ~Exception();

} CPPMM_OPAQUEBYTES; // struct Exception

struct GpuShaderCreator {
    using BoundType = OCIO::GpuShaderCreator;

    std::shared_ptr<OCIO::GpuShaderCreator> clone() const;

    const char* getUniqueID() const;

    void setUniqueID(const char* uid);

    OCIO::GpuLanguage getLanguage() const;

    void setLanguage(OCIO::GpuLanguage lang);

    const char* getFunctionName() const;

    void setFunctionName(const char* name);

    const char* getPixelName() const;

    void setPixelName(const char* name);

    const char* getResourcePrefix() const;

    void setResourcePrefix(const char* prefix);

    const char* getCacheID() const;

    void begin(const char* uid);

    void end();

    void setTextureMaxWidth(unsigned int maxWidth);

    unsigned int getTextureMaxWidth() const;

    unsigned int getNextResourceIndex();

    bool addUniform(const char* name,
                    const std::function<double(void)>& getDouble) CPPMM_IGNORE;

    bool addUniform(const char* name,
                    const std::function<bool(void)>& getBool) CPPMM_IGNORE;

    bool addUniform(const char* name,
                    const std::function<const std::array<float, 3>&(void)>&
                        getFloat3) CPPMM_IGNORE;

    bool addUniform(const char* name, const std::function<int(void)>& getSize,
                    const std::function<const float*(void)>& getVectorFloat)
        CPPMM_IGNORE;

    bool addUniform(const char* name, const std::function<int(void)>& getSize,
                    const std::function<const int*(void)>& getVectorInt)
        CPPMM_IGNORE;

    void addDynamicProperty(std::shared_ptr<OCIO::DynamicProperty>& prop);

    unsigned int getNumDynamicProperties() const;

    std::shared_ptr<OCIO::DynamicProperty>
    getDynamicProperty(unsigned int index) const;

    bool hasDynamicProperty(OCIO::DynamicPropertyType type) const;

    std::shared_ptr<OCIO::DynamicProperty>
    getDynamicProperty(OCIO::DynamicPropertyType type) const;

    void addTexture(const char* textureName, const char* samplerName,
                    unsigned int width, unsigned int height,
                    OCIO::GpuShaderCreator::TextureType channel,
                    OCIO::Interpolation interpolation, const float* values);

    void add3DTexture(const char* textureName, const char* samplerName,
                      unsigned int edgelen, OCIO::Interpolation interpolation,
                      const float* values);

    void addToDeclareShaderCode(const char* shaderCode);

    void addToHelperShaderCode(const char* shaderCode);

    void addToFunctionHeaderShaderCode(const char* shaderCode);

    void addToFunctionShaderCode(const char* shaderCode);

    void addToFunctionFooterShaderCode(const char* shaderCode);

    void createShaderText(const char* shaderDeclarations,
                          const char* shaderHelperMethods,
                          const char* shaderFunctionHeader,
                          const char* shaderFunctionBody,
                          const char* shaderFunctionFooter);

    void finalize();

    GpuShaderCreator(const OCIO::GpuShaderCreator&);

    OCIO::GpuShaderCreator& operator=(const OCIO::GpuShaderCreator&);

    ~GpuShaderCreator();

    enum TextureType {
        TEXTURE_RED_CHANNEL = 0,
        TEXTURE_RGB_CHANNEL = 1,
    };
} CPPMM_OPAQUEPTR; // struct GpuShaderCreator

struct GpuShaderDesc {
    using BoundType = OCIO::GpuShaderDesc;

    std::shared_ptr<OCIO::GpuShaderCreator> clone() const;

    const char* getUniqueID() const;

    void setUniqueID(const char* uid);

    OCIO::GpuLanguage getLanguage() const;

    void setLanguage(OCIO::GpuLanguage lang);

    const char* getFunctionName() const;

    void setFunctionName(const char* name);

    const char* getPixelName() const;

    void setPixelName(const char* name);

    const char* getResourcePrefix() const;

    void setResourcePrefix(const char* prefix);

    const char* getCacheID() const;

    void begin(const char* uid);

    void end();

    void setTextureMaxWidth(unsigned int maxWidth);

    unsigned int getTextureMaxWidth() const;

    unsigned int getNextResourceIndex();

    bool addUniform(const char* name,
                    const std::function<double(void)>& getDouble) CPPMM_IGNORE;

    bool addUniform(const char* name,
                    const std::function<bool(void)>& getBool) CPPMM_IGNORE;

    bool addUniform(const char* name,
                    const std::function<const std::array<float, 3>&(void)>&
                        getFloat3) CPPMM_IGNORE;

    bool addUniform(const char* name, const std::function<int(void)>& getSize,
                    const std::function<const float*(void)>& getVectorFloat)
        CPPMM_IGNORE;

    bool addUniform(const char* name, const std::function<int(void)>& getSize,
                    const std::function<const int*(void)>& getVectorInt)
        CPPMM_IGNORE;

    void addDynamicProperty(std::shared_ptr<OCIO::DynamicProperty>& prop);

    unsigned int getNumDynamicProperties() const;

    std::shared_ptr<OCIO::DynamicProperty>
    getDynamicProperty(unsigned int index) const;

    bool hasDynamicProperty(OCIO::DynamicPropertyType type) const;

    std::shared_ptr<OCIO::DynamicProperty>
    getDynamicProperty(OCIO::DynamicPropertyType type) const;

    void addTexture(const char* textureName, const char* samplerName,
                    unsigned int width, unsigned int height,
                    OCIO::GpuShaderCreator::TextureType channel,
                    OCIO::Interpolation interpolation, const float* values);

    void add3DTexture(const char* textureName, const char* samplerName,
                      unsigned int edgelen, OCIO::Interpolation interpolation,
                      const float* values);

    void addToDeclareShaderCode(const char* shaderCode);

    void addToHelperShaderCode(const char* shaderCode);

    void addToFunctionHeaderShaderCode(const char* shaderCode);

    void addToFunctionShaderCode(const char* shaderCode);

    void addToFunctionFooterShaderCode(const char* shaderCode);

    void createShaderText(const char* shaderDeclarations,
                          const char* shaderHelperMethods,
                          const char* shaderFunctionHeader,
                          const char* shaderFunctionBody,
                          const char* shaderFunctionFooter);

    void finalize();

    static std::shared_ptr<OCIO::GpuShaderDesc>
    CreateLegacyShaderDesc(unsigned int edgelen);

    static std::shared_ptr<OCIO::GpuShaderDesc> CreateShaderDesc();

    unsigned int getNumUniforms() const;

    const char* getUniform(unsigned int index,
                           OCIO::GpuShaderDesc::UniformData& data) const;

    unsigned int getNumTextures() const;

    void getTexture(unsigned int index, const char*& textureName,
                    const char*& samplerName, unsigned int& width,
                    unsigned int& height,
                    OCIO::GpuShaderCreator::TextureType& channel,
                    OCIO::Interpolation& interpolation) const;

    void getTextureValues(unsigned int index, const float*& values) const;

    unsigned int getNum3DTextures() const;

    void get3DTexture(unsigned int index, const char*& textureName,
                      const char*& samplerName, unsigned int& edgelen,
                      OCIO::Interpolation& interpolation) const;

    void get3DTextureValues(unsigned int index, const float*& values) const;

    const char* getShaderText() const;

    GpuShaderDesc(const OCIO::GpuShaderDesc&);

    OCIO::GpuShaderDesc& operator=(const OCIO::GpuShaderDesc&);

    ~GpuShaderDesc();

    struct UniformData {
        using BoundType = OCIO::GpuShaderDesc::UniformData;

        UniformData();

        UniformData(const OCIO::GpuShaderDesc::UniformData& data);

        struct VectorFloat {
            using BoundType = OCIO::GpuShaderDesc::UniformData::VectorFloat;

            VectorFloat(const OCIO::GpuShaderDesc::UniformData::VectorFloat&);

            VectorFloat(OCIO::GpuShaderDesc::UniformData::VectorFloat&&)
                CPPMM_IGNORE;

            ~VectorFloat();

        } CPPMM_OPAQUEBYTES; // struct VectorFloat

        struct VectorInt {
            using BoundType = OCIO::GpuShaderDesc::UniformData::VectorInt;

            VectorInt(const OCIO::GpuShaderDesc::UniformData::VectorInt&);

            VectorInt(OCIO::GpuShaderDesc::UniformData::VectorInt&&)
                CPPMM_IGNORE;

            ~VectorInt();

        } CPPMM_OPAQUEBYTES; // struct VectorInt

    } CPPMM_OPAQUEBYTES; // struct UniformData

} CPPMM_OPAQUEPTR; // struct GpuShaderDesc

struct BuiltinTransformRegistry {
    using BoundType = OCIO::BuiltinTransformRegistry;

    BuiltinTransformRegistry(const OCIO::BuiltinTransformRegistry&);

    OCIO::BuiltinTransformRegistry&
    operator=(const OCIO::BuiltinTransformRegistry&);

    static std::shared_ptr<const OCIO::BuiltinTransformRegistry> Get();

    unsigned long getNumBuiltins() const;

    const char* getBuiltinStyle(unsigned long index) const;

    const char* getBuiltinDescription(unsigned long index) const;

} CPPMM_OPAQUEPTR; // struct BuiltinTransformRegistry

struct SystemMonitors {
    using BoundType = OCIO::SystemMonitors;

    SystemMonitors(const OCIO::SystemMonitors&);

    OCIO::SystemMonitors& operator=(const OCIO::SystemMonitors&);

    static std::shared_ptr<const OCIO::SystemMonitors> Get();

    bool isSupported() const;

    unsigned long getNumMonitors() const;

    const char* getMonitorName(unsigned long idx) const;

    const char* getProfileFilepath(unsigned long idx) const;

} CPPMM_OPAQUEPTR; // struct SystemMonitors

struct ExceptionMissingFile {
    using BoundType = OCIO::ExceptionMissingFile;

    const char* what() const;

    ExceptionMissingFile();

    ExceptionMissingFile(const char*);

    ExceptionMissingFile(const OCIO::ExceptionMissingFile&);

    OCIO::ExceptionMissingFile& operator=(const OCIO::ExceptionMissingFile&);

    ~ExceptionMissingFile();

} CPPMM_OPAQUEBYTES; // struct ExceptionMissingFile

void ClearAllCaches();

const char* GetVersion();

int GetVersionHex();

OCIO::LoggingLevel GetLoggingLevel();

void SetLoggingLevel(OCIO::LoggingLevel level);

void SetLoggingFunction(std::function<void(const char*)> logFunction)
    CPPMM_IGNORE;

void ResetToDefaultLoggingFunction();

void LogMessage(OCIO::LoggingLevel level, const char* message);

void SetComputeHashFunction(std::function<std::__cxx11::basic_string<char>(
                                const std::__cxx11::basic_string<char>&)>
                                hashFunction) CPPMM_IGNORE;

void ResetComputeHashFunction();

const char* GetEnvVariable(const char* name);

void SetEnvVariable(const char* name, const char* value);

void UnsetEnvVariable(const char* name);

bool IsEnvVariablePresent(const char* name);

std::shared_ptr<const OCIO::Config> GetCurrentConfig();

void SetCurrentConfig(const std::shared_ptr<const OCIO::Config>& config);

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::Config&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::FileRules&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::ViewingRules&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::ColorSpace&) CPPMM_IGNORE;

std::shared_ptr<const OCIO::ColorSpaceSet>
operator||(const std::shared_ptr<const OCIO::ColorSpaceSet>& lcss,
           const std::shared_ptr<const OCIO::ColorSpaceSet>& rcss)
    CPPMM_RENAME(op_or);

std::shared_ptr<const OCIO::ColorSpaceSet>
operator&&(const std::shared_ptr<const OCIO::ColorSpaceSet>& lcss,
           const std::shared_ptr<const OCIO::ColorSpaceSet>& rcss)
    CPPMM_RENAME(op_and);

std::shared_ptr<const OCIO::ColorSpaceSet>
operator-(const std::shared_ptr<const OCIO::ColorSpaceSet>& lcss,
          const std::shared_ptr<const OCIO::ColorSpaceSet>& rcss)
    CPPMM_RENAME(op_sub);

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::Look&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::NamedTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::ViewTransform&) CPPMM_IGNORE;

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::ImageDesc&) CPPMM_IGNORE;

struct PackedImageDesc {
    using BoundType = OCIO::PackedImageDesc;

    void* getRData() const;

    void* getGData() const;

    void* getBData() const;

    void* getAData() const;

    OCIO::BitDepth getBitDepth() const;

    long getWidth() const;

    long getHeight() const;

    long getXStrideBytes() const;

    long getYStrideBytes() const;

    bool isRGBAPacked() const;

    bool isFloat() const;

    PackedImageDesc(void* data, long width, long height, long numChannels);

    PackedImageDesc(void* data, long width, long height, long numChannels,
                    OCIO::BitDepth bitDepth, long chanStrideBytes,
                    long xStrideBytes, long yStrideBytes);

    PackedImageDesc(void* data, long width, long height,
                    OCIO::ChannelOrdering chanOrder);

    PackedImageDesc(void* data, long width, long height,
                    OCIO::ChannelOrdering chanOrder, OCIO::BitDepth bitDepth,
                    long chanStrideBytes, long xStrideBytes, long yStrideBytes);

    ~PackedImageDesc();

    OCIO::ChannelOrdering getChannelOrder() const;

    void* getData() const;

    long getNumChannels() const;

    long getChanStrideBytes() const;

} CPPMM_OPAQUEBYTES; // struct PackedImageDesc

struct PlanarImageDesc {
    using BoundType = OCIO::PlanarImageDesc;

    void* getRData() const;

    void* getGData() const;

    void* getBData() const;

    void* getAData() const;

    OCIO::BitDepth getBitDepth() const;

    long getWidth() const;

    long getHeight() const;

    long getXStrideBytes() const;

    long getYStrideBytes() const;

    bool isRGBAPacked() const;

    bool isFloat() const;

    PlanarImageDesc(void* rData, void* gData, void* bData, void* aData,
                    long width, long height);

    PlanarImageDesc(void* rData, void* gData, void* bData, void* aData,
                    long width, long height, OCIO::BitDepth bitDepth,
                    long xStrideBytes, long yStrideBytes);

    ~PlanarImageDesc();

} CPPMM_OPAQUEBYTES; // struct PlanarImageDesc

std::basic_ostream<char, std::char_traits<char>>&
operator<<(std::basic_ostream<char, std::char_traits<char>>&,
           const OCIO::Context&) CPPMM_IGNORE;

} // namespace OCIO_NAMESPACE

} // namespace cppmm_bind
