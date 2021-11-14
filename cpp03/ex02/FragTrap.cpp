#include "FragTrap.hpp"

#include <iostream>
#include <string>

const int FragTrap::kHitPointsInitValue = 100;
const int FragTrap::kEnergyPointsInitValue = 100;
const int FragTrap::kAttackDamageInitValue = 30;

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hit_points_ = kHitPointsInitValue;
  energy_points_ = kEnergyPointsInitValue;
  attack_damage_ = kAttackDamageInitValue;
  std::cout << "FragTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap " << name_ << " destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "Hey guys, let's do high five!" << std::endl;
}
