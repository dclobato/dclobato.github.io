#include <stdio.h>

int main(void) {
    float valor_hora, horas, bruto, desconto, transporte, liquido;

    printf("Digite o valor da hora: ");
    scanf("%f", &valor_hora);
    printf("Digite o total de horas trabalhadas: ");
    scanf("%f", &horas);

    bruto = valor_hora * horas;
    transporte = bruto * 0.06;

    if (bruto < 1000.0) {
        desconto = 0.0;
    } else if (bruto > 5000.0) {
        desconto = bruto * 0.27;
    } else {
        desconto = bruto * 0.15;
    }

    desconto = desconto + transporte;
    liquido = bruto - desconto;

    printf("Bruto: %.2f\n", bruto);
    printf("Descontos: %.2f\n", desconto);
    printf("Liquido: %.2f\n", liquido);

    return 0;
}