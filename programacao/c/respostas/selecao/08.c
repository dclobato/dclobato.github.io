#include <stdio.h>

int main(void) {
    float saldo, valor;

    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo);
    printf("Digite o valor da operacao: ");
    scanf("%f", &valor);

    if (valor < 0) {
        if (saldo + valor >= 0) {
            printf("Saldo final: %.2f\n", saldo + valor);
        } else {
            printf("Saldo insuficiente\n");
        }
    } else {
        printf("Saldo final: %.2f\n", saldo + valor);
    }

    return 0;
}