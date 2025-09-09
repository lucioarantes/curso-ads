#include <stdio.h>

int main(){
    int a = 10;
    //Operador Lógico NOT / não - se uma condição é verdadeira ele converte em falsa e se é falsa ele converte em verdadeira
    if (!a){
        printf("a é zero.\n");
    } else {
        printf("A variável é diferente de zero.\n");
    }

    if (!(a > 0)){
        printf("A variavel é negativa.\n");
    } else {
        printf("A variável é positiva.\n");
    }
}