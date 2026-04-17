#include <stdio.h>

int main() {
    float lado1, lado2, area;

    printf("Digite o primeiro lado do retangulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do retangulo: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("A area do retangulo vale %.2f\n", area);

    return 0;
}
