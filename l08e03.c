#include <stdio.h>

int main(void) {
  float array[20];
  for (int i = 0; i < 10; i++) {
    scanf("%f", &array[i]);
  }
  for (int i = 10; i < 20; i++) {
    if (i % 2 == 0) {
      array[i] = (i + i * 0.02);

    } else {
      array[i] = (i + i * 0.05);
    }
  }
  for (int i = 0; i < 20; i++) {
    printf("%.2f\n", array[i]);
  }
  return 0;
}
