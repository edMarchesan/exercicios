#include "stdio.h"
int main(void)
{
float x,y;
int result;
printf("Escreva as variaveis x e y em sequencia \n");
scanf("%f",&x);
scanf("%f",&y);
result = (x != y);
printf("O resultado e %i \n", result);
};
