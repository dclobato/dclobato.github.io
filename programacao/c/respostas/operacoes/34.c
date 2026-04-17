#include <stdio.h>

int main() {
    float limite_inf_orig, limite_sup_orig, valor_lido;
    float limite_inf_dest, limite_sup_dest;
    float valor_convertido;

    printf("Digite o limite inferior da escala original: ");
    scanf("%f", &limite_inf_orig);

    printf("Digite o limite superior da escala original: ");
    scanf("%f", &limite_sup_orig);

    printf("Digite o valor lido na escala original: ");
    scanf("%f", &valor_lido);

    printf("Digite o limite inferior da escala de destino: ");
    scanf("%f", &limite_inf_dest);

    printf("Digite o limite superior da escala de destino: ");
    scanf("%f", &limite_sup_dest);

    valor_convertido = limite_inf_dest +
                      (valor_lido - limite_inf_orig) *
                      (limite_sup_dest - limite_inf_dest) /
                      (limite_sup_orig - limite_inf_orig);

    printf("O valor convertido e: %.2f\n", valor_convertido);

    return 0;
}
