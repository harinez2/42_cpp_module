#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

# define	MAX_CONATCT_NUM		8

class Phonebook
{
private:
	Contact	_contact[8];
	int		_cnt;
	int		_idx;
	void	_print_contact_table();
public:
	Phonebook();
	~Phonebook();
	void	add_contact();
	void	search_contact();
};

#endif
