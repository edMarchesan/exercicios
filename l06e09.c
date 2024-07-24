#include <stdio.h>

int main(void) {
  int b, e, i, vlr;
  printf("Digite a base e em seguida o expoente.\n");
  scanf("%d", &b);
  scanf("%d", &e);
  vlr = 1;
  for (i = 1; i <= e; i++) {
    vlr *= b;
  }
  printf("A potencia de %d sobre %d e %d \n", b, e, vlr);

  return 0;
}
