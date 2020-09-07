#include <stdio.h>

int main(void) {
    int hentrada, mentrada, hsaida, msaida, hdiarias, mdiarios;
    char nome[60];

    printf("Por favor, entre com o nome do funcionário: ");
    scanf("%s", nome);
    printf("Por favor, entre com o horário de entrada (no formato HH MM): ");
    scanf("%d %d", &hentrada, &mentrada);
    printf("Por favor, entre com o horário de saída (no formato HH MM): ");
    scanf(" %d %d", &hsaida, &msaida);

    if(msaida < mentrada) {
        hsaida--;
        msaida += 60;
    }

    if(hsaida < hentrada) {
        hdiarias = 24 - hentrada + hsaida;
        mdiarios = msaida - mentrada;
    } else {
        hdiarias = msaida - mentrada;
        mdiarios = msaida - mentrada;
    }

    
    if(hdiarias < 4) {
        printf("\nO funcionário %s trabalhou %02d:%02d, pertence ao perfil A e receberá R$%d\n", nome, hdiarias, mdiarios, hdiarias*30);
    } else if(hdiarias > 4 || hdiarias <= 8) {
        printf("\nO funcionário %s trabalhou %02d:%02d, pertence ao perfil B e receberá R$%d\n", nome, hdiarias, mdiarios, hdiarias*70);
    } else if(hdiarias > 8) {
        printf("\nO funcionário %s trabalhou %02d:%02d, pertence ao perfil C e receberá R$%d\n", nome, hdiarias, mdiarios, hdiarias*90);
    }

    return 0;
}
