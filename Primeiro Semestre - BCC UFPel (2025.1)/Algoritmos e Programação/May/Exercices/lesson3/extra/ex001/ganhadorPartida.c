#include <stdio.h>

int main(){
  int gols_g, gols_i;

  printf("Quantos gols foram marcados pelo Gremio?\nDigite: ");
  scanf("%d", &gols_g);
  
  printf("Quantos gols foram marcados pelo Inter?\nDigite: ");
  scanf("%d", &gols_i);

  if (gols_g > gols_i) {
    printf("PLACAR: Gremio %d - %d Inter\n", gols_g, gols_i);
    printf("Vencedor: Gremio!");

  } else if (gols_i > gols_g) {
    printf("PLACAR: Gremio %d - %d Inter\n", gols_g, gols_i);
    printf("Vencedor: Inter!");
  
  } else if (gols_g == gols_i) {
    printf("Empate!");
  }
}
