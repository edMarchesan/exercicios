#include <stdio.h>

int main(void) {
  int i, maior = 0, menor = 0;
  printf("Digite numeros positivos para encontrar o maior e menor.\n");
  printf("Digite um numero negativo para terminar o programa.\n");
  scanf("%d", &i);
  menor = i;
  if (i <= 0) {
    printf("Nao digitou um numero positivo!\n");
  }
  while (i > 0) {
    scanf("%d", &i);
    if (i > maior) {
      maior = i;
    }
    if (i < menor) {
      menor = i;
    }
  }
  printf("O menor numero e %d \n", menor);

  printf("O maior numero e %d \n", maior);
  return 0;
}
