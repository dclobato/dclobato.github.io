#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, A;
    scanf("%f", &r);
    A = M_PI * pow(r, 2);
    printf("A area do circulo de raio %.2f vale %.2f\n", r, A);
    return 0;
}

