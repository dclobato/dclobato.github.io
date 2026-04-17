#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positivo\n");
    } else if (num < 0) {
        printf("Negativo\n");
    } else {
        printf("Nulo\n");
    }

    if (num % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}