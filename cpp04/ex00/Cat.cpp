#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	type = "Cat";
}

Cat::~Cat(void)
{
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
