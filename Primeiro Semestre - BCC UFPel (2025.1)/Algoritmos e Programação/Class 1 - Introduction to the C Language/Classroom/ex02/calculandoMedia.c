#include <stdio.h>

int main() {
  float n1, n2;

  
  printf("Digite a primeira nota: ");
  scanf("%f", &n1);

  printf("Digite a segunda nota: ");
  scanf("%f", &n2);

  printf("Media do aluno: %.1f", (n1 + n2) / 2);
}
