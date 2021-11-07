#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
}

Animal::~Animal(void)
{
}

std::string	Animal::getType(void) const
{
	return type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Wowow" << std::endl;
}
