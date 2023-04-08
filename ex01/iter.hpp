#ifndef EX00_WHATEVER_HPP_INCLUDED
#define EX00_WHATEVER_HPP_INCLUDED

#include <cstddef>

template <typename T> void iter(T *array, size_t length, void (*func)(T &)) {
  for (size_t i = 0; i < length; i++)
    func(array[i]);
}

template <typename T>
void iter(const T *array, size_t length, void (*func)(const T &)) {
  for (size_t i = 0; i < length; i++)
    func(array[i]);
}

template <typename T>
void iter(volatile T *array, size_t length, void (*func)(volatile T &)) {
  for (size_t i = 0; i < length; i++)
    func(array[i]);
}

template <typename T>
void iter(const volatile T *array, size_t length,
          void (*func)(const volatile T &)) {
  for (size_t i = 0; i < length; i++)
    func(array[i]);
}

#endif
