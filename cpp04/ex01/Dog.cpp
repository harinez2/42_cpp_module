#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = "Dog";
}

Dog::~Dog(void)
{
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow-wow" << std::endl;
}
