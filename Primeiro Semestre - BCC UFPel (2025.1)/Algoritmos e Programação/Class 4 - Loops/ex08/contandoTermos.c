#include <stdio.h>

int main() {
    int term = 1;

    for (int i = 0; i < 30; i++) {
        printf("%d ", term);
        term *= 3;
    }
}