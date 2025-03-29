#include <stdio.h>

int main() {
    float consumo, velocidade_media, tempo_viagem, distancia, litros_gastos;

    printf("Digite o consumo do veiculo (km/l): ");
    scanf("%f", &consumo);

    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade_media);

    printf("Digite o tempo de viagem (em horas): ");
    scanf("%f", &tempo_viagem);

    distancia = velocidade_media * tempo_viagem;
    litros_gastos = distancia / consumo;

    printf("A quantidade de litros de combustivel gastos na viagem e %.2f litros\n", litros_gastos);

    return 0;
}
