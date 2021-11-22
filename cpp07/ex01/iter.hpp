#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T* array_p, int array_len, void (*func)(T&)) {
  for (int i = 0; i < array_len; ++i)
    func(array_p[i]);
}

#endif
