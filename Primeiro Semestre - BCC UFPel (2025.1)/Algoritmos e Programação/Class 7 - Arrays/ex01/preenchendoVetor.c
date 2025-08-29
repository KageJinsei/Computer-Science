#include <stdio.h>

int main() {
    int X[10];

    for (int i = 0; i < 10; i++) {
        X[i] = 30;
    }

    for (int j = 0; j < 10; j++) {
        printf("Valor no indice [%d]: %d\n", j, X[j]);
    }
}