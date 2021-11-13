#include "Point.hpp"
#include "Fixed.hpp"

#include <iostream>
#include <iomanip>

bool bsp(Point const a, Point const b, Point const c, Point const point);

void test_bsp(Point const a, Point const b, Point const c, Point const point) {
  std::cout << "point    ";
  std::cout << std::setw(6) << point.getX() << " , ";
  std::cout << std::setw(6) << point.getY() << " , ret:";
  std::cout << bsp(a, b, c, point) << std::endl;
}

int main(void) {
  std::cout << "[triangle]" << std::endl;
  Point a(0, 0);
  Point b(3.0, 0);
  Point c(1.5, 1.5);
  std::cout << "a:" << std::setw(6) << a.getX() << "," << std::setw(6) << a.getY() << std::endl;
  std::cout << "b:" << std::setw(6) << b.getX() << "," << std::setw(6) << b.getY() << std::endl;
  std::cout << "c:" << std::setw(6) << c.getX() << "," << std::setw(6) << c.getY() << std::endl;

  std::cout << "[judgement]" << std::endl;
  Point inside(1.5, 0.5);
  Point outside(3.0, 3.0);
  Point vertex(1.5, 1.5);
  Point on_the_edge(0.5, 0.5);
  test_bsp(a, b, c, inside);
  test_bsp(a, b, c, outside);
  test_bsp(a, b, c, vertex);
  test_bsp(a, b, c, on_the_edge);
  return 0;
}
