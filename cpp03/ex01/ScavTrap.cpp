#include "ScavTrap.hpp"

#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hit_points = 100;
  _energy_points = 50;
  _attack_damage = 20;
  std::cout << "ScavTrap " << _name << " constructor called." << std::endl;
  showStatus();
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap " << _name << " destructor called." << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
