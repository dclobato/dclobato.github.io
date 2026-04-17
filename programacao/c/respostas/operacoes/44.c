#include <stdio.h>

int main() {
    float farinha, agua, levain;
    float hidratacao;

    printf("Digite a quantidade de farinha (g): ");
    scanf("%f", &farinha);

    printf("Digite a quantidade de agua (ml): ");
    scanf("%f", &agua);

    printf("Digite a quantidade de levain (g): ");
    scanf("%f", &levain);

    hidratacao = (agua + levain / 2) / (farinha + levain / 2) * 100;

    printf("A hidratacao da massa e %.1f%%\n", hidratacao);

    return 0;
}
