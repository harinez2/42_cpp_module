
#include <iostream>
#include <string>
#include "Phonebook.hpp"

int	main()
{
	std::string		cmd;
	Phonebook		b;

	std::cout << "\\\\\\ Welcome to PhoneBook!! ///" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, cmd))
		{
			std::cout << std::endl;
			break ;
		}
		// if (std::cin.fail())
		// {
		// 	std::cout << "fail  Available commands: ADD, SEARCH, EXIT" << std::endl;
		// 	continue ;
		// }
		if (cmd.compare("ADD") == 0)
			b.add_contact();
		else if (cmd.compare("SEARCH") == 0)
			b.search_contact();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
