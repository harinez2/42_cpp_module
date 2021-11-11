#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
  Fixed();
  Fixed(const Fixed& obj);
  Fixed(const int value);
  Fixed(const float value);
  Fixed& operator=(const Fixed& obj);
  ~Fixed();

  bool operator>(const Fixed& obj);
  bool operator<(const Fixed& obj);
  bool operator>=(const Fixed& obj);
  bool operator<=(const Fixed& obj);
  bool operator==(const Fixed& obj);
  bool operator!=(const Fixed& obj);

  Fixed operator+(const Fixed& obj);
  Fixed operator-(const Fixed& obj);
  Fixed operator*(const Fixed& obj);
  Fixed operator/(const Fixed& obj);

  Fixed& operator++(void);
  Fixed operator++(int);
  Fixed& operator--(void);
  Fixed operator--(int);

  static Fixed& min(Fixed& obj1, Fixed& obj2);
  static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
  static Fixed& max(Fixed& obj1, Fixed& obj2);
  static const Fixed& max(const Fixed& obj1, const Fixed& obj2);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  static const int kFractionalBits_ = 8;
  int fixed_point_value_;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif  // FIXED_HPP
