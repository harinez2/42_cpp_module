#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal construcotr called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destrucotr called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Wowow" << std::endl;
}
