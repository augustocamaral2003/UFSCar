#include <stdio.h>
#define PI 3.1415

int main(void) {
    int r, v = 1;

    while(v) {
        printf("Por favor, entre com o valor do raio: ");
        scanf("%d", &r);

        printf("O raio é: %.3f\n", PI*r*r);

        printf("Deseja continuar? [1] sim [0] não: ");
        scanf("%d", &v);
    }

    return 0;
}
