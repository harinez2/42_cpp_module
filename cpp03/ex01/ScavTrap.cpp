#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hit_points = kHitPointsInitValue;
  _energy_points = kEnergyPointsInitValue;
  _attack_damage = kAttackDamageInitValue;
  std::cout << "ScavTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap " << name_ << " destructor called." << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
