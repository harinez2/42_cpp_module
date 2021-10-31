#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixed_point_value;
	static const int	_fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed&				operator=(const Fixed& obj);

	bool				operator>(const Fixed& obj);
	bool				operator<(const Fixed& obj);
	bool				operator>=(const Fixed& obj);
	bool				operator<=(const Fixed& obj);
	bool				operator==(const Fixed& obj);
	bool				operator!=(const Fixed& obj);

	Fixed&				operator+(const Fixed& obj);
	Fixed&				operator-(const Fixed& obj);
	Fixed&				operator*(const Fixed& obj);
	Fixed&				operator/(const Fixed& obj);

	Fixed&				operator++(void);
	Fixed				operator++(int);
	Fixed&				operator--(void);
	Fixed				operator--(int);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& obj);

#endif
