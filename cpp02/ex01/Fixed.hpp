#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 public:
  Fixed();
  Fixed(const Fixed &obj);
  Fixed(const int value);
  Fixed(const float value);
  Fixed& operator=(const Fixed &obj);
  ~Fixed();

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;

 private:
  static const int _fractional_bits = 8;
  int _fixed_point_value;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif  // FIXED_HPP
