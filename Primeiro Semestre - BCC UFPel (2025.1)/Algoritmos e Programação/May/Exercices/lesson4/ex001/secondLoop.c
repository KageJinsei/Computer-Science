#include <stdio.h>

int main() {
  float n, d, r;

  printf("Digite o numerador: ");
  scanf("%f", &n);

  printf("Digite o denominador: ");
  scanf("%f", &d);

  while (d == 0) { 
    printf("Valor invalido!\nDigite o denominador: ");
    scanf("%f", &d);

  }

  r = n / d;

  printf("Resultado %f", r);
}
