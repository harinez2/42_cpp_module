#include "whatever.hpp"

#include <iostream>
#include <string>

// A class for tests
class SimpleClass {
 public:
  SimpleClass(int n) : n_(n) {}
  SimpleClass& operator=(const SimpleClass& obj) {
    if (&obj != this)
      n_ = obj.n_;
    return *this;
  }
  bool operator>(const SimpleClass& obj) const { return (n_ > obj.n_); }
  bool operator<(const SimpleClass& obj) const { return (n_ < obj.n_); }
  int get() const { return n_; }

 private:
  int n_;
};
std::ostream& operator<<(std::ostream& os, const SimpleClass& p) { return os << p.get();}

// tests
void test_subject_int() {
  int a = 2;
  int b = 3;

  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
}

void test_subject_str() {
  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void test_class() {
  SimpleClass e(4);
  SimpleClass f(2);

  ::swap( e, f );
  std::cout << "e = " << e << ", f = " << f << std::endl;
  std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
  std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
}

int main(void) {
  test_subject_int();
  std::cout << "---------------" << std::endl;
  test_subject_str();
  std::cout << "---------------" << std::endl;
  test_class();
  return 0;
}
