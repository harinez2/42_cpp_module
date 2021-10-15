#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int		main(void)
{
	Zombie	*z;
	int		N;
	
	N = 3;
	z = zombieHorde(N, "zom");
	for (int i = 0; i < N; i++)
	{
		z[i].announce();
		// (z + i)->announce();
		// z++;
	}
	// for (int i = 0; i < N; i++)
	// {
	// 	delete (z+i);
	// }
	delete[] z;

	return (0);
}
