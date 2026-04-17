#include <stdio.h>

int main(void) {
    int anos;
    float caninos;

    printf("Digite a idade humana: ");
    scanf("%d", &anos);

    if (anos < 0) {
        printf("Erro\n");
    } else if (anos <= 2) {
        caninos = anos * 10.5;
        printf("%.1f anos caninos\n", caninos);
    } else {
        printf("%d anos caninos\n", 21 + (anos - 2) * 4);
    }

    return 0;
}
