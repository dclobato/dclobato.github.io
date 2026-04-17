#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Iguais\n");
    } else {
        printf("Diferentes\n");
    }

    if (a > b) {
        printf("Maior: %d\nMenor: %d\n", a, b);
    } else {
        printf("Maior: %d\nMenor: %d\n", b, a);
    }

    return 0;
}