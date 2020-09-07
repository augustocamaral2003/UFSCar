#include <stdio.h>

int main(void) {
    float input, s;
    int h, m;

    printf("Por favor, entre com o tempo em minutos: ");
    scanf("%f", &input);

    h = input/60;
    m = (int)input%60;
    s = 60*(input - (int)input);

    printf("O tempo formatado é: %dh %dmin %.1fs", h, m, s);
    return 0;
}
