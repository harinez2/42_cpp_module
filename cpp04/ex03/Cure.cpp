#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure & obj)
{
	*this = obj;
}

Cure*	Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	(void)target;
	std::cout << "* heals " << type << "’s wounds *" << std::endl;
}
