#include <stdio.h>

int main() {
    float corrente, tensao, resistencia;

    printf("Digite a corrente (amperes): ");
    scanf("%f", &corrente);

    printf("Digite a tensao (volts): ");
    scanf("%f", &tensao);

    resistencia = tensao / corrente;

    printf("A resistencia e %.2f ohms\n", resistencia);

    return 0;
}
