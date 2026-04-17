#include <stdio.h>

int main() {
    float altura, peso_ideal;

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("O peso ideal e %.2f kg\n", peso_ideal);

    return 0;
}
