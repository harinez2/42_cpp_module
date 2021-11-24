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

void Dog::setIdea(std::size_t idx, std::string idea) {
  if (!brain)
    return;
  if (idx < 0 || 100 <= idx)
    throw std::out_of_range("Index of brain out of range.");
  brain->setIdea(idx, idea);
}

std::string& Dog::getIdea(std::size_t idx) {
  if (idx < 0 || 100 <= idx)
    throw std::out_of_range("Index of brain out of range.");
  return brain->getIdea(idx);
}
