#include <stdio.h>

int main(void) {
    int lados;

    printf("Digite o numero de arestas: ");
    scanf("%d", &lados);

    if (lados < 3 || lados > 10) {
        printf("Erro\n");
    } else if (lados == 3) {
        printf("Triangulo\n");
    } else if (lados == 4) {
        printf("Quadrilátero\n");
    } else if (lados == 5) {
        printf("Pentagono\n");
    } else if (lados == 6) {
        printf("Hexagono\n");
    } else if (lados == 7) {
        printf("Heptagono\n");
    } else if (lados == 8) {
        printf("Octogono\n");
    } else if (lados == 9) {
        printf("Eneagono\n");
    } else {
        printf("Decagono\n");
    }

    return 0;
}