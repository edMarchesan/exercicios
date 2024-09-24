#include <stdio.h>

int main(void) {
  int array[5][7], l, c;
  printf("Digite o valor para as arrays.\n");
  for (int i = 0; i < 5; i++) {
    for (int y = 0; y < 7; y++) {
      scanf("%d", &array[i][y]);
    }
  }
  printf("Agora digite a linha e em seguida a coluna que deseja procurar.\n");
  scanf("%d", &l);
  scanf("%d", &c);
  printf("%d \n", array[l][c]);

  return 0;
}
