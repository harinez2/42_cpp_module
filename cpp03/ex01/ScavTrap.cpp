#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	_name = obj.getName();
	_hit_points = obj.getHitPoints();
	_energy_points = obj.getEnergyPoints();
	_attack_damage = obj.getAttackPoints();
	return (*this);
}

ScavTrap::~ScavTrap()
{
}
