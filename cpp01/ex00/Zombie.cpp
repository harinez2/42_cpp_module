#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() : _name("no-name")
{
}

Zombie::Zombie(std::string s) : _name(s)
{
}

Zombie::~Zombie()
{
	std::cout << "... " << _name << " has gone to hell ..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
