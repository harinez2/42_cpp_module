#include "iter.hpp"

#include <iostream>
#include <string>

template <typename T>
void twicer(T& arg) {
  arg = arg + arg;
}

template <typename T>
void print_it(T& elem) {
  std::cout << elem << " ";
}

int main(void) {
  int array_int[] = {4, 2, 42};
  const int array_int_size = sizeof(array_int) / sizeof (int);

  iter(array_int, array_int_size, &print_it<int>);
  std::cout << std::endl;
  iter(array_int, array_int_size, &twicer<int>);
  iter(array_int, array_int_size, &print_it<int>);
  std::cout << std::endl;


  std::string array_str[] = {"four", "two", "fourty-two"};
  int array_str_size = sizeof(array_str) / sizeof (std::string);

  iter(array_str, array_str_size, &print_it<std::string>);
  std::cout << std::endl;
  iter(array_str, array_str_size, &twicer<std::string>);
  iter(array_str, array_str_size, &print_it<std::string>);
  std::cout << std::endl;
  return 0;
}
