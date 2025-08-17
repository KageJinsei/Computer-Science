#include <stdio.h>

int main() {
    float custoFabrica, porcentDist, impostos, custoFinal;

    printf("Digite o custo de fabricacao do carro: ");
    scanf("%f", &custoFabrica);

    porcentDist = 0.28;
    impostos = 0.45;
    custoFinal = custoFabrica * (1 +  porcentDist + impostos);
    
    printf("O preco final do carro e de: %.2f", custoFinal);
}