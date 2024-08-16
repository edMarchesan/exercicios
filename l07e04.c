#include <stdio.h>

int main(void) {
  int i, n, resultado;

  printf("Escreva um numero inteiro\n");
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    resultado = 1;
    for (int y = 2; y <= i / 2; y++) {
      if (i % y == 0) {
        resultado = 0;
        break;
      }
    }

    if (resultado != 0) {
      printf("%d", i);
    }
  }
  return 0;
}
