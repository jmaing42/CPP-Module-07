#ifndef EX01_ITER_HPP_INCLUDED
#define EX01_ITER_HPP_INCLUDED

#include <cstddef>

template <typename TData, typename TFunc>
void iter(TData *array, size_t length, TFunc func) {
  for (size_t i = 0; i < length; i++)
    func(array[i]);
}

#endif
