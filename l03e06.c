#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    printf("Escreva dois numeros. \n");
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a%b)==0) {
        printf("Os numeros sao multiplos. \n");
    }
    else if ((b%a)==0) {
        printf("Os numeros sao multiplos. \n");
    }
    else {
        printf("Os numeros nao sao multiplos. \n");
    }

    return EXIT_SUCCESS;
}
