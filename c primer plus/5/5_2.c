#include <stdio.h>

int main(void){
    int num;

    printf("Please input a int number:\n");
    scanf("%d", &num);

    for(int i = 1; (i<=10); i++){
        printf("input plus %d is %d\n", i, num+i);
    }

    return 0;
}