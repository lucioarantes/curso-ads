#include <stdio.h>

int main(){
    char estado, estado2, enter;
    char cod_carta[5], cod_carta2[5];
    char cidade[50], cidade2[50];
    int habitantes_cidade, habitantes_cidade2;
    float area_cidade, area_cidade2;
    float pib_cidade, pib_cidade2;
    int pontos_turisticos, pontos_turisticos2;


    printf("Cadastro de cartas\n");
    printf("Digite o Estado (A-H): ");
    scanf("%c", &estado);

    printf("Atribua um código para carta (01-04): ");
    scanf("%s", &cod_carta);
    getchar(); //incluído para que fosse possível utilizar o fgets

    printf("Nome da cidade: ");
    fgets (cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; //remove o 'enter' que ficava após a cidade

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &habitantes_cidade);

    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_cidade);

    printf("Digite o PIB (Produto Interno Bruto) em bilhões de reais: ");
    scanf("%f", &pib_cidade);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    getchar();

    printf("\nAgora iremos cadastrar a segunda carta, pressione enter para continuar.");
    scanf("%c", &enter);

    printf("Digite o Estado (A-H): ");
    scanf("%c", &estado2);

    printf("Atribua um código para carta (01-04): ");
    scanf("%s", &cod_carta2);
    getchar(); //incluído para que fosse possível utilizar o fgets

    printf("Nome da cidade: ");
    fgets (cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; //remove o 'enter' que ficava após a cidade

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &habitantes_cidade2);

    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB (Produto Interno Bruto) em bilhões de reais: ");
    scanf("%f", &pib_cidade2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, cod_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", habitantes_cidade);
    printf("Área: %.2f km2\n", area_cidade);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", habitantes_cidade2);
    printf("Área: %.2f km2\n", area_cidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
}