#include <stdio.h>
int defarray(int array[]);

int main(void) {
  int array1[10], array2[10], array3[10];
  printf("Digite dez numeros inteiros para a primeira e depois mais 10 para a "
         "segunda.\n");
  defarray(array1);
  defarray(array2);
  for (int i = 0; i < 10; i++) {
    if (array1[i] == array2[i]) {
      array3[i] = 1;

    } else {
      array3[i] = 0;
    }
  }
  for (int i = 0; i < 10; i++) {
    printf("%d", array3[i]);
  }
  printf("\n");
  return 0;
}
int defarray(int array[]) {
  for (int i = 0; i < 10; i++) {
    scanf("%d", &array[i]);
  }
}
