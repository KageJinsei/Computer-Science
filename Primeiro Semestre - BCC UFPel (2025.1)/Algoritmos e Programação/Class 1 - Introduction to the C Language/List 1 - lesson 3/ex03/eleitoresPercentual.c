#include <stdio.h>

int main() {
    float totalEleitores, vv, vb, vn;
    float pvv, pvb, pvn;

    printf("Digite o numero total de eleitores: ");
    scanf("%f", &totalEleitores);
    
    printf("Digite o total de votos validos: ");
    scanf("%f", &vv);
    
    printf("Digite o total de votos brancos: ");
    scanf("%f", &vb);

    printf("Digite o total de votos nulos: ");
    scanf("%f", &vn);

    pvv = (vv / totalEleitores) * 100;
    pvb = (vb / totalEleitores) * 100;
    pvn = (vn / totalEleitores) * 100;

    printf("Percentual de votos validos: %.2f\n", pvv);
    printf("Percentual de votos brancos: %.2f\n", pvb);
    printf("Percentual de votos nulos: %.2f\n", pvn);
}
