#include "Character.hpp"

#include <iostream>
#include <string>

Character::Character(const std::string name) : name_(name) {
  std::cout << "Character " << name_ << " constructor called." << std::endl;
  for (int i = 0; i < kSlotMax_; ++i) {
    slot_[i] = NULL;
    equipped_[i] = false;
  }
}

Character::Character(const Character & obj) {
  std::cout << "Character " << name_ << " copy constructor called." << std::endl;
  for (int i = 0; i < kSlotMax_; ++i) {
    slot_[i] = NULL;
    equipped_[i] = false;
  }
  *this = obj;
}

Character& Character::operator=(const Character& obj) {
  std::cout << "Character " << name_ << " operator= called." << std::endl;
  if (this != &obj) {
    name_ = obj.name_;
    for (int i = 0; i < kSlotMax_; ++i) {
      if (slot_[i])
        delete slot_[i];
      if (obj.slot_[i])
        slot_[i] = obj.slot_[i]->clone();
      else
        slot_[i] = NULL;
      equipped_[i] = obj.equipped_[i];
    }
  }
  return *this;
}

Character::~Character() {
  std::cout << "Character " << name_ << " destructor called." << std::endl;
  for (int i = 0; i < kSlotMax_; ++i)
    if (slot_[i])
      delete slot_[i];
}

std::string const& Character::getName() const { return name_; }

void Character::equip(AMateria* m) {
  std::cout << "Character equip() called." << std::endl;
  if (!m)
    return;

  for (int i = 0; i < kSlotMax_; ++i) {
    if (slot_[i] == NULL) {
      slot_[i] = m;
      equipped_[i] = true;
      return;
    }
  }
  delete m;
}

void Character::unequip(int idx) {
  std::cout << "Character unequip() called." << std::endl;
  if (idx < 0 || kSlotMax_ <= idx)
    return;

  equipped_[idx] = false;
}

void Character::use(int idx, ICharacter& target) {
  std::cout << "Character use() called." << std::endl;
  if (idx < 0 || kSlotMax_ <= idx)
    return;

  if (equipped_[idx] == true)
    slot_[idx]->use(target);
}
