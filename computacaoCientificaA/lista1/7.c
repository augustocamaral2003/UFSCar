#include <stdio.h>
#define PI 3.1415

int main(void) {
    float r, a;

    printf("Por favor, entre com o raio: ");
    scanf("%f", &r);

    a = PI*r*r;

    printf("A área é: %.3f\n", a);
    return 0;
}
