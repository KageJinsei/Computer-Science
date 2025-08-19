#include <stdio.h>

int main() {
    int num;

    while(1) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > 0) {
            printf("POSITIVO!\n");
        } else if (num < 0) {
            printf("NEGATIVO!\n");
        } else {
            break;
        }
    }

}