#include <stdio.h>

int main(void) {
    int a, b, c, d;

    printf("Por favor, entre com a nota do primeiro bimestre: ");
    scanf("%d", &a);
    printf("Por favor, entre com a nota do segundo bimestre: ");
    scanf("%d", &b);
    printf("Por favor, entre com a nota do terceiro bimestre: ");
    scanf("%d", &c);
    printf("Por favor, entre com a nota do quarto bimestre: ");
    scanf("%d", &d);

    printf("A média é: %.1f\n", (a+b+c+d)/4.0);
    return 0;
}
