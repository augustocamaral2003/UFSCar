#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    //vetor 1 é vetor linha, V1(1xj)
    int iV1 = 1, jV1;
    //vetor 2 é vetor coluna, V2(ix1)
    int iV2, jV2 = 1;

    //declarando tamanho das resultantes da multiplicacao e transpostas
    //valor eh atribuido mais tarde
    int iR1, jR1, iR2, jR2;
    int iT1, jT1, iT2, jT2;

    //1 se R existe, 0 senao
    int eR1 = 0, eR2 = 0;

    //vetores com valor maximo = 100
    int v1[MAX_SIZE][MAX_SIZE];
    int v2[MAX_SIZE][MAX_SIZE];
    int r1[MAX_SIZE][MAX_SIZE];
    int r2[MAX_SIZE][MAX_SIZE];
    int t1[MAX_SIZE][MAX_SIZE];
    int t2[MAX_SIZE][MAX_SIZE];

    //para ser usado na multiplicacao de matrizes
    int soma = 0;

    //obter valor de jV1
    printf("numero de colunas do vetor linha 1 (ate 100): ");
    scanf("%d", &jV1);
    if (jV1 > 100) {
        printf("maior que 100!\n");
        return 0;
    }

    //obter valor de iV2
    printf("numero de linhas do vetor coluna 2 (ate 100): ");
    scanf("%d", &iV2);
    if (iV2 > 100) {
        printf("maior que 100!\n");
        return 0;
    }
   
    //obter valores do vetor2
    for (int i = 0; i < iV1; i++) {
        for (int j = 0; j < jV1; j++) {
            printf("Valor [%d][%d] do vetor 1: ", i, j);
            scanf("%d", &v1[i][j]);
        }
    }

    //obter valores do vetor2
    for (int i = 0; i < iV2; i++) {
        for (int j = 0; j < jV2; j++) {
            printf("Valor [%d][%d] do vetor 2: ", i, j);
            scanf("%d", &v2[i][j]);
        }
    }

    //verifica se as resultantes existem
    if (jV1 == iV2) eR1 = 1;
    if (jV2 == iV1) eR2 = 1;

    //verifica se as matrizes resultantes existem e executa a multiplicacao
    if (!eR1) {
        printf("R1: V1 * V2 nao existe\n");
    } else {
        iR1 = iV1;
        jR1 = jV2;
        for (int i = 0; i < iR1; i++) {
            for (int j = 0; j < jR1; j++) {
                for (int k = 0; k < iV2; k++) {
                    soma += v1[i][k]*v2[k][j];
                }
                r1[i][j] = soma;
                soma = 0;
            }
        }
    }

    if (!eR2) {
        printf("R2: V2 * V1 nao existe\n");
    } else {
        iR2 = iV2;
        jR2 = jV1;
        for (int i = 0; i < iR2; i++) {
            for (int j = 0; j < jR2; j++) {
                for (int k = 0; k < iV1; k++) {
                    soma += v2[i][k]*v1[k][j];
                }
                r2[i][j] = soma;
                soma = 0;
            }
        }
    }
 
    //imprime as matrizes
    if (eR1) {
        printf("R1: \n");
        for (int i = 0; i < iR1; i++) {
            for (int j = 0; j < jR1; j++) {
                printf("\t%d", r1[i][j]);
            }
            printf("\n");
        }
    }

    if (eR2) {
        printf("R2: \n");
        for (int i = 0; i < iR2; i++) {
            for (int j = 0; j < jR2; j++) {
                printf("\t%d", r2[i][j]);
            }
            printf("\n");
        }
    }
    
    //define tamanho das transpostas
    if (eR1) {
        iT1 = jR1;
        jT1 = iR1;
    }

    if (eR2) {
        iT2 = jR2;
        jT2 = iR2;
    }

    //logica de transposicao
    if (eR1) {
        for (int i = 0; i < iT1; i++) {
            for (int j = 0; j < jT1; j++) {
                t1[i][j] = r1[j][i];
            }
        }
    }

    if (eR2) {
        for (int i = 0; i < iT2; i++) {
            for (int j = 0; j < jT2; j++) {
                t2[i][j] = r2[j][i];
            }
        }
    }

    //imprimir transpostas
    if (eR1) {
        printf("R1_t: \n");
        for (int i = 0; i < iT1; i++) {
            for (int j = 0; j < jT1; j++) {
                printf("\t%d", t1[i][j]);
            }
            printf("\n");
        }
    }

    if (eR2) {
        printf("R2_t: \n");
        for (int i = 0; i < iT2; i++) {
            for (int j = 0; j < jT2; j++) {
                printf("\t%d", t2[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
