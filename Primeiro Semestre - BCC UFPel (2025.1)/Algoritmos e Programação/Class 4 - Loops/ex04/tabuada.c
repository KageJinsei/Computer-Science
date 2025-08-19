#include <stdio.h>

int main() {
    int num, multi;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 0 || num > 10) {
        printf("VALOR INVALIDO!\n");

    } else {

        printf("\nTabuada do %d\n",num);

        for (int i = 1; i <= 10; i++) {
            multi = num * i;
            
            printf("%d X %d = %d\n", num, i, multi);
        }
        
    }
}