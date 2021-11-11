#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed() : fixed_point_value_(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
  std::cout << "Copy constructor called" << std::endl;
  *this = obj;
}

Fixed::Fixed(const int value) : fixed_point_value_(value << kFractionalBits_) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
    : fixed_point_value_(roundf(value * static_cast<float>(1 << kFractionalBits_))) {
  std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj) {
  std::cout << "Assignation operator called" << std::endl;
  if (&obj != this) {
    fixed_point_value_ = obj.getRawBits();
  }
  return *this;
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  return fixed_point_value_;
}

void Fixed::setRawBits(int const raw) {
  this->fixed_point_value_ = raw;
}

float Fixed::toFloat(void) const {
  return fixed_point_value_ / static_cast<float>(1 << kFractionalBits_);
}

int Fixed::toInt(void) const {
  return fixed_point_value_ >> kFractionalBits_;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
  os << obj.toFloat();
  return os;
}
