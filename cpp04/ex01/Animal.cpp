#include "Animal.hpp"

#include <iostream>
#include <string>

Animal::Animal() : type("Animal") {
  std::cout << "Animal " << type << " constructor called." << std::endl;
}

Animal::Animal(const Animal& obj) {
  *this = obj;
  std::cout << "Animal " << type << " copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& obj) {
  if (this != &obj) {
    type = obj.type;
  }
  std::cout << "Animal " << type << " operator= called." << std::endl;
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal " << type << " destructor called." << std::endl;
}

std::string	Animal::getType() const { return type; }

void Animal::makeSound() const
{
  std::cout << "Wowow" << std::endl;
}
