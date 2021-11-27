// [compile command]
// clang++ -Wall -Wextra -Werror -std=c++98 -pedantic-errors main.cpp

#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>

template <typename T>
void print_vec(const T& vec) {
  for (typename T::const_iterator it = vec.begin(); it != vec.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}

template <typename T>
void print_easyfind_result(const T& vec, int n) {
  std::cout << "searching " << n << " ... ";
  typename T::const_iterator it = easyFind<const T>(vec, n);
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

void test_deque() {
  int intarr[] = {1, 4, 3, 5, 2};
  std::cout << "std::deque<int>" << std::endl;
  std::deque<int> deque_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(deque_int);
  print_easyfind_result(deque_int, 1);
  print_easyfind_result(deque_int, 3);
  print_easyfind_result(deque_int, 2);
  print_easyfind_result(deque_int, 9);
  std::cout << std::endl;

  std::cout << "const std::deque<int>" << std::endl;
  const std::deque<int> deque_c_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(deque_c_int);
  print_easyfind_result(deque_c_int, 1);
  print_easyfind_result(deque_c_int, 3);
  print_easyfind_result(deque_c_int, 2);
  print_easyfind_result(deque_c_int, 9);
  std::cout << std::endl;
}

void test_set() {
  int intarr[] = {1, 4, 3, 5, 2};
  std::cout << "std::set<int>" << std::endl;
  std::set<int> set_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(set_int);
  print_easyfind_result(set_int, 1);
  print_easyfind_result(set_int, 3);
  print_easyfind_result(set_int, 2);
  print_easyfind_result(set_int, 9);
  std::cout << std::endl;

  std::cout << "const std::set<int>" << std::endl;
  const std::set<int> set_c_int(intarr, intarr + sizeof(intarr) / sizeof(int));
  print_vec(set_c_int);
  print_easyfind_result(set_c_int, 1);
  print_easyfind_result(set_c_int, 3);
  print_easyfind_result(set_c_int, 2);
  print_easyfind_result(set_c_int, 9);
  std::cout << std::endl;
}

int main(void) {
  test_vector();
  test_list();
  test_deque();
  test_set();
  return 0;
}
