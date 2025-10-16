#include <stdio.h>

int main() {
    int C[10];
    int i, c = 0;

    for (i = 0; i <= 9; i++) {

        printf("Digite um valor: ");
        scanf("%d", &c);

        if (c < 0) {
            C[i] = 0;
        } else {
            C[i] = c;
        }
        
        printf("[%d]: %d\n", i, C[i]);
    }
}

// Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.