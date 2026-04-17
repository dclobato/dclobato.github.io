#include <stdio.h>

int main() {
    float bandeirada, valor_por_250m, distancia_km, total;

    printf("Digite o valor da bandeirada: ");
    scanf("%f", &bandeirada);

    printf("Digite o valor a cada 250m: ");
    scanf("%f", &valor_por_250m);

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia_km);

    total = bandeirada + (distancia_km * 1000 / 250) * valor_por_250m;

    printf("O valor total da corrida e R$ %.2f\n", total);

    return 0;
}
