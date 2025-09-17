#include <stdio.h>

int main(){
    int i, j;
    char letra;

    for(i = 1; i <= 5; i++){
        
        letra= 'A';
        
        for(j = 1; j <= i; j++){ //esse for vai ter seu tamanho aumentado de acordo com o i, ou seja vai executar 1 vez, depois 2 vez, depois 3 vezes, depois 4 vezes e depois 5 vezes.

            printf("%c ", letra);
            ++letra;
        }
        printf("\n");
    }

    return 0;
}