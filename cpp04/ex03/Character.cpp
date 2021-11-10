#include "Character.hpp"

Character::Character(const std::string name) : name(name)
{
	for (int i = 0; i < slot_max; ++i)
	{
		slot[i] = NULL;
		equipped[i] = false;
	}
}

Character::Character(const Character & obj)
{
	*this = obj;
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		name = obj.name;
		for (int i = 0; i < slot_max; ++i)
		{
			slot[i] = obj.slot[i]->clone();
			equipped[i] = obj.equipped[i];
		}
	}
	return *this;
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
	for (int i = 0; i < slot_max; ++i)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m;
			equipped[i] = true;
			return;
		}
	}
	delete m;
}

void	Character::unequip(int idx)
{
	equipped[idx] = false;
}

void	Character::use(int idx, ICharacter& target)
{
	if (equipped[idx] == true)
		slot[idx]->use(target);
}
