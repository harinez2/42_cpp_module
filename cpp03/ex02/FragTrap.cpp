#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
	showStatus();
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}
