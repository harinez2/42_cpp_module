#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	return (*this);
}

ClapTrap::~ClapTrap()
{
}
