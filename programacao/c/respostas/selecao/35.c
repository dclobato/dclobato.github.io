#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta, r1, r2;

    printf("Digite a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao ha raizes reais\n");
    } else if (delta == 0) {
        r1 = -b / (2 * a);
        printf("Raiz unica: %.2f\n", r1);
    } else {
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %.2f\n", r1);
        printf("Raiz 2: %.2f\n", r2);
    }

    return 0;
}