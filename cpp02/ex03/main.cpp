#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void test_bsp(Point const a, Point const b, Point const c, Point const point) {
  std::cout << "point    " << point.getX() << " , " << point.getY();
  std::cout << " , ret:" << bsp(a, b, c, point) << std::endl;
}

int main(void) {
  Point a(0, 0);
  const Point b(3.0, 0);
  Point c(1.5, 1.5);
  std::cout << "a: " << a.getX() << " , " << a.getY() << std::endl;
  std::cout << "b: " << b.getX() << " , " << b.getY() << std::endl;
  std::cout << "c: " << c.getX() << " , " << c.getY() << std::endl;

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
