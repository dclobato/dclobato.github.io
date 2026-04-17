#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8 * celsius + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}
