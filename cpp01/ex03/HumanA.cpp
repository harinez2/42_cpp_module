#include "HumanA.hpp"

HumanA::HumanA()
{
	_weapon.setType("wep-type");
}

HumanA::HumanA(std::string name)
{
	_name = name;
	_weapon.setType("wep-type");
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
