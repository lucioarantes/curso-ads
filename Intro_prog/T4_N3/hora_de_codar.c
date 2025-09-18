#include <stdio.h>

void recursiva(int numero){
    if(numero > 0){
        recursiva(numero - 1);
        printf("%d\n", numero);
    }
}
int main(){
    int quantidade = 10;
    printf("Contagem regressiva...\n");
    recursiva(quantidade);
}