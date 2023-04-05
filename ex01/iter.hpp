#ifndef EX00_WHATEVER_HPP_INCLUDED
#define EX00_WHATEVER_HPP_INCLUDED

#include <cstddef>

template <typename T> void iter(T *array, size_t length, void (*func)(T &)) {
  for (size_t i = 0; i < length; i++)
    func(array[i]);
}

#endif
