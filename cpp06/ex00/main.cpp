#include <iostream>

void convert_char(char* s) {

  std::cout << "char: " << static_cast<char>(s) << std::endl;
}

void convert_int(char* s) {

  std::cout << "int: " << static_cast<char>(s) << std::endl;
}

void convert_float(char* s) {

  std::cout << "float: " << static_cast<char>(s) << std::endl;
}

void convert_double(char* s) {

  std::cout << "double: " << static_cast<char>(s) << std::endl;
}

void print_in_all_type(char* s) {
  convert_char(s);
  convert_int(s);
  convert_float(s);
  convert_double(s);
}

int main(int argc, char** argv) {
  if (argc != 2)
    return 0;
  print_in_all_type(argv[1]);
  return 0;
}

// string -> int
// string -> float/double