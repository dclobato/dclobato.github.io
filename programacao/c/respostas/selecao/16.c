#include <stdio.h>

int main(void) {
    int dia, mes, ano, proximo_dia;

    printf("Digite dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    proximo_dia = dia + 1;

    if (mes == 2) {
        if (dia == 28) {
            dia = 1;
            mes = 3;
        } else {
            dia = proximo_dia;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia == 30) {
            dia = 1;
            mes = mes + 1;
        } else {
            dia = proximo_dia;
        }
    } else {
        if (dia == 31) {
            dia = 1;
            mes = mes + 1;
            if (mes > 12) {
                mes = 1;
                ano = ano + 1;
            }
        } else {
            dia = proximo_dia;
        }
    }

    printf("%02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}