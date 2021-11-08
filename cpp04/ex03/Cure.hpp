#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
protected:

public:
	Cure();
	Cure(const Cure & obj);

	virtual Cure*			clone() const;
	virtual void			use(ICharacter& target);
};

#endif
