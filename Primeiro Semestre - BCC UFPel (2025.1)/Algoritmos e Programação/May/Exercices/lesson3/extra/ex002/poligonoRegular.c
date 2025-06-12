#include <stdio.h>

int main() {
  int nl, ml;
   
  while (nl < 3 || nl > 5) {

  printf("Insira o numero de lados: ");
  scanf("%d", &nl);
    if (nl < 3) {
      printf("Nao e um poligono!\n");
    } else if (nl > 5) {
        printf("Poligono nao identificado!\n");
    }
  } 
  
  if (nl == 5) {
    printf("Pentagono");

  } else if (nl == 3 || nl == 4) { 

    printf("Insira a medida do lado: ");
    scanf("%d", &ml);
    
    if (nl == 3) {
      printf("Triangulo\nPerimetro: %d", nl*ml);
    
    } else if (nl == 4) {
      printf("Quadrado\nArea: %d", ml*ml);

    }
  }
}
