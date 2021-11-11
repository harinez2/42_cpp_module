#include <iostream>
#include <fstream>
#include <string>

static int	read_from_file(char* filename, std::string &read_data)
{
	std::ifstream	ifs(filename);
	if (!ifs)
	{
		std::cerr << "Failed to open file: " << filename << std::endl;
		return (-1);
	}

	std::string	buf;
	int	newline_flg = 0;
	while (std::getline(ifs, buf))
	{
		if (newline_flg)
			read_data += '\n';
		else
			newline_flg = 1;
		read_data += buf;
	}
	return (0);
}

static void	replace_str(
		std::string &read_data, std::string replacing_str, std::string replaced_str)
{
	std::string::size_type pos = read_data.find(replacing_str);
	while (pos != std::string::npos)
	{
		read_data.erase(pos, replacing_str.length());
		read_data.insert(pos, replaced_str);
		pos = read_data.find(replacing_str, pos + replaced_str.length());
	}
}

static int	write_to_file(char* filename, std::string &read_data)
{
	std::string out_filename(filename);
	out_filename.append(".replace");

	std::ofstream	ofs(out_filename.c_str());
	if (!ofs)
	{
		std::cerr << "Failed to open file: " << filename << std::endl;
		return (-1);
	}
	ofs << read_data;
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <replacing_str> <replaced_str>" << std::endl;
		return (0);
	}

	std::string	read_data;
	if (read_from_file(argv[1], read_data) != 0)
		return (-1);
	replace_str(read_data, argv[2], argv[3]);
	if (write_to_file(argv[1], read_data) != 0)
		return (-1);
	return (0);
}
