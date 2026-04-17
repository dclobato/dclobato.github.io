#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float raio, altura, volume;

    printf("Digite o raio da base do cilindro (cm): ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro (cm): ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("A capacidade da lata cilindrica e %.2f cm^3\n", volume);

    return 0;
}
