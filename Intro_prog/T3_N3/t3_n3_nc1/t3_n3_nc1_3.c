#include <stdio.h>

int main(){
    int num1 = 40, num2 = 50;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O numero maior é: %d\n", maior);
}