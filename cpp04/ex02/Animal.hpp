#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string		type;
public:
	Animal(void);
	Animal&			operator=(const Animal& obj);
	virtual ~Animal(void);

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
};

#endif
