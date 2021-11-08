#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
	this->type = "ice";
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	(void)target;
	std::cout << "* shoots an ice bolt at " << type << " *" << std::endl;
}
