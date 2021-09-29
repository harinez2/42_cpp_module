#include "Contact.hpp"

const std::string	Contact::_param_name[_param_cnt] =
{
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::add_contact()
{
	std::cout << "Input contact informatin." << std::endl;
	for (int i = 0; i < _param_cnt; i++)
	{
		std::cout << "  (" << std::setw(2) << std::right
			<< i + 1 << "/" << _param_cnt << ") " << _param_name[i] << ": ";
  		if (!std::getline(std::cin, _param_value[i]))
		{
			std::cout << std::endl << "Aborted." << std::endl;
			std::exit(1);
		}
	}
	std::cout << "Completed adding contact information!" << std::endl;
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
	std::cout << "|" << std::setw(10) << std::right << i << "|";
	for (int i = 0; i < 3; i++)
	{
		if (_param_value[i].length() > 10)
			std::cout << std::setw(9) << std::left << _param_value[i].substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::left << _param_value[i].substr(0, 10) << "|";
	}
	std::cout << std::endl;
}
