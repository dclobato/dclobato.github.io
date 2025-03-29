#include <stdio.h>
#include <math.h> // Para a funcao sin() e M_PI

int main() {
    int N;      // Numero de lados do poligono
    double R;   // Raio da circunferencia
    double p;   // Perimetro do poligono

    printf("Digite o numero de lados do poligono (N): ");
    scanf("%d", &N);

    printf("Digite o raio da circunferencia (R): ");
    scanf("%lf", &R);

    p = 2 * N * R * sin(M_PI / N);

    printf("O perimetro do poligono regular e %.2f\n", p);

    return 0;
}
