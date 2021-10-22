#include "Karen.hpp"

static void	print_insufficient_msg(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	std::cout << std::endl;
}

static int	get_print_level(char *msg_level)
{
	const int msg_level_len = 4;
	std::string msg_level_txt[msg_level_len] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int	print_level = -1;
	for (int i = 0; i < msg_level_len; i++)
	{
		if (msg_level == msg_level_txt[i])
		{
			print_level = i;
			break ;
		}
	}
	return (print_level);
}

static void	print_filtered_msg(int print_level)
{
	enum msg_level_num {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	Karen k;
	switch (print_level)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			k.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			k.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			k.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			k.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			print_insufficient_msg();
	};
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);

	int print_level = get_print_level(argv[1]);
	print_filtered_msg(print_level);
	return (0);
}
