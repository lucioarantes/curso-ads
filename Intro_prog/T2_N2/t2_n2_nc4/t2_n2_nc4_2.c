#include <stdio.h>

int main(){
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y;

    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", diferenca);
    printf("Multiplicação: %.2f\n", produto);
    printf("Divisão: %.2f\n", quociente);

    return 0;
}