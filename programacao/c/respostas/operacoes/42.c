#include <stdio.h>

int main() {
    float ATT, CMP, YDS, TD, INT;
    float a, b, c, d;
    float rating;

    printf("Digite o numero de tentativas de passe (ATT): ");
    scanf("%f", &ATT);

    printf("Digite o numero de passes completos (CMP): ");
    scanf("%f", &CMP);

    printf("Digite as jardas passadas (YDS): ");
    scanf("%f", &YDS);

    printf("Digite os passes para touchdown (TD): ");
    scanf("%f", &TD);

    printf("Digite as interceptacoes (INT): ");
    scanf("%f", &INT);

    a = (CMP / ATT - 0.3) * 5;
    b = (YDS / ATT - 3) * 0.25;
    c = (TD / ATT) * 20;
    d = 2.375 - (INT / ATT) * 25;

    if (a > 2.375) a = 2.375;
    if (a < 0) a = 0;
    if (b > 2.375) b = 2.375;
    if (b < 0) b = 0;
    if (c > 2.375) c = 2.375;
    if (c < 0) c = 0;
    if (d > 2.375) d = 2.375;
    if (d < 0) d = 0;

    rating = ((a + b + c + d) / 6) * 100;

    printf("O Passer Rating e: %.2f\n", rating);

    return 0;
}
