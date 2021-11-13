#include "Point.hpp"

Point::Point() : x_(Fixed()), y_(Fixed()) {}

Point::Point(const float x, const float y) : x_(Fixed(x)), y_(Fixed(y)) {}

Point::Point(const Point& obj) : x_(obj.x_), y_(obj.y_) {}

Point& Point::operator=(const Point& obj) {
  if (&obj != this) {
  }
  return *this;
}

Point::~Point() {}

const Fixed Point::getX() const { return x_; }
const Fixed Point::getY() const { return y_; }
// int Point::getRawBitsOfX(void) const { return x_.getRawBits(); }
// int Point::getRawBitsOfY(void) const { return y_.getRawBits(); }
// void Point::setRawBitsOfX(int const raw) { x_.setRawBits(raw); }
// void Point::setRawBitsOfY(int const raw) { y_.setRawBits(raw); }
