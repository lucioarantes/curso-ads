#include <stdio.h>

int main(){
    int a = 10, b = -5;
    //Operador Lógico AND / e
    if (a > 0 && b > 0){
        printf("Os dois numeros sao positivos\n");
    } else {
        printf("Pelo menos um dos numeros é negativo\n");
    }

    //Operador Lógico OR / ou
    
    if (a > 0 || b > 0){
        printf("Pelo menos um dos numeros é positivo\n");
    } else {
        printf("Os dois numeros são negativos\n");
    }
}