#include <stdio.h>
int fatorial(int n);
int main(void) {
  int numero;
  int fator;
  printf("Digite um numero inteiro e positivo.\n");
  scanf("%d", &numero);
  fator = fatorial(numero);
  printf("%d\n", fator);

  return 0;
}
int fatorial(int n) {
  int fat;
  if (n <= 1) {
    return 1;
  } else {
    fat = n * fatorial(n - 1);
  }
  return (fat);
}
