#include <stdio.h>

int main(void) {
  float numero_real;
  int numero_inteiro;
  char letra;

  printf("Informe um valor real:\n");
  scanf("%f", &numero_real);
  printf("Informe um numero inteiro:\n");
  scanf("%i", &numero_inteiro);
  printf("Informe uma letra:");
  scanf(" %c", &letra);

  printf("Valor real: %f\n", numero_real);
  printf("Valor inteiro: %i\n", numero_inteiro);
  printf("Letra digitada: %c\n", letra);
  printf("Palmeiras não tem mundial!\n");
   return 0;
}
