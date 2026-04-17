#include <stdio.h>

int main() {
    int n, soma;

    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    soma = n * (n + 1) / 2;

    printf("A soma de 1 ate %d e %d\n", n, soma);

    return 0;
}
