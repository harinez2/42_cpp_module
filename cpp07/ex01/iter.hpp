
template <typename T>
void iter(T* array_p, T& array_len, T* func) {
  for (int i = 0; i < array_len; ++i)
    func(array_p[i]);
}
