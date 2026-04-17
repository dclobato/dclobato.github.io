#include <stdio.h>

int main(void) {
    float gib, valor;

    printf("Consumo de dados (GiB): ");
    scanf("%f", &gib);

    if (gib <= 1.0) {
        valor = 19.99;
    } else if (gib <= 3.0) {
        valor = 19.99 + 24.99 * (gib - 1.0);
    } else {
        valor = 19.99 + 24.99 * 2.0 + 29.99 * (gib - 3.0);
    }

    printf("Valor da conta: %.2f\n", valor);

    return 0;
}