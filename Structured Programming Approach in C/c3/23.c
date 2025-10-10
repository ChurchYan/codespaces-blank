#include <stdio.h>

int main(void){
    //Local Statement
    int x = 2;
    int y = 3;
    int z = 1;


    //Statement
    printf("a: %d, ", x + 2/6 + y);
    printf("b: %d, ", y - 3 * z + 2);
    printf("c: %d, ", z - (x + z) / 2 + 4);
    printf("d: %d, ", x - 2*(3 + z) + y);
    printf("e: %d, ", y++ + z-- + x++);

    return 0;
}//main