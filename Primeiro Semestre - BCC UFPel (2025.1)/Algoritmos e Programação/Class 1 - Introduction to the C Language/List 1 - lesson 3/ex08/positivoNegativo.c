#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        printf("Valor positivo!");
    } else {
        printf("Valor negativo!");
    }
}