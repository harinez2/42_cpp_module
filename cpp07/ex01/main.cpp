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
class Printer {
 public:
  Printer() : n_(42) {}
  Printer(int n) : n_(n) {}
  Printer operator+(Printer& obj) { Printer p(n_ + obj.n_); return p; }
  int get() const { return n_; }

 private:
  int n_;
};
std::ostream& operator<<(std::ostream& os, const Printer& p) { return os << p.get();}

// tests
void test_intarray() {
  int array_int[] = {4, 2, 42};
  const int array_int_size = sizeof(array_int) / sizeof (int);

  iter(array_int, array_int_size, &print_it);
  iter(array_int, array_int_size, &twicer);
  iter(array_int, array_int_size, &print_it);
}

void test_strarray() {
  std::string array_str[] = {"four", "two", "forty-two"};
  const int array_str_size = sizeof(array_str) / sizeof (std::string);

  iter(array_str, array_str_size, &print_it);
  iter(array_str, array_str_size, &twicer);
  iter(array_str, array_str_size, &print_it);
}

void test_classarray() {
  const int pr_size = 5;
  Printer* pr = new Printer[pr_size];

  iter(pr, pr_size, &print_it);
  iter(pr, pr_size, &twicer);
  iter(pr, pr_size, &print_it);
  delete[] pr;
}

int main(void) {
  test_intarray();
  std::cout << "---------------" << std::endl;
  test_strarray();
  std::cout << "---------------" << std::endl;
  test_classarray();
  return 0;
}
