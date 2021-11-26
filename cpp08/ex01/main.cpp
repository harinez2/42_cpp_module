#include "span.hpp"

#include <iostream>
#include <climits>

void test_setsize() {
  std::cout << "<test_setsize>" << std::endl;
  Span sp;
  sp.showData();
  Span sp2 = Span(0);
  sp2.showData();
  Span sp3 = Span(UINT_MAX);
  sp3.showData();
  std::cout << std::endl;
}

void test_add() {
  std::cout << "<test_add>" << std::endl;
  Span sp = Span(3);
  sp.addNumber(1);
  sp.addNumber(2);
  try {
    sp.addNumber(2);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  sp.addNumber(3);
  try {
    sp.addNumber(4);
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

void test_copy() {
  std::cout << "<test_copy>" << std::endl;
  Span sp = Span(8);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.showData();

  Span sp2(sp);
  sp2.showData();

  Span sp3 = sp;
  sp3.showData();

  Span sp4(10);
  sp4 = sp;
  sp4.showData();

  Span sp5;
  try {
    sp5 = sp;
  } catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  std::cout << std::endl;
}

void test_span() {
  std::cout << "<test_span>" << std::endl;
  Span sp = Span(5);
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  sp.showData();

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

int main(void) {
  test_setsize();
  test_add();
  test_copy();
  test_span();
  return 0;
}
