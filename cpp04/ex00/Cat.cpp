#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	type = "Cat";
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
