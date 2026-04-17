#include <stdio.h>

int main(void) {
    int dia;

    printf("Digite um numero (1 a 7): ");
    scanf("%d", &dia);

    if (dia == 1) {
        printf("Domingo\n");
    } else if (dia == 2) {
        printf("Segunda-feira\n");
    } else if (dia == 3) {
        printf("Terca-feira\n");
    } else if (dia == 4) {
        printf("Quarta-feira\n");
    } else if (dia == 5) {
        printf("Quinta-feira\n");
    } else if (dia == 6) {
        printf("Sexta-feira\n");
    } else if (dia == 7) {
        printf("Sabado\n");
    } else {
        printf("Erro\n");
    }

    return 0;
}