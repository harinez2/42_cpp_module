#include "Animal.hpp"

#include <iostream>
#include <string>

Animal::Animal() : type("Animal") {
  std::cout << "Animal " << type << " constructor called." << std::endl;
}

Animal::Animal(const Animal& obj) {
  std::cout << "Animal " << type << " copy constructor called." << std::endl;
  *this = obj;
}

Animal& Animal::operator=(const Animal& obj) {
  std::cout << "Animal " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
  }
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal " << type << " destructor called." << std::endl;
}

std::string	Animal::getType() const { return type; }
