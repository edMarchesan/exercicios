#include <math.h>
#include <stdio.h>

int main(void) {
  int i;
  float m;
  printf("1\n");
  for (i = 1; i <= 15; i++) {
    m = pow(3, i);
    printf("%.0f\n", m);
  }

  return 0;
}
