#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed ap_x = point.getX() - a.getX();
  Fixed ap_y = point.getY() - a.getY();
  Fixed bp_x = point.getX() - b.getX();
  Fixed bp_y = point.getY() - b.getY();
  Fixed ab_x = b.getX() - a.getX();
  Fixed ab_y = b.getY() - a.getY();
  Fixed ac_x = c.getX() - a.getX();
  Fixed ac_y = c.getY() - a.getY();
  Fixed bc_x = c.getX() - b.getX();
  Fixed bc_y = c.getY() - b.getY();
  bool s_ab = ab_x * ap_y - ab_y * ap_x > 0;

  if(ac_x * ap_y - ac_y * ap_x > 0 == s_ab)
    return false;
  if(bc_x * bp_y - bc_y * bp_x > 0 != s_ab)
    return false;
  return true;
}
