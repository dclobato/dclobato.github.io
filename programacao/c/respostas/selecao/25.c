#include <stdio.h>

int main(void) {
    char letra;

    printf("Digite uma letra (A-Z): ");
    scanf(" %c", &letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("Vogal\n");
    } else {
        printf("Consoante\n");
    }

    return 0;
}