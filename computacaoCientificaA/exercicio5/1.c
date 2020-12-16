#include <stdio.h>

int func(int vet[], int size) {
    int i, val = 1;
    for (i = 0; i < size; i++) {
        val *= vet[size - i - 1];
    }
    return val;
}

int main(void) {
    int vetor[3] = {7, 2, 1};

    printf("%d\n", func(vetor, 3));

    return 0;
}
