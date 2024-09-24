
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int palindromo(const char *str) {
  int inicio = 0;
  int fim = strlen(str) - 1;

  while (inicio < fim) {
    while (inicio < fim && !isalnum(str[inicio])) {
      inicio++;
    }
    while (inicio < fim && !isalnum(str[fim])) {
      fim--;
    }
    if (tolower(str[inicio]) != tolower(str[fim])) {
      return 0;
    }
    inicio++;
    fim--;
  }
  return 1;
}

int main() {
  char str[100];

  printf("Digite uma string: ");
  fgets(str, 100, stdin);

  size_t len = strlen(str);
  if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }

  if (palindromo(str)) {
    printf("A string é um palíndromo.\n");
  } else {
    printf("A string não é um palíndromo.\n");
  }

  return 0;
}
