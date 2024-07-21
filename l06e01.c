#include <stdio.h>

int main(void) {
  int i = 1;
  for (i = 1; i <= 256; i *= 2) {
    printf("%d \n", i);
  }

  return 0;
}
