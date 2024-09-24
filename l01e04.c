/*Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado
o valor do quadrado da soma dos três valores lidos. */

#include <stdio.h>

int a,b,c;

int main(void){
  printf("Escreva tres numeros \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  printf("O quadrado da soma dos tres numeros eh %d \n", (a+b+c)*(a+b+c));

  return 0;
}
