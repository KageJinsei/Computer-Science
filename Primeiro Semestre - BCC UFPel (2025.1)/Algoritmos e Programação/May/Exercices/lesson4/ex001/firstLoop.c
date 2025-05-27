#include <stdio.h>

int main() {
  float n, d, r;

  printf("Digite o numerador: ");
  scanf("%f", &n);
  
  do {
  printf("Digite o denominador: ");
  scanf("%f", &d);
  
  if (d == 0) {
    printf("O denominador nao pode ser 0!\n");  
  }

  } while (d == 0);

  r = n / d;
  
  printf("Resultado %f", r);
}
