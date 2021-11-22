#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename U, typename F>
void iter(T* array_p, U array_len, F func) {
  for (int i = 0; i < array_len; ++i)
    func(array_p[i]);
}

#endif
