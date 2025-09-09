#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, regra;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0)); //aqui vai inicilizar o gerador de números aleatórios
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if(numeroSecreto == palpite){
            printf("Você acertou!\n");
            printf("Numero Secreto: %d\n", numeroSecreto);
        } else {
            printf("Você errou!\n");
            printf("Numero Secreto: %d\n", numeroSecreto);
        }
        break;
    
    case 2:
       printf("Regras\n");
       printf("Regra numero 1\n");
       printf("Regra numero 2\n");
       printf("Regra numero 3\n");
       printf("Digite a opção relacionada as regras do jogo: ");
       scanf("%d", &regra);
       switch (regra){
       case 1:
        printf("Regra numero 1\n");
        break;
        case 2:
        printf("Regra numero 2\n");
        break;
        case 3:
        printf("Regra numero 3\n");
        break;
       
       default:
        printf("Opção inválida!\n");
        break;
       }
       break;
    
    case 3:
        printf("Saindo do jogo");
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }
}