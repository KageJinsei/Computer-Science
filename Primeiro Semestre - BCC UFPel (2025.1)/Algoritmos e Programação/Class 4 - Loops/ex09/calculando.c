#include <stdio.h>

int main() {
    double s = 0;

    for (int i = 1; i <= 100; i++) {
        s += 1.0 / i;
    }
    
    printf("Resultado: %.6f\n", s);
}