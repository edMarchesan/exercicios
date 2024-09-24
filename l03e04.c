#include "stdio.h"
int main(void) {
  float n1, n2, n3, media;
  printf("Escreva as tres notas. \n");
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  media = (n1 + n2 + n3) / 3;
  if (media < 5) {
    printf("Insuficiente.\n");

  } else if (media < 6.5) {
    printf("Regular. \n");
  } else if (media < 8.5) {
    printf("Bom. \n");
  } else {
    printf("Otimo. \n");
  }
return 0;
}
