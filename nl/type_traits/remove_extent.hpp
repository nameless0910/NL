#progma once


namespace nl {

  template<typename T> struct remove_extent {using type = T;};
  template<typename T> struct remove_extent<T[]> {using type = T;};
  template<typename T,size_t N> struct remove_extent<T[N]> {using type = T;};

  template <typename T>
  using remove_extent_t = typename remove_extent<T>::type; 
}
