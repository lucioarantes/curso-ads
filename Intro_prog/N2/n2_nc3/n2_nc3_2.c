#include <stdio.h>

int main(){
    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */
   int numero1 = 2, numero2, resultado;

   resultado = 10; //atribuição simpes
   printf("Resultado: %d\n", resultado);

   resultado += 5; //atribuição com soma (10+5)
   printf("Resultado (+=): %d\n", resultado);

   resultado -= numero1; //atribuição com subtração (15-2)
   printf("Resultado (-=): %d\n", resultado);

   resultado *= 5; //atribuição com multiplicação (13*5)
   printf("Resultado (*=): %d\n", resultado);

   resultado /= 13; //atribuição com divisão (65/13)
   printf("Resultado (/=): %d\n", resultado);
}