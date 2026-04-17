#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dias_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        dias_mes[2] = 29;
    }

    dia++;
    if (dia > dias_mes[mes]) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            ano++;
        }
    }

    printf("O dia seguinte e: %02d/%02d/%d\n", dia, mes, ano);

    return 0;
}
