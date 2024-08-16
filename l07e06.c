#include <stdio.h>

int main(void) {
  int fatorial, numero;
  long int soma = 0;

  printf("Digite 15 numeros em sequencia\n");
  for (int i = 1; i < 16; i++) {
    scanf("%d", &numero);
    for (fatorial = 1; numero > 1; numero -= 1) {
      fatorial *= numero;
    }
    soma += fatorial;
  }
  printf("A soma dos fatoriais destes numeros e %ld", soma);
  return 0;
}
