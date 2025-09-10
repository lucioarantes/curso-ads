#include <stdio.h>

int main(){
    int idade = 17;
    int resultado;

    //condição ? verdadeiro : falso;
    //idade >= 18 ? printf("Você é maior de idade\n") : printf("Você é menor de idade\n");
    
    resultado = idade >= 18 ? 1 : 0;
    if(resultado == 1){
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
    }
    
}