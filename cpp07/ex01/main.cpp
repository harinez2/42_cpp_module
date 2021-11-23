#include "iter.hpp"

#include <iostream>
#include <string>

// small funcs for applying each elements in iter
template <typename T>
void twicer(T& arg) {
  arg = arg + arg;
}

template <typename T>
void print_it(T& elem) {
  std::cout << elem << std::endl;
}

// A class for tests
class SimpleClass {
 public:
  SimpleClass() : n_(42) {}
  SimpleClass(int n) : n_(n) {}
  SimpleClass operator+(SimpleClass& obj) { SimpleClass p(n_ + obj.n_); return p; }
  int get() const { return n_; }

 private:
  int n_;
};
std::ostream& operator<<(std::ostream& os, const SimpleClass& p) { return os << p.get();}

// tests
void test_intarray() {
  int array_int[] = {4, 2, 42};
  const std::size_t array_int_size = sizeof(array_int) / sizeof (int);

  iter(array_int, array_int_size, &print_it);
  iter(array_int, array_int_size, &twicer);
  iter(array_int, array_int_size, &print_it);
}

void test_strarray() {
  std::string array_str[] = {"four", "two", "forty-two"};
  const std::size_t array_str_size = sizeof(array_str) / sizeof (std::string);

  iter(array_str, array_str_size, &print_it);
  iter(array_str, array_str_size, &twicer);
  iter(array_str, array_str_size, &print_it);
}

void test_classarray() {
  const std::size_t sc_size = 5;
  SimpleClass* sc = new SimpleClass[sc_size];

  iter(sc, sc_size, &print_it);
  iter(sc, sc_size, &twicer);
  iter(sc, sc_size, &print_it);
  delete[] sc;
}

int main(void) {
  test_intarray();
  std::cout << "---------------" << std::endl;
  test_strarray();
  std::cout << "---------------" << std::endl;
  test_classarray();
  return 0;
}
