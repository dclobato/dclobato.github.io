#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito3, digito4, soma, digito_verificador;
    
    printf("Digite um numero com ate 4 algarismos: ");
    scanf("%d", &numero);

    digito1 = numero / 1000;  // Extrai o milhar
    digito2 = (numero / 100) % 10;  // Extrai a centena
    digito3 = (numero / 10) % 10;  // Extrai a dezena
    digito4 = numero % 10;  // Extrai a unidade

    soma = digito1 * 4 + digito2 * 3 + digito3 * 2 + digito4 * 1;

    digito_verificador = soma % 7;

    printf("O digito verificador e: %d\n", digito_verificador);

    return 0;
}
