#include <stdio.h>                                
int main() {
  float nota;

  printf("Digite a nota: ");
  scanf("%f", &nota);

  if (nota > 9 && nota <= 10) {
    printf("Nota: %.1f\n", nota);
    printf("Conceito: A");

  } else if (nota > 7 && nota <=9) {
    printf("Nota: %.1f\n", nota);
    printf("Conceito: B");
  
  } else if (nota > 5 && nota <=7) {
    printf("Nota: %.1f\n", nota);
    printf("Conceito: C");
  
  } else if (nota >= 0 && nota <=5) {
    printf("Nota: %.1f\n", nota);
    printf("Conceito: D");
  
  } else {
    printf("Nota invalida!");
  }
}
