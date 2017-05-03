#progma once

#include "../type_traits/remove_extent.hpp"

namespace nl {

template <typename T> class weak_ptr;

template <typename T> class shared_ptr {
public:
  using element_type = T;
  using weak_type = weak_ptr<T>;
private:
  shared_count< refCount
}
} // namespace nl
