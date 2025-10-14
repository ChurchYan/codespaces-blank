// 28. Write a program that extracts and prints the rightmost digit of the integral portion of a float.

#include <stdio.h>

int main(void){
    //local statement
    float f;

    //statement
    printf("Please Input a float number: \n");
    scanf(" %f", &f);
    if (f < 0){f = -f;}
    printf("The Rightmost digit of the integral that input is %d\n", (int)f%10);

    return 0;
}