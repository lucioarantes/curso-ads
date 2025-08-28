#include <stdio.h>

int main(){
    int numeroNormal = 2147483647;
    long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483700;
    printf("Numero grande atualizado (long int): %ld\n", numeroGrande);//Aqui não houve problema ou alteração por conta do ambiente que está sendo utilizado. no VSCode da aula, o resultado aqui foi negativo.

    return 0;
}