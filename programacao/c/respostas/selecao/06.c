#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b < c) {
        printf("a + b e menor que c\n");
    } else if (a + b > c) {
        printf("a + b e maior que c\n");
    } else {
        printf("a + b e igual a c\n");
    }

    return 0;
}