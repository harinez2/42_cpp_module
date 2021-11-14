#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _hit_points = kHitPointsInitValue;
  _energy_points = kEnergyPointsInitValue;
  _attack_damage = kAttackDamageInitValue;
  std::cout << "FragTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap " << name_ << " destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "Hey guys, let's do high five!" << std::endl;
}
