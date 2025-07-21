#include <stdio.h>

int main(void){
    float input;
    printf("Please input a number:\n");
    scanf("%f", &input);
    printf("The input is %.1f or %.1e", input, input);

    return 0;
}