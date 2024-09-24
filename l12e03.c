#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherAleatorio(int vet[10]) {
  for (int i = 0; i < 10; i++) {
    vet[i] = rand() % 100;
  }
}

void apresentarVetor(int vet[10]) {
  for (int i = 0; i < 10; i++) {
    printf("[%d] ", vet[i]);
  }
  printf("\n");
}

void inverterValores(int vet[10]) {
  int vetinv[10];
  for (int i = 0; i < 10; i++) {
    vetinv[i] = vet[9 - i];
  }
  for (int i = 0; i < 10; i++) {
    vet[i] = vetinv[i];
  }
}

int main(void) {
  int vet[10], decisao;
  srand(time(NULL));
  do {
    printf("O que deseja fazer?\n");
    printf("1-Preencher aleatoriamente\n2-Apresentar valores\n3-Inverter "
           "Valores\n0-Sair\n");
    scanf("%d", &decisao);
    switch (decisao) {
    case 1:
      preencherAleatorio(vet);
      break;
    case 2:
      apresentarVetor(vet);
      break;
    case 3:
      inverterValores(vet);
      break;
    case 0:
      printf("Saindoo :(\n");
      return 0;
    }
  } while (decisao != 0);
  return 0;
}
