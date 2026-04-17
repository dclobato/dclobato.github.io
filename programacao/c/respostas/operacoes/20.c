#include <stdio.h>

int main() {
    double R1, R2, D_min, D_final;

    printf("Digite o raio do primeiro cabo (em mm): ");
    scanf("%lf", &R1);
    
    printf("Digite o raio do segundo cabo (em mm): ");
    scanf("%lf", &R2);

    D_min = 2 * R1 + 2 * R2;
    D_final = 1.1 * D_min;

    printf("O menor diametro do conduite necessario e %.2f mm\n", D_final);

    return 0;
}
