#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>

template <typename T>
void print_vec(T& vec) {
  for (typename T::iterator it = vec.begin(); it != vec.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}

template <typename T>
void print_vec(const T& vec) {
  for (typename T::const_iterator it = vec.begin(); it != vec.end(); ++it)
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

template <typename T, typename U>
void print_easyfind_result(const T& vec, U n) {
  std::cout << "searching " << n << " ... ";
  typename T::const_iterator it = easyFind<const T, U>(vec, n);
  if (it != vec.end())
    std::cout << "found: " << *it << std::endl;
  else
    std::cout << "not found." << std::endl;
}

void test_vector() {
  int intarr[] = {1, 4, 3, 5, 2};
  std::cout << "std::vector<int>" << std::endl;
  std::vector<int> vec_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(vec_int);
  print_easyfind_result(vec_int, 1);
  print_easyfind_result(vec_int, 3);
  print_easyfind_result(vec_int, 2);
  print_easyfind_result(vec_int, 9);
  std::cout << std::endl;

  std::cout << "const std::vector<int>" << std::endl;
  const std::vector<int> vec_c_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(vec_c_int);
  print_easyfind_result(vec_c_int, 1);
  print_easyfind_result(vec_c_int, 3);
  print_easyfind_result(vec_c_int, 2);
  print_easyfind_result(vec_c_int, 9);
  std::cout << std::endl;
}

void test_list() {
  int intarr[] = {1, 4, 3, 5, 2};
  std::cout << "std::list<int>" << std::endl;
  std::list<int> list_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(list_int);
  print_easyfind_result(list_int, 1);
  print_easyfind_result(list_int, 3);
  print_easyfind_result(list_int, 2);
  print_easyfind_result(list_int, 9);
  std::cout << std::endl;

  std::cout << "const std::list<int>" << std::endl;
  const std::list<int> list_c_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(list_c_int);
  print_easyfind_result(list_c_int, 1);
  print_easyfind_result(list_c_int, 3);
  print_easyfind_result(list_c_int, 2);
  print_easyfind_result(list_c_int, 9);
  std::cout << std::endl;
}

void test_vector_string() {
  std::cout << "std::vector<std::string>" << std::endl;
  std::string str[] = {"a", "bb", "ccc", "dddd"};
  std::vector<std::string> vec_str(str, str + sizeof(str) / sizeof(std::string));
  print_vec(vec_str);
  print_easyfind_result(vec_str, "a");
  print_easyfind_result(vec_str, "ccc");
  print_easyfind_result(vec_str, "dddd");
  print_easyfind_result(vec_str, "d");
  std::cout << std::endl;
}

int main(void) {
  test_vector();
  test_list();
  test_vector_string();
  return 0;
}
