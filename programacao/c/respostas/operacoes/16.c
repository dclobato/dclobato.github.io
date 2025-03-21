#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, inverso;
    int unidade, dezena, centena;

    printf("Qual numero, entre 0 e 999? ");
    scanf("%d", &numero);
    
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    
    inverso = unidade * 100 + dezena * 10 + centena;

    printf("O numero invertido eh %d\n", inverso);

    return 0;
}

