#include <stdio.h>

int main() {
    float p1, p2, p3, media;

    printf("Digite a nota da primeira prova (peso 2): ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova (peso 3): ");
    scanf("%f", &p2);

    printf("Digite a nota da terceira prova (peso 5): ");
    scanf("%f", &p3);

    media = (p1 * 2 + p2 * 3 + p3 * 5) / 10;

    printf("A media final e %.2f\n", media);

    return 0;
}
