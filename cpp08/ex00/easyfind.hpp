#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>

template <typename T, typename U>
typename T::iterator easyFind(T& arr, U search_int) {
  return std::find(arr.begin(), arr.end(), search_int);
}

template <typename T, typename U>
typename T::const_iterator easyFind(const T& arr, U search_int) {
  return std::find(arr.begin(), arr.end(), search_int);
}

#endif
