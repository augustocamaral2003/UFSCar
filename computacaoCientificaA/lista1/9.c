#include <stdio.h>

int main(void) {
    float s, t;

    printf("Por favor, entre com a distância em Km: ");
    scanf("%f", &s);
    printf("Por favor, entre com o tempo em minutos: ");
    scanf("%f", &t);

    printf("A velocidade, em m/s, é: %.3f\n", (s*1000)/(t*60));
    return 0;
}

