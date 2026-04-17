#include <stdio.h>

int main() {
    float custo_plasticos_biodegradaveis;
    float custo_metais_reciclados;
    float custo_plasticos_nao_reciclaveis;
    float custo_metais_nao_reciclados;
    float custo_total, preco_final, preco_venda;

    printf("Custo com plasticos biodegradaveis: ");
    scanf("%f", &custo_plasticos_biodegradaveis);

    printf("Custo com metais reciclados: ");
    scanf("%f", &custo_metais_reciclados);

    printf("Custo com plasticos nao reciclaveis: ");
    scanf("%f", &custo_plasticos_nao_reciclaveis);

    printf("Custo com metais nao reciclados: ");
    scanf("%f", &custo_metais_nao_reciclados);

    custo_total = custo_plasticos_biodegradaveis + custo_metais_reciclados +
                  custo_plasticos_nao_reciclaveis + custo_metais_nao_reciclados;

    preco_final = custo_total * 1.45;
    preco_venda = preco_final * 1.08;

    printf("Preco final do veiculo: R$ %.2f\n", preco_final);
    printf("Preco de venda para 8%% de lucro: R$ %.2f\n", preco_venda);

    return 0;
}
