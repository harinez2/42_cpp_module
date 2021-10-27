#include "Fixed.hpp"


Fixed::Fixed() : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int value) : _fixed_point_value(value << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
	: _fixed_point_value(round(value * static_cast<float>(1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (_fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
}

void printb(unsigned int v) {
  unsigned int mask = (int)1 << (sizeof(v) * 8 - 1);
  do putchar(mask & v ? '1' : '0');
  while (mask >>= 1);
}

float	Fixed::toFloat(void) const
{
// 	float	float_value = 0;
// 	int		pow = 1;
// 	float	base = 0.5;
// printf("\n");
// 	for (int i = 0; i < _fractional_bits; i++)
// 	{
// 		printf("i=%d, pow=%d, base=%f, 0b=", i, pow, base);
// 		printb(pow);
// 		printf(", bitval=%d, floatval=%f\n",
// 			(_fixed_point_value & pow) != 0, base * ((_fixed_point_value & pow) != 0));
// 		float_value += base * ((_fixed_point_value & pow) != 0);
// 		pow *= 2;
// 		base /= 2;
// 	}
// 	float_value += _fixed_point_value << _fractional_bits;

	return (_fixed_point_value / static_cast<float>(1 << _fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (_fixed_point_value >> _fractional_bits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
