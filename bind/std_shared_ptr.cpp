#include <memory>

#include <OpenColorIO/OpenColorIO.h>

// CPPMM_ macro definitions etc automatically inserted in this virtual header
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

template <class T> class shared_ptr {
public:
    using BoundType = ::OCIO_SHARED_PTR<T>;

    shared_ptr(const ::OCIO_SHARED_PTR<T>& rhs);
    ::OCIO_SHARED_PTR<T>& operator=(const ::OCIO_SHARED_PTR<T>& rhs);

    T* get();

    ~shared_ptr() CPPMM_RENAME(dtor);

} CPPMM_OPAQUEBYTES CPPMM_IGNORE_UNBOUND;

namespace OCIO = ::OCIO_NAMESPACE;

template class shared_ptr<OCIO_NAMESPACE::GpuShaderDesc>;
using GpuShaderDescPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::GpuShaderDesc>;

template class shared_ptr<const OCIO_NAMESPACE::GpuShaderDesc>;
using ConstGpuShaderDescPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::GpuShaderDesc>;

template class shared_ptr<OCIO_NAMESPACE::DisplayViewTransform>;
using DisplayViewTransformPtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::DisplayViewTransform>;

template class shared_ptr<const OCIO_NAMESPACE::DisplayViewTransform>;
using ConstDisplayViewTransformPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::DisplayViewTransform>;

template class shared_ptr<OCIO_NAMESPACE::MatrixTransform>;
using MatrixTransformPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::MatrixTransform>;

template class shared_ptr<const OCIO_NAMESPACE::MatrixTransform>;
using ConstMatrixTransformPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::MatrixTransform>;

template class shared_ptr<OCIO_NAMESPACE::GpuShaderCreator>;
using GpuShaderCreatorPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::GpuShaderCreator>;

template class shared_ptr<const OCIO_NAMESPACE::GpuShaderCreator>;
using ConstGpuShaderCreatorPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::GpuShaderCreator>;

template class shared_ptr<OCIO_NAMESPACE::Baker>;
using BakerPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::Baker>;

template class shared_ptr<const OCIO_NAMESPACE::Baker>;
using ConstBakerPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::Baker>;

template class shared_ptr<OCIO_NAMESPACE::CPUProcessor>;
using CPUProcessorPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::CPUProcessor>;

template class shared_ptr<const OCIO_NAMESPACE::CPUProcessor>;
using ConstCPUProcessorPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::CPUProcessor>;

template class shared_ptr<OCIO_NAMESPACE::GPUProcessor>;
using GPUProcessorPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::GPUProcessor>;

template class shared_ptr<const OCIO_NAMESPACE::GPUProcessor>;
using ConstGPUProcessorPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::GPUProcessor>;

template class shared_ptr<OCIO_NAMESPACE::ProcessorMetadata>;
using ProcessorMetadataPtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::ProcessorMetadata>;

template class shared_ptr<const OCIO_NAMESPACE::ProcessorMetadata>;
using ConstProcessorMetadataPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::ProcessorMetadata>;

template class shared_ptr<OCIO_NAMESPACE::GroupTransform>;
using GroupTransformPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::GroupTransform>;

template class shared_ptr<const OCIO_NAMESPACE::GroupTransform>;
using ConstGroupTransformPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::GroupTransform>;

template class shared_ptr<OCIO_NAMESPACE::DynamicPropertyGradingRGBCurve>;
using DynamicPropertyGradingRGBCurvePtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyGradingRGBCurve>;

template class shared_ptr<const OCIO_NAMESPACE::DynamicPropertyGradingRGBCurve>;
using ConstDynamicPropertyGradingRGBCurvePtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicPropertyGradingRGBCurve>;

template class shared_ptr<OCIO_NAMESPACE::DynamicPropertyGradingTone>;
using DynamicPropertyGradingTonePtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyGradingTone>;

template class shared_ptr<const OCIO_NAMESPACE::DynamicPropertyGradingTone>;
using ConstDynamicPropertyGradingTonePtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicPropertyGradingTone>;

template class shared_ptr<OCIO_NAMESPACE::DynamicPropertyDouble>;
using DynamicPropertyDoublePtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyDouble>;

template class shared_ptr<const OCIO_NAMESPACE::DynamicPropertyDouble>;
using ConstDynamicPropertyDoublePtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicPropertyDouble>;

template class shared_ptr<OCIO_NAMESPACE::DynamicPropertyGradingPrimary>;
using DynamicPropertyGradingPrimaryPtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyGradingPrimary>;

template class shared_ptr<const OCIO_NAMESPACE::DynamicPropertyGradingPrimary>;
using ConstDynamicPropertyGradingPrimaryPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicPropertyGradingPrimary>;

template class shared_ptr<OCIO_NAMESPACE::Processor>;
using ProcessorPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::Processor>;

template class shared_ptr<const OCIO_NAMESPACE::Processor>;
using ConstProcessorPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::Processor>;

template class shared_ptr<OCIO_NAMESPACE::FileRules>;
using FileRulesPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::FileRules>;

template class shared_ptr<const OCIO_NAMESPACE::FileRules>;
using ConstFileRulesPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::FileRules>;

template class shared_ptr<OCIO_NAMESPACE::NamedTransform>;
using NamedTransformPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::NamedTransform>;

template class shared_ptr<const OCIO_NAMESPACE::NamedTransform>;
using ConstNamedTransformPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::NamedTransform>;

template class shared_ptr<OCIO_NAMESPACE::ViewTransform>;
using ViewTransformPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::ViewTransform>;

template class shared_ptr<const OCIO_NAMESPACE::ViewTransform>;
using ConstViewTransformPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::ViewTransform>;

template class shared_ptr<OCIO_NAMESPACE::Look>;
using LookPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::Look>;

template class shared_ptr<const OCIO_NAMESPACE::Look>;
using ConstLookPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::Look>;

template class shared_ptr<OCIO_NAMESPACE::ViewingRules>;
using ViewingRulesPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::ViewingRules>;

template class shared_ptr<const OCIO_NAMESPACE::ViewingRules>;
using ConstViewingRulesPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::ViewingRules>;

template class shared_ptr<OCIO_NAMESPACE::ColorSpace>;
using ColorSpacePtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::ColorSpace>;

template class shared_ptr<const OCIO_NAMESPACE::ColorSpace>;
using ConstColorSpacePtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::ColorSpace>;

template class shared_ptr<OCIO_NAMESPACE::ColorSpaceSet>;
using ColorSpaceSetPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::ColorSpaceSet>;

template class shared_ptr<const OCIO_NAMESPACE::ColorSpaceSet>;
using ConstColorSpaceSetPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::ColorSpaceSet>;

template class shared_ptr<OCIO_NAMESPACE::Context>;
using ContextPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::Context>;

template class shared_ptr<const OCIO_NAMESPACE::Context>;
using ConstContextPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::Context>;

template class shared_ptr<OCIO_NAMESPACE::DynamicProperty>;
using DynamicPropertyPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicProperty>;

template class shared_ptr<const OCIO_NAMESPACE::DynamicProperty>;
using ConstDynamicPropertyPtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicProperty>;

template class shared_ptr<OCIO_NAMESPACE::Config>;
using ConfigPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::Config>;

template class shared_ptr<const OCIO_NAMESPACE::Config>;
using ConstConfigPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::Config>;

template class shared_ptr<OCIO_NAMESPACE::Transform>;
using TransformPtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::Transform>;

template class shared_ptr<const OCIO_NAMESPACE::Transform>;
using ConstTransformPtr = ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::Transform>;

template class shared_ptr<OCIO_NAMESPACE::GradingRGBCurve>;
using GradingRGBCurvePtr = ::OCIO_SHARED_PTR<OCIO_NAMESPACE::GradingRGBCurve>;

template class shared_ptr<const OCIO_NAMESPACE::GradingRGBCurve>;
using ConstGradingRGBCurvePtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::GradingRGBCurve>;

template class shared_ptr<OCIO_NAMESPACE::GradingBSplineCurve>;
using GradingBSplineCurvePtr =
    ::OCIO_SHARED_PTR<OCIO_NAMESPACE::GradingBSplineCurve>;

template class shared_ptr<const OCIO_NAMESPACE::GradingBSplineCurve>;
using ConstGradingBSplineCurvePtr =
    ::OCIO_SHARED_PTR<const OCIO_NAMESPACE::GradingBSplineCurve>;

} // namespace std

} // namespace cppmm_bind

namespace OCIO = ::OCIO_NAMESPACE;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::GpuShaderDesc>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::GpuShaderDesc>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::DisplayViewTransform>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::DisplayViewTransform>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::MatrixTransform>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::MatrixTransform>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::GpuShaderCreator>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::GpuShaderCreator>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::Baker>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::Baker>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::ProcessorMetadata>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::ProcessorMetadata>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::GroupTransform>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::GroupTransform>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::CPUProcessor>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::CPUProcessor>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::GPUProcessor>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::GPUProcessor>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyGradingRGBCurve>;
template class OCIO_SHARED_PTR<
    const OCIO_NAMESPACE::DynamicPropertyGradingRGBCurve>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyGradingTone>;
template class OCIO_SHARED_PTR<
    const OCIO_NAMESPACE::DynamicPropertyGradingTone>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyDouble>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicPropertyDouble>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicPropertyGradingPrimary>;
template class OCIO_SHARED_PTR<
    const OCIO_NAMESPACE::DynamicPropertyGradingPrimary>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::Processor>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::Processor>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::FileRules>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::FileRules>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::NamedTransform>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::NamedTransform>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::ViewTransform>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::ViewTransform>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::Look>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::Look>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::ViewingRules>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::ViewingRules>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::ColorSpace>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::ColorSpace>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::ColorSpaceSet>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::ColorSpaceSet>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::Context>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::Context>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::DynamicProperty>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::DynamicProperty>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::Config>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::Config>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::Transform>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::Transform>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::GradingRGBCurve>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::GradingRGBCurve>;

template class OCIO_SHARED_PTR<OCIO_NAMESPACE::GradingBSplineCurve>;
template class OCIO_SHARED_PTR<const OCIO_NAMESPACE::GradingBSplineCurve>;
