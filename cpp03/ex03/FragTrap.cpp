#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = _hit_points_init;
	_energy_points = _energy_points_init;
	_attack_damage = _attack_damage_init;

	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
	showStatus();
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey guys, let's do high five!" << std::endl;
}
