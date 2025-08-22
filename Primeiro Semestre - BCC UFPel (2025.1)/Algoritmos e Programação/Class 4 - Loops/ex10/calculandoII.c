#include <stdio.h>

int main() {
    int n = 0;
    double s = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        s += 1.0 / i;
    }
    
    printf("Resultado: %.6f\n", s);
}