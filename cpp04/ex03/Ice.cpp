#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
	this->type = "ice";
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << type << " *" << std::endl;
}
