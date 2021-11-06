#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"),
		ScavTrap(name + "_clap_name"), _name(name)
{
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	
	std::cout << "DiamondTrap " << _name << " constructor called." << std::endl;
	showStatus();
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destructor called." << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << _name << ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
