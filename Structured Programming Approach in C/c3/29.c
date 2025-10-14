// 29. Write a program that extracts and prints the second rightmost digit of the integral portion of a float.

#include <stdio.h>

int main(void){
    //local statement
    float f;

    //statement
    printf("Please Input a float number: \n");
    scanf(" %f", &f);
    if (f < 0){f = -f;}
    if(f <= 10){
        printf("Your Input's abs must larger than 10\n");
        return 0;
    }
    printf("The second Rightmost digit of the integral that input is %d\n", (int)f%100/10);

    return 0;
}