#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	m_cnt = 0;
	m_idx = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::_print_contact_table()
{
	int	loop_cnt;

	loop_cnt = m_cnt;
	if (loop_cnt > MAX_CONATCT_NUM)
		loop_cnt = MAX_CONATCT_NUM;
	std::cout << "+--+----------+----------+----------+" << std::endl;
	std::cout << "| #|First.N   |Last.N    |Nickname  +" << std::endl;
	std::cout << "+--+----------+----------+----------+" << std::endl;
	for (int i = 0; i < loop_cnt; i++)
		m_contact[i].print_contact_as_table_line(i);
	std::cout << "+--+----------+----------+----------+" << std::endl;
}

void	Phonebook::add_contact()
{
	m_contact[m_idx].add_contact();
	m_idx = ++m_idx % MAX_CONATCT_NUM;
	m_cnt++;
}

void	Phonebook::search_contact()
{
	int		i;

	_print_contact_table();
	std::cout << "  Input contact number:";
	std::cin >> i;
	if (i < 0 || MAX_CONATCT_NUM < i || m_cnt <= i)
	{
		std::cout << "Invalid number." << std::endl;
		return ;
	}
	m_contact[i].print_contact_detail();
}
