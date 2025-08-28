#include <stdio.h>

int main() {
    int n1, n2, c = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    do {
        printf("Digite o segundo valor: ");
        scanf("%d", &n2);
        
        if (n2 <= 0) {
            printf("Valor Invalido!!!\n");
        } else {
            c++;
        }
    } while (c < 1);

    printf("Resultado da divisao: %d", n1 / n2);
}