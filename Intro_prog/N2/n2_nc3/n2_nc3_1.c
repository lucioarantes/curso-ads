#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação(*)
    Divisão (/)
    */
   
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A diferença é: %d\n", subtracao);
    printf("O produto é: %d\n", multiplicacao);
    printf("O quociente é: %d\n", divisao);
}