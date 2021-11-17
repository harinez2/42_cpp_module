#include "Ice.hpp"

#include <iostream>

Ice::Ice() {
  type = "ice";
  std::cout << "Ice " << type << " constructor called." << std::endl;
}

Ice::Ice(const Ice & obj) {
  std::cout << "Ice " << type << " copy constructor called." << std::endl;
  *this = obj;
}

Ice& Ice::operator=(const Ice& obj) {
  std::cout << "Ice " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
  }
  return *this;
}

Ice::~Ice() {
  std::cout << "Ice " << type << " destructor called." << std::endl;
}

AMateria* Ice::clone() const {
  std::cout << "Ice clone() called." << std::endl;
  return new Ice(*this);
}

void Ice::use(ICharacter& target) {
  std::cout << "Ice use() called." << std::endl;
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
