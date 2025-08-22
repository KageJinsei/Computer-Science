#include <stdio.h>
#include <math.h>

int main() {
    int x = 0;
    double s = 1;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (int i = 2; i <= 20; i++) {
        s += 1.0 / pow(x, i);
    }
    
    printf("Resultado: %.6f\n", s);
}