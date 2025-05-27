#include <stdio.h>

int main() {
  float n1, n2, media;
  int op;

  do {
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    while (n1 < 0 || n1 > 10) {
      printf("Nota Invalida!\nDigite a primeira nota: ");
      scanf("%f", &n1);
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    while (n2 < 0 || n2 > 10) {
    printf("Nota Invalida!\nDigite a segunda nota: ");
    scanf("%f", &n2);

    }

    media = (n1 + n2) / 2;

    printf("Resultado: %f\n", media);

    printf("Deseja um novo calculo?\n1 - Sim\n2 - Nao\nDigite: ");
    scanf("%d", &op);

  } while (op == 1);
}
