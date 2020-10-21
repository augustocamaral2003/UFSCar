#include <stdio.h>
#include <math.h>

int main(void) {
    int n, l, soma = 0, ncopy;

    printf("Por favor, entre com o comprimento do número: ");
    scanf("%d", &l);
    printf("Por favor, entre com o número: ");
    scanf("%d", &n);

    ncopy = n;

    for(int i = 0; i < l; i++) {
        soma += pow(ncopy%10, l);
        ncopy /= 10;
    }

    if(soma == n) {
        printf("O número é um número de Armstrong\n");
    } else {
        printf("O número não é um número de Armstrong\n");
    }

    return 0;
}
