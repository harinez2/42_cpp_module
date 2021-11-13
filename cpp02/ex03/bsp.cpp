#include "Point.hpp"
#include "Fixed.hpp"

#include <cmath>

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed ap_x = point.getX() - a.getX();
  Fixed ap_y = point.getY() - a.getY();
  Fixed ab_x = b.getX() - a.getX();
  Fixed ab_y = b.getY() - a.getY();
  Fixed ac_x = c.getX() - a.getX();
  Fixed ac_y = c.getY() - a.getY();

  Fixed prod_ab = ab_x * ap_y - ab_y * ap_x;
  if (roundf(prod_ab.toFloat()) == 0)
    return false;
  bool sign_ab = roundf(prod_ab.toFloat()) >= 0;

  Fixed prod_ac = ac_x * ap_y - ac_y * ap_x;
  if (roundf(prod_ac.toFloat()) == 0)
    return false;
  bool sign_ac = roundf(prod_ac.toFloat()) >= 0;

  if(sign_ab == sign_ac)
    return false;


  Fixed bp_x = point.getX() - b.getX();
  Fixed bp_y = point.getY() - b.getY();
  Fixed ba_x = a.getX() - b.getX();
  Fixed ba_y = a.getY() - b.getY();
  Fixed bc_x = c.getX() - b.getX();
  Fixed bc_y = c.getY() - b.getY();

  Fixed prod_ba = ba_x * bp_y - ba_y * bp_x;
  if (roundf(prod_ba.toFloat()) == 0)
    return false;
  bool sign_ba = roundf(prod_ba.toFloat()) >= 0;

  Fixed prod_bc = bc_x * bp_y - bc_y * bp_x;
  if (roundf(prod_bc.toFloat()) == 0)
    return false;
  bool sign_bc = roundf(prod_bc.toFloat()) >= 0;
  
  if(sign_ba == sign_bc)
    return false;

  return true;
}
