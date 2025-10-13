// 27. Write a program that reads two integers from the keyboard, multiplies them, and then prints the two numbers and their product.

#include <stdio.h>

int main(void){
    //local statement
    int x, y;

    //statement
    printf("Please input two integer: \n");
    scanf(" %d %d", &x, &y);
    printf("Your Input is %d and %d, and product is %d\n",x, y, x*y);

    return 0;
}//main