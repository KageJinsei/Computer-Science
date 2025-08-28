#include <stdio.h>

int main() {
    float n1, n2, media;
    int v = 0;

    do {

        while (1) {
            printf("Digite a primeira nota: ");
            scanf("%f", &n1);

            if (n1 < 0 || n1 > 10) {
                printf("Valor Invalido!!!\n");
            } else {
                break;
            }
        }

     
        while (1) {
            printf("Digite a segunda nota: ");
            scanf("%f", &n2);
        
            if (n2 < 0 || n2 > 10) {
                printf("Valor Invalido!!!\n");
            } else {
                break;
            }
        }

        media = (n1 + n2) / 2;
    
        if (media < 7) {
            printf("Resultado: %.2f (reprovado)\n\n", media);
        } else {
            printf("Resultado: %.2f (aprovado)\n\n", media);
        }

        while (1) {
            printf("Deseja realizar um novo calculo?\n1 - sim\n2 - nao\n");
            printf("Digite: ");
            scanf("%d", &v);
        
            if (v < 1 || v > 2) {
                printf("Operacao Invalida!!!\n");
            } else {
                break;
            }
        }

    } while (v == 1);

}