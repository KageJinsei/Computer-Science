#include <stdio.h>                                   
int main() {
  float n1, n2, media;
  int c = 1, a = 0;

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

    if (media >= 7) {
      a = a+1; // c++
    }

    c++;

  } while (c <= 10);

  printf("Alunos aprovados: %d\n", a);
}
