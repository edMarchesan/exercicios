#include <stdio.h>

int main(void) {
  int i = 1, s = 0;
  for (i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      s += i;
    }
  }

  printf("s = %d\n", s);
  return 0;
}
