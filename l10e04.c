#include <stdio.h>

int fatorial(int n);
int main(void) {
  int numeroA, numeroB;
  int fatorialA, fatorialB;
  float resultado;
  printf("Digite dois numeros inteiros e positivos.\n");
  scanf("%d", &numeroA);
  scanf("%d", &numeroB);
  fatorialA = fatorial(numeroA);
  fatorialB = fatorial(numeroB);
  printf("%d, %d\n", fatorialA, fatorialB);
  resultado = (float)fatorialA / (float)fatorialB * ((float)numeroA - numeroB);
  printf("%.2f e o resultado.\n", resultado);
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
