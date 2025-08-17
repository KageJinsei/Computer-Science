#include <stdio.h>

int main() {
  int x, y;

  printf("Digite a coordenada X: ");
  scanf("%d", &x);
  
  printf("Digite a coordenada Y: ");
  scanf("%d", &y);

  if (x > 0 && y > 0) {
    printf("\nResultado:\nI Quadrante");
  
  } else if(x < 0 && y > 0) {
      printf("\nResultado:\nII Quadrante");

  } else if (x < 0 && y < 0) {
      printf("\nResultado:\nIII Quadrante");

  } else if (x > 0 && y < 0) {
      printf("\nResultado:\nIV Quadrante");
  
  } else if (x == 0 || y == 0) {
      printf("\nResultado:\nNenhuma Quadrante");
  }
}
