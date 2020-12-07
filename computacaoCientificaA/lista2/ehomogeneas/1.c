#include <stdio.h>

int main(void) {
    int v[50], a[50], b[50], ne = 0;
    int vcount = 0, acount = 0, bcount = 0;

    for (; vcount < 50; vcount++) {
        printf("Insira o numero %d: ", vcount);
        scanf("%d", &v[vcount]);

        if (v[vcount] > 0)
            a[acount++] = v[vcount];
        else if (v[vcount] < 0)
            b[bcount++] = v[vcount];
        else
            ++ne;
    }

    printf("V = [");
    for (int i = 0; i < vcount; i++)
        printf(i==vcount-1?"%d]\n":"%d, ", v[i]);

    printf("A = [");
    for (int i = 0; i < acount; i++)
        printf(i==acount-1?"%d]\n":"%d, ", a[i]);

    printf("B = [");
    for (int i = 0; i < bcount; i++)
        printf(i==bcount-1?"%d]\n":"%d, ", b[i]);

    printf("Nulos = %d.\n", ne);

    return 0;
}
