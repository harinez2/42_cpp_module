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
}

void	Zombie::announce()
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
