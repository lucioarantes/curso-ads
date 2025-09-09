#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0){
        if(numero % 2 == 0){
            printf("O número é par\n");
        } else {
            printf("O número é impar\n");
        }
    } else if (numero == 0){
        printf("O numero é zero\n");
    } else {
        printf("O número é negativo\n");
    }
}