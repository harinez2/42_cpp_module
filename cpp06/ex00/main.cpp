#include <iostream>

void convert_char(char* s) {

  std::cout << "char: " << static_cast<char>(s) << std::endl;
}

void convert_int(char* s) {

  std::cout << "int: " << static_cast<char>(s) << std::endl;
}

int main(int argc, char** argv) {
  if (argc != 2)
    return 0;

  convert_char(argv[1]);
  convert_int(argv[1]);
  std::cout << "float: " << static_cast<float>(argv[1]) << std::endl;
  std::cout << "double: " << static_cast<double>(argv[1]) << std::endl;
  return 0;
}

// string -> int
// string -> float/double