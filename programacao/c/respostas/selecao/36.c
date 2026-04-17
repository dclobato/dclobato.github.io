#include <stdio.h>

int main(void) {
    float comp;

    printf("Digite o comprimento de onda (nm): ");
    scanf("%f", &comp);

    if (comp < 380.0) {
        printf("Ultravioleta\n");
    } else if (comp < 450.0) {
        printf("Violeta\n");
    } else if (comp < 495.0) {
        printf("Azul\n");
    } else if (comp < 570.0) {
        printf("Verde\n");
    } else if (comp < 590.0) {
        printf("Amarelo\n");
    } else if (comp < 620.0) {
        printf("Laranja\n");
    } else if (comp < 750.0) {
        printf("Vermelho\n");
    } else {
        printf("Infravermelho\n");
    }

    return 0;
}