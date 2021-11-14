#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class ScavTrap : public virtual ClapTrap {
 public:
  ScavTrap(std::string name);
  ~ScavTrap(void);

  void guardGate(void);

 protected:
  static const int kHitPointsInitValue;
  static const int kEnergyPointsInitValue;
  static const int kAttackDamageInitValue;
};

#endif
