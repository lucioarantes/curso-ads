#include <stdio.h>

int main(){
    int a = 5;
    int b = -10;
    int c = 1;

    //Ordem de teste
    // a > 0 => Verdadeiro
    // b < 0 => Verdadeiro
    // Verdadeiro && Verdadeiro => Verdadeiro (teste de a e de b)
    // c == 0 => Falso
    // Verdadeiro || Falso => Verdadeiro (pelo menos uma condição é verdadeira então esse teste vai retornar como Verdadeiro)

    if (a > 0 && b < 0 || c == 0){
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }
}