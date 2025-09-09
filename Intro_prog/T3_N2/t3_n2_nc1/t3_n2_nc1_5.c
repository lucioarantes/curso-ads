#include <stdio.h>

int main(){
    float temperatura = 25.0;
    float umidade = 55.0;

    if (temperatura >= 20 && temperatura <= 30 && umidade > 50){
        printf("As condições estão favoráveis.\n");
    } else {
        printf("AS condições não estão favoráveis.\n");
    }
}