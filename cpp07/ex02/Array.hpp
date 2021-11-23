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

  // Array<T>* operator new();
  T& operator[](int i);

 private:
  int size() const;
  int size_;
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
    for (int i = 0; i < size_; ++i)
      data_[i] = obj.data_[i];
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] data_;
}

template <typename T>
T& Array<T>::operator[](int i) {
  if (i < 0 || size_ <= i)
    throw std::exception();
  return data_[i];
}

template <typename T>
int Array<T>::size() const { return size_; }

#endif
