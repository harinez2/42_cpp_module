#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal " << type << " constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
  std::cout << "WrongAnimal " << type << " copy constructor called." << std::endl;
  *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
  std::cout << "WrongAnimal " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
  }
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal " << type << " destructor called." << std::endl;
}

std::string	WrongAnimal::getType() const { return type; }

void WrongAnimal::makeSound() const
{
  std::cout << "Wowow" << std::endl;
}
