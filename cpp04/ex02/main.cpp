#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

void test_simple() {
  std::cout << "-----test_simple" << std::endl;
  const Animal* j = new Dog();
  std::cout << std::endl;
  const Animal* i = new Cat();
  std::cout << std::endl;

  delete j;//should not create a leak
  std::cout << std::endl;
  delete i;
  std::cout << std::endl;
}

void test_error() {
  // const Animal* i = new Animal();  // compile error
  
  // Animal a;  // compile error
}

int main(void)
{
  test_simple();
  test_error();
  return 0;
}
