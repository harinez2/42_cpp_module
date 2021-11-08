#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
protected:

public:
	Ice();

	virtual void			use(ICharacter& target);
};

#endif
