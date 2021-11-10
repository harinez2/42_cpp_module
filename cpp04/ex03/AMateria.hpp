#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
protected:
	std::string				type;

public:
	AMateria();
	AMateria(const AMateria & obj);
	AMateria &operator=(const AMateria& obj);
	virtual ~AMateria();

	std::string const&		getType() const; //Returns the materia type

	virtual AMateria*		clone() const = 0;
	virtual void			use(ICharacter& target);
};

#endif
