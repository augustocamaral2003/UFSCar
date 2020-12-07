#include <stdio.h>

int main(void) {
    int m, n;
    int esc;

    printf("Numero de linhas da matriz: ");
    scanf("%d", &m);
    printf("Numero de colunas da matriz: ");
    scanf("%d", &n);

    int matriz[m][n];

    printf("Escalar para multiplicacao: ");
    scanf("%d", &esc);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Valor em [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++)
            matriz[i][j] *= esc;

    printf("Matriz resultante:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
