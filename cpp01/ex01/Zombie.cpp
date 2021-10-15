#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "";
}

Zombie::Zombie(std::string s)
{
	_name = s;
}

Zombie::~Zombie()
{
	std::cout << "... " << _name << " has gone to hell ..." << std::endl;
}

void	Zombie::set_name(std::string s)
{
	_name = s;
}

void	Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
