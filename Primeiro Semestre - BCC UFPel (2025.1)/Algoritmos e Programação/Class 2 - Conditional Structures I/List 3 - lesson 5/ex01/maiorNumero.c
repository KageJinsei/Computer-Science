#include <stdio.h>                                
int main() {
  int n1, n2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);

  printf("Digite o segundo valor: ");
  scanf("%d", &n2);

  if (n1 > n2) {
    printf("Valor 1: %d\nValor 2: %d\n", n1, n2);
    printf("Maior valor: %d", n1);

  } else if(n2 > n1) {
    printf("Valor 1: %d\nValor 2: %d\n", n1, n2);
    printf("Maior valor: %d", n2);

  } else {
    printf("Os valores sao iguais!");
  }
}
