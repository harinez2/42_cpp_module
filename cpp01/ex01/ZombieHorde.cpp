#include "Zombie.hpp"
#include <string>
#include <sstream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie				*z;
	std::ostringstream	oss;

	z = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		oss << i;
		z[i].set_name(name + oss.str());
		oss.str("");
	}
	
	return (z);
}
