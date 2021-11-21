#include "Convert.hpp"

#include <iostream>

void print_all_type(char* s) {
  Convert c(s);
  c.printChar();
  c.printInt();
  c.printFloat();
  c.printDouble();
}

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cout << "Usage: ./convert <converting value>" << std::endl;
    return 0;
  }
  print_all_type(argv[1]);
  return 0;
}
