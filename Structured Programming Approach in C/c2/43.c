// 43. Write a program that reads nine integers and prints them 
// three in a line separated by commas as shown below.

// Input
// 10 31 2 73 24 65 6 87 18
// Output
// 10, 31, 2
// 73, 24, 65
// 6, 87, 18

#include <stdio.h>

int main(void){
    //Local Statement
    int x1, x2, x3, x4, x5, x6, x7, x8 , x9;

    //Statement
    scanf(" %d %d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8 , &x9);
    printf("%d, %d, %d\n%d, %d, %d\n%d, %d, %d\n",x1, x2, x3, x4, x5, x6, x7, x8 , x9);

    return 0;
}