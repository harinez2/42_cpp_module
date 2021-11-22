#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
 public:
  Array();
  Array(unsigned int n);
  Array(const Array<T>& obj);
  Array<T>& operator=(const Array<T>& obj);
  ~Array();

  Array<T>* operator new();
  Array<T>& operator[]();

 private:
  int size() const;
  unsigned int size_;
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
    data_ = new T(obj.data_);
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] data_;
}

template <typename T>
int Array<T>::size() const { return size_; }

#endif
