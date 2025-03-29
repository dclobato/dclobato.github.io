#include <stdio.h>

int main() {
    int total_eleitores, votos_brancos, votos_nulos;
    double percentual_brancos, percentual_nulos;

    printf("Digite o total de eleitores: ");
    scanf("%d", &total_eleitores);

    printf("Digite o total de votos brancos: ");
    scanf("%d", &votos_brancos);

    printf("Digite o total de votos nulos: ");
    scanf("%d", &votos_nulos);

    percentual_brancos = ((double) votos_brancos / total_eleitores) * 100;
    percentual_nulos = ((1.0 * votos_nulos) / total_eleitores) * 100;

    printf("Percentual de votos brancos: %.2f%%\n", percentual_brancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentual_nulos);

    return 0;
}
