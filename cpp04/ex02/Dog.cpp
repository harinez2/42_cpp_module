#include "Dog.hpp"

#include <iostream>

Dog::Dog() {
  type = "Dog";
  std::cout << "Dog " << type << " constructor called." << std::endl;
  brain = new Brain();
}

Dog::Dog(const Dog& obj) {
  std::cout << "Dog " << type << " copy constructor called." << std::endl;
  brain = new Brain();
  *this = obj;
}

Dog& Dog::operator=(const Dog& obj) {
  std::cout << "Dog " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
    *brain = *(obj.brain);
  }
  return *this;
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog " << type << " destructor called." << std::endl;
}

void Dog::makeSound() const {
  std::cout << "Bow-wow" << std::endl;
}
