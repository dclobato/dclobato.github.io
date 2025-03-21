#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas, valor_hora, percentual_desconto;
    float bruto, desconto, liquido;

    printf("Quantas horas foram trabalhadas? ");
    scanf("%f", &horas);
    printf("Qual o valor de cada hora trabalhada? ");
    scanf("%f", &valor_hora);
    printf("Qual o percentual de desconto (sem o %)? ");
    scanf("%f", &percentual_desconto);

    percentual_desconto /= 100;
    bruto = horas * valor_hora;
    desconto = recebe * percentual_desconto;
    liquido = recebe - desconto;

    printf("Salario bruto..... R$ %10.2f\n", bruto);
    printf("Total de descontos R$ %10.2f\n", desconto);
    printf("Salario liquido... R$ %10.2f\n", liquido);

    return 0;
}

