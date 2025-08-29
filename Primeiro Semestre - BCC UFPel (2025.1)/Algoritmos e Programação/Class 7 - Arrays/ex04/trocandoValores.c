#include <stdio.h>

int main() {
    int C[10] = {21, 13, -2, -1, 12, -4, -5, 42, 0, 32};

    for (int j = 0; j < 10; j++) {
        printf("Valor no indice [%d] (antes): %d\n", j, C[j]);
    }

    for (int i = 0; i < 10; i++) {
        if (C[i] < 0) {
            C[i] = 0;
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("Valor no indice [%d] (depois): %d\n", j, C[j]);
    }
}