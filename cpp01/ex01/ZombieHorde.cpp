#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*z;

	z = new Zombie[N];
	(void)name;
	// for (int i = 0; i < N; i++)
	// {
	// 	z[i] = new Zombie(name);
	// }
	return (z);
}
