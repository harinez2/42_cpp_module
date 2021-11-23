#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array_p, std::size_t array_len, void (*func)(T&)) {
  for (std::size_t i = 0; i < array_len; ++i)
    func(array_p[i]);
}

#endif
