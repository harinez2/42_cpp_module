#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int			_num;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed&		operator=(const Fixed& obj);
	~Fixed();
	int			getRawBits(void);
};

#endif
