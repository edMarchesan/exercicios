#include <stdio.h>

int main(void) {
  int array[10], temp;
  printf("Escreva o valor de 10 variaveis.\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }
  temp = array[0];
  for (int i = 0; i < 9; i++) {
    array[i] = array[i + 1];
  }
  array[9] = temp;
  for (int i = 0; i < 10; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}
