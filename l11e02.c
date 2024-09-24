#include <stdio.h>
#include <string.h>

int main(void) {
  int cont = 0;
  char string[100];
  fgets(string, 100, stdin);
  for (int i = 0, len = strlen(string); i < len; i++) {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
        string[i] == 'o' || string[i] == 'u') {
      cont++;
    }
  }
  printf("Aparecem %d vogais.\n", cont);
  return 0;
}
