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
	: _fixed_point_value(roundf(value * static_cast<float>(1 << _fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = obj.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& obj)
{
	if (_fixed_point_value > obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(const Fixed& obj)
{
	if (_fixed_point_value < obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(const Fixed& obj)
{
	if (_fixed_point_value >= obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(const Fixed& obj)
{
	if (_fixed_point_value <= obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(const Fixed& obj)
{
	if (_fixed_point_value == obj.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(const Fixed& obj)
{
	if (_fixed_point_value != obj.getRawBits())
		return true;
	else
		return false;
}

Fixed&	Fixed::operator+(const Fixed& obj)
{
	_fixed_point_value += obj._fixed_point_value;
	return *this;
}

Fixed&	Fixed::operator-(const Fixed& obj)
{
	_fixed_point_value -= obj._fixed_point_value;
	return *this;
}

Fixed&	Fixed::operator*(const Fixed& obj)
{
	_fixed_point_value *= obj._fixed_point_value;
	return *this;
}

Fixed&	Fixed::operator/(const Fixed& obj)
{
	_fixed_point_value /= obj._fixed_point_value;
	return *this;
}

Fixed&	Fixed::operator++(void)
{
	_fixed_point_value += 1 << _fractional_bits;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed f = *this;
	_fixed_point_value += 1 << _fractional_bits;
	return f;
}

Fixed&	Fixed::operator--(void)
{
	_fixed_point_value -= 1 << _fractional_bits;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed f = *this;
	_fixed_point_value -= 1 << _fractional_bits;
	return f;
}

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

const Fixed&	Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

Fixed&	Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

const Fixed&	Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

int	Fixed::getRawBits(void) const
{
	return (_fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
}

float	Fixed::toFloat(void) const
{
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