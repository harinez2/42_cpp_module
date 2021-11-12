#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
  DiamondTrap(std::string name);
  ~DiamondTrap(void);

  void attack(std::string const & target);
  void whoAmI(void);

 private:
  std::string _name;
};

#endif
