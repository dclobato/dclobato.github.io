#include <stdio.h>

int main() {
    float preco_parafusos, preco_porcas, preco_arruelas;
    int qtd_parafusos, qtd_porcas, qtd_arruelas;
    float total;

    printf("Digite o preco dos parafusos: ");
    scanf("%f", &preco_parafusos);

    printf("Digite o preco das porcas: ");
    scanf("%f", &preco_porcas);

    printf("Digite o preco das arruelas: ");
    scanf("%f", &preco_arruelas);

    printf("Digite a quantidade de parafusos: ");
    scanf("%d", &qtd_parafusos);

    printf("Digite a quantidade de porcas: ");
    scanf("%d", &qtd_porcas);

    printf("Digite a quantidade de arruelas: ");
    scanf("%d", &qtd_arruelas);

    total = preco_parafusos * qtd_parafusos * 0.90;
    total += preco_porcas * qtd_porcas * 0.80;
    total += preco_arruelas * qtd_arruelas * 0.70;

    printf("O total a ser pago e R$ %.2f\n", total);

    return 0;
}
