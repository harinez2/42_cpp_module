#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int	i = 1;
	while (i < argc)
	{
		char	*s = argv[i];
		while (*s)
		{
			std::cout << (char)toupper(*s);
			s++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
