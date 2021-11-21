#include "Convert.hpp"

#include <iostream>

void print_all_type(const char* s, int dbgflg) {
  if (dbgflg)
    std::cout << "./convert " << s << std::endl;
  Convert c(s);
  c.printChar();
  c.printInt();
  c.printFloat();
  c.printDouble();
  if (dbgflg)
    std::cout << std::endl;
}

int main(int argc, const char** argv) {
  if (argc != 2) {
    std::cout << "Usage: ./convert <converting value>" << std::endl;
    std::cout << std::endl;
    std::cout << "Ex)" << std::endl;
    print_all_type("0", 1);
    print_all_type("nan", 1);
    print_all_type("42.0f", 1);
    return 0;
  }
  print_all_type(argv[1], 0);
  return 0;
}
