#include <stdio.h>
int notas[10];
float calcularMedia(void);
int calcularSomatorio(void);
int maiorNota(int notas[10]);
int menorNota(int notas[10]);
void receberNotas(void);

int main(void) {
  int decisao;
  receberNotas();
  printf("O que deseja fazer?\n");
  printf("1 - Calcular Media\n");
  printf("2 - Calcular Somatorio\n");
  printf("3 - Achar a maior nota\n");
  printf("4 - Achar a menor nota\n");
  printf("0 - Finalizar o Programa\n");
  scanf("%d", &decisao);
  switch (decisao) {
  case 1:
    printf("%.2f\n", calcularMedia());
    break;
  case 2:
    printf("%d\n", calcularSomatorio());
    break;
  case 3:
    printf("%d\n", maiorNota(notas));
    break;
  case 4:
    printf("%d\n", menorNota(notas));
    break;
  case 0:
    printf("Opcao invalida, programa encerrado.\n");
    return 1;
    break;

    return 0;
  }
}

void receberNotas(void) {
  printf("Escreva 10 notas para armazenar na variavel.\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &notas[i]);
  }
}

float calcularMedia(void) {
  int soma = 0;
  float media = 0;
  for (int i = 0; i < 10; i++) {
    soma += notas[i];
  }
  media = (float)soma / 10;
  return media;
}

int calcularSomatorio(void) {
  int soma = 0;
  for (int i = 0; i < 10; i++) {
    soma += notas[i];
  }
  return soma;
}

int maiorNota(int notas[10]) {
  int maior = notas[0];
  for (int i = 1; i < 10; i++) {
    if (notas[i] > maior) {
      maior = notas[i];
    }
  }
  return maior;
}

int menorNota(int notas[10]) {
  int menor = notas[0];
  for (int i = 1; i < 10; i++) {
    if (notas[i] < menor) {
      menor = notas[i];
    }
  }
  return menor;
}
