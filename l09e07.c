#include <stdio.h>

int main(void) {
  int array[7][8], soma;
  for (int i = 0; i < 7; i++) {
    for (int y = 0; y < 8; y++) {
      soma = i + y;
      array[i][y] = soma;
      soma = 0;
    }
  }
  for (int i = 0; i < 7; i++) {
    for (int y = 0; y < 8; y++) {
      printf("%d ", array[i][y]);
    }
    printf("\n");
  }
  return 0;
}
