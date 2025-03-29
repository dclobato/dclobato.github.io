#include <stdio.h>

int main() {
    double Vin, Vout, relacao;

    printf("Digite a tensao de entrada (Vin): ");
    scanf("%lf", &Vin);

    printf("Digite a tensao de saida desejada (Vout): ");
    scanf("%lf", &Vout);

    /* A equacao original precisa ser manipulada
     * algebricamente para isolar a relacao R1/R2.
     *
     * Calculo da relacao entre R1 e R2
     */
    relacao = (Vin - Vout) / Vout;

    // Exibicao do resultado
    printf("A relacao entre R1 e R2 para o divisor de tensao e %.2f\n", relacao);

    return 0;
}
