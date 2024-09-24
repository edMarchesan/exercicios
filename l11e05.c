
#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
  int comprimento = strlen(str);
  for (int i = 0; i < comprimento / 2; i++) {
    char temp = str[i];
    str[i] = str[comprimento - i - 1];
    str[comprimento - i - 1] = temp;
  }
}

int main() {
  char str[100];

  printf("Digite uma string: ");
  fgets(str, sizeof(str), stdin);
  int len = strlen(str);
  if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }

  inverterString(str);

  printf("%s\n", str);

  return 0;
}
