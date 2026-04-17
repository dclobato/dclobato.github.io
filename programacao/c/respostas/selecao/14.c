#include <stdio.h>

int main(void) {
    float p1, p2, p3, media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    media = (p1 * 2 + p2 * 3 + p3 * 5) / 10.0;

    if (media >= 6) {
        printf("Aprovado\n");
    } else if (media > 4) {
        printf("Prova final\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}