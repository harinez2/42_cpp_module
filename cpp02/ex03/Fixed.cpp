#include "Fixed.hpp"

#include <iostream>
#include <stdexcept>
#include <cmath>

Fixed::Fixed() : fixed_point_value_(0) {}

Fixed::Fixed(const Fixed& obj) {
  *this = obj;
}

Fixed::Fixed(const int value) : fixed_point_value_(value << kFractionalBits_) {}

Fixed::Fixed(const float value)
    : fixed_point_value_(roundf(value * static_cast<float>(1 << kFractionalBits_))) {}

Fixed& Fixed::operator=(const Fixed& obj) {
  if (&obj != this) {
    fixed_point_value_ = obj.getRawBits();
  }
  return *this;
}

Fixed::~Fixed() {}

bool Fixed::operator>(const Fixed& obj) const { return (fixed_point_value_ > obj.getRawBits()); }
bool Fixed::operator<(const Fixed& obj) const { return (fixed_point_value_ < obj.getRawBits()); }
bool Fixed::operator>=(const Fixed& obj) const { return (fixed_point_value_ >= obj.getRawBits()); }
bool Fixed::operator<=(const Fixed& obj) const { return (fixed_point_value_ <= obj.getRawBits()); }
bool Fixed::operator==(const Fixed& obj) const { return (fixed_point_value_ == obj.getRawBits()); }
bool Fixed::operator!=(const Fixed& obj) const { return (fixed_point_value_ != obj.getRawBits()); }

Fixed Fixed::operator+(const Fixed& obj) const {
  Fixed f;
  f.setRawBits(fixed_point_value_ + obj.getRawBits());
  return f;
}

Fixed Fixed::operator-(const Fixed& obj) const {
  Fixed f;
  f.setRawBits(fixed_point_value_ - obj.getRawBits());
  return f;
}

Fixed Fixed::operator*(const Fixed& obj) const {
  return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed& obj) const {
  if (obj.getRawBits() == 0)
    throw std::runtime_error("[divided by zero]");
  return Fixed(this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++(void) {
  ++fixed_point_value_;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed f(*this);
  ++fixed_point_value_;
  return f;
}

Fixed& Fixed::operator--(void) {
  --fixed_point_value_;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed f(*this);
  --fixed_point_value_;
  return f;
}

int Fixed::getRawBits(void) const { return fixed_point_value_; }
void Fixed::setRawBits(int const raw) { fixed_point_value_ = raw; }

float Fixed::toFloat(void) const {
  return fixed_point_value_ / static_cast<float>(1 << kFractionalBits_);
}

int Fixed::toInt(void) const {
  return fixed_point_value_ >> kFractionalBits_;
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2) { return (obj1 < obj2) ? obj1 : obj2; }
const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2) { return (obj1 < obj2) ? obj1 : obj2; }
Fixed& Fixed::max(Fixed& obj1, Fixed& obj2) { return (obj1 > obj2) ? obj1 : obj2; }
const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2) { return (obj1 > obj2) ? obj1 : obj2; }

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
  os << obj.toFloat();
  return os;
}
