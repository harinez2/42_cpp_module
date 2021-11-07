#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string		type;
public:
	Animal(void);
	~Animal(void);

	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif
