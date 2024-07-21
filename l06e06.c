#include <stdio.h>
int main(void) {
  int i, n = 1;
  printf("Digite um numero para saber quantos deles sao impares, digite -999 "
         "para parar.\n");
  scanf("%d", &i);
  while (i != -999) {
    scanf("%d", &i);
    if (i % 2 == 1 || i % 2 == -1) {
      n += 1;
    }
  }
  printf("Foram encontrados %d numeros impares. \n", n);
  return 0;
}
