/*<BS>Faça um algoritmo para calcular o volume de uma lata cilíndrica através da seguinte fórmula:
Vol = 3,14. r². h. O algoritmo deve receber o valor do raio (r) e da altura (h) e, após calcular o volume,
mostrar o resultado ao usuário. Procure empregar o conceito de constantes e variáveis neste problema.
*/
#include <stdio.h>

int main(void){
  float r;
  float h;
  float pi;
  pi = 3.14;

  printf("Escreva o valor do raio\n");
  scanf("%f", &r);
  printf("Escreva o valor da altura\n");
  scanf("%f", &h);
  printf("O volume eh %f\n", pi*r*r*h);
  return 0;
}
