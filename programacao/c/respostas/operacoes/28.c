#include <stdio.h>
#include <math.h> // Biblioteca para sqrt()

int main() {
    const double R = 6371.0;
    double h, d;

    printf("Digite a altura do observador (em metros): ");
    scanf("%lf", &h);

    h /= 1000.0;

    d = sqrt(2 * h * R + pow(h, 2));

    printf("A distancia ate o horizonte e %.2f km (%.0f metros)\n", d, d * 1000);

    return 0;
}
