#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Digite a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Formam triangulo\n");
        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Nao formam triangulo\n");
    }

    return 0;
}