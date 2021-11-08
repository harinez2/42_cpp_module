#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	this->type = "cure";
}

AMateria*	Cure::clone() const
{
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << type << "’s wounds *" << std::endl;
}
