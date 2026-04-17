#include <stdio.h>

int main() {
    int n, j, m, i, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de j: ");
    scanf("%d", &j);

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    printf("Os %d primeiros naturais congruentes a %d modulo %d:\n", n, j, m);
    for (i = 0; i < n; i++) {
        resultado = j + i * m;
        printf("%d ", resultado);
    }
    printf("\n");

    return 0;
}
