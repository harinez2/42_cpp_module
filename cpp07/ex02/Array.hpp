#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
 public:
  Array();
  Array(unsigned int n);
  Array(const Array<T>& obj);
  Array<T>& operator=(const Array<T>& obj);
  ~Array();

  const T& operator[](std::size_t idx) const;
  T& operator[](std::size_t idx);

 private:
  std::size_t size() const;
  std::size_t size_;
  T* data_;
};

template <typename T>
Array<T>::Array() : size_(0), data_(new T[0]) {}

template <typename T>
Array<T>::Array(unsigned int n) : size_(n), data_(new T[n]) {}

template <typename T>
Array<T>::Array(const Array<T>& obj) {
  *this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj) {
  if (this != &obj) {
    size_ = obj.size_;
    data_ = new T[size_];
    for (std::size_t i = 0; i < size_; ++i)
      data_[i] = obj.data_[i];
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] data_;
}

template <typename T>
const T& Array<T>::operator[](std::size_t idx) const {
  if (idx < 0 || size_ <= idx)
    throw std::exception();
  return data_[idx];
}

template <typename T>
T& Array<T>::operator[](std::size_t idx) {
  if (idx < 0 || size_ <= idx)
    throw std::exception();
  return data_[idx];
}

template <typename T>
std::size_t Array<T>::size() const { return size_; }

#endif
