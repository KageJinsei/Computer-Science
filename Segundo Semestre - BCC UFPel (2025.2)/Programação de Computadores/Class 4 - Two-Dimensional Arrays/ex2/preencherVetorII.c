#include <stdio.h>

int main() {
    int A[10];
    int i;

    for (i = 0; i <= 9; i++) {
        A[i] =  10 + (i*10);
        printf("[%d]: %d\n", i, A[i]);
    }
}

// Preencher um vetor A de 10 elementos(índices de 0 a 9) com os números inteiros 10, 20, 30, 40, 50, …, 100. Escrever o vetor A após o seu total preenchimento.