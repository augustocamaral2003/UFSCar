#include <stdio.h>

int main(void) {
    int p, e, m;

    printf("Por favor, entre com o peso: ");
    scanf("%d", &p);

    e = p>50?p-50:0;
    m = e*4;

    if(m == 0) {
        printf("Excesso: ZERO\nMulta: ZERO\n");
    } else {
        printf("Excesso: %dKg\nMulta: R$ %d\n", e, m);
    }

    return 0;
}
