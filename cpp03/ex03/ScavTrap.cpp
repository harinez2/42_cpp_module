#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_points = _hit_points_init;
	_energy_points = _energy_points_init;
	_attack_damage = _attack_damage_init;

	std::cout << "ScavTrap " << _name << " constructor called." << std::endl;
	showStatus();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}
