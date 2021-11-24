#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#include <iostream>

int main(void) {
  IMateriaSource* src = new MateriaSource();
  std::cout << std::endl;
  Ice* ice = new Ice();
  std::cout << std::endl;
  src->learnMateria(ice);
  std::cout << std::endl;
  delete ice;
  std::cout << std::endl;
  Cure* cure = new Cure();
  std::cout << std::endl;
  src->learnMateria(cure);
  std::cout << std::endl;
  delete cure;
  std::cout << std::endl;

  ICharacter* me = new Character("me");
  std::cout << std::endl;

  AMateria* tmp;
  std::cout << std::endl;
  tmp = src->createMateria("ice");
  std::cout << std::endl;
  me->equip(tmp);
  std::cout << std::endl;
  tmp = src->createMateria("cure");
  std::cout << std::endl;
  me->equip(tmp);
  std::cout << std::endl;

  ICharacter* bob = new Character("bob");
  std::cout << std::endl;

  me->use(0, *bob);
  std::cout << std::endl;
  me->use(1, *bob);
  std::cout << std::endl;

  delete bob;
  std::cout << std::endl;
  delete me;
  std::cout << std::endl;
  delete src;

  return 0;
}
