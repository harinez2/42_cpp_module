#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*z;

	z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].set_name(name + std::to_string(i));
	}
	for (int i = 0; i < N; i++)
	{
		z[i].announce();
	}
	
	return (z);
}
