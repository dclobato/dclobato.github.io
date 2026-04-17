#include <stdio.h>

int main(void) {
    float hdl, ldl, r;

    printf("HDL (mg/dL): ");
    scanf("%f", &hdl);
    printf("LDL (mg/dL): ");
    scanf("%f", &ldl);

    r = hdl / ldl;

    printf("Razao HDL/LDL: %.1f\n", r);

    if (r >= 0.4) {
        printf("Risco cardiovascular baixo\n");
    } else if (r > 0.3) {
        printf("Risco cardiovascular moderado\n");
    } else {
        printf("Risco cardiovascular elevado\n");
    }

    return 0;
}