#pragma once

namespace lavalle {
// Return path length, additionally:
// - numero is the internal number of the path configuration
// - tr,ur,vr set to path parameters
double reed_shepp(float RADCURV,
                  double x1,
                  double y1,
                  double t1,
                  double x2,
                  double y2,
                  double t2,
                  int* numero,
                  double* tr,
                  double* ur,
                  double* vr);
}  // namespace lavalle
