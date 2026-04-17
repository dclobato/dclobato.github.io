#include <stdio.h>

int main(void) {
    float saldo, credito;

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    if (saldo <= 200.0) {
        printf("Nenhum credito\n");
    } else if (saldo <= 1000.0) {
        credito = saldo * 0.20;
        printf("Credito: %.2f\n", credito);
    } else if (saldo <= 2000.0) {
        credito = saldo * 0.30;
        printf("Credito: %.2f\n", credito);
    } else if (saldo <= 10000.0) {
        credito = saldo * 0.50;
        printf("Credito: %.2f\n", credito);
    } else {
        credito = saldo * 1.0;
        printf("Credito: %.2f\n", credito);
    }

    return 0;
}