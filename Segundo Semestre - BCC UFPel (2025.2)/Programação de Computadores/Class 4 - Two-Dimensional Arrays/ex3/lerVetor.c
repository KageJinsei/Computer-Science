#include <stdio.h>

int main() {
    int B[10];
    int i;

    for (i = 0; i <= 9; i++) {

        if (i % 2 == 0) {
            B[i] = 20;
        } else {
            B[i] = 10;
        }
        
        printf("[%d]: %d\n", i, B[i]);
    }
}

// Preencher um vetor B de 10 elementos com 10 se o índice do elemento for ímpar, e 20 se for par. Escrever o vetor B após o seu total preenchimento.