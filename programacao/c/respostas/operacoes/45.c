#include <stdio.h>

int main() {
    float colesterol_total, hdl, ldl;
    float triglicerideos;

    printf("Digite o colesterol total (mg/dL): ");
    scanf("%f", &colesterol_total);

    printf("Digite o LDL (mg/dL): ");
    scanf("%f", &ldl);

    printf("Digite o HDL (mg/dL): ");
    scanf("%f", &hdl);

    triglicerideos = (colesterol_total - hdl - ldl) * 5;

    printf("A estimativa de triglicerideos e: %.2f mg/dL\n", triglicerideos);

    return 0;
}
