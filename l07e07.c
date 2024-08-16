#include <stdio.h>

int main(void) {
  int i = 0, soma, last = 0, resultado = 1;
  while (i <= 14) {
    i++;
    soma = last + resultado;
    printf("(%d,%d)= %d\n", last, resultado, soma);
    resultado = last;
    last = soma;
  }

  return 0;
}
