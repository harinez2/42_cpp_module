#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog construcotr called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog&	Dog::operator=(const Dog& obj)
{
	brain = new Brain(obj.brain);
	return *this;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog destrucotr called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bow-wow" << std::endl;
}
