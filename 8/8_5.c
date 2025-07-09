#include <stdio.h>
int main(void)
{
    
    int lower = 1;
    int larger = 100;
    int guess = (lower + larger)/2;
    char ch;
    

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    
    while (1){
        printf("Uh...is your number %d?\n", guess);
        ch = getchar();
        if (ch == 'y')
        {
            break;
        } else if (ch == 'n')
        {
            printf("%d\n", getchar());
        }
        
        
    }  
    printf("I knew I could do it!\n");

    return 0;
}