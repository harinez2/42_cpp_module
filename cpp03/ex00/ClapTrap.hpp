#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
public:
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap&			operator=(const ClapTrap& obj);
	~ClapTrap();
};

#endif
