#include <stdio.h>
int main (void){
    int input;
    printf("Please Enter a value of char in ASCII:\n");
    scanf("%d", &input);
    printf("Your input value is %d and char is %c", input, input);
    return 0;
}