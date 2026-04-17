#include <stdio.h>

int main(void) {
    float p1, p2, p3, media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = (p1 + p2 + p3) / 3.0;

    if (media > 6 && p1 > 0 && p2 > 0 && p3 > 0) {
        printf("Aprovado para a segunda fase\n");
    } else {
        printf("Nao aprovado\n");
    }

    return 0;
}