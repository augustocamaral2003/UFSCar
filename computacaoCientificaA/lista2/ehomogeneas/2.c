#include <stdio.h>

int main(void) {
    int v[200];
    int maior = 0, menor = 0, media = 0;
    int ne;
    int nm = 0;

    //aqui usei o fato de scanf sempre retornar valor positivo caso um numero seja lido com sucesso
    //se uma string, char ou EOF o programa sai do loop
    for (ne = 0; ne < 200 && scanf("%d", &v[ne]) > 0; ne++) {
        if (ne == 0)
            maior = menor = v[ne];
        maior = maior>v[ne]?maior:v[ne];
        menor = menor<v[ne]?menor:v[ne];
        media += v[ne];
    }

    if (ne > 0)
        media /= ne;

    for (int i = 0; i < ne; i++)
        if (v[i] > media)
            nm++;
    
    printf("Maior elemento: %d\nMenor elemento: %d\nMaiores que a media: %d\n", maior, menor, nm);

    return 0;
}
