#include <stdio.h>

int main(void) {
  int i = 1, n;

  while (i != 0) {
    scanf("%d", &i);
    if (i == 10) {
      n++;
    }
  }
  printf("10 foi digitado %d vezes.\n", n);

  return 0;
}
