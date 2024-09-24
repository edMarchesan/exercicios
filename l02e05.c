#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float ht, vh, pd, sb, td, sl;
  printf("Escreva quantas horas voce trabalhou \n");
  scanf("%f", &ht);
  printf("Escreva agora quanto voce ganha por hora \n");
  scanf("%f", &vh);
  printf("Escreva agora qual o percentual e descontado do seu salario \n");
  scanf("%f", &pd);
  sb=ht*vh;
  td=(pd/100)*sb;
  sl=sb-td;
  printf("Voce trabalhou %.2f horas neste mes, isso garante a voce um salario bruto de %.2f, excluindo %.2f de descontos sobra liquido para voce %.2f reais!\n", ht, sb, td, sl);
  return EXIT_SUCCESS;
}
