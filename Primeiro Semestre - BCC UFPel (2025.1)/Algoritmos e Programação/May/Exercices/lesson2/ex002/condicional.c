#include <stdio.h>                                
int main() {
  int a, b, c;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);

  printf("Digite o segundo valor: ");
  scanf("%d", &b);

  printf("Digite o terceiro valor: ");
  scanf("%d", &c);

  if (a > b && a > c) {
    printf("Variaveis:\nA: %d\nB: %d\nC: %d\n", a, b, c);
    printf("A variavel A tem o maior valor: %d\n", a);
  } else if (b > a && b > c) {
      printf("Variaveis:\nA: %d\nB: %d\nC: %d\n", a, b, c);
      printf("A variavel B tem o maior valor: %d\n", b);
  } else if (c > a && c > b) {
      printf("Variaveis:\nA: %d\nB: %d\nC: %d\n", a, b, c);
      printf("A variavel C tem o maior valor: %d\n", c);
  } else {
      printf("Variaveis:\nA: %d\nB: %d\nC: %d\n", a, b, c);
      printf("As variaveis tem valores iguais");
  }
}
