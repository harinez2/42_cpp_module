#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void test_dog_cat() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();

  delete i;
  delete j;
  delete meta;
}

void test_wrong_cat() {
  const WrongAnimal* meta = new WrongAnimal();
  const WrongAnimal* cat = new WrongCat();

  std::cout << cat->getType() << " " << std::endl;
  cat->makeSound();
  meta->makeSound();

  delete cat;
  delete meta;
}

int main(void)
{
  test_dog_cat();
  std::cout << "-------------------" << std::endl;
  test_wrong_cat();
  return 0;
}
