#include "Character.hpp"

Character::Character(const std::string name) : name(name)
{
	for (int i = 0; i < slot_max; ++i)
	{
		equipped[i] = false;
		slot[i] = NULL;
	}
}

Character::Character(const Character & obj)
{
	(void)obj;
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
	for (int i = 0; i < slot_max; ++i)
	{
		if (slot[i] == NULL)
		{
			slot[i] = m;
			return;
		}
	}
	delete m;
}

void	Character::unequip(int idx)
{
	delete slot[idx];
	slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (slot[idx])
		slot[idx]->use(target);
}
