#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num, i;
    int vermelhos[] = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};

    srand(time(NULL));
    num = rand() % 37;

    printf("Gira roleta, gira roleta... %d!\n\n", num);
    printf("Ganhou quem apostou:\n");

    if (num == 0) {
        printf("  - A banca vence!\n");
    } else {
        printf("  - %d\n", num);

        for (i = 0; i < 18; i++) {
            if (vermelhos[i] == num) {
                printf("  - Vermelho\n");
                break;
            }
        }
        if (i == 18) {
            printf("  - Preto\n");
        }

        if (num % 2 == 1) {
            printf("  - Impar\n");
        } else {
            printf("  - Par\n");
        }

        if (num >= 1 && num <= 18) {
            printf("  - 1 a 18\n");
        } else {
            printf("  - 19 a 36\n");
        }
    }

    return 0;
}