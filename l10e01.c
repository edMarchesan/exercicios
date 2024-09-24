#include <stdio.h>
void circulo(void);
void triangulo(void);
void quadrado(void);
#define PI 3.14;

int main(void) {
  int decisao;
  printf("Qual figura deseja calcular?\n");
  printf("1 - Triangulo\n");
  printf("2 - Quadrado\n");
  printf("3 - Circulo\n");
  scanf("%d", &decisao);
  switch (decisao) {
  case 1: {
    triangulo();
    break;
  }

  case 2: {
    quadrado();
    break;
  }

  case 3: {
    circulo();
    break;
  }
  default: {
    printf("Opcao invalida.\n");
    return 1;
    break;
  }
  }
  return 0;
}

void triangulo(void) {
  int lado[2];
  float area;
  printf("Escreva a base em seguida a altura do triangulo.\n");
  for (int i = 0; i < 2; i++) {
    scanf("%d", &lado[i]);
  }
  area = ((float)lado[0] * (float)lado[1]) / 2;
  printf("A base do triangulo e %d, a altura do triangulo e %d, logo sua area "
         "e %.2f \n",
         lado[0], lado[1], area);
}

void circulo(void) {
  float raio, area;
  printf("Escreva o raio do circulo\n");
  scanf("%f", &raio);
  area = (raio * raio) * PI;
  printf("A area do circulo de raio %.2f e %.2f \n", raio, area);
}

void quadrado(void) {
  int lado[2];
  float area;
  printf("Digite a base e a altura do quadrado.\n");
  for (int i = 0; i < 2; i++) {
    scanf("%d", &lado[i]);
  }
  area = (float)lado[1] * (float)lado[0];
  printf("A area do quadrado de base %d e altura %d e %.2f\n", lado[0], lado[1],
         area);
}
