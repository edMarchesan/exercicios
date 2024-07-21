#include <stdio.h>

int main(void) {
  int b, e, i, vlr;
  printf("Digite a base e em seguida o expoente.\n");
  scanf("%d", &b);
  scanf("%d", &e);
  vlr = b;
  if (e == 0) {
    printf("A potencia de %d sobre %d e 1 \n", b, e);
  } else {

    for (i = 1; i <= e; i++) {
      vlr *= b;
    }
  }
  vlr /= b;
  printf("A potencia de %d sobre %d e %d \n", b, e, vlr);

  return 0;
}
