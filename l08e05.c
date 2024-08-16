#include <stdio.h>

int main(void) {
  int dia[30], menor, maior, diamaior, diamenor;
  for (int i = 0; i < 30; i++) {
    printf("Digite quantos carros passaram no dia %d: \n", i);
    scanf("%d", &dia[i]);
  }
  menor = dia[0];
  maior = dia[0];
  for (int i = 0; i < 30; i++) {
    if (dia[i] > maior) {
      maior = dia[i];
      diamaior = i;
    }
    if (dia[i] < menor) {
      menor = dia[i];
      diamenor = i;
    }
  }
  printf("O maior numero de veiculos ocorreu no dia %d e foi de %d carros\n",
         diamaior, maior);
  printf("O menor numero de veiculos ocorreu no dia %d e foi de %d carros\n",
         diamenor, menor);

  return 0;
}
