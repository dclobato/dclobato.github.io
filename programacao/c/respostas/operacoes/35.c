#include <stdio.h>

int main() {
    float A, B, C;
    float X, Y, Z;
    int cont_inteiras;

    printf("Digite a largura do conteiner (A): ");
    scanf("%f", &A);

    printf("Digite o comprimento do conteiner (B): ");
    scanf("%f", &B);

    printf("Digite a altura do conteiner (C): ");
    scanf("%f", &C);

    printf("Digite a largura do armazem (X): ");
    scanf("%f", &X);

    printf("Digite o comprimento do armazem (Y): ");
    scanf("%f", &Y);

    printf("Digite o pe direito do armazem (Z): ");
    scanf("%f", &Z);

    int cont_largura = (int)(X / A);
    int cont_comprimento = (int)(Y / B);
    int cont_altura = (int)(Z / C);

    cont_inteiras = cont_largura * cont_comprimento * cont_altura;

    printf("A quantidade maxima de conteineres e: %d\n", cont_inteiras);

    return 0;
}
