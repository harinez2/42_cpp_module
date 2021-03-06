#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"
#include "../ex01/iter.hpp"

#define MAX_VAL 5

template <typename T>
void print_it(T& elem) {
  std::cout << elem << std::endl;
}

void print_all(int* mirror, const Array<int>& numbers) {
  if (mirror) {
    std::cout << "int* array:" << std::endl;
    iter(mirror, MAX_VAL, print_it<int>);
    std::cout << std::endl;
  }
  {
    std::cout << "Array<int> array:" << std::endl;
    for(int i = 0; i < MAX_VAL; ++i)
        std::cout << numbers[i] << std::endl;
    // iter(numbers, MAX_VAL, print_it<int>);
    std::cout << std::endl;
  }
}

int main(int, char**)
{
  Array<int> empty;

  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }
  print_all(mirror, numbers);

  //SCOPE
  {
    Array<int> tmp = numbers;
    print_all(NULL, tmp);

    Array<int> test(tmp);
    print_all(NULL, test);
  }

  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }

  try {
    numbers[-2] = 0;
  } catch(const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch(const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  std::cout << std::endl;

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  print_all(NULL, numbers);

  const Array<int> const_numbers(numbers);
  print_all(NULL, const_numbers);

  delete [] mirror;
  return 0;
}
