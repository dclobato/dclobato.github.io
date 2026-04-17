#include <stdio.h>

int main() {
    int n, i, inicio;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    inicio = n * n - (n - 1);

    printf("Os %d numeros impares consecutivos cuja soma e %d^3:\n", n, n);
    for (i = 0; i < n; i++) {
        printf("%d ", inicio + 2 * i);
    }
    printf("\n");

    return 0;
}
