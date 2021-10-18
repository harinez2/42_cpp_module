#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{

}

void	Karen::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "info" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "error" << std::endl;
}

void	Karen::complain(std::string level)
{
	void (Karen::*fp)() = (void (Karen::*)()) Karen::debug;
}
