#include <stdio.h>
#include <math.h>

int main() {
    const double R = 6371.01;
    double x1, y1, x2, y2;
    double d;

    printf("Digite a latitude do primeiro ponto (graus): ");
    scanf("%lf", &x1);

    printf("Digite a longitude do primeiro ponto (graus): ");
    scanf("%lf", &y1);

    printf("Digite a latitude do segundo ponto (graus): ");
    scanf("%lf", &x2);

    printf("Digite a longitude do segundo ponto (graus): ");
    scanf("%lf", &y2);

    x1 = x1 * M_PI / 180;
    y1 = y1 * M_PI / 180;
    x2 = x2 * M_PI / 180;
    y2 = y2 * M_PI / 180;

    d = R * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));

    printf("A distancia entre os pontos e %.2f km\n", d);

    return 0;
}
