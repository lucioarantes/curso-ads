#include <stdio.h>

int main(){
    int variavel;
    char opcao;

    printf("Digite um número: ");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        printf("Código a ser executado se a variavel for igual a 1\n");
        break;
    case 2:
        printf("Código a ser executado se a variavel for igual a 2\n");
        break;
    
    default:
        printf("Código a ser executado se a variavel não for igual a 1 ou 2\n");
        break;
    }

    printf("Digite uma letra: ");
    scanf("%c", &opcao);

    /*switch (opcao){
    case 'a':
        printf("Código a ser executado se a variavel for igual = a\n");
        break;
    case 'b':
        printf("Código a ser executado se a variavel for igual = b\n");
        break;
    
    default:
        printf("Código a ser executado se a variavel não for a ou b\n");
        break;
    }*/
}