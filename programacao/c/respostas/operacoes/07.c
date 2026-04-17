#include <stdio.h>

int main() {
    float custo_fabricacao, custo_final;

    printf("Digite o custo de fabricacao: ");
    scanf("%f", &custo_fabricacao);

    custo_final = custo_fabricacao * 1.15 * 1.48;

    printf("O custo final ao consumidor e R$ %.2f\n", custo_final);

    return 0;
}
