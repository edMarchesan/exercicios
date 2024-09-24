#include <stdio.h>
#include <string.h>
void cmpCom(const char *str1, const char *str2) {
  if (strcmp(str1, str2) == 0) {
    printf("Sao iguais.\n");
  } else {
    printf("Sao diferentes.\n");
  }
}

void cmpSem(const char *str1, const char *str2) {
  while (*str1 != '\0' && *str2 != '\0') {
    if (*str1 != *str2) {
      printf("São diferentes.\n");
      return;
    }
    str1++;
    str2++;
  }

  if (*str1 == '\0' && *str2 == '\0') {
    printf("São iguais.\n");
  } else {
    printf("São diferentes.\n");
  }
}

int main(void) {
  char string1[30], string2[30];
  int decisao;
  printf("Escreva a primeira string de 30.\n");
  fgets(string1, 30, stdin);
  printf("Escreva a segunda string de 30.\n");
  fgets(string2, 30, stdin);

  printf("Qual o metodo deseja utilizar?\n");
  printf("1-Com strcmp.\n2-Sem strcmp\n");
  scanf("%d", &decisao);
  switch (decisao) {
  case 1:
    cmpCom(string1, string2);
    break;
  case 2:
    cmpSem(string1, string2);
    break;
  default:
    printf("Opcao invalida.\n");
    return 0;
  }
  return 0;
}
