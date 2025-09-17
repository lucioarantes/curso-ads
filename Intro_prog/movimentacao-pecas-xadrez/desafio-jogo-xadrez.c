#include <stdio.h>

int main(){
    //Movimentos da Torre em linha reta horizontalmente ou Verticalmente. Simular 5 casas para à direita
    int torre = 1;
    printf("*** Movimentos da Torre ***\n");
    while (torre <= 5)
    {
        printf("Direita %d\n", torre);
        torre++;
    }

    //Movimentos do Bispo na diagonal. Simular 5 casas na diagonal para cima e à direita
    int bispo = 1;
    printf("*** Movimentos do Bispo ***\n");
    do {
        printf("Direita %d - Cima %d\n", bispo, bispo);
        bispo++;
        //char++;
    } while (bispo <= 5);

    //Movimentos da Rainha para todas as direções. Simular 8 casas para a esquerda
    //na descrição do desafio pedia para simular 8 casas, mas o tabuleiro tem 8 linhas e 8 colunas, se for seguir o enunciado a Rainha sairá para fora do tabuleiro.
    int rainha = 1;
    printf("*** Movimentos da Rainha ***\n");
    
    for (rainha; rainha <= 7; rainha++) {
        printf("Esquerda %d\n", rainha);
    }

    return 0;
    
}