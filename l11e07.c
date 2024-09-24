#include <stdio.h>
#include <string.h>

void substituirCaracter(char *str, char antigo, char novo) {
  while (*str != '\0') {
    if (*str == antigo) {
      *str = novo;
    }
    str++;
  }
}

int main() {
  char str[100];
  char antigo, novo;

  printf("Digite uma string: ");
  fgets(str, 100, stdin);

  int len = strlen(str);
  if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }

  printf("Digite o caractere a ser substituído: ");
  scanf(" %c", &antigo);

  printf("Digite o novo caractere: ");
  scanf(" %c", &novo);

  substituirCaracter(str, antigo, novo);

  printf("%s\n", str);

  return 0;
}
