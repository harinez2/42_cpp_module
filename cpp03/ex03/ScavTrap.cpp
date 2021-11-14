#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hit_points_ = kHitPointsInitValue;
  energy_points_ = kEnergyPointsInitValue;
  attack_damage_ = kAttackDamageInitValue;
  std::cout << "ScavTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap " << name_ << " destructor called." << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
