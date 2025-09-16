#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // colocar o float entre parenteses vai converter o resultado - chama-se casting

    printf("Quociente: %.2f\n", quociente);
    
    return 0;
}