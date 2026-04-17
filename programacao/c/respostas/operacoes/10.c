#include <stdio.h>

int main() {
    float distancia_km, tempo_minutos, velocidade_ms;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia_km);

    printf("Digite o tempo necessario (minutos): ");
    scanf("%f", &tempo_minutos);

    velocidade_ms = (distancia_km * 1000) / (tempo_minutos * 60);

    printf("A velocidade media e %.2f m/s\n", velocidade_ms);

    return 0;
}
