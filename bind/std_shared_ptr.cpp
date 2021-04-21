#include <tr1/memory>

#include <OpenColorIO/OpenColorIO.h>

// CPPMM_ macro definitions etc automatically inserted in this virtual header
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

namespace tr1 {

namespace std = ::std::tr1;

template <class T> class shared_ptr {
public:
    using BoundType = ::OCIO_SHARED_PTR<T>;

    T* get();

    ~shared_ptr() CPPMM_RENAME(dtor);

} CPPMM_OPAQUEBYTES;

// explicit instantiation
template class shared_ptr<OpenColorIO::Config>;
using ConfigRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::Config>;

template class shared_ptr<const OpenColorIO::Config>;
using ConstConfigRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::Config>;

template class shared_ptr<OpenColorIO::TruelightTransform>;
using TruelightTransformRcPtr =
    ::OCIO_SHARED_PTR<OpenColorIO::TruelightTransform>;

template class shared_ptr<const OpenColorIO::TruelightTransform>;
using ConstTruelightTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::TruelightTransform>;

template class shared_ptr<OpenColorIO::MatrixTransform>;
using MatrixTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::MatrixTransform>;

template class shared_ptr<const OpenColorIO::MatrixTransform>;
using ConstMatrixTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::MatrixTransform>;

template class shared_ptr<OpenColorIO::LookTransform>;
using LookTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::LookTransform>;

template class shared_ptr<const OpenColorIO::LookTransform>;
using ConstLookTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::LookTransform>;

template class shared_ptr<OpenColorIO::LogTransform>;
using LogTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::LogTransform>;

template class shared_ptr<const OpenColorIO::LogTransform>;
using ConstLogTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::LogTransform>;

template class shared_ptr<OpenColorIO::GroupTransform>;
using GroupTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::GroupTransform>;

template class shared_ptr<const OpenColorIO::GroupTransform>;
using ConstGroupTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::GroupTransform>;

template class shared_ptr<OpenColorIO::FileTransform>;
using FileTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::FileTransform>;

template class shared_ptr<const OpenColorIO::FileTransform>;
using ConstFileTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::FileTransform>;

template class shared_ptr<OpenColorIO::ExponentTransform>;
using ExponentTransformRcPtr =
    ::OCIO_SHARED_PTR<OpenColorIO::ExponentTransform>;

template class shared_ptr<const OpenColorIO::ExponentTransform>;
using ConstExponentTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::ExponentTransform>;

template class shared_ptr<OpenColorIO::DisplayTransform>;
using DisplayTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::DisplayTransform>;

template class shared_ptr<const OpenColorIO::DisplayTransform>;
using ConstDisplayTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::DisplayTransform>;

template class shared_ptr<OpenColorIO::ColorSpaceTransform>;
using ColorSpaceTransformRcPtr =
    ::OCIO_SHARED_PTR<OpenColorIO::ColorSpaceTransform>;

template class shared_ptr<const OpenColorIO::ColorSpaceTransform>;
using ConstColorSpaceTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::ColorSpaceTransform>;

template class shared_ptr<OpenColorIO::CDLTransform>;
using CDLTransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::CDLTransform>;

template class shared_ptr<const OpenColorIO::CDLTransform>;
using ConstCDLTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::CDLTransform>;

template class shared_ptr<OpenColorIO::AllocationTransform>;
using AllocationTransformRcPtr =
    ::OCIO_SHARED_PTR<OpenColorIO::AllocationTransform>;

template class shared_ptr<const OpenColorIO::AllocationTransform>;
using ConstAllocationTransformRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::AllocationTransform>;

template class shared_ptr<OpenColorIO::Baker>;
using BakerRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::Baker>;

template class shared_ptr<const OpenColorIO::Baker>;
using ConstBakerRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::Baker>;

template class shared_ptr<OpenColorIO::ProcessorMetadata>;
using ProcessorMetadataRcPtr =
    ::OCIO_SHARED_PTR<OpenColorIO::ProcessorMetadata>;

template class shared_ptr<const OpenColorIO::ProcessorMetadata>;
using ConstProcessorMetadataRcPtr =
    ::OCIO_SHARED_PTR<const OpenColorIO::ProcessorMetadata>;

template class shared_ptr<OpenColorIO::Transform>;
using TransformRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::Transform>;

template class shared_ptr<const OpenColorIO::Transform>;
using ConstTransformRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::Transform>;

template class shared_ptr<OpenColorIO::Processor>;
using ProcessorRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::Processor>;

template class shared_ptr<const OpenColorIO::Processor>;
using ConstProcessorRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::Processor>;

template class shared_ptr<OpenColorIO::Look>;
using LookRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::Look>;

template class shared_ptr<const OpenColorIO::Look>;
using ConstLookRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::Look>;

template class shared_ptr<OpenColorIO::ColorSpace>;
using ColorSpaceRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::ColorSpace>;

template class shared_ptr<const OpenColorIO::ColorSpace>;
using ConstColorSpaceRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>;

template class shared_ptr<OpenColorIO::Context>;
using ContextRcPtr = ::OCIO_SHARED_PTR<OpenColorIO::Context>;

template class shared_ptr<const OpenColorIO::Context>;
using ConstContextRcPtr = ::OCIO_SHARED_PTR<const OpenColorIO::Context>;

} // namespace tr1

} // namespace std

} // namespace cppmm_bind

template class OCIO_SHARED_PTR<OpenColorIO::Config>;
template class OCIO_SHARED_PTR<const OpenColorIO::Config>;

template class OCIO_SHARED_PTR<OpenColorIO::TruelightTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::TruelightTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::MatrixTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::MatrixTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::LookTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::LookTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::LogTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::LogTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::GroupTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::GroupTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::FileTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::FileTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::ExponentTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::ExponentTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::DisplayTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::DisplayTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::ColorSpaceTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::ColorSpaceTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::CDLTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::CDLTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::AllocationTransform>;
template class OCIO_SHARED_PTR<const OpenColorIO::AllocationTransform>;

template class OCIO_SHARED_PTR<OpenColorIO::Baker>;
template class OCIO_SHARED_PTR<const OpenColorIO::Baker>;

template class OCIO_SHARED_PTR<OpenColorIO::ProcessorMetadata>;
template class OCIO_SHARED_PTR<const OpenColorIO::ProcessorMetadata>;

template class OCIO_SHARED_PTR<OpenColorIO::Transform>;
template class OCIO_SHARED_PTR<const OpenColorIO::Transform>;

template class OCIO_SHARED_PTR<OpenColorIO::Processor>;
template class OCIO_SHARED_PTR<const OpenColorIO::Processor>;

template class OCIO_SHARED_PTR<OpenColorIO::Look>;
template class OCIO_SHARED_PTR<const OpenColorIO::Look>;

template class OCIO_SHARED_PTR<OpenColorIO::ColorSpace>;
template class OCIO_SHARED_PTR<const OpenColorIO::ColorSpace>;

template class OCIO_SHARED_PTR<OpenColorIO::Context>;
template class OCIO_SHARED_PTR<const OpenColorIO::Context>;
