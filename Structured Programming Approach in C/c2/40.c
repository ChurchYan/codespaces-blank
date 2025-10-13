// 40. Write a program that reads a character, 
// an integer, and a floating-point number. It then prints the character, 
// first using a character format specification (%c) and then 
// using an integer specification (%d). After printing the character, 
// it prints the integer and floating-point numbers on separate lines. 
// Be sure to provide complete instructions (prompts) for the user.

#include <stdio.h>

int main(void){
    //Local Declaration
    char c;
    int i;
    float f;


    //Statement
    printf("Please input a char: \n");
    scanf(" %c", &c);

    printf("Please input an Integer Number: \n");
    scanf(" %d", &i);

    printf("Please input a Float Number: \n");
    scanf(" %f", &f);

    printf("Character in char format %c and in integer format %d\n", c, c);
    printf("%d\n", i);
    printf("%f\n", f);

    
    return 0;
}