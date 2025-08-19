#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d e %d", num, fatorial);
}