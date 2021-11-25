#include "easyfind.hpp"

#include <iostream>
#include <vector>

template <typename T>
void print_vec(T& vec) {
  for (typename T::iterator it = vec.begin(); it != vec.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}

template <typename T, typename U>
void print_easyfind_result(T& vec, U n) {
  std::cout << "searching " << n << " ... ";
  typename T::iterator it = easyFind<T, U>(vec, n);
  if (it != vec.end())
    std::cout << "found: " << *it << std::endl;
  else
    std::cout << "not found." << std::endl;
}

int main(void) {
  int intarr[] = {1, 4, 3, 5, 2};
  std::vector<int> vec_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(vec_int);
  print_easyfind_result(vec_int, 1);
  print_easyfind_result(vec_int, 3);
  print_easyfind_result(vec_int, 2);
  print_easyfind_result(vec_int, 9);
  std::cout << std::endl;

  std::string str[] = {"a", "bb", "ccc", "dddd"};
  std::vector<std::string> vec_str(str, str + sizeof(str) / sizeof(std::string));
  print_vec(vec_str);
  print_easyfind_result(vec_str, "a");
  print_easyfind_result(vec_str, "ccc");
  print_easyfind_result(vec_str, "dddd");
  print_easyfind_result(vec_str, "d");
  return 0;
}
