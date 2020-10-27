#include <stdio.h>

int main(void) {
    float h, p;

    printf("Por favor, entre com a altura em metros: ");
    scanf("%f", &h);

    p = (72.7 * h) - 58;
    printf("O peso ideal é %.2fKg", p);

    return 0;
}
