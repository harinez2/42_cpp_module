#include "Weapon.hpp"
#include <string>

Weapon::Weapon() : type("")
{
}

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}
