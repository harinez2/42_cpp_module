#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string		m_first_name;
	std::string		m_last_name;
	std::string		m_nickname;
	std::string		m_login;
	std::string		m_postal_address;
	std::string		m_email_address;
	std::string		m_phone_number;
	std::string		m_birthday_date;
	std::string		m_favorite_meal;
	std::string		m_underwear_color;
	std::string		m_darkest_seret;
public:
	Contact();
	~Contact();
	void	add_contact();
	void	print_contact_detail();
	void	print_contact_as_table_line(int i);
};

#endif
