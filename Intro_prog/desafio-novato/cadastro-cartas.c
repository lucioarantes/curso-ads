#include <stdio.h>

int main(){
    //declaração das variáveis para a carta 1 e 2
    char estado, estado2, enter; // essa variável 'enter' foi utilizada na linha 40 do código para que haja uma pequena pausa entre a finalização do cadastro das carta 1 e inicio do cadastro da carta 2 
    char cod_carta[5], cod_carta2[5];
    char cidade[50], cidade2[50];
    int habitantes_cidade, habitantes_cidade2;
    float area_cidade, area_cidade2;
    float pib_cidade, pib_cidade2;
    int pontos_turisticos, pontos_turisticos2;


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

    //ao final do cadastro da segunda carta o programa irá apresentar os dados cadastrados
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, cod_carta); //aqui irá juntar a letra do Estado (A-H) junto com o código fornecido pelo usuário (01-04), e irá apresentar um código final como A01, B01 etc. 
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", habitantes_cidade);
    printf("Área: %.2f km2\n", area_cidade);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos);

    //apresentação dos dados finais da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", habitantes_cidade2);
    printf("Área: %.2f km2\n", area_cidade2);
    printf("PIB: %.2f Bilhões de Reais\n", pib_cidade2);
    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
}