#include <stdio.h>

int main(void) {
    float salario, irrf, parcela;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        irrf = 0.0;
        parcela = 0.0;
    } else if (salario <= 2826.65) {
        irrf = salario * 0.075 - 142.80;
        parcela = 142.80;
    } else if (salario <= 3751.05) {
        irrf = salario * 0.15 - 354.80;
        parcela = 354.80;
    } else if (salario <= 4664.68) {
        irrf = salario * 0.225 - 636.13;
        parcela = 636.13;
    } else {
        irrf = salario * 0.275 - 869.36;
        parcela = 869.36;
    }

    printf("IRRF: %.2f\n", irrf);

    return 0;
}