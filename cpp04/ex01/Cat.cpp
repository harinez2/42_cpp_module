#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat construcotr called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat destrucotr called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
