#include <stdio.h>

int main(void){
    //Statement
    printf("a: %.2f, ", 6.2 + 5.1 + 3.2);
    printf("b: %.2f, ", 2.0 + 3.0 / 1.2);
    printf("c: %.2f, ", 4.0 * (3.0 + 2.0 / 6.0));
    printf("d: %.2f, ", 6.0 / (2.0 + 4.0 * 1.2));
    printf("e: %.2f", 2.7 + 3.2 - 5.3 * 1.1);

    return 0;
}