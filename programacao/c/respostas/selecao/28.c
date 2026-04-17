#include <stdio.h>

int main(void) {
    float diaria;
    int dias;
    float taxa, total;

    printf("Digite o valor da diaria: ");
    scanf("%f", &diaria);
    printf("Digite o numero de dias: ");
    scanf("%d", &dias);

    if (dias < 3) {
        taxa = 20.0;
    } else if (dias < 7) {
        taxa = 35.0;
    } else if (dias < 10) {
        taxa = 40.0;
    } else {
        taxa = 50.0;
    }

    total = diaria * dias + taxa * dias;
    printf("Total: %.2f\n", total);

    return 0;
}