#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include <string>

MateriaSource::MateriaSource() : slot_idx(0)
{
}

MateriaSource::~MateriaSource()
{
	while (slot_idx > 0)
		delete slot[--slot_idx];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (slot_idx >= slot_max)
		return;
	slot[slot_idx++] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < slot_idx; ++i)
	{
		if (type == slot[i]->getType())
			return slot[i]->clone();
	}
	return NULL;
}
