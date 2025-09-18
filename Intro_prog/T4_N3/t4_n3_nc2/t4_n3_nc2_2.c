#include <stdio.h>
//Recursividade é uma espécie de procedimento
//Função que executa a si própria
//Pode substituir loops
//Divide problemas complexos

void recursiveLoop(int n) { //Aqui definimos a variável como parâmetro
    if(n >= 1){
        printf("%d\n", n); //Imprime o valor atual de n
        recursiveLoop(n - 1); //Chama a si mesma com n - 1
    }
}

int main(){
    int numero = 10; //criamos uma variável
    printf("Contagem regressiva: \n");
    recursiveLoop(numero); //passamos a variável de numero como parâmetro
}