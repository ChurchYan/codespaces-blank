#include <stdio.h>

int main(void){
    float height;
    printf("Please input your height(cm):\n");
    scanf("%f", &height);

    printf("Your height is %f meter\n", height/100);
    return 0;
}