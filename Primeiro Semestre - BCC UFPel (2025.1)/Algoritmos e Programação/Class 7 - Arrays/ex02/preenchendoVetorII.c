#include <stdio.h>

int main() {
    int A[10];

    for (int i = 0; i < 10; i++) {
        A[i] = (i + 1) * 10;
    }

    for (int j = 0; j < 10; j++) {
        printf("Valor no indice [%d]: %d\n", j, A[j]);
    }
}