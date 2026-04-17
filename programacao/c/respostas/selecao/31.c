#include <stdio.h>

int main(void) {
    int a, b, c, x, y, z;
    int cont1, cont2;

    printf("Medidas do conteiner (A, B, C): ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Medidas do armazem (X, Y, Z): ");
    scanf("%d %d %d", &x, &y, &z);

    cont1 = (x / a) * (y / b) * (z / c);
    cont2 = (x / b) * (y / a) * (z / c);

    if (cont1 > cont2) {
        printf("%d conteineres\n", cont1);
    } else {
        printf("%d conteineres\n", cont2);
    }

    return 0;
}