#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB() : _weapon(NULL)
{
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
