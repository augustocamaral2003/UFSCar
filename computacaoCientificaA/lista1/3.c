#include <stdio.h>

int main(void) {
    int a, b;
    
    printf("Por favor, insira o primeiro número: ");
    scanf("%d", &a);
    printf("Por favor, insira o segundo número: ");
    scanf("%d", &b);

    printf("A soma é: %d\n", a+b);
    
    return 0;
}
