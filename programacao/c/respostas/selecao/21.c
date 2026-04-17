#include <stdio.h>

int main(void) {
    int codigo, quantidade;
    float preco;

    printf("Digite o codigo do item: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 100) {
        preco = 8.00;
    } else if (codigo == 101) {
        preco = 12.00;
    } else if (codigo == 102) {
        preco = 8.00;
    } else if (codigo == 103) {
        preco = 8.50;
    } else if (codigo == 104) {
        preco = 7.00;
    } else if (codigo == 105) {
        preco = 6.00;
    } else {
        printf("Codigo invalido\n");
        return 0;
    }

    printf("Total: %.2f\n", preco * quantidade);

    return 0;
}