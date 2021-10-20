#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::insufficient(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	std::cout << std::endl;
}

void	Karen::complain(std::string level)
{
	const int msg_level_len = 4;
	std::string msg_level_txt[msg_level_len] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	enum msg_level_num {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	int	print_level = -1;
	for (int i = 0; i < msg_level_len; i++)
	{
		if (level == msg_level_txt[i])
			print_level = i;
	}

	switch (print_level)
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break ;
		default:
			insufficient();
	};
}
