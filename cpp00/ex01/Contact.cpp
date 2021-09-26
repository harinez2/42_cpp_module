#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::add_contact()
{
	std::cout << "Input contact informatin." << std::endl;
	std::cout << "  ( 1/11) First name: ";
	std::cin >> m_first_name;
	std::cout << "  ( 2/11) Last name: ";
	std::cin >> m_last_name;
	std::cout << "  ( 3/11) Nick name: ";
	std::cin >> m_nickname;
	std::cout << "  ( 4/11) Login: ";
	std::cin >> m_login;
	std::cout << "  ( 5/11) Postal address: ";
	std::cin >> m_postal_address;
	std::cout << "  ( 6/11) Email address: ";
	std::cin >> m_email_address;
	std::cout << "  ( 7/11) Phone number: ";
	std::cin >> m_phone_number;
	std::cout << "  ( 8/11) Birthday date: ";
	std::cin >> m_birthday_date;
	std::cout << "  ( 9/11) Favorite meal: ";
	std::cin >> m_favorite_meal;
	std::cout << "  (10/11) Underware color: ";
	std::cin >> m_underwear_color;
	std::cout << "  (11/11) darkest secret: ";
	std::cin >> m_darkest_seret;
	std::cout << "Completed adding contact information!" << std::endl;
}

void	Contact::print_contact_detail()
{
	std::cout << "  First name: " << m_first_name << std::endl;
	std::cout << "  Last name: " << m_last_name << std::endl;
	std::cout << "  Nick name: " << m_nickname << std::endl;
	std::cout << "  Login: " << m_login << std::endl;
	std::cout << "  Postal address: " << m_postal_address << std::endl;
	std::cout << "  Email address: " << m_email_address << std::endl;
	std::cout << "  Phone number: " << m_phone_number << std::endl;
	std::cout << "  Birthday date: " << m_birthday_date << std::endl;
	std::cout << "  Favorite meal: " << m_favorite_meal << std::endl;
	std::cout << "  Underware color: " << m_underwear_color << std::endl;
	std::cout << "  darkest secret: " << m_darkest_seret << std::endl;
}

void	Contact::print_contact_as_table_line(int i)
{
	std::cout << "|" << std::setw(2) << i << "|";
	if (m_first_name.length() > 10)
		std::cout << std::setw(9) << std::left << m_first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::left << m_first_name.substr(0, 10) << "|";
	if (m_last_name.length() > 10)
		std::cout << std::setw(9) << std::left << m_last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::left << m_last_name.substr(0, 10) << "|";
	if (m_nickname.length() > 10)
		std::cout << std::setw(9) << std::left << m_nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::left << m_nickname.substr(0, 10) << "|";
	std::cout << std::endl;
}
