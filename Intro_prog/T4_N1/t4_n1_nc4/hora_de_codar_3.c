#include <stdio.h>

int main(){
    int numero, i;

    printf("Digite um número para calcular a sua tabuada: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        //resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    

    return 0;
}