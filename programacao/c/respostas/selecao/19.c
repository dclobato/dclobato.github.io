#include <stdio.h>

int main(void) {
    int mes;

    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    if (mes == 2) {
        printf("28 dias\n");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("30 dias\n");
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        printf("31 dias\n");
    } else {
        printf("Mes invalido\n");
    }

    return 0;
}