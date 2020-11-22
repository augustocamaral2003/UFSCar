#include <stdio.h>

#define MAXSTRING 50

int main(void) {
    char nome[10][MAXSTRING];
    float salario[10];

    for (int i = 0; i < 10; i++) {
        printf("Entre com o nome do funcionario %d: ", i);
        scanf("%s", nome[i]);
        printf("Entre com o salario do funcionario %d: ", i);
        scanf("%f", &salario[i]);
    }

    for (int i = 0; i < 10; i++)
        if (salario[i] > 500)
            printf("Funcionario %s recebe mais que R$500,00. Salario atual: R$%.2f\n", nome[i], salario[i]);
        else if (salario[i] < 200)
            printf("Funcionario %s recebe menos que RS200,00. Salario apos reajuste: R$%.2f\n", nome[i], salario[i]*1.2);

    return 0;
}
