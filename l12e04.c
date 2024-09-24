#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int matriz[3][6]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      matriz[i][j] = rand() % 100;
    }
  }
}

void apresentarMatriz(int matriz[3][6]) {
  printf("Matriz:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%4d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void somaColunasImpares(int matriz[3][6]) {
  int soma;
  for (int j = 1; j < 6; j += 2) {
    soma = 0;
    for (int i = 0; i < 3; i++) {
      soma += matriz[i][j];
    }
    printf("Soma dos elementos da coluna %d: %d\n", j, soma);
  }
}

void mediaColunasSegundaQuarta(int matriz[3][6]) {
  float soma;
  for (int col = 1; col <= 3; col += 2) {
    soma = 0;
    for (int i = 0; i < 3; i++) {
      soma += matriz[i][col];
    }
    printf("Média dos elementos da coluna %d: %.2f\n", col, soma / 3);
  }
}

void substituirColunaSoma(int matriz[3][6]) {
  int somaCol1 = 0, somaCol2 = 0;
  for (int i = 0; i < 3; i++) {
    somaCol1 += matriz[i][0];
    somaCol2 += matriz[i][1];
  }
  int somaTotal = somaCol1 + somaCol2;
  for (int i = 0; i < 6; i++) {
    matriz[i][5] = somaTotal;
  }
}

int main(void) {
  int matriz[3][6];
  int decisao;

  srand(time(NULL));
  preencherMatriz(matriz);

  do {
    printf("Escolha uma opção:\n");
    printf("1 - Apresentar a matriz\n");
    printf("2 - Mostrar a soma de todos os elementos das colunas ímpares\n");
    printf("3 - Mostrar a média aritmética dos elementos da segunda e quarta "
           "colunas\n");
    printf("4 - Substituir os valores da sexta coluna pela soma dos valores "
           "das colunas 1 e 2\n");
    printf("0 - Encerrar o programa\n");
    scanf("%d", &decisao);

    switch (decisao) {
    case 1:
      apresentarMatriz(matriz);
      break;
    case 2:
      somaColunasImpares(matriz);
      break;
    case 3:
      mediaColunasSegundaQuarta(matriz);
      break;
    case 4:
      substituirColunaSoma(matriz);
      break;
    case 0:
      printf("Encerrando o programa...\n");
      return 0;
    default:
      printf("Opção inválida! Tente novamente.\n");
    }
  } while (decisao != 0);

  return 0;
}
