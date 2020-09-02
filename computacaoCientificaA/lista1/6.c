#include <stdio.h>

int main(void) {
    float m;

    printf("Por favor, entre com a distância em metros: ");
    scanf("%f", &m);

    printf("A distância em centímetros é: %.2f\n", m*100);
    return 0;
}
