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
    //subject
    print_all_type("0", 1);
    print_all_type("nan", 1);
    print_all_type("42.0f", 1);
    //char
    print_all_type("31", 1);
    print_all_type("32", 1);
    print_all_type("126", 1);
    print_all_type("127", 1);
    print_all_type("a", 1);
    print_all_type("Z", 1);
    print_all_type("9", 1);
    print_all_type("!", 1);
    //int
    print_all_type("-2147483649", 1);
    print_all_type("-2147483648", 1);
    print_all_type("-1", 1);
    print_all_type("+1", 1);
    print_all_type("2147483647", 1);
    print_all_type("2147483648", 1);
    //float/double
    print_all_type("0.0", 1);
    print_all_type("+0.012", 1);
    print_all_type("-0.012", 1);
    print_all_type("3.141592653589793238462643383279502884197169399375105820974944", 1);
    print_all_type("0.000000000000000000000000000000000000000000000000000000000001", 1);
    //scientific
    print_all_type("-inff", 1);
    print_all_type("+inff", 1);
    print_all_type("nanf", 1);
    print_all_type("-inf", 1);
    print_all_type("+inf", 1);
    print_all_type("nan", 1);
    //random
    print_all_type("", 1);
    print_all_type("abcdefghijklmn", 1);
    print_all_type("3.1415k", 1);
    print_all_type("3.14.15", 1);
    print_all_type("+-+---+42", 1);
    print_all_type("- 4.2", 1);
    return 0;
  }
  print_all_type(argv[1], 0);
  return 0;
}
