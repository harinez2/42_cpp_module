#include "HumanA.hpp"

HumanA::HumanA()
{
	_weapon.setType("weapon-type");
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	_name = name;
	_weapon = weapon;
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
