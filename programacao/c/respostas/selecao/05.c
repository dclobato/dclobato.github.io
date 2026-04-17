#include <stdio.h>

int main(void) {
    int mes;

    printf("Digite o numero do mes (1 a 6): ");
    scanf("%d", &mes);

    if (mes == 1) {
        printf("Janeiro\n");
    } else if (mes == 2) {
        printf("Fevereiro\n");
    } else if (mes == 3) {
        printf("Março\n");
    } else if (mes == 4) {
        printf("Abril\n");
    } else if (mes == 5) {
        printf("Maio\n");
    } else if (mes == 6) {
        printf("Junho\n");
    } else {
        printf("Valor fora da faixa\n");
    }

    return 0;
}