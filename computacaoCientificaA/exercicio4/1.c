#include <stdio.h>

int main(void) {
    int vet[7] = {10, 58, 14, 73, 85, 1, 2};
    int aux;

    for (int i = 0; i < 7; i++) {
        for (int j = i+1; j < 7; j++) {
            if (vet[j] > vet[i]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for (int i = 0; i < 7; i++)
        printf("%d ", vet[i]);
    printf("\n");

    return 0;
}
