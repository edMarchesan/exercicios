/*Elabore um programa que leia dois valores e apresente os resultados das quatro operações aritméticas
básicas realizadas entre eles.*/
#include <stdio.h>

int main(void){
  int a,b;
  printf("Escreva dois numeros \n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("A soma eh %d, a subtracao eh %d, a multiplicacao eh %d e a divisao eh %f \n", a+b, a-b, a*b, (float)a/b);

  return 0;
}
