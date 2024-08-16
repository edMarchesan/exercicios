#include <stdio.h>

int main(void) {
  int array1[6], array2[6];
  for (int i = 0; i < 6; i++) {
    scanf("%d", &array1[i]);
  }
  for (int y = 0; y < 6; y++) {
    if (y % 2 == 0) {
      array2[y] = array1[y + 1];
    } else {
      array2[y] = array1[y - 1];
    }
  }
  for (int i = 0; i < 6; i++) {
    printf("%d\n", array1[i]);
  }
  for (int i = 0; i < 6; i++) {
    printf("%d\n", array2[i]);
  }
  return 0;
}
