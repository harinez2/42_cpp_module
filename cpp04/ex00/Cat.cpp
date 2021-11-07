#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
