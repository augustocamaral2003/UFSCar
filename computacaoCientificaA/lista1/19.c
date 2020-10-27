#include <stdio.h>

int main(void) {
    int n, m = 999999999;

    printf("Por favor, entre com um valor: ");

    while(scanf("%d", &n) != 0) {
        m = n<m?n:m;
        printf("Por favor, entre com um valor: ");
    }

    printf("O valor mínimo inserido foi: %d\n", m);

    return 0;
}
