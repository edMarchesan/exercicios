/*Escreva um algoritmo para ler dos valores para as variáveis A e B. O algoritmo deve efetuar a troca dos
valores, de forma que a variável A passe a possuir o valor de B e a variável B passe a possuir o valor de
A. O algoritmo deve apresentar os valores ao usuário, antes e depois da troca.*/ 
#include <stdio.h>
  int main(void) {
  float a;
  float b;
  float c;
  printf("Escreva o valor de a\n");
  scanf("%f", &a);
  printf("Escreva o valor de b\n");
  scanf("%f", &b);
  printf("Os valores de A e B sao respectivamente %f e %f \n", a, b);
  c = a;
  a = b;
  b = c;
  printf("Os valores de A e B apos a troca sao respectivamente %f e %f \n", a, b);
  return 0;
  }
