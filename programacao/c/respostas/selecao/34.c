#include <stdio.h>

int main(void) {
    int ano, resto;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);

    if (ano <= 1900) {
        printf("Ano invalido\n");
        return 1;
    }

    resto = ano % 12;

    switch (resto) {
        case 0:
            printf("Macaco\n");
            break;
        case 1:
            printf("Galo\n");
            break;
        case 2:
            printf("Cão\n");
            break;
        case 3:
            printf("Porco\n");
            break;
        case 4:
            printf("Rato\n");
            break;
        case 5:
            printf("Boi\n");
            break;
        case 6:
            printf("Tigre\n");
            break;
        case 7:
            printf("Coelho\n");
            break;
        case 8:
            printf("Dragão\n");
            break;
        case 9:
            printf("Cobra\n");
            break;
        case 10:
            printf("Cavalo\n");
            break;
        case 11:
            printf("Carneiro\n");
            break;
    }

    return 0;
}
