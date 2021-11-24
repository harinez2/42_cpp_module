#include "Cat.hpp"

#include <iostream>

Cat::Cat() {
  type = "Cat";
  std::cout << "Cat " << type << " constructor called." << std::endl;
  brain = new Brain();
}

Cat::Cat(const Cat& obj) {
  std::cout << "Cat " << type << " copy constructor called." << std::endl;
  brain = new Brain();
  *this = obj;
}

Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Cat " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
    *brain = *(obj.brain);
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

void Cat::setIdea(std::size_t idx, std::string idea) {
  if (!brain)
    return;
  if (idx < 0 || 100 <= idx)
    throw std::out_of_range("Index of brain out of range.");
  brain->setIdea(idx, idea);
}

std::string& Cat::getIdea(std::size_t idx) {
  if (idx < 0 || 100 <= idx)
    throw std::out_of_range("Index of brain out of range.");
  return brain->getIdea(idx);
}
