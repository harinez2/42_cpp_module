#include "Character.hpp"

Character::ICharacter() : name("character")
{

}

Character::~ICharacter()
{

}

std::string const &	Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter& target)
{

}
