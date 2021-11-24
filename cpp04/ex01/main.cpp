#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

void test_simple() {
  std::cout << "----------------------------------------test_simple" << std::endl;
  const Animal* j = new Dog();
  std::cout << std::endl;
  const Animal* i = new Cat();
  std::cout << std::endl;

  delete j;//should not create a leak
  std::cout << std::endl;
  delete i;
  std::cout << std::endl;
}

void test_array() {
  std::cout << "----------------------------------------test_array" << std::endl;
  // constructor
  const Animal* animal[4];
  for (int i = 0; i < 4; ++i) {
    if (i < 2)
      animal[i] = new Dog();
    else
      animal[i] = new Cat();
    std::cout << std::endl;
  }
  std::cout << std::endl;

  // destructor of animal
  for (int i = 0; i < 4; ++i) {
    delete animal[i];
    std::cout << std::endl;
  }
}

void test_operatoreq() {
  std::cout << "----------------------------------------test_operatoreq" << std::endl;
  // operator=
  Dog dog;
  dog.setIdea(1, "great idea");
  std::cout << "dog.getIdea(1) : " << dog.getIdea(1) << std::endl;
  std::cout << std::endl;
  Dog dog_opeq;
  dog_opeq.setIdea(1, "normal idea");
  std::cout << "dog_opeq.getIdea(1) : " << dog_opeq.getIdea(1) << std::endl;
  std::cout << std::endl;
  dog_opeq = dog;
  std::cout << "dog_opeq.getIdea(1) : " << dog_opeq.getIdea(1) << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  // operator=
  Cat* cat = new Cat();
  cat->setIdea(1, "great idea");
  std::cout << "cat.getIdea(1) : " << cat->getIdea(1) << std::endl;
  std::cout << std::endl;
  Cat* cat_opeq = new Cat();
  cat_opeq->setIdea(1, "normal idea");
  std::cout << "cat_opeq.getIdea(1) : " << cat_opeq->getIdea(1) << std::endl;
  std::cout << std::endl;
  *cat_opeq = *cat;
  std::cout << "cat_opeq.getIdea(1) : " << cat_opeq->getIdea(1) << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  // destructor
  delete cat_opeq;
  std::cout << std::endl;
  delete cat;
  std::cout << std::endl;
}

void test_copy_constructor_heap() {
  std::cout << "----------------------------------------test_copy_constructor_heap" << std::endl;
  // copy constructor(heap)
  Dog* dog = new Dog();
  std::cout << std::endl;
  Dog* dog_copy = new Dog(*dog);
  std::cout << std::endl;
  std::cout << std::endl;

  // destructor
  delete dog_copy;
  std::cout << std::endl;
  delete dog;
  std::cout << std::endl;
  std::cout << std::endl;

  // copy constructor(heap)
  const Cat* cat = new Cat();
  std::cout << std::endl;
  const Cat* cat_copy = new Cat(*cat);
  std::cout << std::endl;
  std::cout << std::endl;

  // destructor
  delete cat_copy;
  std::cout << std::endl;
  delete cat;
  std::cout << std::endl;
}

void test_copy_constructor_stack() {
  std::cout << "----------------------------------------test_copy_constructor_stack" << std::endl;
  // copy constructor(stack)
  Dog sdog1;
  std::cout << std::endl;
  Dog sdog2 = sdog1;
  std::cout << std::endl;
}

int main() {
  test_simple();
  test_array();
  test_operatoreq();
  test_copy_constructor_heap();
  test_copy_constructor_stack();
  return 0;
}
