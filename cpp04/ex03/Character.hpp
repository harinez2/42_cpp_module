#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	static const int			slot_max = 4;
	std::string					name;
	AMateria*					slot[slot_max];
	bool						equipped[slot_max];

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
