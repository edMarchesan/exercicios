#include <stdio.h>

int main(void) {
  int i = 1, contadorNeg = 0, contadorPos, soma = 0;
  float media;
  printf("Escreva uma sequencia de numeros, a sequencia parara assim que "
         "digitar 0!\n");
  while (i != 0) {
    scanf("%d", &i);
    if (i < 0) {
      contadorNeg++;
    }
    if (i > 0) {
      contadorPos++;
      soma += i;
    }
  }
  media = (float)soma / contadorPos;
  printf("Foram inseridos %d numeros negativos\n", contadorNeg);
  printf("A media dos positivos e %.2f \n", media);
  return 0;
}
