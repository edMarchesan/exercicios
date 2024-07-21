#include <stdio.h>

int main(void) {

  int i, nf = 0;
  float height, taller = 0, shorter = 3, medheightf = 0, medheightall = 0;
  char sex;
  printf("Digite a 'm' para masculino e 'f' para feminino, em seguida, digite "
         "a sua altura em metros. \n");

  for (i = 1; i <= 10; i++) {
    scanf(" %c", &sex);
    scanf("%f", &height);
    if (sex == 'f') {
      medheightf += height;
      nf++;
    }
    if (height > taller) {
      taller = height;
    }
    if (height < shorter) {
      shorter = height;
    }
    medheightall += height;
    printf("Pessoa %d \n Altura %.2f \n Sexo %c \n", i, height, sex);
  }
  medheightall /= i - 1;
  medheightf /= nf;
  printf("A maior altura e %.2f\nA menor altura e %.2f\n", taller, shorter);
  printf("A media da altura dar mulheres e %.2f\n", medheightf);
  printf("A media geral e de %.2f\n", medheightall);
  return 0;
}
