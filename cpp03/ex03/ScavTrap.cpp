#include "ScavTrap.hpp"

#include <iostream>
#include <string>

const int ScavTrap::kHitPointsInitValue_ = 100;
const int ScavTrap::kEnergyPointsInitValue_ = 50;
const int ScavTrap::kAttackDamageInitValue_ = 20;

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hit_points_ = kHitPointsInitValue_;
  energy_points_ = kEnergyPointsInitValue_;
  attack_damage_ = kAttackDamageInitValue_;
  std::cout << "ScavTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {
  *this = obj;
  std::cout << "ScavTrap " << name_ << " copy constructor called." << std::endl;
  showStatus();
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
  if (this != &obj) {
    name_ = obj.getName();
    hit_points_ = obj.getHitPoints();
    energy_points_ = obj.getEnergyPoints();
    attack_damage_ = obj.getAttackDamage();
  }
  std::cout << "ScavTrap " << name_ << " operator= called." << std::endl;
  return *this;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap " << name_ << " destructor called." << std::endl;
}

void ScavTrap::attack(std::string const& target) {
  if (energy_points_ >= attack_damage_) {
    energy_points_ -= attack_damage_;
    std::cout << "ScavTrap " << name_ << " attacks " << target;
    std::cout << ", causing " << attack_damage_ << " points of damage!" << std::endl;
  } else {
    std::cout << "Lacked energy of ScavTrap " << name_ << "!" << std::endl;
  }
  showStatus();
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
