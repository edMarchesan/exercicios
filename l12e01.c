#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verifica(int matriz[10][10], int i, int y, int prov);

int matriz[10][10], prov, verificado;
int main(void) {
  int maior = 0, maiori = 0, maiory = 0;
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    for (int y = 0; y < 10; y++) {
      int prov;
      do {
        prov = rand() % 100;
      } while (!verifica(matriz, i, y, prov));
      verifica(matriz, i, y, prov);
      if (prov > maior) {
        maior = prov;
        maiori = i;
        maiory = y;
      }
      matriz[i][y] = prov;
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int y = 0; y < 10; y++) {
      printf(" %2d ", matriz[i][y]);
    }
    printf("\n");
  }
  printf("O maior numero e %d e esta na linha %d na coluna %d.\n", maior,
         maiori, maiory);
}

int verifica(int matriz[10][10], int i, int y, int prov) {
  for (int x = 0; x < i; x++) {
    for (int z = 0; z < 10; z++) {
      if (matriz[x][z] == prov) {
        return 0;
      }
    }
  }
  for (int z = 0; z < y; z++) {
    if (matriz[i][z] == prov) {
      return 0;
    }
  }
  return 1;
}
