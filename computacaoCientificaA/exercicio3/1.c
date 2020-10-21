#include <stdio.h>
#include <math.h>

int main(void) {
    int n, soma = 0, x;
    float r;

    printf("Por favor, entre com o número de elementos: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Por favor, entre com o elemento %d: ", i);
        scanf("%d", &x);

        soma += x*x;
    }

    r = sqrt(soma/n);
    printf("O resultado é %.5f\n", r);
    
    return 0;
}
