#include <stdio.h>
#include <math.h>

int main(void) {
    float vp, taxa1, prazo1, taxa2, prazo2, vf1, vf2;

    printf("Valor a investir: ");
    scanf("%f", &vp);
    printf("Taxa 1 (%% ao periodo): ");
    scanf("%f", &taxa1);
    printf("Prazo 1: ");
    scanf("%f", &prazo1);
    printf("Taxa 2 (%% ao periodo): ");
    scanf("%f", &taxa2);
    printf("Prazo 2: ");
    scanf("%f", &prazo2);

    vf1 = vp * pow(1 + taxa1 / 100.0, prazo1);
    vf2 = vp * pow(1 + taxa2 / 100.0, prazo2);

    printf("Aplicacao 1: %.2f\n", vf1);
    printf("Aplicacao 2: %.2f\n", vf2);

    if (vf1 > vf2) {
        printf("Aplicacao 1 e melhor\n");
    } else {
        printf("Aplicacao 2 e melhor\n");
    }

    return 0;
}