#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat(void)
{
	delete brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
