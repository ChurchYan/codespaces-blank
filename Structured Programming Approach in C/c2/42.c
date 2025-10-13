// 42. Write a program that reads 10 integers and prints the first and the last on one line, 
// the second and the ninth on the next line, the third and the eighth on the next line, 
// and so forth. Sample input and the results are shown below.

// Please enter 10 numbers:
// 10 31 2 73 24 65 6 87 18 9
// Your numbers are:
// 10 9
// 31 18
// 2 87
// 73 6
// 24 65

#include <stdio.h>

int main(void){
    //Local Statement
    int x1, x2, x3, x4, x5, x6, x7, x8 , x9, x10;

    //Statement
    scanf(" %d %d %d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8 , &x9, &x10);
    printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n", x1, x10, x2, x9, x3, x8, x4, x7 , x5, x6);

    return 0;
}