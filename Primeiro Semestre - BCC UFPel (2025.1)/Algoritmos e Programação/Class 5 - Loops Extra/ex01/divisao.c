#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    while (1) {
        printf("Digite o segundo valor: ");
        scanf("%d", &n2);
        
        if (n2 <= 0) {
            printf("Valor Invalido!!!\n");
        } else {
            break;
        }
    }

    printf("Resultado da divisao: %d", n1 / n2);
}