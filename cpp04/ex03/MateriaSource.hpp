#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource();
  MateriaSource(const MateriaSource& obj);
  MateriaSource& operator=(const MateriaSource& obj);
  virtual ~MateriaSource();

  virtual void learnMateria(AMateria*);
  virtual AMateria* createMateria(std::string const& type);

 private:
  static const int kSlotMax_ = 4;
  int slot_idx_;
  AMateria* slot_[kSlotMax_];

};

#endif
