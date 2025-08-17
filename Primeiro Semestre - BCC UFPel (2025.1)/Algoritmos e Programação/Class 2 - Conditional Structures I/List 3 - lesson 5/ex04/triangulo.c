#include <stdio.h>

int main() {
  int a, b, c;

  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  
  printf("Digite o terceiro numero: ");
  scanf("%d", &c);

  if (a < (b + c) && b < (c + a) && c < (a + b)) {
    printf("Sao lados de um triangulo");

  } else {
    printf("Nao sao lados de um triangulo");
  }
}
