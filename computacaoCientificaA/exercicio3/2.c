#include <stdio.h>
#include <math.h>

int main(void) {
    int n, soma = 0, icopy, impar = 0;

    printf("Por favor, entre com o número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        icopy = i;
        soma = 0;
        
        while(icopy) {
            soma += icopy%10;
            icopy /= 10;
        }

        if(soma*soma*soma == i) {
            printf("O número %d é um número de Dudeney: ", i);
            printf("A soma dos seus algarismos é %d\n", soma);

            if(i&1) impar++;
        }
    }

    printf("%d números de Dudeney são ímpares\n", impar);
    printf("Nenhum número de Dudeney é primo\n");

    return 0;
}
