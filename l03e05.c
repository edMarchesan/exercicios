#include <stdio.h>
int main(void) {
  int a, b;
  printf("Escreva dois numeros \n");
  scanf("%d", &a);
  scanf("%d", &b);
  if (a != b) {
    if (a > b) {
      printf("A e maior que B. \n");
    } else {
      printf("B e maior que A. \n");
    }
  } else {
    printf("Os numeros sao iguais. \n");
  }
  return 0;
}
