#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie();
	Zombie(std::string s);
	~Zombie();
	void			announce(void);
};

#endif
