#include <stdio.h>

int main() {
  int op;
  float n1, n2;
  
  printf("Digite um numero: ");
  scanf("%f", &n1);
  
  printf("Digite outro numero: ");
  scanf("%f", &n2);
  
  printf("\n1. Adicao\n2. Subtracao\n3. Divisao\n4. Multiplicacao\n");
  printf("Selecione uma opcao: ");
  scanf("%d", &op);

  switch (op) {
    case 1:
    printf("A soma entre %.2f e %.2f resulta em: %.2f", n1, n2, n1+n2);
    break;

    case 2:
    printf("A subtracao entre %.2f e %.2f resulta em: %.2f", n1, n2, n1-n2);
    break;

    case 3:
    printf("A divisao entre %.2f e %.2f resulta em: %.2f", n1, n2, n1/n2);
    break;

    case 4:
    printf("A multiplicacao entre %.2f e %.2f resulta em: %.2f", n1, n2, n1*n2);
    break;
  }
}

