#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include "Contact.hpp"

class Phonebook
{
private:
	static const int	_max_contact_num = 8;
	Contact				_contact[_max_contact_num];
	int					_cnt;
	int					_idx;
	void				_print_contact_table();
public:
	Phonebook();
	~Phonebook();
	void				add_contact();
	void				search_contact();
};

#endif
