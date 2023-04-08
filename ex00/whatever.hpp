#ifndef EX00_WHATEVER_HPP_INCLUDED
#define EX00_WHATEVER_HPP_INCLUDED

template <typename T> void swap(T &a, T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T> void swap(volatile T &a, volatile T &b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T> T &min(T &a, T &b) { return a < b ? a : b; }
template <typename T> const T &min(const T &a, const T &b) {
  return a < b ? a : b;
}
template <typename T> volatile T &min(volatile T &a, volatile T &b) {
  return a < b ? a : b;
}
template <typename T>
const volatile T &min(const volatile T &a, const volatile T &b) {
  return a < b ? a : b;
}

template <typename T> T &max(T &a, T &b) { return a > b ? a : b; }
template <typename T> const T &max(const T &a, const T &b) {
  return a > b ? a : b;
}
template <typename T> volatile T &max(volatile T &a, volatile T &b) {
  return a > b ? a : b;
}
template <typename T>
const volatile T &max(const volatile T &a, const volatile T &b) {
  return a > b ? a : b;
}

#endif
