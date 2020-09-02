#include <stdio.h>

int main(void) {
    float f, c;

    printf("Por favor, entre com a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32)*5/9;

    printf("A temperatura é %.1f°C\n", c);
    return 0;
}
