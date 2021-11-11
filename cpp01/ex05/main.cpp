#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen k;

	try
	{
		k.complain("DEBUG");
		std::cout << std::endl;

		k.complain("INFO");
		std::cout << std::endl;
		
		k.complain("WARNING");
		std::cout << std::endl;
		
		k.complain("ERROR");
		std::cout << std::endl;
		
		k.complain("not defined");
	}
	catch(char const *e)
	{
		std::cerr << e << std::endl;
	}
	return (0);
}
