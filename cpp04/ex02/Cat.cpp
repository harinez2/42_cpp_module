#include "Cat.hpp"

#include <iostream>

Cat::Cat() {
  type = "Cat";
  std::cout << "Cat " << type << " constructor called." << std::endl;
  brain = new Brain();
}

Cat::Cat(const Cat& obj) {
  std::cout << "Cat " << type << " copy constructor called." << std::endl;
  *this = obj;
}

Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Cat " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
    brain = new Brain(*obj.brain);
  }
  return *this;
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat " << type << " destructor called." << std::endl;
}

void Cat::makeSound() const {
  std::cout << "Meow" << std::endl;
}
