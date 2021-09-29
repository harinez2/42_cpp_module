#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	static const int	_param_cnt = 5;
	const std::string	_param_name[_param_cnt] =
	{
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};
	std::string			_param_value[_param_cnt];
public:
	Contact();
	~Contact();
	void				add_contact();
	void				print_contact_detail();
	void				print_contact_as_table_line(int i);
};

#endif
