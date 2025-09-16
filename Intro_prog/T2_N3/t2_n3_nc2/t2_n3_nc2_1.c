#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    
    printf("a > b: %d\n", a > b); //0 F
    printf("a < b: %d\n", a < b); //1 V
    printf("a == b: %d\n", a == b); // 0 F
    printf("a != b: %d\n", a != b); // 1 V

    return 0;
}