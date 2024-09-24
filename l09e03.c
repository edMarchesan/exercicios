#include <stdio.h>

int main(void) {
  int array[3][2], arraytransp[2][3];
  for (int i = 0; i < 3; i++) {
    for (int y = 0; y < 2; y++) {
      scanf("%d", &array[i][y]);
    }
  }
  printf("\n");
  for (int i = 0; i < 2; i++) {
    for (int y = 0; y < 3; y++) {
      arraytransp[i][y] = array[y][i];
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int y = 0; y < 3; y++) {
      printf("%d ", arraytransp[i][y]);
    }
    printf("\n");
  }
  return 0;
}
