#include <stdio.h>

int main() {
    int v1, v2;

    printf("Digite um numero: ");
    scanf("%d", &v1);

    printf("Digite outro numero: ");
    scanf("%d", &v2);

    if (v1 > v2) {
        printf("%d %d", v1, v2);
    } else {
        printf("%d %d", v2, v1);
    }
}