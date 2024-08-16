#include <stdio.h>

int main(void) {
  int i = 0, contador = 0, soma = 0;
  float media;
  printf("Digite um numero, um negativo ira finalizar o programa\n");
  while (i >= 0) {

    scanf("%d", &i);
    contador++;
    soma = soma + i;
  }
  media = (float)soma / contador;
  printf("Foram digitados %d numeros\n", contador);
  printf("A soma dos valores digitados e %d", soma);
  printf("A media dos valores digitado e %f\n", media);
  return 0;
}
