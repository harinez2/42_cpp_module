#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array_p, std::size_t array_len, void (*func)(T&)) {
  if (!array_p || !func)
    return;
  for (std::size_t i = 0; i < array_len; ++i)
    func(array_p[i]);
}

template <typename T>
void iter(T* array_p, std::size_t array_len, void (*func)(const T&)) {
  if (!array_p || !func)
    return;
  for (std::size_t i = 0; i < array_len; ++i)
    func(array_p[i]);
}

#endif
