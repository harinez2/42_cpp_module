#include "ClapTrap.hpp"

#include <iostream>
#include <string>

const int ClapTrap::kHitPointsInitValue_ = 10;
const int ClapTrap::kEnergyPointsInitValue_ = 10;
const int ClapTrap::kAttackDamageInitValue_ = 0;

ClapTrap::ClapTrap(std::string name)
    : name_(name),
      hit_points_(kHitPointsInitValue_),
      energy_points_(kEnergyPointsInitValue_),
      attack_damage_(kAttackDamageInitValue_) {
  std::cout << "ClapTrap " << name_ << " constructor called." << std::endl;
  showStatus();
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
  *this = obj;
  std::cout << "ClapTrap " << name_ << " copy constructor called." << std::endl;
  showStatus();
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
  if (this != &obj) {
    name_ = obj.getName();
    hit_points_ = obj.getHitPoints();
    energy_points_ = obj.getEnergyPoints();
    attack_damage_ = obj.getAttackDamage();
  }
  std::cout << "ClapTrap " << name_ << " operator= called." << std::endl;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name_ << " destructor called." << std::endl;
}

std::string ClapTrap::getName(void) const { return name_; }
int ClapTrap::getHitPoints(void) const { return hit_points_; }
int ClapTrap::getEnergyPoints(void) const { return energy_points_; }
int ClapTrap::getAttackDamage(void) const { return attack_damage_; }

void ClapTrap::showStatus(void) const {
  std::cout << "  Status:  name:" << getName() << ", hitpoint:" << getHitPoints();
  std::cout << ", energy points:" << getEnergyPoints() << ", attackdamage:" << getAttackDamage();
  std::cout << std::endl;
}

void ClapTrap::attack(std::string const& target) {
  if (energy_points_ >= attack_damage_) {
    energy_points_ -= attack_damage_;
    std::cout << "ClapTrap " << name_ << " attacks " << target;
    std::cout << ", causing " << attack_damage_ << " points of damage!" << std::endl;
  } else {
    std::cout << "Lacked energy of ClapTrap " << name_ << "!" << std::endl;
  }
  showStatus();
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "takeDamage " << amount << std::endl;
  hit_points_ -= amount;
  if (hit_points_ < 0)
    hit_points_ = 0;
  showStatus();
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << "beRepaired " << amount << std::endl;
  hit_points_ += amount;
  showStatus();
}
