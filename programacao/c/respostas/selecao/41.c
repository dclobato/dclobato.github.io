#include <stdio.h>
#include <math.h>

int main(void) {
    float scr, tfge;
    int idade;
    char sexo;
    float kappa, alpha, f;

    printf("Creatinina (mg/dL): ");
    scanf("%f", &scr);
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Idade: ");
    scanf("%d", &idade);

    if (sexo == 'F') {
        kappa = 0.7;
        alpha = -0.329;
        f = 1.018;
    } else {
        kappa = 0.9;
        alpha = -0.411;
        f = 1.0;
    }

    if (scr / kappa < 1) {
        tfge = 141 * pow(scr / kappa, alpha) * pow(1, -1.209) * pow(0.993, idade) * f;
    } else {
        tfge = 141 * pow(scr / kappa, alpha) * pow(scr / kappa, -1.209) * pow(0.993, idade) * f;
    }

    printf("TFGe: %.2f\n", tfge);

    if (tfge >= 90) {
        printf("Funcao renal normal\n");
    } else if (tfge > 60) {
        printf("Leve reducao da funcao renal\n");
    } else {
        printf("Comprometimento da funcao renal\n");
    }

    return 0;
}