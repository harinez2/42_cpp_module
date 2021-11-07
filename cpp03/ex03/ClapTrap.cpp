#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name),
		_hit_points(_hit_points_init),
		_energy_points(_energy_points_init),
		_attack_damage(_attack_damage_init)
{
	std::cout << "ClapTrap " << _name << " constructor called." << std::endl;
	showStatus();
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "ClapTrap " << _name << " copy constructor called." << std::endl;
	showStatus();
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	_name = obj.getName();
	_hit_points = obj.getHitPoints();
	_energy_points = obj.getEnergyPoints();
	_attack_damage = obj.getAttackDamage();
	std::cout << "ClapTrap " << _name << " operator= called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called." << std::endl;
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

int	ClapTrap::getAttackDamage(void) const
{
	return _attack_damage;
}

void ClapTrap::showStatus(void) const
{
	std::cout << "  name:" << getName() << ", hitpoint:" << getHitPoints();
	std::cout << ", energy points:" << getEnergyPoints() << ", attackdamage:" << getAttackDamage();
	std::cout << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	_energy_points -= _attack_damage;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _attack_damage << " points of damage!" << std::endl;
	showStatus();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "takeDamage " << amount << std::endl;
	_hit_points -= amount;
	showStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired " << amount << std::endl;
	_hit_points += amount;
	showStatus();
}
