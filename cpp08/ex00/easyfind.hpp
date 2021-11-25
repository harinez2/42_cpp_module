#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyFind(T& arr, int search_int) {
  return std::find(arr.begin(), arr.end(), search_int);
}

#endif
