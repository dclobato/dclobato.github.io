#include <stdio.h>

int main(void) {
    float albumina, creatinina, rac;

    printf("Albumina (mg): ");
    scanf("%f", &albumina);
    printf("Creatinina (g): ");
    scanf("%f", &creatinina);

    rac = albumina / creatinina;

    printf("RAC: %.1f\n", rac);

    if (rac < 30.0) {
        printf("Normal\n");
    } else if (rac < 300.0) {
        printf("Microalbuminuria\n");
    } else {
        printf("Macroalbuminuria\n");
    }

    return 0;
}