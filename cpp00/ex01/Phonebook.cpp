#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	_cnt = 0;
	_idx = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::_print_contact_table()
{
	int	loop_cnt;

	loop_cnt = _cnt;
	if (loop_cnt > _max_contact_num)
		loop_cnt = _max_contact_num;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|         #|First.N   |Last.N    |Nickname  |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i < loop_cnt; i++)
		_contact[i].print_contact_as_table_line(i);
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void	Phonebook::add_contact()
{
	if (_contact[_idx].add_contact())
	{
		_idx = ++_idx % _max_contact_num;
		_cnt++;
	}
}

void	Phonebook::search_contact()
{
	int		i;

	_print_contact_table();
	std::cout << "Input contact number to show the details: ";
	std::cin >> i;
	if (std::cin.bad() || std::cin.eof())
	{
		std::cout << std::endl << "Aborted." << std::endl;
		return ;
	}
	else if (std::cin.fail() || i < 0 || _cnt <= i || _max_contact_num <= i)
	{
		std::cout << "Invalid number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	_contact[i].print_contact_detail();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
