#include <stdio.h>

int main(void){
    //Local Statement
    int x = 2;
    int y = 3;
    int z = 2;


    //Statement
    x = 2; y = 3; z = 2;
    printf("a: %d, ", x++ + y++);
    x = 2; y = 3; z = 2;
    printf("b: %d, ", ++x - --z);
    x = 2; y = 3; z = 2;
    printf("c: %d, ", --x + y++);
    x = 2; y = 3; z = 2;
    printf("d: %d, ", x-- + x-- - y--);
    x = 2; y = 3; z = 2;
    printf("e: %d, ", x + y-- - x + x++ - --y
);

    return 0;
}