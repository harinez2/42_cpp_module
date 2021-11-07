#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain construcotr called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	*this = obj;
}

Brain::Brain(const Brain* obj)
{
	*this = *obj;
}

Brain&	Brain::operator=(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destrucotr called" << std::endl;
}
