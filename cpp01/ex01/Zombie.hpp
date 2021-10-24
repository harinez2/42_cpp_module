#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie();
	Zombie(std::string s);
	~Zombie();
	void			set_name(std::string s);
	void			announce() const;
};

#endif
