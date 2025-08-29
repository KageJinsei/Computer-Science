#include <stdio.h>

int main() {
    int B[10];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            B[i] = 20;
        } else {
            B[i] = 10;
        }
        
    }

    for (int j = 0; j < 10; j++) {
        printf("Valor no indice [%d]: %d\n", j, B[j]);
    }
}