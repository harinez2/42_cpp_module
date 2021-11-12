#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 public:
  Fixed();
  Fixed(const Fixed& obj);
  Fixed& operator=(const Fixed& obj);
  ~Fixed();

  int getRawBits(void) const;
  void setRawBits(int const raw);

 private:
  static const int kFractionalBits_;
  int fixed_point_value_;
};

#endif  // FIXED_HPP
