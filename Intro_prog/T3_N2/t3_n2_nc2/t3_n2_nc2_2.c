#include <stdio.h>

int main(){
    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if(nota >= 90){
        printf("Conceito A!\n");
    } else if (nota < 90 && nota >= 80){
        printf("Conceito B!\n");
    } else if (nota < 80 && nota >= 70){
        printf("Conceito C!\n");
    } else if (nota < 70 && nota >= 60){
        printf("Conceito D!\n");
    } else {
        printf("Conceito F!\n");
    }
}