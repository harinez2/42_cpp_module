#include "Convert.hpp"

#include <iostream>

void print_all_type(char* s) {
  std::cout << "Converting value : " << s << std::endl;
  Convert c(s);
  // convert_char(s);
  // convert_int(s);
  // convert_float(s);
  // convert_double(s);
  // std::cout << "char : " << c.toChar() << std::endl;
  c.printInt();
  c.printChar();
}

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cout << "Usage: ./convert <converting value>" << std::endl;
    return 0;
  }
  print_all_type(argv[1]);
  return 0;
}

// string -> int
// string -> float/double
