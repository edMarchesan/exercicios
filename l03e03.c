#include <stdio.h>

int main(void)
{
  int a,b,c;
  printf("Escreva as tres variaveis. \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if ((a+b)>c) {
    printf("A + B e maior que C.\n");
  }
  else if ((a+b<c)) {
    printf("A + B e menor que C. \n");
  }
  else {
    printf("A+B e igual a C.\n");
  }
  return 0;
}
