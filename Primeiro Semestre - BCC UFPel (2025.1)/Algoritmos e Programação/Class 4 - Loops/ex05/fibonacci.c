#include <stdio.h>

int main() {
    int term, x = 0, y = 1, aux;
    printf("Digite quantos termos fibonacci deseja: ");
    scanf("%d", &term);

    if (term < 1) {
        printf("Numero de termos invalido!");
    } else {
        printf("%d ", x);

    if (term > 1) {
        printf("%d ", y);
    }
    
    for (int i = 2; i < term; i++) {
            aux = x + y;
            x = y;
            y = aux;
            printf("%d ", aux);
        }
    }
         
}   
    