#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() {
  type = "WrongCat";
  std::cout << "WrongCat " << type << " constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) {
  *this = obj;
  std::cout << "WrongCat " << type << " copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
  if (this != &obj) {
    type = obj.type;
  }
  std::cout << "WrongCat " << type << " operator= called." << std::endl;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat " << type << " destructor called." << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "Meow" << std::endl;
}
