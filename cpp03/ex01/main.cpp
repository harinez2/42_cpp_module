#include "ScavTrap.hpp"

int main(void)
{
  ScavTrap me("me");
  me.attack("enemy");
  me.takeDamage(10);
  me.beRepaired(10);
  me.guardGate();
  return 0;
}
