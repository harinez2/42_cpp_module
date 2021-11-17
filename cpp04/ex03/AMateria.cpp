#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria() {
  std::cout << "AMateria " << type << " constructor called." << std::endl;
}

AMateria::AMateria(const AMateria& obj) {
  std::cout << "AMateria " << type << " copy constructor called." << std::endl;
  *this = obj;
}

AMateria& AMateria::operator=(const AMateria& obj) {
  std::cout << "AMateria " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
  }
  return *this;
}

AMateria::~AMateria() {
  std::cout << "AMateria " << type << " destructor called." << std::endl;
}

std::string const& AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target) {
  std::cout << "AMateria use() called. Character name is " << target.getName() << std::endl;
}
