#include <stdio.h>

int main(){
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463; //3.141592653589793115998 os ultimos 6 numero imprimiram diferentes, no VS Code retorna 0.00000. Tudo depende do ambiente que está sendo utilizado. 

    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    return 0;
}