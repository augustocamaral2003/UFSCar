#include <stdio.h>

#define MAXSIZE 100
#define PICO    200

void teagerkaiser(float in[], float out[], int size) {
    out[0] = in[0];

    for (int i = 1; i < size; i++) {
        out[i] = in[i]*in[i] - in[i-1]*in[i];
    }
}

int pico(float in[], int size) {
    int pico = 0;

    for (int i = 0; i < size; i++) {
        if (in[i+1] - in[i] > PICO) {
            pico++;
            printf("Pico na posicao %d, valor %.2f\n", i+1, in[i+1]);
        }
    }
    
    return pico;
}

int main(void) {
    int size;
    float vetor_in[MAXSIZE], vetor_out[MAXSIZE];

    printf("Entre o tamanho do vetor: ");
    scanf("%d", &size);

    printf("Entre com o vetor: ");
    for (int i = 0; i < size; i++) {
        scanf("%f", &vetor_in[i]);
    }

    teagerkaiser(vetor_in, vetor_out, size);

    for (int i = 0; i < size; i++) {
        printf("%.2f ", vetor_out[i]);
    }
    printf("\n");

    pico(vetor_out, size);

    return 0;
}
