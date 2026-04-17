#include <stdio.h>

int main() {
    float valor_tipo1, valor_tipo2;
    int qtd_tipo1, qtd_tipo2;
    float total;

    printf("Digite o valor do reembolso para cada garrafa do tipo 1: ");
    scanf("%f", &valor_tipo1);

    printf("Digite o valor do reembolso para cada garrafa do tipo 2: ");
    scanf("%f", &valor_tipo2);

    printf("Digite a quantidade de garrafas do tipo 1: ");
    scanf("%d", &qtd_tipo1);

    printf("Digite a quantidade de garrafas do tipo 2: ");
    scanf("%d", &qtd_tipo2);

    total = valor_tipo1 * qtd_tipo1 + valor_tipo2 * qtd_tipo2;

    printf("O total do reembolso e R$ %.2f\n", total);

    return 0;
}
