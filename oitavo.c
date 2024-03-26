/*Escreva um algoritmo que peça para o usuário informar a sua idade e, em seguida, calcule e apresente o
dobro e o triplo da idade informada.*/
#include <stdio.h>

int main(void){
  int i;

  printf("Qual a sua idade? \n");
  scanf("%d", &i);
  printf("Voce tem %d anos, o dobro da sua idade eh %d e o triplo eh %d \n", i, i*2, i*3);
  
  return 0;
}
