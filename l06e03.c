#include <stdio.h>

int main(void) {
  int i, n1, n2, n3, m;

  for (i = 1; i <= 20; i++) {
    printf("Escreva as tres notas do aluno %d \n", i);
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    m = (n1 + n2 + n3) / 3;
    printf("O aluno %d obteve uma media de %d\n", i, m);
  }
  return 0;
}
