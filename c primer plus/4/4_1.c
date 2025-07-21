#include <stdio.h>

int main(void){
    char surname[100];
    char name[100];

    printf("please input your surname:\n");
    scanf ("%s", surname);
    printf("please input your name:\n");
    scanf("%s", name);

    printf("Your name is %s %s", surname, name);

}