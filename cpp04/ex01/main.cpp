#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

void test_simple() {
  std::cout << "-----test_simple" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;//should not create a leak
  delete i;
  std::cout << std::endl;
}

void test_array() {
  std::cout << "-----test_array" << std::endl;
  // constructor
  const Animal* animal[6];
  for (int i = 0; i < 6; ++i) {
    if (i < 3)
      animal[i] = new Dog();
    else
      animal[i] = new Cat();
  }
  std::cout << std::endl;

  // destructor of animal
  for (int i = 0; i < 6; ++i)
    delete animal[i];
  std::cout << std::endl;
}

void test_operatoreq() {
  std::cout << "-----test_operatoreq" << std::endl;
  // operator=
  Dog dog;
  Dog dog_opeq;
  dog_opeq = dog;
  std::cout << std::endl;

  // operator=
  Cat* cat = new Cat();
  Cat* cat_opeq = new Cat();
  *cat_opeq = *cat;
  std::cout << std::endl;

  // destructor
  delete cat_opeq;
  delete cat;
  std::cout << std::endl;
}

void test_copy_constructor() {
  std::cout << "-----test_copy_constructor" << std::endl;
  // copy constructor
  Dog* dog = new Dog();
  Dog* dog_copy = new Dog(*dog);
  std::cout << std::endl;

  // destructor
  delete dog_copy;
  delete dog;
  std::cout << std::endl;

  // copy constructor
  const Cat* cat = new Cat();
  const Cat* cat_copy = new Cat(*cat);
  std::cout << std::endl;

  // destructor
  delete cat_copy;
  delete cat;
  std::cout << std::endl;
}

int main() {
  test_simple();
  test_array();
  test_operatoreq();
  test_copy_constructor();
  return 0;
}
