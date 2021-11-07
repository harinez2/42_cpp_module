#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	type = "Dog";
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow-wow" << std::endl;
}
