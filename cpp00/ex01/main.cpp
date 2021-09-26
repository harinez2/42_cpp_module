
#include <iostream>
#include <string>
#include "Phonebook.hpp"

int	main()
{
	std::string		cmd;
	Phonebook		b;

	std::cout << "\\\\\\ Welcome to PhoneBook!! ///" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	while (std::cin)
	{
		std::cout << "> ";
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			b.add_contact();
		else if (cmd.compare("SEARCH") == 0)
			b.search_contact();
		else if (cmd.compare("EXIT") == 0 || cmd.compare("") == 0)
			break ;
		else
			std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
