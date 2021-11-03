#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap me("me");
	me.attack("enemy");
	me.takeDamage(10);
	me.beRepaired(10);
	return 0;
}
