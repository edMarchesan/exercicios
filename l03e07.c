#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int opcao;
  printf("Escolha uma opcao entre 10 e 15 conforme o cardapio. \n");
  scanf("%d", &opcao);
  switch (opcao) {
  case 10:
    printf("Voce escolheu um xis completo de R$ 12,00. \n");
    break;
  case 11:
    printf("Voce escolheu um xis bacon de R$ 16,50. \n");
    break;
  case 12:
    printf("Voce escolheu um xis coracao de boi de R$ 14,00.\n");
    break;
  case 13:
    printf("Voce escolheu um xis charque de R$ 14,50. \n");
    break;
  case 14:
    printf("Voce escolheu um xis ovelha de R$ 20,90. \n");
    break;
  case 15:
    printf("Voce escolheu um xis de linguica campeira de R$ 18,00. \n");
    break;
  default:
    printf("opcao invalida. \n");
  }

  return EXIT_SUCCESS;
}
