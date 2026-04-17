#include <stdio.h>

int main(void) {
    float vendas, comissao;

    printf("Digite o total de vendas: ");
    scanf("%f", &vendas);

    if (vendas >= 50000.0) {
        comissao = vendas * 0.12;
    } else if (vendas > 30000.0) {
        comissao = vendas * 0.095;
    } else {
        comissao = vendas * 0.07;
    }

    printf("Comissao: %.2f\n", comissao);

    return 0;
}