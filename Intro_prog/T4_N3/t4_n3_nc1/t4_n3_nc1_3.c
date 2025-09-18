#include <stdio.h>

int main(){
    //Operador ternário para teste
    for (int i = 0;
         i < 100;
         i += (i % 2 == 0) ? 1 : 2){ // aqui no caso, se o resto da divisão de i por 2 for 0 o 'i' vai ser incrementado em 1, se não vai ser incrementado em 2. Ou seja, vai imprimir apenas os numeros impares
            printf("%d\n", i);
         }
}