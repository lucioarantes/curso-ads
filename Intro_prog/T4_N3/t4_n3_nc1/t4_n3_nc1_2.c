#include <stdio.h>

int main(){
    //Exemplo de condições multiplas
    //&& ou ||
    // 'i' e 'j' iniciados ao mesmo tempo
    // ++ ou --
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d\t j = %d\n", i, j);
    }

    return 0;
}