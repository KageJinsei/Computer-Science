#include <stdio.h>

int main() {
    int num = 0, fatorial, soma;

    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < 7) {
            fatorial = 1;

            for (int j = 1; j <= num; j++) {
                fatorial *= j;
            }

            printf("fatorial de %d e: %d\n", num, fatorial);
            
        } else {
            soma = 0;
            for (int k = 1; k <= num; k++) {
                soma += k;

                if (k ==  num) {
                    printf("%d", k);
                } else {
                printf("%d + ", k);
                }                
            }
            printf(" = %d\n", soma);
        }
    }
}
