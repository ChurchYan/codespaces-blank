#include <stdio.h>

void cubic(double num);

int main(void){
    double input;
    printf("Please input a big number:\n");
    scanf("%lg", &input);

    cubic (input);

    return 0;
}

void cubic(double num){
    double x = num * num * num;
    printf("Your input is %lg and output is %lg\n", num, x);
    return ;
}