#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit_points(0), _energy_points(0), _attack_damage(0)
{
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	_name = obj.getName();
	_hit_points = obj.getHitPoints();
	_energy_points = obj.getEnergyPoints();
	_attack_damage = obj.getAttackPoints();
	return (*this);
}

ClapTrap::~ClapTrap()
{
}

std::string	ClapTrap::getName(void) const
{
	return _name;
}

int	ClapTrap::getHitPoints(void) const
{
	return _hit_points;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return _energy_points;
}

int	ClapTrap::getAttackPoints(void) const
{
	return _attack_damage;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired" << amount << std::endl;
}
