#include <stdio.h>
#include <string.h>

void concatSemStrcat(char *dest, const char *src) {
  while (*dest != '\0') {
    dest++;
  }
  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
}

void concatComStrcat(char *dest, const char *src) { strcat(dest, src); }

int main() {
  char str1[100], str2[100];
  char concatenada[100];
  int opcao;

  printf("Digite a primeira string: ");
  fgets(str1, 100, stdin);
  int len1 = strlen(str1);
  if (len1 > 0 && str1[len1 - 1] == '\n') {
    str1[len1 - 1] = '\0';
  }

  printf("Digite a segunda string: ");
  fgets(str2, 100, stdin);
  int len2 = strlen(str2);
  if (len2 > 0 && str2[len2 - 1] == '\n') {
    str2[len2 - 1] = '\0';
  }

  printf("Escolha uma opção:\n");
  printf("1. Concatenar sem usar strcat\n");
  printf("2. Concatenar usando strcat\n");
  printf("Opção: ");
  scanf("%d", &opcao);

  switch (opcao) {
  case 1:
    strncpy(concatenada, str1, sizeof(concatenada));
    concatSemStrcat(concatenada, str2);
    printf("\nOpção 1: Concatenação sem strcat\n");
    break;
  case 2:
    strncpy(concatenada, str1, sizeof(concatenada));
    concatComStrcat(concatenada, str2);
    printf("\nOpção 2: Concatenação com strcat\n");
    break;
  default:
    printf("Opção inválida.\n");
    return 1;
  }

  printf("Primeira string: %s\n", str1);
  printf("Segunda string: %s\n", str2);
  printf("String concatenada: %s\n", concatenada);

  return 0;
}
