#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int contador = 0, numero;
  srand(time(NULL));
  int gerado = rand() % 50 + 1;
  printf("Escolha um numero de 1 a 50 para tentar adivinhar.\n");
  scanf("%d", &numero);
  contador++;
  while (numero != gerado) {
    contador++;
    if (numero > gerado) {
      printf("O numero escolhido e maior, tente novamente\n");
    } else if (numero < gerado) {
      printf("O numero escolhido e menor, tente novamente\n");
    }
    scanf("%d", &numero);
  }
  printf("Parabens voce acertou\n");
  printf("Levou %d tentaivas para acertar!\n", contador);

  return 0;
}
