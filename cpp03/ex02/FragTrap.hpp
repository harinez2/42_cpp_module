#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap : public ClapTrap {
 public:
  FragTrap(std::string name);
  ~FragTrap(void);

  void highFivesGuys(void);

 protected:
  static const int kHitPointsInitValue = 100;
  static const int kEnergyPointsInitValue = 100;
  static const int kAttackDamageInitValue = 30;
};

#endif
