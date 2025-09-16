#include <stdio.h>

int main(){
    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero com Sinal: %d\n", numeroSinal);
    printf("Numero sem Sinal: %u\n", numeroSemSinal); //atenção ao especificador de formatos
}