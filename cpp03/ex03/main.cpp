#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap me("me");
	me.whoAmI();
	me.attack("enemy");
	me.takeDamage(10);
	me.beRepaired(10);
	me.highFivesGuys();
	return 0;
}
