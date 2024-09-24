#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n;
  printf("Escreva um numero \n");
  scanf("%d", &n);
  if (n <= 10) {
    printf("F1 \n");
  } else if (n <= 100) {
    printf("F2 \n");
  } else {
    printf("F3 \n");
  }

  return EXIT_SUCCESS;
}
