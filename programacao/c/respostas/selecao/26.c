#include <stdio.h>

int main(void) {
    float dist, consumog, consumoe, precog, precoe, custog, custoe;

    printf("Distancia a percorrer (km): ");
    scanf("%f", &dist);
    printf("Consumo com gasolina (km/l): ");
    scanf("%f", &consumog);
    printf("Consumo com etanol (km/l): ");
    scanf("%f", &consumoe);
    printf("Preco da gasolina (R$): ");
    scanf("%f", &precog);
    printf("Preco do etanol (R$): ");
    scanf("%f", &precoe);

    custog = (dist / consumog) * precog;
    custoe = (dist / consumoe) * precoe;

    if (custog < custoe) {
        printf("Gasolina e mais vantajosa\n");
        printf("Custo: %.2f\n", custog);
    } else {
        printf("Etanol e mais vantajoso\n");
        printf("Custo: %.2f\n", custoe);
    }

    return 0;
}