#include <stdio.h>

int main(void){
    int a;
    int b;
    a = b = 50;
    printf ("%4d %4d", a, b);
    a = a * 2; b = b / 2;
    printf ("%4d %4d", a, b);

    return 0;
}//main