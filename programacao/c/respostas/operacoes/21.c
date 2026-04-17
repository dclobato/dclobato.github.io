#include <stdio.h>
#include <math.h>

int main() {
    double x, y, resultado;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    resultado = log(y) / log(x);

    printf("log_%g(%g) = %.2f\n", x, y, resultado);

    return 0;
}
