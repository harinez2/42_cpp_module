#include "FragTrap.hpp"

#include <iostream>
#include <string>
  
const int FragTrap::kHitPointsInitValue_ = 100;
const int FragTrap::kEnergyPointsInitValue_ = 100;
const int FragTrap::kAttackDamageInitValue_ = 30;

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hit_points_ = kHitPointsInitValue_;
  energy_points_ = kEnergyPointsInitValue_;
  attack_damage_ = kAttackDamageInitValue_;
  std::cout << "FragTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj) {}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
  if (this != &obj) {
    name_ = obj.getName();
    hit_points_ = obj.getHitPoints();
    energy_points_ = obj.getEnergyPoints();
    attack_damage_ = obj.getAttackDamage();
  }
  std::cout << "FragTrap " << name_ << " operator= called." << std::endl;
  return *this;
}

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap " << name_ << " destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "Hey guys, let's do high five!" << std::endl;
}
