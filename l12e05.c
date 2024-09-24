#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatrizAleatorio(int matriz[5][5]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      matriz[i][j] = rand() % 100;
    }
  }
}

void preencherMatrizManual(int matriz[5][5]) {
  printf("Preencha a matriz:\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void apresentarMatriz(int matriz[5][5]) {
  printf("Matriz:\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%4d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void trocarLinhas(int matriz[5][5], int linha1, int linha2) {
  int temp;
  for (int j = 0; j < 5; j++) {
    temp = matriz[linha1][j];
    matriz[linha1][j] = matriz[linha2][j];
    matriz[linha2][j] = temp;
  }
}

void trocarColunas(int matriz[5][5], int coluna1, int coluna2) {
  int temp;
  for (int i = 0; i < 5; i++) {
    temp = matriz[i][coluna1];
    matriz[i][coluna1] = matriz[i][coluna2];
    matriz[i][coluna2] = temp;
  }
}

void trocarLinhaPorColuna(int matriz[5][5], int linha, int coluna) {
  int temp[5];
  for (int j = 0; j < 5; j++) {
    temp[j] = matriz[linha][j];
    matriz[linha][j] = matriz[j][coluna];
    matriz[j][coluna] = temp[j];
  }
}

int main(void) {
  int matriz[5][5];
  int decisao;
  int idx1, idx2;

  srand(time(NULL));

  do {
    printf("Escolha uma opção:\n");
    printf("1 - Preencher a matriz com números aleatórios\n");
    printf("2 - Preencher a matriz manualmente\n");
    printf("3 - Apresentar a matriz\n");
    printf("4 - Trocar valores de duas linhas\n");
    printf("5 - Trocar valores de duas colunas\n");
    printf("6 - Trocar valores de uma linha pelos valores de uma coluna\n");
    printf("7 - Trocar valores de uma coluna pelos valores de uma linha\n");
    printf("0 - Encerrar o programa\n");
    scanf("%d", &decisao);

    switch (decisao) {
    case 1:
      preencherMatrizAleatorio(matriz);
      break;
    case 2:
      preencherMatrizManual(matriz);
      break;
    case 3:
      apresentarMatriz(matriz);
      break;
    case 4:
      printf("Digite os índices das linhas a serem trocadas (0 a 4): ");
      scanf("%d %d", &idx1, &idx2);
      if (idx1 >= 0 && idx1 < 5 && idx2 >= 0 && idx2 < 5) {
        trocarLinhas(matriz, idx1, idx2);
      } else {
        printf("Índices inválidos.\n");
      }
      break;
    case 5:
      printf("Digite os índices das colunas a serem trocadas (0 a 4): ");
      scanf("%d %d", &idx1, &idx2);
      if (idx1 >= 0 && idx1 < 5 && idx2 >= 0 && idx2 < 5) {
        trocarColunas(matriz, idx1, idx2);
      } else {
        printf("Índices inválidos.\n");
      }
      break;
    case 6:
      printf("Digite o índice da linha e da coluna a serem trocados (0 a 4): ");
      scanf("%d %d", &idx1, &idx2);
      if (idx1 >= 0 && idx1 < 5 && idx2 >= 0 && idx2 < 5) {
        trocarLinhaPorColuna(matriz, idx1, idx2);
      } else {
        printf("Índices inválidos.\n");
      }
      break;
    case 7:
      printf("Digite o índice da coluna e da linha a serem trocados (0 a 4): ");
      scanf("%d %d", &idx1, &idx2);
      if (idx1 >= 0 && idx1 < 5 && idx2 >= 0 && idx2 < 5) {
        trocarLinhaPorColuna(matriz, idx2, idx1);
      } else {
        printf("Índices inválidos.\n");
      }
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
