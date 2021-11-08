#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include <string>

MateriaSource::MateriaSource()
{

}

MateriaSource::~MateriaSource()
{

}

void	MateriaSource::learnMateria(AMateria* m)
{
	(void)m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	(void)type;
	return new Ice();
}
