#include <stdio.h>
#include <stdlib.h>

int main(void)
{int x,y,z;
  printf("Escreva tres numeros em seguida \n");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);
  if (x!=y&&y!=z&&x!=z) {
    if (x>y&&y>z) {
      printf("seus numeros %d %d %d.\n", z, y, x);
     }
    if (x>z&&z>y) {
      printf("seus nuemros %d %d %d.\n", y,z,x);
    }
    if (y>x&&x>z) {
      printf("seus numeros %d %d %d.\n", z,x,y);
    }
    if (y>z&&z>x) {
      printf("seus numeros %d %d %d.\n", x,z,y);
    }
    if (z>x&&x>y) {
      printf("seus numeros %d %d %d.\n", y,x,z);
    }
    if (z>y&&y>x) {
      printf("seus numeros %d %d %d.\n", x,y,z);
    }
  }
  else {printf("voce digitou pelo menos dois digitos iguais.\n");
  }
  return EXIT_SUCCESS;
}
