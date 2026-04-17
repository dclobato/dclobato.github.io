#include <stdio.h>

int main(void) {
    int aulas, faltas;
    float p1, p2, media, frequencia, final;

    printf("Total de aulas: ");
    scanf("%d", &aulas);
    printf("Total de faltas: ");
    scanf("%d", &faltas);
    printf("Nota da prova 1: ");
    scanf("%f", &p1);
    printf("Nota da prova 2: ");
    scanf("%f", &p2);

    frequencia = (float)(aulas - faltas) / aulas * 100.0;
    media = (p1 + p2) / 2.0;

    if (frequencia < 75.0) {
        printf("Reprovado por frequencia\n");
    } else if (media >= 6.0) {
        printf("Aprovado com media %.1f\n", media);
    } else if (media < 4.0) {
        printf("Reprovado com media %.1f\n", media);
    } else {
        printf("Nota da prova final: ");
        scanf("%f", &final);
        if (final >= 6.0) {
            printf("Aprovado na prova final com media %.1f\n", final);
        } else {
            printf("Reprovado na prova final com media %.1f\n", (final > media ? final : media));
        }
    }

    return 0;
}
