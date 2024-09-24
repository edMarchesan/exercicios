#include <stdio.h>

int main(void) {
  int vetora[7], vetorb[7], array[2][7];
  printf("Digite os 7 valores do vetor a.\n");
  for (int i = 0; i < 7; i++) {
    scanf("%d", &vetora[i]);
  }
  printf("Digite os 7 valores do vetor b.\n");
  for (int i = 0; i < 7; i++) {
    scanf("%d", &vetorb[i]);
  }
  for (int y = 0; y < 7; y++) {
    array[0][y] = vetorb[y];
    array[1][y] = vetora[y];
  }

  for (int i = 0; i < 2; i++) {
    for (int y = 0; y < 7; y++) {
      printf("%d ", array[i][y]);
    }
    printf("\n");
  }
  return 0;
}
