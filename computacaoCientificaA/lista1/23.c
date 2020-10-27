#include <stdio.h>
#include <math.h>

int main(void) {
    float m, l, g1, g2, p;

    printf("Por favor, entre com a área a ser pintada: ");
    scanf("%f", &m);

    l = m/6;
    g1 = l<18?1:ceil(l/18);
    p = g1*80;

    printf("1. Número de latas de 18 litros: %.0f\n   Preço total: %.1f\n", g1, p);

    g1 = l<3.6?1:ceil(l/3.6);
    p = g1*25;

    printf("2. Número de latas de 3,6 litros: %.0f\n   Preço total: %.1f\n", g1, p);

    l += l*0.1;



    printf("3. Número de latas de 18 litros: %.0f\n   Número de latas de 3.6 litros: %.0f\n    Preço total: %.1f\n", g1, g2, g1*80 + g2*25);

    return 0;
}
