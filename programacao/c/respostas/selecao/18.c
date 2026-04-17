#include <stdio.h>

int main(void) {
    float salario, reajuste, novo_salario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (salario >= 10000.0) {
        reajuste = salario * 0.03;
    } else if (salario >= 5000.0) {
        reajuste = salario * 0.06;
    } else {
        reajuste = salario * 0.10;
    }

    novo_salario = salario + reajuste;

    printf("Salario atual: %.2f\n", salario);
    printf("Reajuste: %.2f\n", reajuste);
    printf("Novo salario: %.2f\n", novo_salario);

    return 0;
}