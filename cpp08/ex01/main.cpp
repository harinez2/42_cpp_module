#include "span.hpp"

#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>

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

  std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
  std::cout << "Logest span  : " << sp.longestSpan() << std::endl;
  std::cout << std::endl;
}

void test_span10000() {
  std::cout << "<test_span10000>" << std::endl;
  Span sp = Span(10000);
  for (int i = 0; i < 10000; ++i) {
    try {
      sp.addNumber(rand());
    } catch (std::exception& e) {
      std::cerr << e.what() << std::endl;
    }
  }

  std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
  std::cout << "Logest span  : " << sp.longestSpan() << std::endl;
  std::cout << std::endl;
}

int main(void) {
  test_setsize();
  test_add();
  test_copy();
  test_span();
  
  srand(time(NULL));
  for (int i = 0; i < 5; ++i)
    test_span10000();
  return 0;
}
