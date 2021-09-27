#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool	Contact::add_contact()
{
	std::cout << "Input contact informatin." << std::endl;
	for (int i = 0; i < _param_cnt; i++)
	{
		std::cout << "  (" << std::setw(2) << i + 1 << "/" << _param_cnt
			<< ") " << _param_name[i] << ": ";
		// std::cin >> _param_value[i];
  		if (!std::getline(std::cin, _param_value[i]))
		// if (std::cin.eof())
		{
			std::cout << std::endl << "Aborted." << std::endl;
			return false;
		}
	}
	std::cout << "Completed adding contact information!" << std::endl;
	return true;
}

void	Contact::print_contact_detail()
{
	for (int i = 0; i < _param_cnt; i++)
	{
		std::cout << "  " << _param_name[i] << ": " << _param_value[i] << std::endl;
	}
}

void	Contact::print_contact_as_table_line(int i)
{
	std::cout << "|" << std::setw(2) << i << "|";
	for (int i = 0; i < 3; i++)
	{
		if (_param_value[i].length() > 10)
			std::cout << std::setw(9) << std::left << _param_value[i].substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::left << _param_value[i].substr(0, 10) << "|";
	}
	std::cout << std::endl;
}
