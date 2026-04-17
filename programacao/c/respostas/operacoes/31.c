#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, k, L, m;
    int ano, mes, dia;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    a = ano % 19;
    b = ano / 100;
    c = ano % 100;
    d = b / 4;
    e = b % 4;
    f = (b + 8) / 25;
    g = (b - f + 1) / 3;
    h = (19 * a + b - d - g + 15) % 30;
    i = c / 4;
    k = c % 4;
    L = (32 + 2 * e + 2 * i - h - k) % 7;
    m = (a + 11 * h + 22 * L) / 451;

    mes = (h + L - 7 * m + 114) / 31;
    dia = 1 + (h + L - 7 * m + 114) % 31;

    printf("A Pascoa em %d sera no dia %02d/%02d/%d\n", ano, dia, mes, ano);

    return 0;
}
