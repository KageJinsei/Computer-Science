#include <stdio.h>

int main() {
  float n1, n2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);

  printf("Digite a segunda nota: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  if (media >= 7) {
    printf("Media: %.1f - Aluno APROVADO!!!\n", media);
  } else if (media < 7 && media >= 3) {
    printf("Media: %.1f - Aluno em EXAME!!!\n", media);
  } else {
    printf("Media: %.1f - Aluno REPROVADO!!!\n", media);
  }
}
