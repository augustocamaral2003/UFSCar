#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int len(int n) {
    return floor(log10(abs(n))) + 1;
}

int main(void) {
    char c;
    int n, m = 999999999;

    while(1) {
        printf("Por favor, entre com o valor: ");
        c = getchar();
        if(c == 'S') {
            break;
        } else {
            scanf("%d", &n);
            n = (int)(c)*pow(10, len(n)) + n;
        }

        m = n<m?n:m;
    }

    printf("O valor mínimo inserido foi: %d\n", m);

    return 0;
}
