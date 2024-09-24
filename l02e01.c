#include <stdio.h>

int main(void)
{float  c,f;
  printf("escreva a temperatura em F para transformar em C \n");
  scanf("%f", &f);
  c = (f-32)*(5.0/9.0);
  printf("a temperatura em c e %f \n", c);
  
  return 0;
}
