#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obesidade grau 1\n");
    } else if (imc < 40.0) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}