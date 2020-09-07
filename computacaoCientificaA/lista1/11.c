#include <stdio.h>

int main(void) {
    int n, r = 1;

    printf("Por favor, entre com o número: ");
    scanf("%d", &n);
    
    do {
        r *= n;
    } while(--n);

    printf("O fatorial de é: %d\n", r);
    return 0;
}
