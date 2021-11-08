#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria & obj)
{
	*this = obj;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
	{

	}
	return *this;
}

std::string const&	AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
