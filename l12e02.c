#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz[4][4], vetor[4], soma, sub, mult, divi;

int main(void) {
  srand(time(NULL));
  for (int i = 0; i < 4; i++) {
    for (int y = 0; y < 4; y++) {
      matriz[i][y] = rand() % 100;
    }
  }

  for (int i = 0; i < 4; i++) {
    soma += matriz[i][0];
  }
  vetor[0] = soma;

  for (int i = 0; i < 4; i++) {
    sub -= matriz[i][1];
    vetor[1] = sub;
  }
  mult = matriz[0][2];
  for (int i = 1; i < 4; i++) {
    mult = mult * matriz[i][2];
  }
  vetor[2] = mult;
  divi = matriz[0][3];
  for (int i = 1; i < 4; i++) {
    divi = divi / matriz[i][3];
  }
  vetor[3] = divi;
  for (int i = 0; i < 4; i++) {
    printf("[%d]\n", vetor[i]);
  }
  return 0;
}
