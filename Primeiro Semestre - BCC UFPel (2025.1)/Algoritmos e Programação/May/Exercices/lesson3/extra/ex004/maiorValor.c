#include <stdio.h>

int main() {
  int v1, v2, v3;

  printf("Insira o primeiro valor: ");
  scanf("%d", &v1);

  printf("Insira o segundo valor: ");
  scanf("%d", &v2);
  
  printf("Insira o terceiro valor: ");
  scanf("%d", &v3);

  if (v1 > v2 && v1 > v3) {
    printf("Maior valor: %d", v1);

  } else if (v2 > v1 && v2 > v3) {
    printf("Maior valor: %d", v2);
  
  } else if (v3 > v1 && v3 > v2) {
    printf("Maior valor: %d", v3);
      
  } 
}
