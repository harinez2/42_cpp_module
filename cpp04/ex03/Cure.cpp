#include "Cure.hpp"

#include <iostream>

Cure::Cure() {
  type = "cure";
  std::cout << "Cure " << type << " constructor called." << std::endl;
}

Cure::Cure(const Cure & obj) {
  std::cout << "Cure " << type << " copy constructor called." << std::endl;
  *this = obj;
}

Cure& Cure::operator=(const Cure& obj) {
  std::cout << "Cure " << type << " operator= called." << std::endl;
  if (this != &obj) {
    type = obj.type;
  }
  return *this;
}

Cure::~Cure() {
  std::cout << "Cure " << type << " destructor called." << std::endl;
}

AMateria* Cure::clone() const {
  std::cout << "Cure clone() called." << std::endl;
  return new Cure(*this);
}

void Cure::use(ICharacter& target) {
  std::cout << "Cure use() called." << std::endl;
  std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
