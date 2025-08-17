#include <stdio.h>

int main() {
    int idadeA, idadeM, idadeD;

    printf("Qual a a sua idade em anos?: ");
    scanf("%d", &idadeA);

    printf("Quantos meses?: ");
    scanf("%d", &idadeM);

    printf("Quantos dias?: ");
    scanf("%d", &idadeD);


    printf("Sua idade em dias e: %d", (idadeA * 365 + idadeM * 30) + idadeD);
}