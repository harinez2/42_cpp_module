#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	const int	_param_cnt = 11;
	const std::string	_param_name[11] =
	{
		"First name",
		"Last name",
		"Nick name",
		"Login",
		"Postal address",
		"Email address",
		"Phone number",
		"Birthday date",
		"Favorite meal",
		"Underware color",
		"darkest secret"
	};
	std::string	_param_value[11];
public:
	Contact();
	~Contact();
	bool	add_contact();
	void	print_contact_detail();
	void	print_contact_as_table_line(int i);
};

#endif
