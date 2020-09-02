#include <stdio.h>

int main(void) {
    int l;

    printf("Por favor, entre com o lado do quadrado: ");
    scanf("%d", &l);

    printf("O dobro da área do quadrado é: %d\n", 2*l*l);
    return 0;
}
