#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>

template <typename T>
typename T::const_iterator easyFind(const T& arr, int search_int) {
  return std::find(arr.begin(), arr.end(), search_int);
}

#endif
