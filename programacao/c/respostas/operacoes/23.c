#include <stdio.h>

int main() {
    float preco_cobre, preco_zinco, massa_latao;
    float massa_cobre, massa_zinco, custo_total;

    printf("Digite o preco do kg de cobre (R$): ");
    scanf("%f", &preco_cobre);
    
    printf("Digite o preco do kg de zinco (R$): ");
    scanf("%f", &preco_zinco);
    
    printf("Digite a massa total de latao desejada (kg): ");
    scanf("%f", &massa_latao);

    massa_cobre = massa_latao * 0.70; // 70% da massa total
    massa_zinco = massa_latao * 0.30; // 30% da massa total

    custo_total = (massa_cobre * preco_cobre) + (massa_zinco * preco_zinco);

    printf("Para produzir %.2f kg de latao, serao necessarios:\n", massa_latao);
    printf(" - %.2f kg de cobre\n", massa_cobre);
    printf(" - %.2f kg de zinco\n", massa_zinco);
    printf("Custo total da producao: R$ %.2f\n", custo_total);

    return 0;
}
