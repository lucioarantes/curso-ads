#include <stdio.h>

int main(){
    int x = 5;
    float y = 5.0;
    char c = 'a'; //a variavel char aqui não armazenou a letra 'a', mas sim o valor desse caracter na tabela ASCII, ao passar o mouse em cima do 'a' aparece o numero 97.

    printf("x >= y: %d\n", x >= y); //1 V
    printf("x == y: %d\n", x == y); //1 V
    printf("x != y: %d\n", x != y); //0 F

    printf("x >= c: %d\n", x >= c); // 0 F - x=5 e a=97
    printf("O valor ASCII de %c é %d\n", c, c);

    return 0;
}