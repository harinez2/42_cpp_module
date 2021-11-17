#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#include <string>

class Character : public ICharacter {
 public:
  Character(const std::string name);
  Character(const Character& obj);
  Character& operator=(const Character& obj);
  ~Character();

  virtual std::string const& getName() const;

  virtual void equip(AMateria* m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter& target);

 private:
  static const int kSlotMax_ = 4;
  std::string name_;
  AMateria* slot_[kSlotMax_];
  bool equipped_[kSlotMax_];

};

#endif
