#include <stdio.h>

int main() {
    float n1, n2, n3;
    
    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 5;

    printf("A media do aluno e: %.2f", (n1 + n2 + n3) / 10);
}