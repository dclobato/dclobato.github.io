#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int usuario, computador;

    printf("Digite 1 (papel), 2 (pedra) ou 3 (tesoura): ");
    scanf("%d", &usuario);

    srand(time(NULL));
    computador = (rand() % 3) + 1;

    printf("Computador escolheu: %d\n", computador);

    if (usuario == computador) {
        printf("Empate\n");
    } else if ((usuario == 1 && computador == 2) ||
               (usuario == 2 && computador == 3) ||
               (usuario == 3 && computador == 1)) {
        printf("Voce venceu\n");
    } else {
        printf("Computador venceu\n");
    }

    return 0;
}