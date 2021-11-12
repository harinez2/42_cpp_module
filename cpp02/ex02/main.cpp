#include "Fixed.hpp"

#include <iostream>

void basic_patterns( void ) {
    Fixed		a;
    Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
}

void test_rt(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " >  " << right << " : " << (left > right) << std::endl;
}

void test_lt(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " <  " << right << " : " << (left < right) << std::endl;
}

void test_re(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " >= " << right << " : " << (left >= right) << std::endl;
}

void test_le(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " <= " << right << " : " << (left <= right) << std::endl;
}

void test_eq(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " == " << right << " : " << (left == right) << std::endl;
}

void test_ne(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " != " << right << " : " << (left != right) << std::endl;
}

void test_plus(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " + " << right << " = " << left + right << std::endl;
}

void test_minus(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " - " << right << " = " << left - right << std::endl;
}

void test_multiply(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " * " << right << " = " << left * right << std::endl;
}

void test_divide(float left_f, float right_f) {
  Fixed left(left_f);
  Fixed right(right_f);
  std::cout << left << " / " << right << " = " << left / right << std::endl;
}

void test_pre_icrement(float left_f) {
  Fixed f(left_f);
  std::cout << f << " : pre-increment  " << ++f;
  std::cout << " : finally " << f << std::endl;
}

void test_post_icrement(float left_f) {
  Fixed f(left_f);
  std::cout << f << " : post-increment " << f++;
  std::cout << " : finally " << f << std::endl;
}

void test_pre_decrement(float left_f) {
  Fixed f(left_f);
  std::cout << f << " : pre-decrement  " << --f;
  std::cout << " : finally " << f << std::endl;
}

void test_post_decrement(float left_f) {
  Fixed f(left_f);
  std::cout << f << " : post-decrement " << f--;
  std::cout << " : finally " << f << std::endl;
}

void test_min(float left_f, float right_f) {
  std::cout << "      min(" << left_f << ", " << right_f << ") : ";
  std::cout << Fixed::min(left_f, right_f) << std::endl;
}

void test_min_const(float left_f, float right_f) {
  std::cout << "const min(" << left_f << ", " << right_f << ") : ";
  std::cout << Fixed::min(left_f, right_f) << std::endl;
}

void test_max(float left_f, float right_f) {
  std::cout << "      max(" << left_f << ", " << right_f << ") : ";
  std::cout << Fixed::max(left_f, right_f) << std::endl;
}

void test_max_const(float left_f, float right_f) {
  std::cout << "const max(" << left_f << ", " << right_f << ") : ";
  std::cout << Fixed::max(left_f, right_f) << std::endl;
}

void test_all_patterns(float left_f, float right_f) {
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "        " << left_f << "  ,  " << right_f << std::endl;
  test_rt(left_f, right_f);
  test_lt(left_f, right_f);
  test_re(left_f, right_f);
  test_le(left_f, right_f);
  test_eq(left_f, right_f);
  test_ne(left_f, right_f);

  test_plus(left_f, right_f);
  test_minus(left_f, right_f);
  test_multiply(left_f, right_f);
  test_divide(left_f, right_f);
  
  test_pre_icrement(left_f);
  test_post_icrement(left_f);
  test_pre_decrement(left_f);
  test_post_decrement(left_f);
  
  test_min(left_f, right_f);
  test_min_const(left_f, right_f);
  test_max(left_f, right_f);
  test_max_const(left_f, right_f);
  std::cout << "-------------------------------------" << std::endl;
  std::cout << std::endl;
}

int main(void) {
  try {
    basic_patterns();

    test_all_patterns(42.42f, 10.0f);
    test_all_patterns(0.1f, 0.02f);
    test_all_patterns(0.1f, -0.02f);
    test_all_patterns(-0.004f, -0.02f);
    test_all_patterns(42.42f, 42.42f);
    test_all_patterns(42.42f, 0);
  }
  catch (const std::runtime_error& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
