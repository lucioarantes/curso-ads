#include <stdio.h>

int main(){
    //Loops aninhados: loop dentro de outro loop
    int i =1;
    do {
        int j = 1;
        do{
            printf("%d\t", i * j);
            j++;
        } while(j <= 10);
        printf("\n");
        i++;
    } while (i <= 5);
}