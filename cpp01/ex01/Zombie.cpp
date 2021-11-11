#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() : _name("no-name-zombie")
{
}

Zombie::Zombie(std::string s) : _name(s)
{
}

Zombie::~Zombie()
{
	std::cout << "... " << _name << " has gone to hell ..." << std::endl;
}

void	Zombie::set_name(std::string s)
{
	_name = s;
}

void	Zombie::announce(void) const
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
