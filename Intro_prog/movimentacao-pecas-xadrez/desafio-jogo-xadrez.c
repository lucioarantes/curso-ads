#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    char coluna = 'A';
    int rainha = 1;
    int cavaloHorizontal, cavaloVertical;
    //Movimentos da Torre em linha reta horizontalmente ou Verticalmente. Simular 5 casas para à direita
    printf("*** Movimentos da Torre ***\n");
    while (torre <= 5)
    {
        printf("Direita %d\n", torre);
        torre++;
    }

    //Movimentos do Bispo na diagonal. Simular 5 casas na diagonal para cima e à direita
    printf("\n*** Movimentos do Bispo ***\n");
    do {
        printf("Direita-Cima %d %c\n", bispo, coluna);
        bispo++;
        coluna++;
    } while (bispo <= 5);

    //Movimentos da Rainha para todas as direções. Simular 8 casas para a esquerda
    //na descrição do desafio pedia para simular 8 casas, mas o tabuleiro tem 8 linhas e 8 colunas, se for seguir o enunciado a Rainha sairá para fora do tabuleiro.
    printf("\n*** Movimentos da Rainha ***\n");
    
    for (rainha; rainha <= 7; rainha++) {
        printf("Esquerda %d\n", rainha);
    }

    //Movimento do Cavalo em 'L'. Simular duas casas para baixo e uma à esquerda
    printf("\n*** Movimentos do Cavalo ***\n");
    for(cavaloHorizontal = 1; cavaloHorizontal <= 1; cavaloHorizontal++){
        cavaloVertical = 1;
        while(cavaloVertical <= 2){
            printf("Baixo %d\n", cavaloVertical);
            cavaloVertical++;
        }
        printf("Esquerda %d\n", cavaloHorizontal);
    }

    return 0;
    
}