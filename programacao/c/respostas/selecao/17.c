#include <stdio.h>

int main(void) {
    int compra, pago, troco, cedulas;

    printf("Digite o valor da compra: ");
    scanf("%d", &compra);
    printf("Digite o valor pago: ");
    scanf("%d", &pago);

    troco = pago - compra;

    cedulas = troco / 100;
    if (cedulas > 0) {
        printf("%d cedula(s) de 100\n", cedulas);
        troco = troco % 100;
    }

    cedulas = troco / 50;
    if (cedulas > 0) {
        printf("%d cedula(s) de 50\n", cedulas);
        troco = troco % 50;
    }

    cedulas = troco / 20;
    if (cedulas > 0) {
        printf("%d cedula(s) de 20\n", cedulas);
        troco = troco % 20;
    }

    cedulas = troco / 10;
    if (cedulas > 0) {
        printf("%d cedula(s) de 10\n", cedulas);
        troco = troco % 10;
    }

    cedulas = troco / 5;
    if (cedulas > 0) {
        printf("%d cedula(s) de 5\n", cedulas);
        troco = troco % 5;
    }

    cedulas = troco / 2;
    if (cedulas > 0) {
        printf("%d cedula(s) de 2\n", cedulas);
        troco = troco % 2;
    }

    cedulas = troco / 1;
    if (cedulas > 0) {
        printf("%d cedula(s) de 1\n", cedulas);
    }

    return 0;
}