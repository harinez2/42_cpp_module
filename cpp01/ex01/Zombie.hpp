#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie();
	Zombie(std::string s);
	~Zombie();
	void			set_name(std::string s);
	void			announce(void) const;
};

#endif
