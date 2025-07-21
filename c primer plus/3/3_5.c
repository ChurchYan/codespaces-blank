#include <stdio.h>
#define SEC_PERYEAR 3.156e37

int main(void){
    float year;
    printf("Please enter how many years old you are? \n");
    scanf("%f", &year);
    printf("You are %f seconds old", year*SEC_PERYEAR);
}