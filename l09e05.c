#include <stdio.h>

int main(void) {
  int array[8][6], vetor[8], soma;
  printf("Digite a array.\n");
  for (int i = 0; i < 8; i++) {
    for (int y = 0; y < 6; y++) {
      scanf("%d", &array[i][y]);
    }
  }
  for (int i = 0; i < 8; i++) {
    soma = 0;
    for (int y = 0; y < 6; y++) {
      soma += array[i][y];
    }
    vetor[i] = soma;
  }
  soma = 0;
  for (int i = 0; i < 8; i++) {
    soma += vetor[i];
  }
  printf("%d e a soma do vetor\n", soma);
  return 0;
}
