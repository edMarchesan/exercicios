#include <stdio.h>

int main(void) {
  int array[100];
  for (int i = 0; i < 100; i++) {
    if (i % 2 == 0) {
      array[i] = 'X';

    } else {
      array[i] = 'O';
    }
    printf("%c ", (char)array[i]);
  }

  return 0;
}
