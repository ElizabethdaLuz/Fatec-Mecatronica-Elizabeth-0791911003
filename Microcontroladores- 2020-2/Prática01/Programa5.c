#include <stdio.h>

int main(void) {
  int numero, resto;
  
  printf("Informe um numero:\n");
  scanf("%d", &numero);

  resto= numero % 2;

  if (resto == 0){
    printf("Numero par!\n");
  } else{
    printf("Numero impar!\n");
  }
  printf("Fim de programa!\n");

   return 0;
}
