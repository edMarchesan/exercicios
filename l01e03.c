/*Desenvolva um algoritmo para um programa que leia três valores inteiros e apresente como resultado o
valor da soma dos quadrados dos três valores lidos.*/
#include <stdio.h>

int main(void){
int a;
int b;
int c;

printf("Digite tres valores \n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
printf("A soma dos quadrados dos tres valores eh %d \n", a*a+b*b+c*c);
  return 0;
}
