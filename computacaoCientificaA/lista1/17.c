#include <stdio.h>

int main(void) {
    int n1 = 5, n2 = 3;

    if(n1 > n2 && 2 < n1 && 5 > n2 || 12 + n2 > 10 + n1 && n2 != 2 || !(n2 > 2)) printf("A primeira afirmação é verdadeira\n");
    else printf("A primeira condição é falsa\n");
    if(n1 > n2 && 3 == n1 && 5 < n2 || 100 + n2 > 101 + n1 || n2 == 3 && n1 < 4) printf("A segunda condicao é verdadeira\n");
    else printf("A segunda condição é falsa\n");

    return 0;
}
