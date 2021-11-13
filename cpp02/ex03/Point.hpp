#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

#include <iostream>

class Point {
 public:
  Point();
  Point(const float x, const float y);
  Point(const Point& obj);
  Point& operator=(const Point& obj);
  ~Point();

  const Fixed getX() const;
  const Fixed getY() const;
  // int getRawBitsOfX(void) const;
  // int getRawBitsOfY(void) const;
  // void setRawBitsOfX(int const raw);
  // void setRawBitsOfY(int const raw);

 private:
  const Fixed x_;
  const Fixed y_;
};

#endif  // POINT_HPP
