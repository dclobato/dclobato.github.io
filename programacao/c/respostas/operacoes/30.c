#include <stdio.h>

int main() {
    int vertices, arestas, faces;

    printf("Digite o numero de faces: ");
    scanf("%d", &faces);

    printf("Digite o numero de arestas: ");
    scanf("%d", &arestas);

    vertices = 2 - arestas + faces;

    printf("O numero de vertices e: %d\n", vertices);

    return 0;
}
