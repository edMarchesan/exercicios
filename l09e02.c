#include <stdio.h>

int array[5][5], decisao, linha, coluna, somalinha = 0, somacoluna = 0,
                                         diagPrinc = 0, diagSec = 0, toda = 0;

int main(void) {
  printf("Digite em sequencia 25 numeros para inserir primeiro 5 linhas e "
         "entao 5 colunas.\n");
  for (int i = 0; i < 5; i++) {
    for (int y = 0; y < 5; y++) {
      scanf("%d", &array[i][y]);
      if (i == y) {
        diagPrinc += array[i][y];
      }
      toda += array[i][y];
    }
  }
  printf("Perfeito, agora deseja fazer qual operacao?\n");
  printf("1 - Soma de linhas.\n2 - Soma de colunas.\n3 - Soma da diagonal "
         "principal.\n");
  printf("4 - Soma da diagonal secundaria.\n5 - Soma de toda matriz.\n");
  scanf("%d", &decisao);
  switch (decisao) {
  case 1:
    printf("Qual linha voce quer somar?, 0, 1, 2, 3 ou 4?\n");
    scanf("%d", &linha);
    for (int i = 0; i < 5; i++) {
      somalinha += array[linha][i];
    }
    printf("%d e a soma de toda linha.\n", somalinha);
    break;

  case 2:
    printf("Qual coluna voce deseja somar?\n");
    scanf("%d", &coluna);
    for (int i = 0; i < 5; i++) {
      somacoluna += array[i][coluna];
    }
    printf("%d e a soma de todas olunas.\n", somacoluna);
    break;
  case 3:
    printf("%d e a soma da diagonal principal\n", diagPrinc);
    break;
  case 4:
    for (int i = 0; i < 5; i++) {
      int c = 0;
      int l = 4;
      diagSec += array[l][c];
      c++;
      l--;

      printf("%d e a soma da diagonal secundaria\n", diagSec);
      break;
    }
  case 5:
    printf("%d e a soma de toda matriz\n", toda);
    break;
  }
  return 0;
}
