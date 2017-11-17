#include "rs.h"

#include <climits>
#include <cmath>

int main() {
  float RADCURV = 11.5;
  double x1 = 0;
  double y1 = 0;
  double t1 = 0;
  double x2 = 10;
  double y2 = 1;
  double t2 = .3;

  int numero = INT_MIN;
  double tr = NAN;
  double ur = NAN;
  double vr = NAN;

  double result = lavalle::reed_shepp(RADCURV, x1, y1, t1, x2, y2, t2, &numero, &tr, &ur, &vr);
  return 0;
}
