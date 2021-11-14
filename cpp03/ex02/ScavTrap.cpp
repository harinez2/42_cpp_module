#include "ScavTrap.hpp"

#include <iostream>
#include <string>

const int ScavTrap::kHitPointsInitValue = 100;
const int ScavTrap::kEnergyPointsInitValue = 50;
const int ScavTrap::kAttackDamageInitValue = 20;

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
