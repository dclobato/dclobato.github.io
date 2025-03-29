#include <stdio.h>
#include <math.h> // Biblioteca para sqrt()

int main() {
    float largura, profundidade, diagonal;

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite a profundidade do terreno (m): ");
    scanf("%f", &profundidade);

    diagonal = sqrt(pow(largura, 2) + pow(profundidade, 2));

    printf("A maior distancia que pode ser percorrida em linha reta dentro do terreno e %.2f metros\n", diagonal);

    return 0;
}