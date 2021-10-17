#include "HumanA.hpp"

// HumanA::HumanA() : _weapon(Weapon("default weapon"))
// {
// 	// Weapon *w;
// 	// w = new Weapon("default weapon");
// 	Weapon w("default weapon");
// 	&_weapon = w;
// }

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
	// &_weapon = weapon;
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
