#include <stdio.h>

int main() {
    int num, par = 0, impar = 0, cp = 0, ci = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            cp = cp + 1;
            par = par + num;
        } else {
            ci = ci + 1;
            impar = impar + num;
        }

    
    }
    
    printf("Quantidade de numeros pares lidos: %d\n", cp);
    printf("Quantidade de numeros impares lidos: %d\n", ci);

    printf("A soma dos numeros pares e igual a: %d\n", par);
    printf("A media dos numeros impares e igual a: %.2f\n", (float) impar / ci);
}