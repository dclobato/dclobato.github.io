#include <stdio.h>
#include <math.h>

int main() {
    float distancia_km, frequencia_mhz, fspl;

    printf("Digite a distancia (km): ");
    scanf("%f", &distancia_km);

    printf("Digite a frequencia (MHz): ");
    scanf("%f", &frequencia_mhz);

    fspl = 32.5 + 20 * log10(distancia_km) + 20 * log10(frequencia_mhz);

    printf("A perda no espaco livre e %.2f dB\n", fspl);

    return 0;
}
