#include <stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){        //cada linha é uma execução desse
        for(int j = 1; j <= 10; j++){   //o conteúdo da linha é toda a repetição desse dentro do loop anterior
            printf("%d\t", i * j);
        }

        printf("\n");
    }
}