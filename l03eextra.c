#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int age, weight, age1, weight1;
  char name[10], name1[10];
  printf("Digite o nome, em seguida a idade e apos isso o peso do primerio individuo. \n");
  scanf("%s", name);
  scanf("%d", &age);
  scanf("%d", &weight);
  printf("Agora, digite o nome, seguido da idade e peso do segundo individuo. \n");
  scanf("%s", name1);
  scanf("%d", &age1);
  scanf("%d", &weight1);
  if (age > age1) {
    printf("%s e mais velho e ", name);
  } else {
    printf("%s e mais velho e ", name1);
  }
  if (weight > weight1) {
    printf("%s e mais gordo", name);
  } else {
    printf("%s e mais gordo", name1);
  }
  return EXIT_SUCCESS;
}
