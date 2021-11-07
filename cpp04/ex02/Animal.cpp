#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal construcotr called" << std::endl;
}

Animal&	Animal::operator=(const Animal& obj)
{
	type = obj.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destrucotr called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return type;
}
