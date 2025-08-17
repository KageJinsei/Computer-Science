#include <stdio.h>

int main() {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num == 0) {
    printf("Valor de entrada: %d\nO valor e zero", num);

  } else if (num < 0) {
    printf("Valor de entrada: %d\nNumero negativo", num);

  } else if (num > 0) {
    printf("Valor de entrada: %d\nNumero positivo", num);

  }
}
