#include "Character.hpp"

Character::Character(const std::string name) : name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		equipped[i] = false;
		materia[i] = NULL;
	}
}

Character::Character(const Character & obj)
{
	//deep
}

Character::~Character()
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
	equipped[idx] = true;
	materia[idx] = NULL;
}
