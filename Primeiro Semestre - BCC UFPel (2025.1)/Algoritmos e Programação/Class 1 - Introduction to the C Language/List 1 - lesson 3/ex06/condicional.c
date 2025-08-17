#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (valor > 10) {
        printf("E MAIOR QUE 10!");
    } else {
        printf("NAO E MAIOR QUE 10!");
    }
}