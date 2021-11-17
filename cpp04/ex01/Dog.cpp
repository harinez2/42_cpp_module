#include "Dog.hpp"

#include <iostream>

Dog::Dog() {
  type = "Dog";
  brain = new Brain();
  std::cout << "Dog " << type << " constructor called." << std::endl;
}

Dog::Dog(const Dog& obj) {
  *this = obj;
  std::cout << "Dog " << type << " copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
  if (this != &obj) {
    type = obj.type;
    brain = new Brain(obj.brain);
  }
  std::cout << "Dog " << type << " operator= called." << std::endl;
  return *this;
}

Dog::~Dog() {
  delete brain;
  brain = NULL;
  std::cout << "Dog " << type << " destructor called." << std::endl;
}

void Dog::makeSound() const {
  std::cout << "Bow-wow" << std::endl;
}
