#include <stdio.h>

int main(void) {
    char sexo;
    int idade;

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if ((sexo == 'F' && idade > 45) || (idade < 18)) {
        printf("Tem direito a desconto\n");
    } else {
        printf("Nao tem direito a desconto\n");
    }

    return 0;
}