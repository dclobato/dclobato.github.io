#include <stdio.h>

int main(void) {
    int ano, d;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    d = (ano + (ano - 1) / 4 - (ano - 1) / 100 + (ano - 1) / 400) % 7;

    if (d == 0) {
        printf("Domingo\n");
    } else if (d == 1) {
        printf("Segunda-feira\n");
    } else if (d == 2) {
        printf("Terca-feira\n");
    } else if (d == 3) {
        printf("Quarta-feira\n");
    } else if (d == 4) {
        printf("Quinta-feira\n");
    } else if (d == 5) {
        printf("Sexta-feira\n");
    } else {
        printf("Sabado\n");
    }

    return 0;
}