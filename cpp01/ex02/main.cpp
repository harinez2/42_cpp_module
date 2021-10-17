#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;
	
	std::cout << str << std::endl;
	std::cout << std::hex << &str << std::endl;
	std::cout << std::hex << stringPTR << std::endl;
	std::cout << std::hex << &stringREF << std::endl;

	return (0);
}