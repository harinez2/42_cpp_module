#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

#include <iostream>
#include <string>

MateriaSource::MateriaSource() : slot_idx_(0) {
  std::cout << "MateriaSource constructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
  std::cout << "MateriaSource copy constructor called." << std::endl;
  *this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
  std::cout << "MateriaSource operator= called." << std::endl;
  if (this != &obj) {
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called." << std::endl;
  while (slot_idx_ > 0)
    delete slot_[--slot_idx_];
}

void MateriaSource::learnMateria(AMateria* m) {
  std::cout << "MateriaSource learnMateria() called." << std::endl;
  if (slot_idx_ >= kSlotMax_)
    return;
  slot_[slot_idx_++] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  std::cout << "MateriaSource createMateria() called." << std::endl;
  for (int i = 0; i < slot_idx_; ++i) {
    if (type == slot_[i]->getType())
      return slot_[i]->clone();
  }
  return NULL;
}
