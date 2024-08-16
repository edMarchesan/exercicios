#include <stdio.h>

int main(void) {
  int quant, soma = 0, num;
  float media;
  printf("De quantos numeros voce quer calculara a media aritmetica?\n");
  scanf("%d", &quant);
  printf("Digite %d numeros em sequencia.\n", quant);
  for (int i = 1; i <= quant; i++) {
    scanf("%d", &num);
    soma += num;
  }
  media = (float)soma / quant;
  printf("A media aritmetica dos %d numeros informados e %.2f\n", quant, media);

  return 0;
}
