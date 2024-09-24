#include <ctype.h>
#include <stdio.h>

int main(void) {
  char str[16];
  int cont = 0;
  printf("Digite a string: \n");
  scanf("%s", str);
  for (int i = 0; i < 16; i++) {
    while ((char)str[i] != "\0") {
      cont++;
    }
  }
  printf("%s e sua string?, tem %d caracteres", str, cont);
  return 0;
}
