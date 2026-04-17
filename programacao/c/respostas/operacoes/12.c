#include <stdio.h>

int main() {
    int mes_nascimento, ano_nascimento;
    int mesAtual, anoAtual;
    int dias_vividos;

    printf("Digite o mes de nascimento: ");
    scanf("%d", &mes_nascimento);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o mes atual: ");
    scanf("%d", &mesAtual);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    dias_vividos = ((anoAtual - ano_nascimento) * 12 + (mesAtual - mes_nascimento)) * 30;

    printf("Voce ja viveu aproximadamente %d dias\n", dias_vividos);

    return 0;
}
