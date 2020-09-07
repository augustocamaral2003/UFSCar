#include <stdio.h>
#define PI 3.1415

int main(void) {
    int opcao, altura, raio, lado1, lado2;
    float volume;

    printf("[1] cilindro\t[2] paralelepípedo\nPor favor, entre com o tipo de sólido: ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        printf("Por favor, entre com o raio: ");
        scanf("%d", &raio);
        printf("Por favor, entre com a altura: ");
        scanf("%d", &altura);

        volume = PI*raio*raio*altura;
    } else if(opcao == 2) {
        printf("Por favor, entre com o comprimento: ");
        scanf("%d", &lado1);
        printf("Por favor, entre com a profundidade: ");
        scanf("%d", &lado2);
        printf("Por favor, entre com a altura: ");
        scanf("%d", &altura);

        volume = lado1*lado2*altura;
    }

    printf("O volume é: %.3f\n", volume);
    return 0;
}
