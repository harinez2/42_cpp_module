#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap : public ClapTrap {
 public:
  FragTrap(std::string name);
  FragTrap(const FragTrap& obj);
  FragTrap& operator=(const FragTrap& obj);
  ~FragTrap(void);

  void highFivesGuys(void);

 protected:
  static const int kHitPointsInitValue_;
  static const int kEnergyPointsInitValue_;
  static const int kAttackDamageInitValue_;
};

#endif
