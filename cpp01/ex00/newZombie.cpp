#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie		*zom1;

	zom1 = new Zombie(name);
	return (zom1);
}
