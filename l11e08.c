
#include <stdio.h>
#include <string.h>

void removerEspacos(char *str) {
  char *dest = str;

  while (*str != '\0') {
    if (*str != ' ') {
      *dest = *str;
      dest++;
    }
    str++;
  }
  *dest = '\0';
}

int main() {
  char str[100];

  printf("Digite uma string: ");
  fgets(str, 100, stdin);

  int len = strlen(str);
  if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }
  removerEspacos(str);

  printf("%s\n", str);

  return 0;
}
