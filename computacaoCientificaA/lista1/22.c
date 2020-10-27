#include <stdio.h>
#include <math.h>

int main(void) {
    float m, l, g, p;

    printf("Por favor, entre com a área a ser pintada: ");
    scanf("%f", &m);

    l = m/3;
    g = l<18?1:ceil(l/18);
    p = g*80;

    printf("Número de latas: %.0f\nPreço total: %.0f\n", g, p);
    
    return 0;
}
