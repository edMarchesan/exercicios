#include "stdio.h"
int main(void)
{
  int i, p;

printf("Escreva um numero \n");
scanf("%d", &i);
printf("\n");
printf("0\n");
do {
  p += 2;
  printf("%d \n", p);
} while (p<i);
return 0;
}
