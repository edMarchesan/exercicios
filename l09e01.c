#include <stdio.h>

int array[4][4];

int main(void) {
  int somaGeral = 0, somaAbaixo = 0;
  printf("Escreva 4 numeros para colocar na linha 1, em seguida 4 numeros para "
         "a linha 2, sucessivamente ate que 16 numeros tenham sido "
         "digitados\n");
  for (int i = 0; i < 4; i++) {
    for (int y = 0; y < 4; y++) {
      scanf("%d", &array[i][y]);
      somaGeral += array[i][y];
      if (y < i) {
        somaAbaixo += array[i][y];
      }
    }
  }
  printf("%d a soma de todos. \n%d a soma abaixo da linha.\n", somaGeral,
         somaAbaixo);
  return 0;
}
