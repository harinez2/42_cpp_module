#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog(void)
{
	delete brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow-wow" << std::endl;
}
