#include <stdio.h>

int main(void) {
    int s, v;

    printf("Por favor, entre com o tamanho do arquivo em MB: ");
    scanf("%d", &s);
    printf("Pot favor, entre com a velocidade em Mbps: ");
    scanf("%d", &v);

    printf("O tempo aproximado de download é %.f minutos", (s/(v/8))/60.0);

    return 0;
}
