#include <stdio.h>

int main(void) {
    int h, s;

    printf("Por favor, entre com o seu salário por hora: ");
    scanf("%d", &s);
    printf("Por favor, entre com o número de horas trabalhadas por mês: ");
    scanf("%d", &h);

    printf("O salário total é: %d\n", s*h);
    return 0;
}
