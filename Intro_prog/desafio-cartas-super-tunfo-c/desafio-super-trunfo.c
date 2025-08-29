#include <stdio.h>

int main(){
    //declaração das variáveis para a carta 1 e 2
    char estado, estado2, enter; // essa variável 'enter' foi utilizada na linha 40 do código para que haja uma pequena pausa entre a finalização do cadastro das carta 1 e inicio do cadastro da carta 2 
    char cod_carta[5], cod_carta2[5];
    char cidade[50], cidade2[50];
    unsigned long int habitantes_cidade, habitantes_cidade2;
    float area_cidade, area_cidade2;
    float pib_cidade, pib_cidade2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2; //calculada com base na população divido pela área
    float pib_per_capita, pib_per_capita2; //calculada com base no PIB municipal divido pela qtde de habitantes
    float inverso_densidade, inverso_densidade2;
    float superPoder, superPoder2;

    printf("Cadastro de cartas\n"); //inicio do cadastro
    printf("Digite o Estado (A-H): "); //usuário escreve uma letra de A a H
    scanf("%c", &estado);

    printf("Atribua um código para carta (01-04): "); //usuário escreve um  número de 01 a 04
    scanf("%s", &cod_carta);
    getchar(); //incluído para que fosse possível utilizar o fgets

    printf("Nome da cidade: ");
    fgets (cidade, 50, stdin); //utilizado o fgets para que possa secreve nome de cidades com espaço
    cidade[strcspn(cidade, "\n")] = '\0'; //remove o 'enter' que ficava após a cidade

    printf("Digite a quantidade de habitantes: "); //usuário escreve a quantidade de habitantes
    scanf("%d", &habitantes_cidade);

    printf("Digite a área da cidade em km²: "); //usuário escreve a área da cidade
    scanf("%f", &area_cidade);

    printf("Digite o PIB (Produto Interno Bruto) em bilhões de reais: "); //usuário escreve o PIB da cidade
    scanf("%f", &pib_cidade);

    printf("Digite a quantidade de pontos turisticos da cidade: "); //usuário escreve a quantidade de pontos turisticos da cidade
    scanf("%d", &pontos_turisticos);
    getchar();

    //utilizado o casting por conta da variável habitantes_cidade ser to tipo int e as váriaveis area_cidade e pib_cidade serem do tipo float
    densidade_populacional = (float) habitantes_cidade / area_cidade;
    pib_per_capita = (float) (pib_cidade * 1000000000) / habitantes_cidade; //o pib foi multiplicado por 1bilhão por conta da forma que está sendo coletado
    inverso_densidade = area_cidade / (float) habitantes_cidade;
    superPoder = (float) habitantes_cidade + area_cidade + pib_cidade + (float) pontos_turisticos + pib_per_capita + inverso_densidade;

    printf("\nAgora iremos cadastrar a segunda carta, pressione enter para continuar.");
    scanf("%c", &enter); // conforme mencionado no incio, aqui irá aguardar o usuário apertar 'enter' para que o programa não rode direto e comece a coletar os dados da segunda carta

    //repete a ordem de dados da primeira carta, mas as variáveis possuem o número 2 na frente, fazendo referência à segunda carta que está sendo cadastrada.
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

    densidade_populacional2 = (float) habitantes_cidade2 / area_cidade2;
    pib_per_capita2 = (float) (pib_cidade2 * 1000000000) / habitantes_cidade2;
    inverso_densidade = area_cidade2 / (float) habitantes_cidade2;
    superPoder2 = (float) habitantes_cidade2 + area_cidade2 + pib_cidade2 + (float) pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;

    //ao final do cadastro da segunda carta o programa irá apresentar os dados cadastrados
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, cod_carta); //aqui irá juntar a letra do Estado (A-H) junto com o código fornecido pelo usuário (01-04), e irá apresentar um código final como A01, B01 etc. 
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", habitantes_cidade);
    printf("Área: %.2f km2\n", area_cidade);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", superPoder);

    //apresentação dos dados finais da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", habitantes_cidade2);
    printf("Área: %.2f km2\n", area_cidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n*** Comparação de Cartas ***\n");
    printf("População: Carta 1 Venceu? (%d)\n", habitantes_cidade > habitantes_cidade2);
    printf("Área: Carta 1 venceu? (%d)\n", area_cidade > area_cidade2);
    printf("PIB: Carta 1 venceu? (%d)\n", pib_cidade > pib_cidade2);
    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n", densidade_populacional < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu? (%d)\n", pib_per_capita > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu? (%d)\n", superPoder > superPoder2);

    return 0;
}