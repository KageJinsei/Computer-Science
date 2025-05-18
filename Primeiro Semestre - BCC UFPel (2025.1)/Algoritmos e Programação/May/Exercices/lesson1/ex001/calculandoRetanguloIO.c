#include <stdio.h>

int main() {
  int base,altura;
  float area;

  printf("Digite o valor da base: ");
  scanf("%d", &base);


  printf("Digite o valor da altura: ");
  scanf("%d", &altura);

  area = base * altura;

  printf("O resultado de %d x %d corresponde a: %.1f", base, altura, area);
}
