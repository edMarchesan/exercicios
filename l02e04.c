#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x, y, div, res;
  printf("Escreva o dividendo e apos isso, o divisor \n");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("Voce escreveu %d e %d \n", x, y);
  div = (x/y);
  res = (x%y);
  printf("O resultado da divisao e entre o dividendo %d e o divisor %d eh %d, e o restante da operacao eh %d \n", x, y, div, res);

  return EXIT_SUCCESS;
}
