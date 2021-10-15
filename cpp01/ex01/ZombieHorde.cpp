#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	// Zombie	*z;

	// z = new Zombie[N];
	// (void)name;
	// return (z);

	
	Zombie	*z;

	// z = new Zombie*[N];
	z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		// z[i] = new Zombie(name + std::to_string(i));
		z[i].set_name(name + std::to_string(i));
	}
	for (int i = 0; i < N; i++)
		z[i].announce();
	
	return (z);
}
