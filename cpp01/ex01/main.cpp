#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int		main(void)
{
	Zombie	*z;
	int		N = 3;
	
	z = zombieHorde(N, "zom");
	for (int i = 0; i < N; ++i)
	{
		z[i].announce();
	}
	delete[] z;

	return (0);
}
