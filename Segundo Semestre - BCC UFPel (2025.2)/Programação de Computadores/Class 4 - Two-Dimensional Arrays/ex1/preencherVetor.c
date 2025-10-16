#include <stdio.h>

int main() {
    int X[10];
    int i;

    for (i = 0; i <= 9; i++) {
        X[i] = 30;
        printf("[%d]: %d\n", i, X[i]);
    }
}

// Preencher um vetor X de 10 elementos(índices de 0 a 9) com o valor inteiro 30. Escrever o vetor X, após seu total preenchimento.