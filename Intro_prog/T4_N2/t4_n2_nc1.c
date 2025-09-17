#include <stdio.h>

int main(){
    //Loops aninhados: loop dentro de outro loop
    int i =1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10){
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
}