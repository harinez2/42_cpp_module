#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static const int		slot_max = 4;
	int						slot_idx;
	AMateria*				slot[slot_max];
public:
	MateriaSource();
	~MateriaSource();

	virtual void			learnMateria(AMateria*);
	virtual AMateria*		createMateria(std::string const & type);
};

#endif
