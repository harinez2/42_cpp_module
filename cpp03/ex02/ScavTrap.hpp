#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string name);
  ~ScavTrap(void);

  void guardGate(void);

 protected:
  static const int kHitPointsInitValue = 100;
  static const int kEnergyPointsInitValue = 50;
  static const int kAttackDamageInitValue = 20;
};

#endif
