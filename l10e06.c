#include <stdio.h>
#include <stdlib.h>

void dobro(int n) {
  n *= 2;
  printf("%d e o dobro do numero.\n", n);
}

void triplo(int n) {
  n *= 3;
  printf("%d e o triplo do numero.\n", n);
}

void metade(float n) {
  n /= 2;
  printf("%.2f e a metade do numero.\n", n);
}

void quadrado(int n) {
  n *= n;
  printf("%d e o quadrado do numero.\n", n);
}

void cubo(int n) {
  n *= n * n;
  printf("%d e o cubo do numero.\n", n);
}

void raizQuad(float n) {
  n /= n;
  printf("%.2f e a raiz quadrada do numero.\n", n);
}

void raizTri(float n) {
  n /= n / n;
  printf("%.2f e a raiz tripla do numero.\n", n);
}

void mod(int n) {
  n = abs(n);
  printf("%d e o mod do numero.\n", n);
}

void inverso(int n) {
  n *= (-1);
  printf("%d e o inverso do numero.\n", n);
}

int main(void) {
  int decisao, numero;
  printf("Informe um numero.\n");
  scanf("%d", &numero);
  printf("O que deseja fazer com esse numero?\n");
  printf("1 - Dobro\n2 - Triplo\n3- Metade\n4 - Quadrado\n5 - Cubo\n");
  printf("6 - Raiz 2\n7 - Raiz 3\n8 - Mod\n9 - Inverso\n0 - Sair\n");
  scanf("%d", &decisao);
  switch (decisao) {
  case 1:
    dobro(numero);
    break;

  case 2:
    triplo(numero);
    break;
  case 3:
    metade(numero);
    break;
  case 4:
    quadrado(numero);
    break;

  case 5:
    cubo(numero);
    break;
  case 6:
    raizQuad(numero);
    break;
  case 7:
    raizTri(numero);
    break;
  case 8:
    mod(numero);
    break;
  case 9:
    inverso(numero);
    break;
  case 0:
    return 0;
    break;
  }
  return 0;
}
