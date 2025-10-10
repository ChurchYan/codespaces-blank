#include <stdio.h>

int main(void){
    //Local Statement
    int x = 2945;


    //Statement
    printf("a: %d, ", x / 10);
    printf("b: %d, ", x % 10);
    printf("c: %d, ", (x/10) % 10);
    printf("d: %d, ", x/100);
    printf("e: %d, ", (x/100) % 10);

    return 0;
}//main