/*Faça um algoritmo que solicite a idade de 4 pessoas. O algoritmo deve calcular a média aritmética das
idades e apresentar o resultado na tela. */
#include <stdio.h>

int main(void)
{
  int i1,i2,i3,i4;
  float media;

  printf("Escreva a idade de quatro pessoas \n");
  scanf("%d", &i1);
  scanf("%d", &i2);
  scanf("%d", &i3);
  scanf("%d", &i4);
  media = (i1+i2+i3+i4)/4;
  printf("A media das quatro idades eh %f \n", media);

  return 0;
}
