#include <stdio.h>
#define VAR 60

int main(void) {
    int num = 1;

    while(num > 0 )
    {
        printf("please input minutes number\n");
        scanf("%d", &num);
        if ( num > 0 ) {printf("Your input is %d hours and %d minutes\n", num/VAR , num%VAR);}
        
    }
    return 0;
}