#include <stdio.h>

int main(void) {
    float diaria;
    int dias;
    float taxa, total;

    printf("Digite o valor da diaria: ");
    scanf("%f", &diaria);
    printf("Digite o numero de dias: ");
    scanf("%d", &dias);

    if (dias <= 8) {
        taxa = 8.0;
    } else {
        taxa = 5.0;
    }

    total = diaria * dias + taxa * dias;
    printf("Total a pagar: %.2f\n", total);

    return 0;
}