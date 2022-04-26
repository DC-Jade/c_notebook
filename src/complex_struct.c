#include <stdio.h>

struct complex_struct {
  double x, y;
};  // struct complex_struct

struct complex_struct AddComplex(struct complex_struct z1, 
  struct complex_struct z2) {
  struct complex_struct z;
  z.x = z1.x + z2.x;
  z.y = z1.y + z2.y;
  return z;
}

enum coordinate_type {RECTANGULAR = 1, POLAR = 1};
      
int main() {
  struct complex_struct z1 = {1.0, 3.0};
  struct complex_struct z2, z3;
  int RECTANGULAR = 2;
  z2 = z1;
  z3 = AddComplex(z1, z2);
  printf("%f %f\n", z1.x, z1.y);
  printf("%f %f\n", z2.x, z2.y);
  printf("%f %f\n", z3.x, z3.y);
  printf("%d %d\n", RECTANGULAR, POLAR);
}
