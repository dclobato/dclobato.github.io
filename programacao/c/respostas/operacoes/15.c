#include <stdio.h>

int main() {
    float velocidade_ms, velocidade_kmh;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velocidade_ms);

    velocidade_kmh = velocidade_ms * 3.6;

    printf("A velocidade em km/h e %.2f\n", velocidade_kmh);

    return 0;
}
