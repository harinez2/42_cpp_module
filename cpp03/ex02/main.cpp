#include "FragTrap.hpp"

int	main(void)
{
	FragTrap me("me");
	me.attack("enemy");
	me.takeDamage(10);
	me.beRepaired(10);
	return 0;
}
