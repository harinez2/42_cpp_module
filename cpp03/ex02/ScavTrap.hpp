#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& obj);
  ScavTrap& operator=(const ScavTrap& obj);
  ~ScavTrap(void);

  void attack(std::string const& target);
  void guardGate(void);

 protected:
  static const int kHitPointsInitValue_;
  static const int kEnergyPointsInitValue_;
  static const int kAttackDamageInitValue_;
};

#endif
