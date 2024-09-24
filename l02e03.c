#include <stdlib.h>
#include <stdio.h>
int main(void)
{
  float vlkmh,vlms;
  printf("Escreva a velocidade em km/h do veiculo /n");
  scanf("%f", &vlkmh);
  vlms = vlkmh/3.6;
  printf("O veiculo esta se movendo a %f m/s \n", vlms);
  return EXIT_SUCCESS;
}
