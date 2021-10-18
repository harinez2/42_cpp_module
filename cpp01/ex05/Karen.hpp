#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	static void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	static void	(*fp)();
public:
	Karen();
	~Karen();
	void	complain(std::string level);
};

#endif
