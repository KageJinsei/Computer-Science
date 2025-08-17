#include <stdio.h>

int main() {
  int idade;

  printf("Qual a idade do nadador?: ");
  scanf("%d", &idade);
  
  if (idade >= 5 && idade <= 7) {
    printf("Idade o nadador: %d\n", idade);
    printf("Categoria de acordo com a idade: infantil A");

  } else if (idade >=8 && idade <= 10) {
    printf("Idade o nadador: %d\n", idade);
    printf("Categoria de acordo com a idade: infantil B");

  } else if (idade >= 11 && idade <= 13) {
    printf("Idade o nadador: %d\n", idade);
    printf("Categoria de acordo com a idade: juvenil A");

  } else if (idade >= 14 && idade <= 17) {
    printf("Idade o nadador: %d\n", idade);
    printf("Categoria de acordo com a idade: juvenil B");

  } else if (idade >= 18) {
    printf("Idade o nadador: %d\n", idade);
    printf("Categoria de acordo com a idade: adulto");

  }
}
