#include <stdio.h>

int main(void) {
  int i;
  for (i = 0; i <= 200; i++) {
    if (i % 4 == 0) {
      printf("%d \n", i);
    }
  }

  return 0;
}
