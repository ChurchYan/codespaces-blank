// 26. Given the following pseudocode, write a program that executes it. Use floating-point types for all values.
//     1. read x
//     2. read y
//     3. compute p = x * y
//     4. compute s = x + y
//     5. total = s^2 + s * (s - x) * (p + y)
//     6. print total

#include <stdio.h>

int main(void){
    //local declaration
    float x, y, p, s, total;

    //statement
    printf("Please Input two float number: \n");
    scanf(" %f %f", &x, &y);
    p = x * y;
    s = x + y;
    total = s*s + s * (s - x) * (p + y);

    printf("Total is %f\n", total);

    return 0;

}