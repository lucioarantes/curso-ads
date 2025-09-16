#include <stdio.h>

int main(){
    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 == numero2: %d\n", numero1 == numero2);

    printf("\n*** Conversão Explicita ***\n");
    printf("numero1 > numero2: %d\n", (int) numero1 > numero2); // aqui nesse caso é como se eu tivesse descartado o .2 da variável numero1 e transformado ela em 10
    printf("numero1 == numero2: %d\n", (int) numero1 == numero2);

    return 0;
}