#include "Convert.hpp"

#include <iostream>

void print_all_type(const char* s) {
  Convert c(s);
  c.printChar();
  c.printInt();
  c.printFloat();
  c.printDouble();
}

void print_basic_tests() {
    std::cout << "Ex)" << std::endl;

    const std::string s1 = "0";
    std::cout << "./convert " << s1 << std::endl;
    print_all_type(s1.c_str());

    const std::string s2 = "nan";
    std::cout << "./convert " << s2 << std::endl;
    print_all_type(s2.c_str());
    
    const std::string s3 = "42.0f";
    std::cout << "./convert " << s3 << std::endl;
    print_all_type(s3.c_str());
}

int main(int argc, const char** argv) {
  if (argc != 2) {
    std::cout << "Usage: ./convert <converting value>" << std::endl;
    std::cout << std::endl;
    print_basic_tests();
    return 0;
  }
  print_all_type(argv[1]);
  return 0;
}
