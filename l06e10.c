#include <stdio.h>

int main(void) {
  int i = 0, n;
  float media, sum;
  printf("Digite uma sequencia de numeros, ela ira acabar quando digitar um "
         "numero negativo.\n");
  while (i >= 0) {
    n++;
    scanf("%d", &i);
    if (i > 0) {
      sum += (i);
    }
  }
  media = sum / (n - 1);
  printf("A media e %.2f\n", media);
  return 0;
}
