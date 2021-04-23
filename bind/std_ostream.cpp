#include <ostream>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

struct ostream {
    using BoundType = ::std::ostream;
} CPPMM_OPAQUEBYTES CPPMM_IGNORE_UNBOUND;

} // namespace std

} // namespace cppmm_bind
