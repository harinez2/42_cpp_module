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

 private:
  const Fixed x_;
  const Fixed y_;
};

#endif  // POINT_HPP
