#include <stdio.h>

int main() {
  int id;
  float n1, n2, n3, mp, p, nf;

  printf("Digite o codigo do aluno: ");
  scanf("%d", &id);

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);

  if (n1 > n2 && n1 > n3) {
    mp = (n1 * 4) + (n2 * 3) + (n3 * 3);
    p = 4 + 3 + 3;
    nf = mp / p;

    if (nf >= 5) {
      printf("Codigo do aluno: %d\n", id);
      printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", n1, n2, n3);
      printf("Nota final: %.2f - APROVADO!", nf);

    } else {
      printf("Nota final: %.2f - REPROVADO!", nf);
    }

  } else if (n2 > n1 && n2 > n3) {
      mp = (n1 * 3) + (n2 * 4) + (n3 * 3);
      p = 4 + 3 + 3;
      nf = mp / p;

      if (nf >= 5) {
        printf("Codigo do aluno: %d\n", id);
        printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", n1, n2, n3);
        printf("Nota final: %.2f - APROVADO!", nf);

      } else {
        printf("Nota final: %.2f - REPROVADO!", nf); 
    }

  } else if (n3 > n1 && n3 > n2) {
      mp = (n1 * 3) + (n2 * 3) + (n3 * 4);
      p = 4 + 3 + 3;
      nf = mp / p;

      if (nf >= 5) {
        printf("Codigo do aluno: %d\n", id);
        printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", n1, n2, n3);
        printf("Nota final: %.2f - APROVADO!", nf);

    } else {
        printf("Nota final: %.2f - REPROVADO!", nf);
    }
  }
}
