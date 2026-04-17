#include <stdio.h>

int main(void) {
    float triglicerideos, hdl, razao;

    printf("Triglicerideos (mg/dL): ");
    scanf("%f", &triglicerideos);
    printf("HDL (mg/dL): ");
    scanf("%f", &hdl);

    razao = triglicerideos / hdl;

    printf("Razao: %.1f\n", razao);

    if (razao < 2.0) {
        printf("Baixo risco\n");
    } else if (razao <= 3.0) {
        printf("Risco moderado\n");
    } else {
        printf("Alto risco\n");
    }

    return 0;
}