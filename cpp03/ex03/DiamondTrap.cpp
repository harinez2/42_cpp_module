#include "DiamondTrap.hpp"

#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
      FragTrap(name + "_clap_name"),
      ScavTrap(name + "_clap_name"),
      name_(name) {
  hit_points_ = FragTrap::kHitPointsInitValue_;
  energy_points_ = ScavTrap::kEnergyPointsInitValue_;
  attack_damage_ = FragTrap::kAttackDamageInitValue_;

  std::cout << "DiamondTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
    : ClapTrap(obj),
      FragTrap(obj),
      ScavTrap(obj) {
  *this = obj;
  std::cout << "DiamondTrap " << name_ << " copy constructor called." << std::endl;
  showStatus();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) {
  if (this != &obj) {
    name_ = obj.getName();
    hit_points_ = obj.getHitPoints();
    energy_points_ = obj.getEnergyPoints();
    attack_damage_ = obj.getAttackDamage();
  }
  std::cout << "DiamondTrap " << name_ << " operator= called." << std::endl;
  return *this;
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
