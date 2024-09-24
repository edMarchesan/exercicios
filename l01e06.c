/*Escreva um algoritmo que receba um valor em Real e a cotação do Dólar, calcule a conversão do valor e,
como saída, apresente o valor a ser convertido (R$), a cotação do Dólar e o valor da conversão ($) */
#include <stdio.h>

int main(void){
  float brl, usd, cot;

  printf("Digite o valor em reais que deseja converter, em seguida a cotacao do dia\n");
  scanf("%f", &brl);
  scanf("%f", &cot);
  usd = brl*cot;
  printf("O valor em reais eh %.2f, a cotacao eh %.2f e o valor convertido eh %.2f \n", brl, cot, usd);

  return 0;
}
