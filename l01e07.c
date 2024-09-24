/*Desenvolva um algoritmo para calcular a quantidade de litros de combustível que um automóvel que faz
média de 12Km/L precisa para uma viagem. O usuário deve informar a distância do trajeto e o algoritmo
deve calcular a quantidade de litros através da seguinte fórmula: LitrosUsados = distância / 12 */
#include <stdio.h>

int main(void){

  float km, media,litros;
  media = 12.00;

  printf("Quantos kilometros voce planeja viajar? \n");
  scanf("%f", &km);
  litros = km/media;
  printf("voce precisara de %f litros de combustível para realizar esta viagem \n", litros);

  return 0;
}
