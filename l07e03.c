#include <stdio.h>

int main(void) {
  int n, resultado = 0;
  printf("Digite um numero inteiro\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      resultado++;
    }
  }
  if (resultado == 2) {
    printf("Este numero e primo.\n");

  } else {
    printf("Este numero nao e primo.\n");
  }

  return 0;
}
