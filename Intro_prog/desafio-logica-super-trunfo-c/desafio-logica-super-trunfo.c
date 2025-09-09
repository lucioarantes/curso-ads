#include <stdio.h>
#include <string.h>

int main(){
    char estado, estado2, enter;
    char cod_cidade[5], cod_cidade2[5];
    char cod_carta[10], cod_carta2[10];
    char cidade[50], cidade2[50];
    unsigned long int habitantes_cidade, habitantes_cidade2;
    float area_cidade, area_cidade2;
    float pib_cidade, pib_cidade2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;
    float inverso_densidade, inverso_densidade2;
    float superPoder, superPoder2;
    int menu;

    estado = 'A';
    strcpy(cod_cidade, "01");
    sprintf(cod_carta, "%c%s", estado, cod_cidade);
    strcpy(cidade, "Ribeirao Preto");
    habitantes_cidade = 731639;
    area_cidade = 650.916;
    pib_cidade = 40.594;
    pontos_turisticos = 7;
    densidade_populacional = (float) habitantes_cidade / area_cidade;
    pib_per_capita = (float) (pib_cidade * 1000000000) / habitantes_cidade;
    inverso_densidade = area_cidade / (float) habitantes_cidade;
    superPoder = (float) habitantes_cidade + area_cidade + pib_cidade + (float) pontos_turisticos + pib_per_capita + inverso_densidade;

    estado2 = 'B';
    strcpy(cod_cidade2, "01");
    sprintf(cod_carta2, "%c%s", estado2, cod_cidade2);
    strcpy(cidade2, "Belo Horizonte");
    habitantes_cidade2 = 2315560;
    area_cidade2 = 331.354;
    pib_cidade2 = 96.834;
    pontos_turisticos2 = 7;
    densidade_populacional2 = (float) habitantes_cidade2 / area_cidade2;
    pib_per_capita2 = (float) (pib_cidade2 * 1000000000) / habitantes_cidade2;
    inverso_densidade = area_cidade2 / (float) habitantes_cidade2;
    superPoder2 = (float) habitantes_cidade2 + area_cidade2 + pib_cidade2 + (float) pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu habitantes\n", habitantes_cidade);
    printf("Área: %.2f km2\n", area_cidade);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", habitantes_cidade2);
    printf("Área: %.2f km2\n", area_cidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n*** Hora de Jogar ***\nSelecione abaixo um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite uma opção: ");
    scanf("%d", &menu);

   switch (menu)
    {
    case 1:
        if(habitantes_cidade == habitantes_cidade2){
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: População\n");
            printf("%s: %lu habitantes - %s: %lu habitantes\n", cidade, habitantes_cidade, cidade2, habitantes_cidade2);
            printf("### Empate ###\n");
        } else if (habitantes_cidade > habitantes_cidade2) {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: População\n");
            printf("%s: %lu habitantes - %s: %lu habitantes\n", cidade, habitantes_cidade, cidade2, habitantes_cidade2);
            printf("*** Carta 1: %s %s foi a vencedora! ***\n", cod_carta, cidade);
        } else {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: População\n");
            printf("%s: %lu habitantes - %s: %lu habitantes\n", cidade, habitantes_cidade, cidade2, habitantes_cidade2);
            printf("*** Carta 2: %s %s foi a vencedora! ***\n", cod_carta2, cidade2);
        }
        break;
    case 2:
        if(area_cidade == area_cidade2){
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Área\n");
            printf("%s: %.2f km2 - %s: %.2f km2\n", cidade, area_cidade, cidade2, area_cidade2);
            printf("### Empate ###\n");
        } else if (area_cidade > area_cidade2) {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Área\n");
            printf("%s: %.2f km2 - %s: %.2f km2\n", cidade, area_cidade, cidade2, area_cidade2);
            printf("*** Carta 1: %s %s foi a vencedora! ***\n", cod_carta, cidade);
        } else {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Área\n");
            printf("%s: %.2f km2 - %s: %.2f km2\n", cidade, area_cidade, cidade2, area_cidade2);
            printf("*** Carta 2: %s %s foi a vencedora! ***\n", cod_carta2, cidade2);
        }
        break;
    case 3:
        if(pib_cidade == pib_cidade2){
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: PIB\n");
            printf("%s: %.2f Bilhões de Reais - %s: %.2f Bilhões de Reais\n", cidade, pib_cidade, cidade2, pib_cidade2);
            printf("### Empate ###\n");
        } else if (pib_cidade > pib_cidade2) {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: PIB\n");
            printf("%s: %.2f Bilhões de Reais - %s: %.2f Bilhões de Reais\n", cidade, pib_cidade, cidade2, pib_cidade2);
            printf("*** Carta 1: %s %s foi a vencedora! ***\n", cod_carta, cidade);
        } else {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: PIB\n");
            printf("%s: %.2f Bilhões de Reais - %s: %.2f Bilhões de Reais\n", cidade, pib_cidade, cidade2, pib_cidade2);
            printf("*** Carta 2: %s %s foi a vencedora! ***\n", cod_carta2, cidade2);
        }
        break;
    case 4:
        if(pontos_turisticos == pontos_turisticos2){
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Pontos Turisticos\n");
            printf("%s: %d - %s: %d\n", cidade, pontos_turisticos, cidade2, pontos_turisticos2);
            printf("### Empate ###\n");
        } else if (pontos_turisticos > pontos_turisticos2) {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Pontos Turisticos\n");
            printf("%s: %d - %s: %d\n", cidade, pontos_turisticos, cidade2, pontos_turisticos2);
            printf("*** Carta 1: %s %s foi a vencedora! ***\n", cod_carta, cidade);
        } else {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Pontos Turisticos\n");
            printf("%s: %d - %s: %d\n", cidade, pontos_turisticos, cidade2, pontos_turisticos2);
            printf("*** Carta 2: %s %s foi a vencedora! ***\n", cod_carta2, cidade2);
        }
        break;
    case 5:
        if(densidade_populacional == densidade_populacional2){
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² - %s: %.2f hab/km²\n", cidade, densidade_populacional, cidade2, densidade_populacional2);
            printf("### Empate ###\n");
        } else if (densidade_populacional < densidade_populacional2) {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² - %s: %.2f hab/km²\n", cidade, densidade_populacional, cidade2, densidade_populacional2);
            printf("*** Carta 1: %s %s foi a vencedora! ***\n", cod_carta, cidade);
        } else {
            printf("\nCidades: %s %s - %s %s\n", cod_carta, cidade, cod_carta2, cidade2);
            printf("Atributo selecionado: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² - %s: %.2f hab/km²\n", cidade, densidade_populacional, cidade2, densidade_populacional2);
            printf("*** Carta 2: %s %s foi a vencedora! ***\n", cod_carta2, cidade2);
        }
        break;
    
    default:
        printf("Opção inválida!");
        break;
    }

    /*printf("\n*** Comparação de Cartas - Atributo: PIB per capita ***\n");
    if (pib_per_capita > pib_per_capita2){
        printf("Carta 1 (%s) VENCEU! \n", cidade);
    } else {
        printf("Carta 2 (%s) VENCEU! \n", cidade2);
    }*/

    return 0;
}