#include <stdio.h>

int main(void) {
  int array[4][4], decisao;
  printf("Escreva as 4 linhas e em seguida as 4 colunas.\n");
  for (int i = 0; i < 4; i++) {
    for (int y = 0; y < 4; y++) {
      scanf("%d", &array[i][y]);
    }
  }
  printf("O que voce deseja apresentar?\n");
  printf("1-Matriz Completa\n2-Diagonal Principal\n3-Diagonal "
         "Secundaria\n4-Elementos abaixo da diagonal principal\n5-Elementos "
         "acima da diagonal principal\n");
  scanf("%d", &decisao);
  switch (decisao) {
  case 1:
    for (int i = 0; i < 4; i++) {
      for (int y = 0; y < 4; y++) {
        printf("%d ", array[i][y]);
      }
      printf("\n");
    }
    break;
  case 2:
    for (int i = 0; i < 4; i++) {
      for (int y = 0; y < 4; y++) {
        if (i == y) {
          printf("%d ", array[i][y]);
        } else {
          printf("0 ");
        }
      }
      printf("\n");
    }
    break;
  case 3:
    for (int i = 0; i < 4; i++) {
      int col = 3 - i;
      printf("%d", array[i][col]);
    }
    printf("\n");
    break;
  case 4:
    for (int i = 0; i < 4; i++) {
      for (int y = 0; y < 4; y++) {
        if (i > y) {
          printf("%d ", array[i][y]);
        } else {
          printf("0 ");
        }
      }
      printf("\n");
    }
    break;
  case 5:
    for (int i = 0; i < 4; i++) {
      for (int y = 0; y < 4; y++) {
        if (i < y) {
          printf("%d ", array[i][y]);
        } else {
          printf("0 ");
        }
      }
      printf("\n");
    }
    break;
  }

  return 0;
}
