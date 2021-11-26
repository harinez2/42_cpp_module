#include "span.hpp"

#include <iostream>
#include <climits>

void test_setsize() {
  Span sp = Span(0);
  Span sp2 = Span(UINT_MAX);
}

void test_add() {
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

void test_subject() {
  Span sp = Span(5);
  sp.showData();
  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.showData();
  sp.addNumber(9);
  sp.addNumber(11);
  sp.showData();
  std::cout << sp.shortestSpan() << std::endl;
}

int main(void) {
  test_setsize();
  test_add();
  test_subject();
  return 0;
}
