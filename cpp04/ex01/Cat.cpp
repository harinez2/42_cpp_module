#include "Cat.hpp"

#include <iostream>

Cat::Cat() {
  type = "Cat";
  brain = new Brain();
  std::cout << "Cat " << type << " constructor called." << std::endl;
}

Cat::Cat(const Cat& obj) {
  *this = obj;
  std::cout << "Cat " << type << " copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
  if (this != &obj) {
    type = obj.type;
    brain = new Brain(obj.brain);
  }
  std::cout << "Cat " << type << " operator= called." << std::endl;
  return *this;
}

Cat::~Cat() {
  delete brain;
  brain = NULL;
  std::cout << "Cat " << type << " destructor called." << std::endl;
}

void Cat::makeSound() const {
  std::cout << "Meow" << std::endl;
}
