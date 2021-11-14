#include "DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name + "_clap_name"),
      ScavTrap(name + "_clap_name"),
      name_(name) {
  _hit_points = FragTrap::kHitPointsInitValue;
  _energy_points = ScavTrap::kEnergyPointsInitValue;
  _attack_damage = FragTrap::kAttackDamageInitValue;

  std::cout << "DiamondTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap " << name_ << " destructor called." << std::endl;
}

void DiamondTrap::attack(std::string const & target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
  std::cout << "I am " << name_ << ", and my ClapTrap name is " << ClapTrap::name_ << std::endl;
}
