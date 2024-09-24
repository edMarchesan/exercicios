#include <stdio.h>

int verificaData(int d, int m, int a);

int main(void) {
  int dia, mes, ano;
  printf("Digie o dia, em seguida o mes, e depois o ano para validar.\n");
  scanf("%d", &dia);
  scanf("%d", &mes);
  scanf("%d", &ano);
  if (verificaData(dia, mes, ano) == 1) {
    printf("%d/%d/%d\n", dia, mes, ano);
  } else {
    printf("Data Invalida.\n");
  }
  return 0;
}

int verificaData(int d, int m, int a) {
  if (a > 1900) {
    if (m > 0 && m < 13) {
      if (d > 0 && d < 31) {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
          if (d > 30) {
            printf("Data Invalida.\n");
            return 0;
          }

        } else if (m == 2) {
          if (d > 29) {
            printf("Data Invalida.\n");
            return 0;
          }

        } else {
          printf("Data Valida.\n");
          return 1;
        }
      }
    }
  }
}
