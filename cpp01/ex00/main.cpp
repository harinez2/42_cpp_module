#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int		main(void)
{
	Zombie	*z;
	
	z = newZombie("zom1");
	z->announce();
	delete z;

	randomChump("zom2");

	return (0);
}
