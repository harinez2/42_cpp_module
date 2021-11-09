#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string					name;
	AMateria*					materia[4];
	bool						equipped[4];

public:
	Character(const std::string name);
	Character(const Character & obj);
	~Character();

	virtual std::string const &	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif
