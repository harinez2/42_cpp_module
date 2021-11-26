#include "span.hpp"

#include <iostream>

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

  test_subject();
  return 0;
}
