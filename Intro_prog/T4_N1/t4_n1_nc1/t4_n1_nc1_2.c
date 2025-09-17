#include <stdio.h>

int main(){
    int num;

    printf("Digite um número negativo para sair do programa: ");
    scanf("%d", &num);

    while (num >= 0)
    {
        printf("Você digitou %d\n", num);
        printf("Digite um número negativo para sair do programa: ");
        scanf("%d", &num);
    }

    printf("Você saiu do programa!\n");

    return 0;
    
}