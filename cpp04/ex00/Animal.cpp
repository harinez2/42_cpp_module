#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
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
