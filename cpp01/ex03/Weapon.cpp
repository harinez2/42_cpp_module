#include "Weapon.hpp"

Weapon::Weapon()
{
	setType("");
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string	&Weapon::getType()
{
	return (_type);
}
