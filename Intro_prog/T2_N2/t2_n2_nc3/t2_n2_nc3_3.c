#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int num1 = 2, resultado;
    
    printf("Antes do incremento: %d\n", num1);

    num1++; //num1 += 1
    printf("Pré-Incremento (num1++): %d\n", num1);

    num1--; //num1 -= 1
    printf("Pré-Decremento (num1--): %d\n", num1);

    resultado = ++num1;
    printf("Pós-Incremento: numero: %d - resultado: %d\n", num1, resultado);
    --num1; //num1 -= 1
    printf("Pós-Decremento (--num1): %d\n", num1);
}